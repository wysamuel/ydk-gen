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

#include <iostream>
#include <sstream>
#include <memory>
#include <boost/log/trivial.hpp>
#include <libyang/libyang.h>

#include "types.hpp"
#include "netconf_client.hpp"
#include "netconf_provider.hpp"
#include "netconf_model_provider.hpp"
#include "entity_data_node_walker.hpp"
#include "errors.hpp"
#include "ydk_yang.hpp"

using namespace std;
using namespace ydk;

namespace ydk
{
static path::SchemaNode* get_schema_for_operation(path::RootSchemaNode& root_schema, string operation);
static std::vector<ydk::path::Capability> get_core_capabilities(const std::vector<std::string> & server_capabilities);

static unique_ptr<path::Rpc> create_rpc_instance(path::RootSchemaNode & root_schema, string rpc_name);
static path::DataNode& create_rpc_input(path::Rpc & netconf_rpc);

static bool is_candidate_supported(vector<string> capbilities);
static void create_input_target(path::DataNode & input, bool candidate_supported);
static void create_input_source(path::DataNode & input, bool config);
static void create_input_error_option(path::DataNode & input);
static string get_annotated_config_payload(path::RootSchemaNode& root_schema, path::Rpc & rpc, path::Annotation & annotation);
static string get_commit_rpc_payload();
static unique_ptr<path::DataNode> handle_edit_reply(string reply, NetconfClient & client, bool candidate_supported);

static string get_read_rpc_name(bool config);
static bool is_config(path::Rpc & rpc);
static string get_filter_payload(path::Rpc & ydk_rpc);
static string get_netconf_payload(path::DataNode & input, string data_tag, string data_value);
static std::unique_ptr<path::DataNode> handle_read_reply(string reply, path::RootSchemaNode & root_schema);

const char* CANDIDATE = "urn:ietf:params:netconf:capability:candidate:1.0";

NetconfServiceProvider::NetconfServiceProvider(string address, string username, string password, int port)
    : m_repo_ptr(make_unique<path::Repository>()), m_repo{*m_repo_ptr}, client(make_unique<NetconfClient>(username, password, address, port, 0)),
	  model_provider(make_unique<NetconfModelProvider>(*client))
{
    initialize();
    BOOST_LOG_TRIVIAL(debug) << "Connected to " << address << " on port "<< port <<" using ssh";
}

NetconfServiceProvider::NetconfServiceProvider(path::Repository & repo, string address, string username, string password, int port)
    : m_repo_ptr(nullptr),m_repo{repo}, client(make_unique<NetconfClient>(username, password, address, port, 0)),
	  model_provider(make_unique<NetconfModelProvider>(*client))
{
    initialize();
    BOOST_LOG_TRIVIAL(debug) << "Connected to " << address << " on port "<< port <<" using ssh";
}

void NetconfServiceProvider::initialize()
{
	client->connect();
	server_capabilities = client->get_capabilities();

	for(std::string c : server_capabilities )
	{
		if(c.find("ietf-netconf-monitoring") != std::string::npos)
		{
			ietf_nc_monitoring_available = true;
			m_repo.add_model_provider(model_provider.get());
		}
	}

	root_schema = std::unique_ptr<ydk::path::RootSchemaNode>(
								m_repo.create_root_schema
									(
									get_core_capabilities(server_capabilities)
									)
								);

	if(root_schema.get() == nullptr)
	{
		BOOST_LOG_TRIVIAL(error) << "Root schema cannot be obtained";
		BOOST_THROW_EXCEPTION(YCPPIllegalStateError{"Root schema cannot be obtained"});
	}
}

NetconfServiceProvider::~NetconfServiceProvider()
{
	BOOST_LOG_TRIVIAL(debug) << "Disconnected from device";
	if(ietf_nc_monitoring_available){
		m_repo.remove_model_provider(model_provider.get());
	}
}

path::RootSchemaNode & NetconfServiceProvider::get_root_schema() const
{
    return *root_schema;
}

std::unique_ptr<path::DataNode> NetconfServiceProvider::handle_read(path::Rpc & ydk_rpc) const
{
    //for now we only support crud rpc's
    bool config = is_config(ydk_rpc);
    auto netconf_rpc = create_rpc_instance(*root_schema, get_read_rpc_name(config));
    auto & input = create_rpc_input(*netconf_rpc);
    create_input_source(input, config);
    std::string filter_value = get_filter_payload(ydk_rpc);

    string netconf_payload = get_netconf_payload(input, "filter", filter_value);

    std::string reply = client->execute_payload(netconf_payload);
    BOOST_LOG_TRIVIAL(debug) <<"=============Reply payload=============";
    BOOST_LOG_TRIVIAL(debug) << reply;
    BOOST_LOG_TRIVIAL(debug) << endl;
    return handle_read_reply(reply, *root_schema);
}

std::unique_ptr<path::DataNode> NetconfServiceProvider::handle_edit(path::Rpc & ydk_rpc, path::Annotation annotation) const
{
    //for now we only support crud rpc's
    bool candidate_supported = is_candidate_supported(server_capabilities);

    auto netconf_rpc = create_rpc_instance(*root_schema, "ietf-netconf:edit-config");
    auto & input = create_rpc_input(*netconf_rpc);
    create_input_target(input, candidate_supported);
    create_input_error_option(input);
    string config_payload = get_annotated_config_payload(*root_schema, ydk_rpc, annotation);

    ly_verb(LY_LLSILENT); //turn off libyang logging at the beginning
    string netconf_payload = get_netconf_payload(input, "config", config_payload);
    ly_verb(LY_LLVRB); // enable libyang logging after payload has been created

    std::string reply = client->execute_payload(netconf_payload);
    BOOST_LOG_TRIVIAL(debug) <<"=============Reply payload=============";
    BOOST_LOG_TRIVIAL(debug) << reply;
    BOOST_LOG_TRIVIAL(debug) << endl;
    return handle_edit_reply(reply, *client, candidate_supported);
}

std::unique_ptr<path::DataNode> NetconfServiceProvider::handle_netconf_operation(path::Rpc & ydk_rpc) const
{
    bool candidate_supported = is_candidate_supported(server_capabilities);

    path::CodecService codec_service{};
    auto netconf_payload = codec_service.encode(ydk_rpc.input(), path::CodecService::Format::XML, true);
    std::string payload{"<rpc xmlns=\"urn:ietf:params:xml:ns:netconf:base:1.0\">"};
    netconf_payload = payload + netconf_payload + "</rpc>";

    BOOST_LOG_TRIVIAL(debug) << netconf_payload;

    std::string reply = client->execute_payload(netconf_payload);
    BOOST_LOG_TRIVIAL(debug) <<"=============Reply payload=============";
    BOOST_LOG_TRIVIAL(debug) << reply;
    BOOST_LOG_TRIVIAL(debug) << endl;
    BOOST_LOG_TRIVIAL(trace) << "Executing rpc " + ydk_rpc.schema().path();
    if (ydk_rpc.schema().path().find("get") != string::npos or ydk_rpc.schema().path().find("get-config") != string::npos)
    {
        return handle_read_reply(reply, *root_schema);
    }
    if(reply.find("<ok/>") == std::string::npos)
    {
        BOOST_LOG_TRIVIAL(error) << "No ok in reply ";
        BOOST_THROW_EXCEPTION(YCPPServiceProviderError{reply});
    }
    return nullptr;

}

std::unique_ptr<path::DataNode> NetconfServiceProvider::invoke(path::Rpc & rpc) const
{
	path::SchemaNode* create_schema = get_schema_for_operation(*root_schema, "ydk:create");
	path::SchemaNode* read_schema = get_schema_for_operation(*root_schema, "ydk:read");
	path::SchemaNode* update_schema = get_schema_for_operation(*root_schema, "ydk:update");
	path::SchemaNode* delete_schema = get_schema_for_operation(*root_schema, "ydk:delete");

     //for now we only support crud rpc's
    path::SchemaNode* rpc_schema = &(rpc.schema());

    if(rpc_schema == create_schema || rpc_schema == delete_schema || rpc_schema == update_schema)
    {
        //for each child node in datanode add the nc:operation attribute
        path::Annotation an{IETF_NETCONF_MODULE_NAME, "operation", rpc_schema == delete_schema ? "delete" : "merge"};
        return handle_edit(rpc, an);
    }
    else if(rpc_schema == read_schema)
    {
        return handle_read(rpc);
    }
    else if(rpc_schema->path().find("ietf-netconf:")!= string::npos)
    {
       return handle_netconf_operation(rpc);
    }
    else
    {
        BOOST_LOG_TRIVIAL(error) << "rpc is not supported";
        BOOST_THROW_EXCEPTION(YCPPOperationNotSupportedError{"rpc is not supported!"});
    }

    return nullptr;
}

static unique_ptr<path::Rpc> create_rpc_instance(path::RootSchemaNode & root_schema, string rpc_name)
{
	auto rpc = unique_ptr<path::Rpc>(root_schema.rpc(rpc_name));
	if(rpc == nullptr){
            BOOST_LOG_TRIVIAL(error) << "Cannot create payload for RPC: " << rpc_name;
            BOOST_THROW_EXCEPTION(YCPPIllegalStateError{"Cannot create payload for RPC: "+ rpc_name});
	}
	return rpc;
}

static path::DataNode& create_rpc_input(path::Rpc & netconf_rpc)
{
	return netconf_rpc.input();
}

static string get_commit_rpc_payload()
{
	return "<rpc xmlns=\"urn:ietf:params:xml:ns:netconf:base:1.0\">"
		   "<commit/>"
			"</rpc>";
}

static bool is_candidate_supported(vector<string> capabilities)
{
	if(std::find(capabilities.begin(), capabilities.end(), CANDIDATE) != capabilities.end()){
		//candidate is supported
		return true;
	}
	return false;
}

static void create_input_target(path::DataNode & input, bool candidate_supported)
{
    if(candidate_supported)
    {
        input.create("target/candidate");
    }
    else
    {
    	input.create("target/running");
    }
}

static void create_input_error_option(path::DataNode & input)
{
	input.create("error-option", "rollback-on-error");
}

static void create_input_source(path::DataNode & input, bool config)
{
	if(config)
	{
		input.create("source/running");
	}
}

static string get_annotated_config_payload(path::RootSchemaNode & root_schema,
		path::Rpc & rpc, path::Annotation & annotation)
{
    path::CodecService codec_service{};
    auto entity = rpc.input().find("entity");
    if(entity.empty()){
        BOOST_LOG_TRIVIAL(error) << "Failed to get entity node";
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"Failed to get entity node"});
    }

    path::DataNode* entity_node = entity[0];
    std::string entity_value = entity_node->get();

    //deserialize the entity_value
    auto datanode = codec_service.decode(root_schema, entity_value, path::CodecService::Format::XML);

    if(!datanode){
        BOOST_LOG_TRIVIAL(error) << "Failed to decode entity node";
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"Failed to decode entity node"});
    }

    std::string config_payload {};

    for(auto const & child : datanode->children())
    {
    	if((child->annotations()).size()==0)
    	{
    		child->add_annotation(annotation);
    	}
        config_payload += codec_service.encode(*child, path::CodecService::Format::XML, true);
    }
    return config_payload;
}

static string get_filter_payload(path::Rpc & ydk_rpc)
{
    auto entity = ydk_rpc.input().find("filter");
    if(entity.empty()){
        BOOST_LOG_TRIVIAL(error) << "Failed to get entity node.";
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"Failed to get entity node"});
    }

    auto datanode = entity[0];
    return datanode->get();
}

static string get_netconf_payload(path::DataNode & input, string data_tag, string data_value)
{
    path::CodecService codec_service{};
    input.create(data_tag, data_value);

    std::string payload{"<rpc xmlns=\"urn:ietf:params:xml:ns:netconf:base:1.0\">"};
    payload+=codec_service.encode(input, path::CodecService::Format::XML, true);
    payload+="</rpc>";
    BOOST_LOG_TRIVIAL(debug) <<"=============Generating payload=============";
    BOOST_LOG_TRIVIAL(debug) <<payload;
    BOOST_LOG_TRIVIAL(debug) <<endl;
    return payload;
}

static unique_ptr<path::DataNode> handle_edit_reply(string reply, NetconfClient & client, bool candidate_supported)
{
	if(reply.find("<ok/>") == std::string::npos)
	{
        BOOST_LOG_TRIVIAL(error) << "No ok in reply ";
		BOOST_THROW_EXCEPTION(YCPPServiceProviderError{reply});
	}

	if(candidate_supported)
	{
		//need to send the commit request
		string commit_payload = get_commit_rpc_payload();

		BOOST_LOG_TRIVIAL(debug) << "Executing commit RPC: " << commit_payload;
		reply = client.execute_payload(commit_payload);

		BOOST_LOG_TRIVIAL(debug) <<"=============Reply payload=============";
		BOOST_LOG_TRIVIAL(debug) << reply;
		BOOST_LOG_TRIVIAL(debug) << endl;
		if(reply.find("<ok/>") == std::string::npos)
		{
			BOOST_LOG_TRIVIAL(error) << "RPC error occurred: " << reply;
		    BOOST_THROW_EXCEPTION(YCPPServiceProviderError{reply});
		}
	}

	//no error no output for edit-config
	return nullptr;
}

static std::unique_ptr<path::DataNode> handle_read_reply(string reply, path::RootSchemaNode & root_schema)
{
	path::CodecService codec_service{};
	auto empty_data = reply.find("<data/>");
	if(empty_data != std::string::npos)
	{
		BOOST_LOG_TRIVIAL(debug) << "Found empty data tag";
		return nullptr;
	}

	auto data_start = reply.find("<data>");
	if(data_start == std::string::npos)
	{
		BOOST_LOG_TRIVIAL(debug) << "Can't find data tag in reply " << reply;
		BOOST_THROW_EXCEPTION(YCPPServiceProviderError{reply});
	}
	data_start+= sizeof("<data>") - 1;
	auto data_end = reply.find("</data>", data_start);
	if(data_end == std::string::npos)
	{
		BOOST_LOG_TRIVIAL(debug) << "No end data tag found in reply " << reply;
		BOOST_THROW_EXCEPTION(YCPPError{"No end data tag found"});
	}

	string data = reply.substr(data_start, data_end-data_start);

	auto datanode = codec_service.decode(root_schema, data, path::CodecService::Format::XML);

	if(datanode == nullptr){
		BOOST_LOG_TRIVIAL(debug) << "Codec service failed to decode datanode";
		BOOST_THROW_EXCEPTION(YCPPError{"Problems deserializing output"});
	}
	return datanode;
}

static string get_read_rpc_name(bool config)
{
    if(config)
    {
        return "ietf-netconf:get-config";
    }
    return "ietf-netconf:get";
}

static bool is_config(path::Rpc & rpc)
{
	if(!rpc.input().find("only-config").empty())
	{
		return true;
	}
	return false;
}

static path::SchemaNode* get_schema_for_operation(path::RootSchemaNode & root_schema, string operation)
{
	auto c = root_schema.find(operation);
	if(c.empty())
	{
		BOOST_LOG_TRIVIAL(error) << "CRUD create rpc schema not found!";
		BOOST_THROW_EXCEPTION(YCPPIllegalStateError{"CRUD create rpc schema not found!"});
	}
	return c[0];
}

//TODO fix and uncomment
/*
static std::string get_parameter(const std::string & capability, const std::string & parameter_name)
{
	auto module_start = capability.find(parameter_name + "=");
	if(module_start == std::string::npos)
		return "";
	auto module_end = capability.find("&", module_start);
	module_start+=sizeof(parameter_name+"=");
	auto size = module_end;
	if(size != std::string::npos ){
		size = module_end - module_start + 1;
	}

	std::string c_module = capability.substr( module_start - 1, size );
	return c_module;
}

static std::vector<std::string> get_parameter_list(const std::string & capability, const std::string & parameter_name)
{
	std::vector<std::string> c_features;
	auto features_start = capability.find(parameter_name+"=");
	if(features_start != std::string::npos){
		auto features_end = capability.find("&", features_start);
		features_start+=sizeof(parameter_name+"=");
		auto size=features_end;
		if(size!=std::string::npos){
			size = features_end - features_start + 1;
		}
		std::string features = capability.substr(features_start - 1 , size);
		std::istringstream iss{features};
		std::string feature;
		while(std::getline(iss, feature, ',')) {
			c_features.push_back(std::move(feature));
		}

	}
	return c_features;
}
*/
static std::vector<ydk::path::Capability> get_core_capabilities(const std::vector<std::string> & server_capabilities)
{
	std::vector<path::Capability> yang_caps {};
	for(std::string c : server_capabilities )
	{
		if(c.find("calvados") != std::string::npos || c.find("tailf") != std::string::npos || c.find("tail-f") != std::string::npos)
		{
			continue;
		}

		auto p = std::find(c.begin(), c.end(),'?');

		if(p == c.end())
			continue;

		auto module_start = c.find("module=");


		if(module_start == std::string::npos)
			continue;

		auto revision_start = c.find("revision=");
		if(revision_start == std::string::npos)
			continue;

		std::vector<std::string> c_features{};
		std::vector<std::string> c_deviations{};

		auto module_end = c.find("&", module_start);

		module_start+=sizeof("module=");
		auto size = module_end;
		if(size != string::npos ){
			size = module_end - module_start + 1;
		}

		std::string c_module = c.substr( module_start - 1, size );


		auto revision_end = c.find("&", revision_start);
		revision_start+=sizeof("revision=");
		size = revision_end;
		if(size!= string::npos) {
			size= revision_end - revision_start + 1;
		}
		std::string c_revision = c.substr(revision_start - 1, size);

		auto features_start = c.find("features=");
		if(features_start != string::npos){
			auto features_end = c.find("&", features_start);
			features_start+=sizeof("features=");
			size=features_end;
			if(size!=string::npos){
				size = features_end - features_start + 1;
			}
			std::string features = c.substr(features_start - 1 , size);
			std::istringstream iss{features};
			std::string feature;
			while(std::getline(iss, feature, ',')) {
				c_features.push_back(std::move(feature));
			}

		}

		auto deviations_start = c.find("deviations=");
		if(deviations_start != string::npos){
			auto deviations_end = c.find("&", deviations_start);
			deviations_start+=sizeof("deviations=");
			size=deviations_end;
			if(size!=string::npos){
				size = deviations_end - deviations_start + 1;
			}
			std::string deviations = c.substr(deviations_start - 1, size);
			std::istringstream iss{deviations};
			std::string deviation;
			while(std::getline(iss, deviation, ',')) {
				c_deviations.push_back(std::move(deviation));
			}

		}
		if(c_module.find("tailf") != std::string::npos) {
			continue;
		}
		path::Capability core_cap{c_module, c_revision, c_features, c_deviations};
		yang_caps.emplace_back(core_cap);
	}

	//add ydk capability
	path::Capability ydk_cap{ydk::path::YDK_MODULE_NAME, ydk::path::YDK_MODULE_REVISION, {}, {}};
	auto result = std::find(yang_caps.begin(), yang_caps.end(), ydk_cap);
	if(result == yang_caps.end()){
		yang_caps.push_back(ydk_cap);
	}
	//add ietf-netconf capability
	path::Capability ietf_netconf_cap{ydk::IETF_NETCONF_MODULE_NAME, ydk::IETF_NETCONF_MODULE_REVISION, {}, {}};
	result = std::find(yang_caps.begin(), yang_caps.end(), ietf_netconf_cap);
	if(result == yang_caps.end()){
		yang_caps.push_back(ietf_netconf_cap);
	}
	return yang_caps;
}
}
