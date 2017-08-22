//
// @file types.hpp
// @brief Header for ydk entity
//
// YANG Development Kit
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

#include "../src/types.hpp"
#include "../src/entity_util.hpp"
#include "catch.hpp"
#include <iostream>

using namespace ydk;
using namespace std;

class TestEntity:public Entity
{
  public:
    TestEntity()
        : name{YType::str, "name"}, enabled{YType::boolean, "enabled"}, bits_field{YType::bits, "bits-field"}, child(make_shared<TestEntity::Child>())
    {
        yang_name = "test"; yang_parent_name = "";
    }

    ~TestEntity()
    {
    }

  public:
    std::map<std::string, shared_ptr<Entity>> get_child_containers() const
    {
        return {{"child", child}};
    }

    std::map<std::string, std::shared_ptr<Entity>> get_child_lists() const
    {
        return {{}};
    }

    std::vector<YLeaf> get_leafs() const
    {
        return {name, enabled, bits_field};
    }

    std::vector<YLeafList> get_leaf_lists() const
    {
        return {};
    }

    std::string get_segment_path() const
    {
        return "test";
    }

    std::shared_ptr<Entity> get_child_by_name(const std::string & child_path, const string & u)
    {
        if(child_path == child->get_segment_path())
        {
            if(child != nullptr)
            {
                return child;
            }
            else
            {
                child = make_shared<TestEntity::Child>();
                child->parent = this;
                return child;
            }
        }
        return nullptr;
    }

    class Child:public Entity
    {
      public:
        Child ()
          : child_val{YType::int32, "child-val"}
          {
            yang_name = "child"; yang_parent_name = "test";
          }

        std::string get_segment_path() const
        {
            return "child";
        }

        std::map<std::string, shared_ptr<Entity>> get_child_containers() const
        {
            return {{}};
        }

        std::map<std::string, std::shared_ptr<Entity>> get_child_lists() const
        {
            std::map<std::string, std::shared_ptr<Entity>> m;
            for(auto & c:multi_child)
                m[c->get_segment_path()]=c;
            return m;
        }

        std::vector<YLeaf> get_leafs() const
        {
            return {child_val};
        }

        std::vector<YLeafList> get_leaf_lists() const
        {
            return {};
        }

        std::shared_ptr<Entity> get_child_by_name(const std::string & child_path, const string & u)
        {
            if(child_path == "multi-child")
            {
                for(auto const& ch : multi_child)
                {
                    string segment = ch->get_segment_path();
                    if(u == segment)
                    {
                        return ch;
                    }
                }
                auto ch = make_shared<TestEntity::Child::MultiChild>();
                ch->parent = this;
                multi_child.push_back(ch);
                return multi_child.back();
            }
            return nullptr;
        }
        YLeaf child_val;


        class MultiChild : public Entity
        {
          public:
            MultiChild ()
              : child_key{YType::str, "child-key"}
              {
                yang_name = "multi-child"; yang_parent_name = "child";
              }

            std::string get_segment_path() const
            {
                return "multi-child[child-key='"+child_key.get()+"']";
            }

            std::map<std::string, shared_ptr<Entity>> get_child_containers() const
            {
                return {{}};
            }

            std::map<std::string, std::shared_ptr<Entity>> get_child_lists() const
            {
                return {{}};
            }

            std::vector<YLeaf> get_leafs() const
            {
                return {child_key};
            }

            std::vector<YLeafList> get_leaf_lists() const
            {
                return {};
            }
            std::shared_ptr<Entity> get_child_by_name(const std::string & child_path, const string & u)
            {
                return nullptr;
            }


            YLeaf child_key;
        };

        vector<shared_ptr<TestEntity::Child::MultiChild> > multi_child;
    };

  YLeaf name;
  YLeaf enabled;
  YLeaf bits_field;
  shared_ptr<TestEntity::Child> child;
};

TEST_CASE("test_create")
{
    TestEntity test{};
    string test_value = "value for test";
    EntityPath expected {"test",
                            {{"name", {test_value, YFilter::not_set, true, "", ""}},
                             {"enabled", {"true", YFilter::not_set, true, "", ""}},
                             {"bits-field", {"bit1 bit2", YFilter::not_set, true, "", ""}}}};

    REQUIRE(get_entity_path(test, nullptr).path == "test");
    REQUIRE(has_data(test) == false);

    test.name = test_value;
    test.enabled = true;

    test.bits_field["bit1"] = true;
    test.bits_field["bit2"] = true;

    REQUIRE(has_data(test) == true);
    REQUIRE(get_entity_path(test, nullptr) == expected);
}

TEST_CASE("test_unequal")
{
    TestEntity test1{};

    test1.name = "value for test";
    test1.enabled = true;
    test1.bits_field["bit1"] = false;
    test1.bits_field["bit2"] = true;

    TestEntity test2{};

    test2.name = "different";
    test2.enabled = false;
    test2.bits_field["bit1"] = true;
    test2.bits_field["bit2"] = false;

    REQUIRE(has_data(test1) == true);
    REQUIRE(has_data(test2) == true);
    REQUIRE(test1 != test2);
}

TEST_CASE("test_unequal_child")
{
    TestEntity test1{};

    test1.name = "value for test";
    test1.enabled = true;
    test1.bits_field["bit1"] = false;
    test1.bits_field["bit2"] = true;
    test1.child->child_val = 23;

    TestEntity test2{};

    test2.name = "value for test";
    test2.enabled = true;
    test2.bits_field["bit1"] = true;
    test2.bits_field["bit2"] = false;

    REQUIRE(has_data(test1) == true);
    REQUIRE(has_data(test2) == true);

    cout<<test1<<endl;
    cout<<test2<<endl;
    REQUIRE(test1 != test2);
}

TEST_CASE("test_equal")
{
    TestEntity test1{};

    test1.name = "value for test";
    test1.enabled = true;
    test1.bits_field["bit1"] = false;
    test1.bits_field["bit2"] = true;

    TestEntity test2{};

    test2.name = "value for test";
    test2.enabled = true;
    test2.bits_field["bit1"] = false;
    test2.bits_field["bit2"] = true;

    REQUIRE(has_data(test1) == true);
    REQUIRE(has_data(test2) == true);
    REQUIRE(test1 == test2);
}

TEST_CASE("test_equal_child")
{
    TestEntity test1{};

    test1.name = "value for test";
    test1.enabled = true;
    test1.bits_field["bit1"] = false;
    test1.bits_field["bit2"] = true;
    test1.child->child_val = 23;

    TestEntity test2{};

    test2.name = "value for test";
    test2.enabled = true;
    test2.bits_field["bit1"] = false;
    test2.bits_field["bit2"] = true;
    test2.child->child_val = 23;

    REQUIRE(has_data(test1) == true);
    REQUIRE(has_data(test2) == true);

    cout<<test1<<endl;
    cout<<test2<<endl;
    REQUIRE(test1 == test2);
}
TEST_CASE("test_read")
{
    TestEntity test{};

    REQUIRE(get_entity_path(test, nullptr).path == "test");
    REQUIRE(has_data(test) == false);

    set_value(test, "name", "test test", "", "", false);
    REQUIRE(has_data(test) == true);

    auto child = test.get_child_by_name("child", "");
    REQUIRE(child != nullptr);

    set_value(*child, "child-val", "123", "", "", false);
    REQUIRE(has_data(*child) == true);
}

TEST_CASE("test_multi_create")
{
    TestEntity test{};

    REQUIRE(get_entity_path(test, nullptr).path == "test");
    REQUIRE(has_data(test) == false);

    set_value(test, "name", "test test", "", "", false);
    REQUIRE(has_data(test) == true);

    auto mchild = test.child->get_child_by_name("multi-child", "");
    REQUIRE(mchild != nullptr);
}

TEST_CASE("test_multi_read")
{
    TestEntity test{};

    REQUIRE(get_entity_path(test, nullptr).path == "test");
    REQUIRE(has_data(test) == false);

    set_value(test, "name", "test test", "", "", false);
    REQUIRE(has_data(test) == true);

    auto mchild = make_shared<TestEntity::Child::MultiChild>();
    mchild->parent = test.child.get();
    test.child->multi_child.push_back(mchild);

    auto m = test.child->get_child_by_name("multi-child", "multi-child[multi-key='abc']");
    REQUIRE(m != nullptr);
}
