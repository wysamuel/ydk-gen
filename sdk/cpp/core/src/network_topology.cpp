
#include <sstream>
#include <iostream>
#include "entity_util.hpp"
#include "network_topology.hpp"

using namespace ydk;

namespace opendaylight {
namespace network_topology {

NetworkTopology::NetworkTopology()
{
    yang_name = "network-topology"; yang_parent_name = "network-topology"; is_top_level_class = true; has_list_ancestor = false;
}

NetworkTopology::~NetworkTopology()
{
}

std::string NetworkTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-topology:network-topology";

    return path_buffer.str();

}

std::string NetworkTopology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "" << get_segment_path();
    return path_buffer.str();


}

std::shared_ptr<Entity> NetworkTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetworkTopology::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::shared_ptr<Entity> NetworkTopology::clone_ptr() const
{
    return std::make_shared<NetworkTopology>();
}

NetworkTopology::Topology::Topology()
    :
    topology_id{YType::str, "topology-id"},
    server_provided{YType::boolean, "server-provided"}
    ,
    topology_types(std::make_shared<NetworkTopology::Topology::TopologyTypes>())
{
    topology_types->parent = this;

    yang_name = "topology"; yang_parent_name = "network-topology"; is_top_level_class = false; has_list_ancestor = false;
}

NetworkTopology::Topology::~Topology()
{
}

std::string NetworkTopology::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[topology-id='" <<topology_id <<"']";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetworkTopology::Topology::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetworkTopology::Topology::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    if(child_yang_name == "topology-types")
    {
        if(topology_types == nullptr)
        {
            topology_types = std::make_shared<NetworkTopology::Topology::TopologyTypes>();
        }
        return topology_types;
    }

    if(child_yang_name == "underlay-topology")
    {
        for(auto const & c : underlay_topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetworkTopology::Topology::UnderlayTopology>();
        c->parent = this;
        underlay_topology.push_back(c);
        return c;
    }

    return nullptr;
}

NetworkTopology::Topology::TopologyTypes::TopologyTypes()
    :
    topology_netconf(std::make_shared<NetworkTopology::Topology::TopologyTypes::TopologyNetconf>())
{
    topology_netconf->parent = this;

    yang_name = "topology-types"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::TopologyTypes::~TopologyTypes()
{
}

std::string NetworkTopology::Topology::TopologyTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-types";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::TopologyTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-netconf")
    {
        if(topology_netconf == nullptr)
        {
            topology_netconf = std::make_shared<NetworkTopology::Topology::TopologyTypes::TopologyNetconf>();
        }
        return topology_netconf;
    }

    return nullptr;
}

NetworkTopology::Topology::TopologyTypes::TopologyNetconf::TopologyNetconf()
{
    yang_name = "topology-netconf"; yang_parent_name = "topology-types"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::TopologyTypes::TopologyNetconf::~TopologyNetconf()
{
}

std::string NetworkTopology::Topology::TopologyTypes::TopologyNetconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf-node-topology:topology-netconf";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::TopologyTypes::TopologyNetconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

NetworkTopology::Topology::UnderlayTopology::UnderlayTopology()
    :
    topology_ref{YType::str, "topology-ref"}
{
    yang_name = "underlay-topology"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::UnderlayTopology::~UnderlayTopology()
{
}

std::string NetworkTopology::Topology::UnderlayTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlay-topology" <<"[topology-ref='" <<topology_ref <<"']";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::UnderlayTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

NetworkTopology::Topology::Node::Node()
    :
    node_id{YType::str, "node-id"},
    between_attempts_timeout_millis{YType::uint16, "netconf-node-topology:between-attempts-timeout-millis"},
    concurrent_rpc_limit{YType::uint16, "netconf-node-topology:concurrent-rpc-limit"},
    connected_message{YType::str, "netconf-node-topology:connected-message"},
    connection_status{YType::enumeration, "netconf-node-topology:connection-status"},
    connection_timeout_millis{YType::uint32, "netconf-node-topology:connection-timeout-millis"},
    default_request_timeout_millis{YType::uint32, "netconf-node-topology:default-request-timeout-millis"},
    host{YType::str, "netconf-node-topology:host"},
    keepalive_delay{YType::uint32, "netconf-node-topology:keepalive-delay"},
    max_connection_attempts{YType::uint32, "netconf-node-topology:max-connection-attempts"},
    password{YType::str, "netconf-node-topology:password"},
    port{YType::uint16, "netconf-node-topology:port"},
    reconnect_on_changed_schema{YType::boolean, "netconf-node-topology:reconnect-on-changed-schema"},
    schema_cache_directory{YType::str, "netconf-node-topology:schema-cache-directory"},
    schemaless{YType::boolean, "netconf-node-topology:schemaless"},
    sleep_factor{YType::str, "netconf-node-topology:sleep-factor"},
    tcp_only{YType::boolean, "netconf-node-topology:tcp-only"},
    username{YType::str, "netconf-node-topology:username"}
    ,
    available_capabilities(std::make_shared<NetworkTopology::Topology::Node::AvailableCapabilities>())
	,clustered_connection_status(std::make_shared<NetworkTopology::Topology::Node::ClusteredConnectionStatus>())
	,pass_through(std::make_shared<NetworkTopology::Topology::Node::PassThrough>())
	,unavailable_capabilities(std::make_shared<NetworkTopology::Topology::Node::UnavailableCapabilities>())
	,yang_library(std::make_shared<NetworkTopology::Topology::Node::YangLibrary>())
	,yang_module_capabilities(std::make_shared<NetworkTopology::Topology::Node::YangModuleCapabilities>())
{
    available_capabilities->parent = this;

    clustered_connection_status->parent = this;

    pass_through->parent = this;

    unavailable_capabilities->parent = this;

    yang_library->parent = this;

    yang_module_capabilities->parent = this;

    yang_name = "node"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::Node::~Node()
{
}

std::string NetworkTopology::Topology::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "available-capabilities")
    {
        if(available_capabilities == nullptr)
        {
            available_capabilities = std::make_shared<NetworkTopology::Topology::Node::AvailableCapabilities>();
        }
        return available_capabilities;
    }

    if(child_yang_name == "clustered-connection-status")
    {
        if(clustered_connection_status == nullptr)
        {
            clustered_connection_status = std::make_shared<NetworkTopology::Topology::Node::ClusteredConnectionStatus>();
        }
        return clustered_connection_status;
    }

    if(child_yang_name == "pass-through")
    {
        if(pass_through == nullptr)
        {
            pass_through = std::make_shared<NetworkTopology::Topology::Node::PassThrough>();
        }
        return pass_through;
    }

    if(child_yang_name == "supporting-node")
    {
        for(auto const & c : supporting_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetworkTopology::Topology::Node::SupportingNode>();
        c->parent = this;
        supporting_node.push_back(c);
        return c;
    }

    if(child_yang_name == "termination-point")
    {
        for(auto const & c : termination_point)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetworkTopology::Topology::Node::TerminationPoint>();
        c->parent = this;
        termination_point.push_back(c);
        return c;
    }

    if(child_yang_name == "unavailable-capabilities")
    {
        if(unavailable_capabilities == nullptr)
        {
            unavailable_capabilities = std::make_shared<NetworkTopology::Topology::Node::UnavailableCapabilities>();
        }
        return unavailable_capabilities;
    }

    if(child_yang_name == "yang-library")
    {
        if(yang_library == nullptr)
        {
            yang_library = std::make_shared<NetworkTopology::Topology::Node::YangLibrary>();
        }
        return yang_library;
    }

    if(child_yang_name == "yang-module-capabilities")
    {
        if(yang_module_capabilities == nullptr)
        {
            yang_module_capabilities = std::make_shared<NetworkTopology::Topology::Node::YangModuleCapabilities>();
        }
        return yang_module_capabilities;
    }

    return nullptr;
}

NetworkTopology::Topology::Node::SupportingNode::SupportingNode()
    :
    topology_ref{YType::str, "topology-ref"},
    node_ref{YType::str, "node-ref"}
{
    yang_name = "supporting-node"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::Node::SupportingNode::~SupportingNode()
{
}

std::string NetworkTopology::Topology::Node::SupportingNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supporting-node" <<"[topology-ref='" <<topology_ref <<"']" <<"[node-ref='" <<node_ref <<"']";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::Node::SupportingNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

NetworkTopology::Topology::Node::TerminationPoint::TerminationPoint()
    :
    tp_id{YType::str, "tp-id"},
    tp_ref{YType::str, "tp-ref"}
{
    yang_name = "termination-point"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::Node::TerminationPoint::~TerminationPoint()
{
}

std::string NetworkTopology::Topology::Node::TerminationPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "termination-point" <<"[tp-id='" <<tp_id <<"']";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::Node::TerminationPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

NetworkTopology::Topology::Node::YangModuleCapabilities::YangModuleCapabilities()
    :
    capability{YType::str, "capability"},
    override{YType::boolean, "override"}
{
    yang_name = "yang-module-capabilities"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::Node::YangModuleCapabilities::~YangModuleCapabilities()
{
}

std::string NetworkTopology::Topology::Node::YangModuleCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf-node-topology:yang-module-capabilities";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::Node::YangModuleCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

NetworkTopology::Topology::Node::ClusteredConnectionStatus::ClusteredConnectionStatus()
    :
    netconf_master_node{YType::str, "netconf-master-node"}
{
    yang_name = "clustered-connection-status"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::Node::ClusteredConnectionStatus::~ClusteredConnectionStatus()
{
}

std::string NetworkTopology::Topology::Node::ClusteredConnectionStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf-node-topology:clustered-connection-status";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::Node::ClusteredConnectionStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-status")
    {
        for(auto const & c : node_status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetworkTopology::Topology::Node::ClusteredConnectionStatus::NodeStatus>();
        c->parent = this;
        node_status.push_back(c);
        return c;
    }

    return nullptr;
}

NetworkTopology::Topology::Node::ClusteredConnectionStatus::NodeStatus::NodeStatus()
    :
    node{YType::str, "node"},
    status{YType::enumeration, "status"}
{
    yang_name = "node-status"; yang_parent_name = "clustered-connection-status"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::Node::ClusteredConnectionStatus::NodeStatus::~NodeStatus()
{
}

std::string NetworkTopology::Topology::Node::ClusteredConnectionStatus::NodeStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-status";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::Node::ClusteredConnectionStatus::NodeStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

NetworkTopology::Topology::Node::AvailableCapabilities::AvailableCapabilities()
{
    yang_name = "available-capabilities"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::Node::AvailableCapabilities::~AvailableCapabilities()
{
}

std::string NetworkTopology::Topology::Node::AvailableCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf-node-topology:available-capabilities";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::Node::AvailableCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "available-capability")
    {
        for(auto const & c : available_capability)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetworkTopology::Topology::Node::AvailableCapabilities::AvailableCapability>();
        c->parent = this;
        available_capability.push_back(c);
        return c;
    }

    return nullptr;
}

NetworkTopology::Topology::Node::AvailableCapabilities::AvailableCapability::AvailableCapability()
    :
    capability{YType::str, "capability"},
    capability_origin{YType::enumeration, "capability-origin"}
{
    yang_name = "available-capability"; yang_parent_name = "available-capabilities"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::Node::AvailableCapabilities::AvailableCapability::~AvailableCapability()
{
}

std::string NetworkTopology::Topology::Node::AvailableCapabilities::AvailableCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "available-capability";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::Node::AvailableCapabilities::AvailableCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

NetworkTopology::Topology::Node::UnavailableCapabilities::UnavailableCapabilities()
{
    yang_name = "unavailable-capabilities"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::Node::UnavailableCapabilities::~UnavailableCapabilities()
{
}

std::string NetworkTopology::Topology::Node::UnavailableCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf-node-topology:unavailable-capabilities";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::Node::UnavailableCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unavailable-capability")
    {
        for(auto const & c : unavailable_capability)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetworkTopology::Topology::Node::UnavailableCapabilities::UnavailableCapability>();
        c->parent = this;
        unavailable_capability.push_back(c);
        return c;
    }

    return nullptr;
}

NetworkTopology::Topology::Node::UnavailableCapabilities::UnavailableCapability::UnavailableCapability()
    :
    capability{YType::str, "capability"},
    failure_reason{YType::enumeration, "failure-reason"}
{
    yang_name = "unavailable-capability"; yang_parent_name = "unavailable-capabilities"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::Node::UnavailableCapabilities::UnavailableCapability::~UnavailableCapability()
{
}

std::string NetworkTopology::Topology::Node::UnavailableCapabilities::UnavailableCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unavailable-capability";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::Node::UnavailableCapabilities::UnavailableCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

NetworkTopology::Topology::Node::PassThrough::PassThrough()
{
    yang_name = "pass-through"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::Node::PassThrough::~PassThrough()
{
}

std::string NetworkTopology::Topology::Node::PassThrough::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf-node-topology:pass-through";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::Node::PassThrough::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

NetworkTopology::Topology::Node::YangLibrary::YangLibrary()
    :
    password{YType::str, "password"},
    username{YType::str, "username"},
    yang_library_url{YType::str, "yang-library-url"}
{
    yang_name = "yang-library"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::Node::YangLibrary::~YangLibrary()
{
}

std::string NetworkTopology::Topology::Node::YangLibrary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf-node-topology:yang-library";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::Node::YangLibrary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

NetworkTopology::Topology::Link::Link()
    :
    link_id{YType::str, "link-id"}
    ,
    destination(std::make_shared<NetworkTopology::Topology::Link::Destination>())
	,source(std::make_shared<NetworkTopology::Topology::Link::Source>())
{
    destination->parent = this;

    source->parent = this;

    yang_name = "link"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::Link::~Link()
{
}

std::string NetworkTopology::Topology::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[link-id='" <<link_id <<"']";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<NetworkTopology::Topology::Link::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<NetworkTopology::Topology::Link::Source>();
        }
        return source;
    }

    if(child_yang_name == "supporting-link")
    {
        for(auto const & c : supporting_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetworkTopology::Topology::Link::SupportingLink>();
        c->parent = this;
        supporting_link.push_back(c);
        return c;
    }

    return nullptr;
}

NetworkTopology::Topology::Link::Source::Source()
    :
    source_node{YType::str, "source-node"},
    source_tp{YType::str, "source-tp"}
{
    yang_name = "source"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::Link::Source::~Source()
{
}

std::string NetworkTopology::Topology::Link::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::Link::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

NetworkTopology::Topology::Link::Destination::Destination()
    :
    dest_node{YType::str, "dest-node"},
    dest_tp{YType::str, "dest-tp"}
{
    yang_name = "destination"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::Link::Destination::~Destination()
{
}

std::string NetworkTopology::Topology::Link::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::Link::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

NetworkTopology::Topology::Link::SupportingLink::SupportingLink()
    :
    link_ref{YType::str, "link-ref"}
{
    yang_name = "supporting-link"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

NetworkTopology::Topology::Link::SupportingLink::~SupportingLink()
{
}

std::string NetworkTopology::Topology::Link::SupportingLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supporting-link" <<"[link-ref='" <<link_ref <<"']";

    return path_buffer.str();

}

std::shared_ptr<Entity> NetworkTopology::Topology::Link::SupportingLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

const Enum::YLeaf NetworkTopology::Topology::Node::ConnectionStatus::connecting {0, "connecting"};
const Enum::YLeaf NetworkTopology::Topology::Node::ConnectionStatus::connected {1, "connected"};
const Enum::YLeaf NetworkTopology::Topology::Node::ConnectionStatus::unable_to_connect {2, "unable-to-connect"};

const Enum::YLeaf NetworkTopology::Topology::Node::ClusteredConnectionStatus::NodeStatus::Status::connected {0, "connected"};
const Enum::YLeaf NetworkTopology::Topology::Node::ClusteredConnectionStatus::NodeStatus::Status::unavailable {1, "unavailable"};
const Enum::YLeaf NetworkTopology::Topology::Node::ClusteredConnectionStatus::NodeStatus::Status::failed {2, "failed"};

const Enum::YLeaf NetworkTopology::Topology::Node::AvailableCapabilities::AvailableCapability::CapabilityOrigin::user_defined {0, "user-defined"};
const Enum::YLeaf NetworkTopology::Topology::Node::AvailableCapabilities::AvailableCapability::CapabilityOrigin::device_advertised {1, "device-advertised"};

const Enum::YLeaf NetworkTopology::Topology::Node::UnavailableCapabilities::UnavailableCapability::FailureReason::missing_source {0, "missing-source"};
const Enum::YLeaf NetworkTopology::Topology::Node::UnavailableCapabilities::UnavailableCapability::FailureReason::unable_to_resolve {1, "unable-to-resolve"};


}
}

