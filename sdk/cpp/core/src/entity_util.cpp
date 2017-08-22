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

#include <algorithm>
#include <vector>

#include "entity_util.hpp"
#include "errors.hpp"

using namespace std;

namespace ydk
{

static bool name_matches_path(const string & leaf_name, const string & path)
{
    return  leaf_name == path || leaf_name.find(":"+path)!=string::npos;
}

std::string get_relative_entity_path(const Entity* current_node, const Entity* ancestor, std::string path)
{
    std::ostringstream path_buffer;
    path_buffer << path;
    if(ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor should not be null."});
    }
    auto p = current_node->parent;
    std::vector<Entity*> parents {};
    while (p != nullptr && p != ancestor) {
        parents.push_back(p);
        p = p->parent;
    }

    if (p == nullptr) {
        throw(YCPPInvalidArgumentError{"parent is not in the ancestor hierarchy."});
    }

    std::reverse(parents.begin(), parents.end());

    p = nullptr;
    for (auto p1 : parents) {
        if (p) {
            path_buffer << "/";
        } else {
             p = p1;
        }
        path_buffer << p1->get_segment_path();
    }
    if(p)
        path_buffer << "/";
    path_buffer<<current_node->get_segment_path();
    return path_buffer.str();

}

bool is_set(const YFilter & yfilter)
{
    return yfilter != YFilter::not_set;
}


std::map<string, shared_ptr<Entity>> get_children(const Entity & entity)
{
    std::map<string, shared_ptr<Entity>> children;
    for(auto & child : entity.get_child_containers())
    {
        if(child.second!= nullptr)
        {
            children[child.first] = child.second;
        }
    }

    for(auto & child : entity.get_child_lists())
    {
        if(child.second!= nullptr)
        {
            children[child.second->get_segment_path()] = child.second;
        }
    }

    return children;
}

bool has_data(const Entity & entity)
{
    for(auto & leaf : entity.get_leafs())
    {
        if(leaf.is_set)
        {
            return true;
        }
    }
    for(auto & leaf_list : entity.get_leaf_lists())
    {
        for(auto & leaf : leaf_list.getYLeafs())
        {
            if(leaf.is_set)
            {
                return true;
            }
        }
    }
    for(auto & child : entity.get_child_containers())
    {
        if(child.second!= nullptr)
        {
            if(has_data(*(child.second)))
            {
                return true;
            }
        }
    }
    for(auto & child : entity.get_child_lists())
    {
        if(child.second != nullptr && has_data(*child.second))
        {
            return true;
        }
    }
    return false;
}


bool has_operation(const Entity & entity)
{
    for(auto & leaf : entity.get_leafs())
    {
        if(is_set(leaf.yfilter))
        {
            return true;
        }
    }
    for(auto & leaf_list : entity.get_leaf_lists())
    {
        for(auto & leaf : leaf_list.getYLeafs())
        {
            if(is_set(leaf.yfilter))
            {
                return true;
            }
        }
    }
    for(auto & child : entity.get_child_containers())
    {
        if(child.second!= nullptr)
        {
            if(has_operation(*(child.second)))
            {
                return true;
            }
        }
    }
    for(auto & child : entity.get_child_lists())
    {
        if(child.second!= nullptr && has_operation(*child.second))
        {
            return true;
        }
    }
    return false;
}

std::vector<std::pair<std::string, LeafData> > get_name_leaf_data(const Entity & entity)
{
    std::vector<std::pair<std::string, LeafData> > name_leaf_data;
    for(auto & leaf : entity.get_leafs())
    {
        if(leaf.is_set || is_set(leaf.yfilter))
        {
            name_leaf_data.push_back(leaf.get_name_leafdata());
        }
    }
    for(auto & leaf_list : entity.get_leaf_lists())
    {
        auto name_datas = leaf_list.get_name_leafdata();
        name_leaf_data.insert(name_leaf_data.end(), name_datas.begin(), name_datas.end());
    }
    return name_leaf_data;
}

void set_value(Entity & entity, const std::string & path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix, bool is_bits)
{
    for(auto & leaf : entity.get_leafs())
    {
        if(name_matches_path(leaf.name, path))
        {
             if(is_bits)
            {
                leaf[value] = true;
                return;
            }
            leaf = value;
            leaf.value_namespace = name_space;
            leaf.value_namespace_prefix = name_space_prefix;
            return;
        }
    }
    for(auto & leaf_list : entity.get_leaf_lists())
    {
        if(name_matches_path(leaf_list.name, path))
        {
            if(is_bits)
            {
                Bits bits_value{};
                bits_value[value] = true;
                leaf_list.append(bits_value);
                return;
            }
            leaf_list.append(value);
            return;
        }
    }
}

void set_filter(Entity & entity, const std::string & path, YFilter yfilter)
{
    for(auto & leaf : entity.get_leafs())
    {
        if(name_matches_path(leaf.name, path))
        {
            leaf.yfilter = yfilter;
        }
    }
    for(auto & leaf_list : entity.get_leaf_lists())
    {
        if(name_matches_path(leaf_list.name, path))
        {
            leaf_list.yfilter = yfilter;
        }
    }
}

bool has_leaf_or_child_of_name(const Entity & entity, const std::string & name)
{
    for(auto & leaf : entity.get_leafs())
    {
        if(leaf.name == name)
        {
            return true;
        }
    }
    for(auto & leaf : entity.get_leaf_lists())
    {
        if(leaf.name == name)
        {
            return true;
        }
    }
    if(entity.get_child_lists().find(name)!=entity.get_child_lists().end() || entity.get_child_containers().find(name)!=entity.get_child_containers().end())
    {
        return true;
    }
    return false;
}

static const EntityPath get_entity_path(const Entity & entity, const string & path_buffer)
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data  = get_name_leaf_data(entity);

    EntityPath entity_path {path_buffer, leaf_name_data};
    return entity_path;
}

static bool is_absolute_path(Entity* ancestor)
{
    return ancestor == nullptr;
}

const EntityPath get_entity_path(const Entity & entity, Entity* ancestor)
{
    std::ostringstream path_buffer;
    if (is_absolute_path(ancestor))
    {
        if(entity.has_list_ancestor)
        {
            throw(YCPPInvalidArgumentError{"ancestor for entity cannot be nullptr as one of the ancestors is a list. Path: "+entity.get_segment_path()});
        }
        auto a = entity.get_absolute_path();
        if(a.size() == 0)
        {
            path_buffer << entity.get_segment_path();
        }
        else
        {
            path_buffer << a;
        }
    }
    else
    {
        if(entity.is_top_level_class)
        {
            throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+entity.get_segment_path()});
        }
        path_buffer << get_relative_entity_path(&entity, ancestor, path_buffer.str());
    }
    return get_entity_path(entity, path_buffer.str());
}
//std::shared_ptr<Entity> get_child_by_name(Entity & entity, const std::string & child_yang_name, const std::string & segment_path)
//{
//    for(auto & child : entity.child_containers)
//    {
//        if(child.second!= nullptr)
//        {
//            if(has_operation(**(child.second)))
//            {
//                return true;
//            }
//        }
//    }
//    for(auto & child : entity.child_lists)
//    {
//        for(auto & item:*child.second)
//        {
//            if(has_operation(*item))
//            {
//                return true;
//            }
//        }
//    }
//    return nullptr;
//}
}
