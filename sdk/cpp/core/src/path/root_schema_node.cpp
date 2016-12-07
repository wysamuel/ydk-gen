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


#include "path_private.hpp"
#include <boost/log/trivial.hpp>

lys_node ls;
ydk::path::SchemaNodeImpl s{nullptr, &ls};

namespace ydk
{
namespace path
{

RootSchemaNode::~RootSchemaNode()
{

}

std::string
RootSchemaNode::path() const
{
    return "/";
}

const SchemaNode&
RootSchemaNode::parent() const noexcept
{
    return s;
}

const SchemaNode&
RootSchemaNode::root() const noexcept
{
    return *this;
}

Statement
RootSchemaNode::statement() const
{
    return Statement{};
}

std::vector<ydk::path::Statement>
RootSchemaNode::keys() const
{
    return std::vector<Statement>{};

}


/////////////////////////////////////////////////////////////////////////////////////
// class RootSchemaNodeImpl
/////////////////////////////////////////////////////////////////////////////////////
RootSchemaNodeImpl::RootSchemaNodeImpl(struct ly_ctx* ctx) : m_ctx{ctx}
{
    //populate the tree
    uint32_t idx = 0;
    while( auto p = ly_ctx_get_module_iter(ctx, &idx)) {
        const lys_node *last = nullptr;
        while( auto q = lys_getnext(last, nullptr, p, 0)) {
            m_children.push_back(std::make_unique<SchemaNodeImpl>(this, const_cast<lys_node*>(q)));
            last = q;
        }
    }

}

RootSchemaNodeImpl::~RootSchemaNodeImpl()
{
    if(m_ctx){
        ly_ctx_destroy(m_ctx, nullptr);
        m_ctx = nullptr;
    }
}

std::vector<SchemaNode*>
RootSchemaNodeImpl::find(const std::string& path) const
{
    if(path.empty()) {
        BOOST_LOG_TRIVIAL(error) << "path is empty";
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"path is empty"});
    }

    //has to be a relative path
    if(path.at(0) == '/') {
        BOOST_LOG_TRIVIAL(error) << "path must be a relative path";
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"path must be a relative path"});
    }

    std::vector<SchemaNode*> ret;

    std::string full_path{"/"};
    full_path+=path;

    const lys_node* found_node = ly_ctx_get_node(m_ctx, nullptr, full_path.c_str());

    if (found_node){
        auto p = reinterpret_cast<SchemaNode*>(found_node->priv);
        if(p) {
            ret.push_back(p);
        }
    }

    return ret;
}

const std::vector<std::unique_ptr<SchemaNode>> &
RootSchemaNodeImpl::children() const
{
    return m_children;
}

std::unique_ptr<DataNode>
RootSchemaNodeImpl::create(const std::string& path) const
{
    return create(path, "");
}

std::unique_ptr<DataNode>
RootSchemaNodeImpl::create(const std::string& path, const std::string& value) const
{
    RootDataImpl* rd = new RootDataImpl{*this, m_ctx, "/"};

    if (rd){
        return std::unique_ptr<DataNode>(&(rd->create(path, value)));
    }

    return nullptr;
}


std::unique_ptr<Rpc>
RootSchemaNodeImpl::rpc(const std::string& path) const
{
    auto schema_nodes = find(path);
    if(schema_nodes.empty()){
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"Path is invalid"});
    }

    bool found = false;
    SchemaNode* rpc_schema_node = nullptr;

    for(auto schema_node : schema_nodes) {
        auto s = schema_node->statement();
        if(s.keyword == "rpc"){
            found = true;
            rpc_schema_node = schema_node;
            break;
        }
    }

    if(!found){
        BOOST_LOG_TRIVIAL(error) << "Path " << path << " does not refer to an rpc node.";
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"Path does not refer to an rpc node"});
    }
    SchemaNodeImpl* sn = dynamic_cast<SchemaNodeImpl*>(rpc_schema_node);
    if(!sn){
        BOOST_LOG_TRIVIAL(error) << "Schema Node case failed";
        BOOST_THROW_EXCEPTION(YCPPIllegalStateError("Internal error occurred"));
    }
    return std::make_unique<RpcImpl>(*sn, m_ctx);

}

}
}
