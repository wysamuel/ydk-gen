/// YANG Development Kit
// Copyright 2016 Cisco Systems. All rights reserved
//
////////////////////////////////////////////////////////////////
// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
//
//////////////////////////////////////////////////////////////////


#include <pcre.h>
#include <fstream>
#include <sstream>

#include "../logger.hpp"
#include "path_private.hpp"

namespace ydk
{
namespace path
{
ModelRefresher::ModelRefresher(ly_ctx* ctx)
    : m_ctx(ctx)
{
}

ModelRefresher::~ModelRefresher()
{
}

std::vector<const lys_module*> ModelRefresher::get_new_ly_modules_from_lookup(ly_ctx* ctx,
                                                         const std::unordered_set<std::string>& module_names,
                                                         const std::unordered_map<std::string, path::Capability>& capability_lookup)
{
    std::vector<const lys_module*> new_modules;

    for (auto module_name : module_names)
    {
        YLOG_DEBUG("Lookin for module!! '{}'", module_name);
    }

    for (auto module_name : module_names)
    {
        bool new_module = true;
        auto m = load_module(ctx, module_name, new_module);

        if (m && new_module)
        {
            YLOG_WARN("Added new libyang module '{}'", std::string(m->name));
            new_modules.emplace_back(m);
        }

        auto capability_entry = capability_lookup.find(module_name);
        if (capability_entry != capability_lookup.end())
        {
            auto capability = capability_entry->second;
            for (auto& d: capability.deviations)
            {
                new_module = true;
                m = load_module(ctx, d, new_module);

                if (m && new_module)
                {
                    YLOG_DEBUG("Added new libyang deviation module '{}'", std::string(m->name));
                    new_modules.emplace_back(m);
                }
            }
        }
    }
    return new_modules;
}

std::vector<const lys_module*>
ModelRefresher::get_new_ly_modules_from_path(ly_ctx* ctx,
                                                       const std::string& path,
                                                       const std::unordered_map<std::string, path::Capability>& capability_lookup)
{
    auto module_names = path::segmentalize_module_names(path);
    return get_new_ly_modules_from_lookup(ctx, module_names, capability_lookup);
}

const lys_module*
ModelRefresher::load_module(ly_ctx* ctx, const std::string& module_name)
{
    bool new_module = true;
    return load_module(ctx, module_name, "", {}, new_module);
}

const lys_module*
ModelRefresher::load_module(ly_ctx* ctx, const std::string& module_name, bool& new_module)
{
    return load_module(ctx, module_name, "", {}, new_module);
}

const lys_module*
ModelRefresher::load_module(ly_ctx* ctx, Capability& capability)
{
    bool new_module = true;
    return load_module(ctx, capability, new_module);
}

const lys_module*
ModelRefresher::load_module(ly_ctx* ctx, Capability& capability, bool& new_module)
{
    return load_module(ctx, capability.module, capability.revision, capability.features, new_module);
}

const lys_module*
ModelRefresher::load_module(ly_ctx* ctx, const std::string& module_name, const std::string& revision)
{
    bool new_module = true;
    return load_module(ctx, module_name, revision, {}, new_module);
}

const lys_module* ModelRefresher::load_module(ly_ctx* ctx, const std::string& module, const std::string& revision, const std::vector<std::string>& features, bool& new_module)
{

    YLOG_DEBUG("Module '{}' Revision '{}'", module.c_str(), revision.c_str());

    auto p = ly_ctx_get_module(ctx, module.c_str(), revision.empty() ? 0 : revision.c_str());

    if(!p)
    {
        p = ly_ctx_load_module(ctx, module.c_str(), revision.empty() ? 0 : revision.c_str());
    } else {
        YLOG_DEBUG("Cache hit Module '{}' Revision '{}'", module, revision);
        new_module = false;
    }

    if (!p) {
        YLOG_WARN("Unable to parse module: '{}'. This model cannot be used with YDK", module);
    }

    for (auto f : features)
        lys_features_enable(p, f.c_str());

    return p;
}

void ModelRefresher::populate_new_schemas_from_payload(const std::string& payload, EncodingFormat format)
{
    std::vector<const lys_module*> modules;
    PathParser parser{};
    if (format == ydk::EncodingFormat::XML)
    {
        auto namespaces = parser.get_namespaces_from_xml_payload(payload);
        modules = get_new_ly_modules_from_lookup(m_ctx, namespaces, m_namespace_lookup);
    }
    else
    {
        auto module_names = parser.get_module_names_from_json_payload(payload);
        modules = get_new_ly_modules_from_lookup(m_ctx, module_names, m_name_lookup);
    }

    populate_new_schemas(modules);
}

void ModelRefresher::populate_new_schemas_from_path(const std::string& path)
{
    auto new_modules = get_new_ly_modules_from_path(m_ctx, path, m_name_lookup);
    populate_new_schemas(new_modules);
}

void ModelRefresher::populate_new_schemas(std::vector<const lys_module*>& new_modules)
{
    for (auto m: new_modules) {
        populate_module_schema(m);
        populate_augmented_schema_nodes(m);
    }
}

void ModelRefresher::populate_all_module_schemas()
{
    uint32_t idx = 0;
    while( auto m = ly_ctx_get_module_iter(m_ctx, &idx)) {
        populate_module_schema(m);
    }
}

void ModelRefresher::populate_module_schema(const struct lys_module* module) {
    YLOG_DEBUG("Populating new module schema '{}'", module->name);
    const struct lys_node *last = nullptr;
    while( auto q = lys_getnext(last, nullptr, module, 0))
    {
        m_children.push_back(std::make_unique<SchemaNodeImpl>(this, const_cast<struct lys_node*>(q)));
        last = q;
    }
}

void ModelRefresher::populate_augmented_schema_nodes(const struct lys_module* module)
{
    for (int i = 0; i < module->augment_size; i++) {
        auto aug = module->augment[i];
        std::vector<lys_node*> ancestors;
        lys_node* node = aug.target;

        while(node) {
            if (node->nodetype != LYS_USES) {
                ancestors.emplace_back(node);
            }
            node = node->parent;
        }

        if(aug.child == nullptr)
        {
            YLOG_DEBUG("Augment child {} is null", aug.target_name);
        }
        else
        {
            populate_augmented_schema_node(ancestors, aug.child);
        }
    }
}

void ModelRefresher::populate_augmented_schema_node(std::vector<lys_node*>& ancestors, struct lys_node* target) {
    YLOG_DEBUG("Populating augmented schema node '{}'", std::string(target->name));

    lys_node* root = ancestors.back();
    ancestors.pop_back();
    for (auto& c: m_children) {
        if (c->get_statement().arg == root->name) {
            reinterpret_cast<SchemaNodeImpl*>(c.get())->populate_augmented_schema_node(ancestors, target);
        }
    }
}


}
}