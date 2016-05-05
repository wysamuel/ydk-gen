#include <memory>
#include <vector>
#include <string>
#include "ydk/models/bgp_multiprotocol/bgp_multiprotocol.h"

namespace ydk {
namespace bgp_multiprotocol {
BgpRouteSelectionOptions_Grouping::RouteSelectionOptions::Config::Config() {

}

BgpRouteSelectionOptions_Grouping::RouteSelectionOptions::State::State() {

}

BgpRouteSelectionOptions_Grouping::RouteSelectionOptions::RouteSelectionOptions() {
    config = std::make_unique<BgpRouteSelectionOptions_Grouping::RouteSelectionOptions::Config>();
    state = std::make_unique<BgpRouteSelectionOptions_Grouping::RouteSelectionOptions::State>();

}

BgpRouteSelectionOptions_Grouping::BgpRouteSelectionOptions_Grouping() {
    route_selection_options = std::make_unique<BgpRouteSelectionOptions_Grouping::RouteSelectionOptions>();

}

Ipv6UnicastGroup_Grouping::Ipv6Unicast::Ipv6Unicast() {

}

Ipv6UnicastGroup_Grouping::Ipv6UnicastGroup_Grouping() {
    ipv6_unicast = std::make_unique<Ipv6UnicastGroup_Grouping::Ipv6Unicast>();

}

L3VpnIpv6MulticastGroup_Grouping::L3VpnIpv6Multicast::L3VpnIpv6Multicast() {

}

L3VpnIpv6MulticastGroup_Grouping::L3VpnIpv6MulticastGroup_Grouping() {
    l3vpn_ipv6_multicast = std::make_unique<L3VpnIpv6MulticastGroup_Grouping::L3VpnIpv6Multicast>();

}

L3VpnIpv4Ipv6UnicastCommon_Grouping::L3VpnIpv4Ipv6UnicastCommon_Grouping() {

}

L3VpnIpv4Ipv6MulticastCommon_Grouping::L3VpnIpv4Ipv6MulticastCommon_Grouping() {

}

BgpGlobalAfiSafi_Grouping::BgpGlobalAfiSafi_Grouping() {

}

Ipv4Ipv6UnicastCommon_Config_Grouping::Ipv4Ipv6UnicastCommon_Config_Grouping() {

}

L2VpnEvpnGroup_Grouping::L2VpnEvpn::L2VpnEvpn() {

}

L2VpnEvpnGroup_Grouping::L2VpnEvpnGroup_Grouping() {
    l2vpn_evpn = std::make_unique<L2VpnEvpnGroup_Grouping::L2VpnEvpn>();

}

Ipv4UnicastGroup_Grouping::Ipv4Unicast::Ipv4Unicast() {

}

Ipv4UnicastGroup_Grouping::Ipv4UnicastGroup_Grouping() {
    ipv4_unicast = std::make_unique<Ipv4UnicastGroup_Grouping::Ipv4Unicast>();

}

BgpCommonAfiSafiList_Grouping::AfiSafi::GracefulRestart::Config::Config() {

}

BgpCommonAfiSafiList_Grouping::AfiSafi::GracefulRestart::State::State() {

}

BgpCommonAfiSafiList_Grouping::AfiSafi::GracefulRestart::GracefulRestart() {
    config = std::make_unique<BgpCommonAfiSafiList_Grouping::AfiSafi::GracefulRestart::Config>();
    state = std::make_unique<BgpCommonAfiSafiList_Grouping::AfiSafi::GracefulRestart::State>();

}

BgpCommonAfiSafiList_Grouping::AfiSafi::Config::Config() {

}

BgpCommonAfiSafiList_Grouping::AfiSafi::State::State() {

}

BgpCommonAfiSafiList_Grouping::AfiSafi::AfiSafi() {
    config = std::make_unique<BgpCommonAfiSafiList_Grouping::AfiSafi::Config>();
    graceful_restart = std::make_unique<BgpCommonAfiSafiList_Grouping::AfiSafi::GracefulRestart>();
    state = std::make_unique<BgpCommonAfiSafiList_Grouping::AfiSafi::State>();

}

BgpCommonAfiSafiList_Grouping::BgpCommonAfiSafiList_Grouping() {

}

BgpRouteSelectionOptions_Config_Grouping::BgpRouteSelectionOptions_Config_Grouping() {

}

L3VpnIpv6UnicastGroup_Grouping::L3VpnIpv6Unicast::L3VpnIpv6Unicast() {

}

L3VpnIpv6UnicastGroup_Grouping::L3VpnIpv6UnicastGroup_Grouping() {
    l3vpn_ipv6_unicast = std::make_unique<L3VpnIpv6UnicastGroup_Grouping::L3VpnIpv6Unicast>();

}

BgpUseMultiplePathsEbgp_Config_Grouping::BgpUseMultiplePathsEbgp_Config_Grouping() {

}

L3VpnIpv4MulticastGroup_Grouping::L3VpnIpv4Multicast::L3VpnIpv4Multicast() {

}

L3VpnIpv4MulticastGroup_Grouping::L3VpnIpv4MulticastGroup_Grouping() {
    l3vpn_ipv4_multicast = std::make_unique<L3VpnIpv4MulticastGroup_Grouping::L3VpnIpv4Multicast>();

}

Ipv4Ipv6UnicastCommon_Grouping::Config::Config() {

}

Ipv4Ipv6UnicastCommon_Grouping::State::State() {

}

Ipv4Ipv6UnicastCommon_Grouping::Ipv4Ipv6UnicastCommon_Grouping() {
    config = std::make_unique<Ipv4Ipv6UnicastCommon_Grouping::Config>();
    state = std::make_unique<Ipv4Ipv6UnicastCommon_Grouping::State>();

}

BgpUseMultiplePaths_Config_Grouping::BgpUseMultiplePaths_Config_Grouping() {

}

BgpGroupAfiSafi_Grouping::BgpGroupAfiSafi_Grouping() {

}

Ipv4LabelledUnicastGroup_Grouping::Ipv4LabelledUnicast::Ipv4LabelledUnicast() {

}

Ipv4LabelledUnicastGroup_Grouping::Ipv4LabelledUnicastGroup_Grouping() {
    ipv4_labelled_unicast = std::make_unique<Ipv4LabelledUnicastGroup_Grouping::Ipv4LabelledUnicast>();

}

BgpAfiSafi_Config_Grouping::BgpAfiSafi_Config_Grouping() {

}

AllAfiSafiCommon_Grouping::PrefixLimit::Config::Config() {

}

AllAfiSafiCommon_Grouping::PrefixLimit::State::State() {

}

AllAfiSafiCommon_Grouping::PrefixLimit::PrefixLimit() {
    config = std::make_unique<AllAfiSafiCommon_Grouping::PrefixLimit::Config>();
    state = std::make_unique<AllAfiSafiCommon_Grouping::PrefixLimit::State>();

}

AllAfiSafiCommon_Grouping::AllAfiSafiCommon_Grouping() {
    prefix_limit = std::make_unique<AllAfiSafiCommon_Grouping::PrefixLimit>();

}

BgpAfiSafiGracefulRestart_Config_Grouping::BgpAfiSafiGracefulRestart_Config_Grouping() {

}

L2VpnVplsGroup_Grouping::L2VpnVpls::L2VpnVpls() {

}

L2VpnVplsGroup_Grouping::L2VpnVplsGroup_Grouping() {
    l2vpn_vpls = std::make_unique<L2VpnVplsGroup_Grouping::L2VpnVpls>();

}

L3VpnIpv4UnicastGroup_Grouping::L3VpnIpv4Unicast::L3VpnIpv4Unicast() {

}

L3VpnIpv4UnicastGroup_Grouping::L3VpnIpv4UnicastGroup_Grouping() {
    l3vpn_ipv4_unicast = std::make_unique<L3VpnIpv4UnicastGroup_Grouping::L3VpnIpv4Unicast>();

}

L2VpnCommon_Grouping::L2VpnCommon_Grouping() {

}

BgpUseMultiplePathsIbgp_Config_Grouping::BgpUseMultiplePathsIbgp_Config_Grouping() {

}

AllAfiSafiCommonPrefixLimit_Config_Grouping::AllAfiSafiCommonPrefixLimit_Config_Grouping() {

}

Ipv6LabelledUnicastGroup_Grouping::Ipv6LabelledUnicast::Ipv6LabelledUnicast() {

}

Ipv6LabelledUnicastGroup_Grouping::Ipv6LabelledUnicastGroup_Grouping() {
    ipv6_labelled_unicast = std::make_unique<Ipv6LabelledUnicastGroup_Grouping::Ipv6LabelledUnicast>();

}

BgpUseMultiplePaths_Grouping::UseMultiplePaths::Config::Config() {

}

BgpUseMultiplePaths_Grouping::UseMultiplePaths::State::State() {

}

BgpUseMultiplePaths_Grouping::UseMultiplePaths::Ebgp::Config::Config() {

}

BgpUseMultiplePaths_Grouping::UseMultiplePaths::Ebgp::State::State() {

}

BgpUseMultiplePaths_Grouping::UseMultiplePaths::Ebgp::Ebgp() {
    config = std::make_unique<BgpUseMultiplePaths_Grouping::UseMultiplePaths::Ebgp::Config>();
    state = std::make_unique<BgpUseMultiplePaths_Grouping::UseMultiplePaths::Ebgp::State>();

}

BgpUseMultiplePaths_Grouping::UseMultiplePaths::Ibgp::Config::Config() {

}

BgpUseMultiplePaths_Grouping::UseMultiplePaths::Ibgp::State::State() {

}

BgpUseMultiplePaths_Grouping::UseMultiplePaths::Ibgp::Ibgp() {
    config = std::make_unique<BgpUseMultiplePaths_Grouping::UseMultiplePaths::Ibgp::Config>();
    state = std::make_unique<BgpUseMultiplePaths_Grouping::UseMultiplePaths::Ibgp::State>();

}

BgpUseMultiplePaths_Grouping::UseMultiplePaths::UseMultiplePaths() {
    config = std::make_unique<BgpUseMultiplePaths_Grouping::UseMultiplePaths::Config>();
    ebgp = std::make_unique<BgpUseMultiplePaths_Grouping::UseMultiplePaths::Ebgp>();
    ibgp = std::make_unique<BgpUseMultiplePaths_Grouping::UseMultiplePaths::Ibgp>();
    state = std::make_unique<BgpUseMultiplePaths_Grouping::UseMultiplePaths::State>();

}

BgpUseMultiplePaths_Grouping::BgpUseMultiplePaths_Grouping() {
    use_multiple_paths = std::make_unique<BgpUseMultiplePaths_Grouping::UseMultiplePaths>();

}

BgpUseMultiplePathsEbgpAsOptions_Config_Grouping::BgpUseMultiplePathsEbgpAsOptions_Config_Grouping() {

}

BgpUseMultiplePathsNeighbor_Grouping::UseMultiplePaths::Config::Config() {

}

BgpUseMultiplePathsNeighbor_Grouping::UseMultiplePaths::State::State() {

}

BgpUseMultiplePathsNeighbor_Grouping::UseMultiplePaths::Ebgp::Config::Config() {

}

BgpUseMultiplePathsNeighbor_Grouping::UseMultiplePaths::Ebgp::State::State() {

}

BgpUseMultiplePathsNeighbor_Grouping::UseMultiplePaths::Ebgp::Ebgp() {
    config = std::make_unique<BgpUseMultiplePathsNeighbor_Grouping::UseMultiplePaths::Ebgp::Config>();
    state = std::make_unique<BgpUseMultiplePathsNeighbor_Grouping::UseMultiplePaths::Ebgp::State>();

}

BgpUseMultiplePathsNeighbor_Grouping::UseMultiplePaths::UseMultiplePaths() {
    config = std::make_unique<BgpUseMultiplePathsNeighbor_Grouping::UseMultiplePaths::Config>();
    ebgp = std::make_unique<BgpUseMultiplePathsNeighbor_Grouping::UseMultiplePaths::Ebgp>();
    state = std::make_unique<BgpUseMultiplePathsNeighbor_Grouping::UseMultiplePaths::State>();

}

BgpUseMultiplePathsNeighbor_Grouping::BgpUseMultiplePathsNeighbor_Grouping() {
    use_multiple_paths = std::make_unique<BgpUseMultiplePathsNeighbor_Grouping::UseMultiplePaths>();

}


};
};
