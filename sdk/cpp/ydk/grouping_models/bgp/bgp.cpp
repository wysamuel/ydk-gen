#include <memory>
#include <vector>
#include <string>
#include "ydk/models/bgp/bgp.h"

namespace ydk {
namespace bgp {
BgpNeighborPeerGroup_Config_Grouping::BgpNeighborPeerGroup_Config_Grouping() {

}

BgpNeighbor_Config_Grouping::BgpNeighbor_Config_Grouping() {

}

BgpPeerGroup_Grouping::PeerGroup::PeerGroup() {

}

BgpPeerGroup_Grouping::BgpPeerGroup_Grouping() {

}

BgpNeighborGracefulRestart_Config_Grouping::BgpNeighborGracefulRestart_Config_Grouping() {

}

BgpGlobal_Config_Grouping::BgpGlobal_Config_Grouping() {

}

BgpNeighborTimers_Config_Grouping::BgpNeighborTimers_Config_Grouping() {

}

BgpPeerGroupPeerGroupName_Config_Grouping::BgpPeerGroupPeerGroupName_Config_Grouping() {

}

BgpNeighborAsPathOptions_Config_Grouping::BgpNeighborAsPathOptions_Config_Grouping() {

}

BgpNeighborNeighborAddress_Config_Grouping::BgpNeighborNeighborAddress_Config_Grouping() {

}

BgpGracefulRestart_Grouping::GracefulRestart::Config::Config() {

}

BgpGracefulRestart_Grouping::GracefulRestart::State::State() {

}

BgpGracefulRestart_Grouping::GracefulRestart::GracefulRestart() {
    config = std::make_unique<BgpGracefulRestart_Grouping::GracefulRestart::Config>();
    state = std::make_unique<BgpGracefulRestart_Grouping::GracefulRestart::State>();

}

BgpGracefulRestart_Grouping::BgpGracefulRestart_Grouping() {
    graceful_restart = std::make_unique<BgpGracefulRestart_Grouping::GracefulRestart>();

}

BgpConfederation_Config_Grouping::BgpConfederation_Config_Grouping() {

}

BgpNeighbors_Grouping::Neighbor::Neighbor() {

}

BgpNeighbors_Grouping::BgpNeighbors_Grouping() {

}

BgpGlobalBase_Grouping::Config::Config() {

}

BgpGlobalBase_Grouping::State::State() {

}

BgpGlobalBase_Grouping::DefaultRouteDistance::Config::Config() {

}

BgpGlobalBase_Grouping::DefaultRouteDistance::State::State() {

}

BgpGlobalBase_Grouping::DefaultRouteDistance::DefaultRouteDistance() {
    config = std::make_unique<BgpGlobalBase_Grouping::DefaultRouteDistance::Config>();
    state = std::make_unique<BgpGlobalBase_Grouping::DefaultRouteDistance::State>();

}

BgpGlobalBase_Grouping::Confederation::Config::Config() {

}

BgpGlobalBase_Grouping::Confederation::State::State() {

}

BgpGlobalBase_Grouping::Confederation::Confederation() {
    config = std::make_unique<BgpGlobalBase_Grouping::Confederation::Config>();
    state = std::make_unique<BgpGlobalBase_Grouping::Confederation::State>();

}

BgpGlobalBase_Grouping::AfiSafis::AfiSafis() {

}

BgpGlobalBase_Grouping::BgpGlobalBase_Grouping() {
    afi_safis = std::make_unique<BgpGlobalBase_Grouping::AfiSafis>();
    confederation = std::make_unique<BgpGlobalBase_Grouping::Confederation>();
    config = std::make_unique<BgpGlobalBase_Grouping::Config>();
    default_route_distance = std::make_unique<BgpGlobalBase_Grouping::DefaultRouteDistance>();
    state = std::make_unique<BgpGlobalBase_Grouping::State>();

}

BgpDefaultRouteDistance_Config_Grouping::BgpDefaultRouteDistance_Config_Grouping() {

}

BgpNeighborLoggingOptions_Config_Grouping::BgpNeighborLoggingOptions_Config_Grouping() {

}

BgpNeighborErrorHandling_Config_Grouping::BgpNeighborErrorHandling_Config_Grouping() {

}

BgpNeighborAddPaths_Config_Grouping::BgpNeighborAddPaths_Config_Grouping() {

}

BgpNeighborRouteReflector_Config_Grouping::BgpNeighborRouteReflector_Config_Grouping() {

}

BgpNeighborGroup_Grouping::Config::Config() {

}

BgpNeighborGroup_Grouping::State::State() {

}

BgpNeighborGroup_Grouping::Timers::Config::Config() {

}

BgpNeighborGroup_Grouping::Timers::State::State() {

}

BgpNeighborGroup_Grouping::Timers::Timers() {
    config = std::make_unique<BgpNeighborGroup_Grouping::Timers::Config>();
    state = std::make_unique<BgpNeighborGroup_Grouping::Timers::State>();

}

BgpNeighborGroup_Grouping::Transport::Config::Config() {

}

BgpNeighborGroup_Grouping::Transport::State::State() {

}

BgpNeighborGroup_Grouping::Transport::Transport() {
    config = std::make_unique<BgpNeighborGroup_Grouping::Transport::Config>();
    state = std::make_unique<BgpNeighborGroup_Grouping::Transport::State>();

}

BgpNeighborGroup_Grouping::ErrorHandling::Config::Config() {

}

BgpNeighborGroup_Grouping::ErrorHandling::State::State() {

}

BgpNeighborGroup_Grouping::ErrorHandling::ErrorHandling() {
    config = std::make_unique<BgpNeighborGroup_Grouping::ErrorHandling::Config>();
    state = std::make_unique<BgpNeighborGroup_Grouping::ErrorHandling::State>();

}

BgpNeighborGroup_Grouping::LoggingOptions::Config::Config() {

}

BgpNeighborGroup_Grouping::LoggingOptions::State::State() {

}

BgpNeighborGroup_Grouping::LoggingOptions::LoggingOptions() {
    config = std::make_unique<BgpNeighborGroup_Grouping::LoggingOptions::Config>();
    state = std::make_unique<BgpNeighborGroup_Grouping::LoggingOptions::State>();

}

BgpNeighborGroup_Grouping::EbgpMultihop::Config::Config() {

}

BgpNeighborGroup_Grouping::EbgpMultihop::State::State() {

}

BgpNeighborGroup_Grouping::EbgpMultihop::EbgpMultihop() {
    config = std::make_unique<BgpNeighborGroup_Grouping::EbgpMultihop::Config>();
    state = std::make_unique<BgpNeighborGroup_Grouping::EbgpMultihop::State>();

}

BgpNeighborGroup_Grouping::RouteReflector::Config::Config() {

}

BgpNeighborGroup_Grouping::RouteReflector::State::State() {

}

BgpNeighborGroup_Grouping::RouteReflector::RouteReflector() {
    config = std::make_unique<BgpNeighborGroup_Grouping::RouteReflector::Config>();
    state = std::make_unique<BgpNeighborGroup_Grouping::RouteReflector::State>();

}

BgpNeighborGroup_Grouping::AsPathOptions::Config::Config() {

}

BgpNeighborGroup_Grouping::AsPathOptions::State::State() {

}

BgpNeighborGroup_Grouping::AsPathOptions::AsPathOptions() {
    config = std::make_unique<BgpNeighborGroup_Grouping::AsPathOptions::Config>();
    state = std::make_unique<BgpNeighborGroup_Grouping::AsPathOptions::State>();

}

BgpNeighborGroup_Grouping::AddPaths::Config::Config() {

}

BgpNeighborGroup_Grouping::AddPaths::State::State() {

}

BgpNeighborGroup_Grouping::AddPaths::AddPaths() {
    config = std::make_unique<BgpNeighborGroup_Grouping::AddPaths::Config>();
    state = std::make_unique<BgpNeighborGroup_Grouping::AddPaths::State>();

}

BgpNeighborGroup_Grouping::AfiSafis::AfiSafis() {

}

BgpNeighborGroup_Grouping::BgpNeighborGroup_Grouping() {
    add_paths = std::make_unique<BgpNeighborGroup_Grouping::AddPaths>();
    afi_safis = std::make_unique<BgpNeighborGroup_Grouping::AfiSafis>();
    as_path_options = std::make_unique<BgpNeighborGroup_Grouping::AsPathOptions>();
    config = std::make_unique<BgpNeighborGroup_Grouping::Config>();
    ebgp_multihop = std::make_unique<BgpNeighborGroup_Grouping::EbgpMultihop>();
    error_handling = std::make_unique<BgpNeighborGroup_Grouping::ErrorHandling>();
    logging_options = std::make_unique<BgpNeighborGroup_Grouping::LoggingOptions>();
    route_reflector = std::make_unique<BgpNeighborGroup_Grouping::RouteReflector>();
    state = std::make_unique<BgpNeighborGroup_Grouping::State>();
    timers = std::make_unique<BgpNeighborGroup_Grouping::Timers>();
    transport = std::make_unique<BgpNeighborGroup_Grouping::Transport>();

}

BgpNeighborMultihop_Config_Grouping::BgpNeighborMultihop_Config_Grouping() {

}

BgpNeighborTransport_Config_Grouping::BgpNeighborTransport_Config_Grouping() {

}

Bgp::Global::Global() {

}

Bgp::Neighbors::Neighbors() {

}

Bgp::PeerGroups::PeerGroups() {

}

Bgp::Bgp() {
    global_ = std::make_unique<Bgp::Global>();
    neighbors = std::make_unique<Bgp::Neighbors>();
    peer_groups = std::make_unique<Bgp::PeerGroups>();

}


};
};
