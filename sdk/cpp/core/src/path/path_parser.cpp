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

using json = nlohmann::json;

namespace ydk
{
namespace path
{
PathParser::PathParser()
{
}

PathParser::~PathParser()
{
}

static void get_namespaces_from_xml_doc(xmlNodePtr root, std::unordered_set<std::string>& namespaces)
{
    xmlNodePtr curr = nullptr;
    for (curr = root; curr; curr = curr->next)
    {
        if (curr->type == XML_ELEMENT_NODE && curr->ns && curr->ns->href)
        {
            namespaces.insert(std::string{reinterpret_cast<const char*>(curr->ns->href)});
        }
        get_namespaces_from_xml_doc(curr->children, namespaces);
    }
}

static void get_module_names_from_json_object(json& o, std::unordered_set<std::string>& module_names)
{
    for (json::iterator it = o.begin(); it != o.end(); ++it)
    {
        if (it->is_array())
        {
            for (auto i = it->begin(); i != it->end(); i++)
            {
                get_module_names_from_json_object(*i, module_names);
            }
        }
        else
        {
            // extract module name from key
            auto identifier = std::string(it.key());
            auto found = identifier.find(":");
            if (found != std::string::npos)
            {
                module_names.insert(identifier.substr(0, found));
            }
            // extract module name from primitive type value
            if (it->is_primitive())
            {
                auto v = it->dump();
                if (v.find("\"") == 0)
                    v = v.substr(1);
                auto ns = path::segmentalize_module_names(v);
                module_names.insert(ns.begin(), ns.end());
            }
            else
            {
                get_module_names_from_json_object(*it, module_names);
            }
        }
    }
}

std::unordered_set<std::string> PathParser::get_module_names_from_json_payload(const std::string& payload)
{
    YLOG_DEBUG("Extracting module names from JSON payload");
    std::unordered_set<std::string> module_names;
    auto o = json::parse(payload);
    get_module_names_from_json_object(o, module_names);
    return module_names;
}

std::unordered_set<std::string> PathParser::get_namespaces_from_xml_payload(const std::string& payload)
{
    YLOG_DEBUG("Extracting module namespaces from XML payload");
    xmlDocPtr doc = xmlParseDoc(reinterpret_cast<const xmlChar*>(payload.c_str()));
    xmlNodePtr root = xmlDocGetRootElement(doc);
    std::unordered_set<std::string> namespaces;

    get_namespaces_from_xml_doc(root, namespaces);

    xmlFreeDoc(doc);
    xmlCleanupParser();

    return namespaces;
}

}
}