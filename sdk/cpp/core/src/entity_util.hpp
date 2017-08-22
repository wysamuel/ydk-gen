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
#ifndef ENTITY_UTIL_HPP
#define ENTITY_UTIL_HPP

#include <sstream>
#include "types.hpp"

namespace ydk
{
class Entity;

std::string get_relative_entity_path(const Entity* current_node, const Entity* ancestor, std::string path);
bool is_set(const YFilter & yfilter);

std::map<std::string, std::shared_ptr<Entity>> get_children(const Entity & entity);
bool has_data(const Entity & entity);
bool has_operation(const Entity & entity);
std::vector<std::pair<std::string, LeafData> > get_name_leaf_data(const Entity & entity);
void set_value(Entity & entity, const std::string & path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix, bool is_bit);
void set_filter(Entity & entity, const std::string & path, YFilter yfilter);
bool has_leaf_or_child_of_name(const Entity & entity, const std::string & name);
const EntityPath get_entity_path(const Entity & entity, Entity* ancestor);

}

#endif /* ENTITY_UTIL_HPP */
