#include <memory>
#include <vector>
#include <string>
#include "ydk/models/bgp/bgp.h"
#include "ydk/make_unique.h"

namespace ydk {
namespace bgp {
Bgp::Global::Config::Config() {

}

Bgp::Global::State::State() {

}

Bgp::Global::RouteSelectionOptions::Config::Config() {

}

Bgp::Global::RouteSelectionOptions::State::State() {

}

Bgp::Global::RouteSelectionOptions::RouteSelectionOptions() {
    config = std::make_unique<Bgp::Global::RouteSelectionOptions::Config>();
    state = std::make_unique<Bgp::Global::RouteSelectionOptions::State>();

}

Bgp::Global::DefaultRouteDistance::Config::Config() {

}

Bgp::Global::DefaultRouteDistance::State::State() {

}

Bgp::Global::DefaultRouteDistance::DefaultRouteDistance() {
    config = std::make_unique<Bgp::Global::DefaultRouteDistance::Config>();
    state = std::make_unique<Bgp::Global::DefaultRouteDistance::State>();

}

Bgp::Global::Confederation::Config::Config() {

}

Bgp::Global::Confederation::State::State() {

}

Bgp::Global::Confederation::Confederation() {
    config = std::make_unique<Bgp::Global::Confederation::Config>();
    state = std::make_unique<Bgp::Global::Confederation::State>();

}

Bgp::Global::UseMultiplePaths::Config::Config() {

}

Bgp::Global::UseMultiplePaths::State::State() {

}

Bgp::Global::UseMultiplePaths::Ebgp::Config::Config() {

}

Bgp::Global::UseMultiplePaths::Ebgp::State::State() {

}

Bgp::Global::UseMultiplePaths::Ebgp::Ebgp() {
    config = std::make_unique<Bgp::Global::UseMultiplePaths::Ebgp::Config>();
    state = std::make_unique<Bgp::Global::UseMultiplePaths::Ebgp::State>();

}

Bgp::Global::UseMultiplePaths::Ibgp::Config::Config() {

}

Bgp::Global::UseMultiplePaths::Ibgp::State::State() {

}

Bgp::Global::UseMultiplePaths::Ibgp::Ibgp() {
    config = std::make_unique<Bgp::Global::UseMultiplePaths::Ibgp::Config>();
    state = std::make_unique<Bgp::Global::UseMultiplePaths::Ibgp::State>();

}

Bgp::Global::UseMultiplePaths::UseMultiplePaths() {
    config = std::make_unique<Bgp::Global::UseMultiplePaths::Config>();
    ebgp = std::make_unique<Bgp::Global::UseMultiplePaths::Ebgp>();
    ibgp = std::make_unique<Bgp::Global::UseMultiplePaths::Ibgp>();
    state = std::make_unique<Bgp::Global::UseMultiplePaths::State>();

}

Bgp::Global::GracefulRestart::Config::Config() {

}

Bgp::Global::GracefulRestart::State::State() {

}

Bgp::Global::GracefulRestart::GracefulRestart() {
    config = std::make_unique<Bgp::Global::GracefulRestart::Config>();
    state = std::make_unique<Bgp::Global::GracefulRestart::State>();

}

Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::GracefulRestart() {
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State>();

}

Bgp::Global::AfiSafis::AfiSafi::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::ApplyPolicy() {
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State>();

}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>();

}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Ipv4Unicast() {
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config>();
    prefix_limit = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State>();

}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>();

}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Ipv6Unicast() {
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config>();
    prefix_limit = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State>();

}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State>();

}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::Ipv4LabelledUnicast() {
    prefix_limit = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit>();

}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State>();

}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::Ipv6LabelledUnicast() {
    prefix_limit = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit>();

}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State>();

}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::L3VpnIpv4Unicast() {
    prefix_limit = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit>();

}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State>();

}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::L3VpnIpv6Unicast() {
    prefix_limit = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit>();

}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State>();

}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::L3VpnIpv4Multicast() {
    prefix_limit = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit>();

}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State>();

}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::L3VpnIpv6Multicast() {
    prefix_limit = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit>();

}

Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State>();

}

Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::L2VpnVpls() {
    prefix_limit = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit>();

}

Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State>();

}

Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::L2VpnEvpn() {
    prefix_limit = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit>();

}

Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::RouteSelectionOptions() {
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State>();

}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Ebgp() {
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State>();

}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::Config() {

}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::State() {

}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Ibgp() {
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State>();

}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::UseMultiplePaths() {
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config>();
    ebgp = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp>();
    ibgp = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State>();

}

Bgp::Global::AfiSafis::AfiSafi::AfiSafi() {
    apply_policy = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy>();
    config = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Config>();
    graceful_restart = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::GracefulRestart>();
    ipv4_labelled_unicast = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast>();
    ipv4_unicast = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast>();
    ipv6_labelled_unicast = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast>();
    ipv6_unicast = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast>();
    l2vpn_evpn = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn>();
    l2vpn_vpls = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls>();
    l3vpn_ipv4_multicast = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast>();
    l3vpn_ipv4_unicast = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast>();
    l3vpn_ipv6_multicast = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast>();
    l3vpn_ipv6_unicast = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast>();
    route_selection_options = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions>();
    state = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::State>();
    use_multiple_paths = std::make_unique<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths>();

}

Bgp::Global::AfiSafis::AfiSafis() {

}

Bgp::Global::ApplyPolicy::Config::Config() {

}

Bgp::Global::ApplyPolicy::State::State() {

}

Bgp::Global::ApplyPolicy::ApplyPolicy() {
    config = std::make_unique<Bgp::Global::ApplyPolicy::Config>();
    state = std::make_unique<Bgp::Global::ApplyPolicy::State>();

}

Bgp::Global::Global() {
    afi_safis = std::make_unique<Bgp::Global::AfiSafis>();
    apply_policy = std::make_unique<Bgp::Global::ApplyPolicy>();
    confederation = std::make_unique<Bgp::Global::Confederation>();
    config = std::make_unique<Bgp::Global::Config>();
    default_route_distance = std::make_unique<Bgp::Global::DefaultRouteDistance>();
    graceful_restart = std::make_unique<Bgp::Global::GracefulRestart>();
    route_selection_options = std::make_unique<Bgp::Global::RouteSelectionOptions>();
    state = std::make_unique<Bgp::Global::State>();
    use_multiple_paths = std::make_unique<Bgp::Global::UseMultiplePaths>();

}

Bgp::Neighbors::Neighbor::Config::Config() {

}

Bgp::Neighbors::Neighbor::State::Messages::Sent::Sent() {

}

Bgp::Neighbors::Neighbor::State::Messages::Received::Received() {

}

Bgp::Neighbors::Neighbor::State::Messages::Messages() {
    received = std::make_unique<Bgp::Neighbors::Neighbor::State::Messages::Received>();
    sent = std::make_unique<Bgp::Neighbors::Neighbor::State::Messages::Sent>();

}

Bgp::Neighbors::Neighbor::State::Queues::Queues() {

}

Bgp::Neighbors::Neighbor::State::State() {
    messages = std::make_unique<Bgp::Neighbors::Neighbor::State::Messages>();
    queues = std::make_unique<Bgp::Neighbors::Neighbor::State::Queues>();

}

Bgp::Neighbors::Neighbor::Timers::Config::Config() {

}

Bgp::Neighbors::Neighbor::Timers::State::State() {

}

Bgp::Neighbors::Neighbor::Timers::Timers() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::Timers::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::Timers::State>();

}

Bgp::Neighbors::Neighbor::Transport::Config::Config() {

}

Bgp::Neighbors::Neighbor::Transport::State::State() {

}

Bgp::Neighbors::Neighbor::Transport::Transport() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::Transport::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::Transport::State>();

}

Bgp::Neighbors::Neighbor::ErrorHandling::Config::Config() {

}

Bgp::Neighbors::Neighbor::ErrorHandling::State::State() {

}

Bgp::Neighbors::Neighbor::ErrorHandling::ErrorHandling() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::ErrorHandling::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::ErrorHandling::State>();

}

Bgp::Neighbors::Neighbor::LoggingOptions::Config::Config() {

}

Bgp::Neighbors::Neighbor::LoggingOptions::State::State() {

}

Bgp::Neighbors::Neighbor::LoggingOptions::LoggingOptions() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::LoggingOptions::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::LoggingOptions::State>();

}

Bgp::Neighbors::Neighbor::EbgpMultihop::Config::Config() {

}

Bgp::Neighbors::Neighbor::EbgpMultihop::State::State() {

}

Bgp::Neighbors::Neighbor::EbgpMultihop::EbgpMultihop() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::EbgpMultihop::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::EbgpMultihop::State>();

}

Bgp::Neighbors::Neighbor::RouteReflector::Config::Config() {

}

Bgp::Neighbors::Neighbor::RouteReflector::State::State() {

}

Bgp::Neighbors::Neighbor::RouteReflector::RouteReflector() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::RouteReflector::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::RouteReflector::State>();

}

Bgp::Neighbors::Neighbor::AsPathOptions::Config::Config() {

}

Bgp::Neighbors::Neighbor::AsPathOptions::State::State() {

}

Bgp::Neighbors::Neighbor::AsPathOptions::AsPathOptions() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::AsPathOptions::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AsPathOptions::State>();

}

Bgp::Neighbors::Neighbor::AddPaths::Config::Config() {

}

Bgp::Neighbors::Neighbor::AddPaths::State::State() {

}

Bgp::Neighbors::Neighbor::AddPaths::AddPaths() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::AddPaths::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AddPaths::State>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::Config() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::State() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::GracefulRestart() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::Config() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::Prefixes() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::State() {
    prefixes = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::Config() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::State() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::ApplyPolicy() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::Config() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::State() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::Config() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::State() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Ipv4Unicast() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config>();
    prefix_limit = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::Config() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::State() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::Config() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::State() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Ipv6Unicast() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config>();
    prefix_limit = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config::Config() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State::State() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::Ipv4LabelledUnicast() {
    prefix_limit = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config::Config() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State::State() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::Ipv6LabelledUnicast() {
    prefix_limit = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::Config() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::State() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::L3VpnIpv4Unicast() {
    prefix_limit = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::Config() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::State() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::L3VpnIpv6Unicast() {
    prefix_limit = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::Config() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::State() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::L3VpnIpv4Multicast() {
    prefix_limit = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::Config() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::State() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::L3VpnIpv6Multicast() {
    prefix_limit = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::Config() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::State() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::L2VpnVpls() {
    prefix_limit = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::Config() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::State() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::L2VpnEvpn() {
    prefix_limit = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config::Config() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State::State() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::Config() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::State() {

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Ebgp() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::UseMultiplePaths() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config>();
    ebgp = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::AfiSafi() {
    apply_policy = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy>();
    config = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config>();
    graceful_restart = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart>();
    ipv4_labelled_unicast = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast>();
    ipv4_unicast = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast>();
    ipv6_labelled_unicast = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast>();
    ipv6_unicast = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast>();
    l2vpn_evpn = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn>();
    l2vpn_vpls = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls>();
    l3vpn_ipv4_multicast = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast>();
    l3vpn_ipv4_unicast = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast>();
    l3vpn_ipv6_multicast = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast>();
    l3vpn_ipv6_unicast = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State>();
    use_multiple_paths = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths>();

}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafis() {

}

Bgp::Neighbors::Neighbor::GracefulRestart::Config::Config() {

}

Bgp::Neighbors::Neighbor::GracefulRestart::State::State() {

}

Bgp::Neighbors::Neighbor::GracefulRestart::GracefulRestart() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::GracefulRestart::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::GracefulRestart::State>();

}

Bgp::Neighbors::Neighbor::ApplyPolicy::Config::Config() {

}

Bgp::Neighbors::Neighbor::ApplyPolicy::State::State() {

}

Bgp::Neighbors::Neighbor::ApplyPolicy::ApplyPolicy() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::ApplyPolicy::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::ApplyPolicy::State>();

}

Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::Config() {

}

Bgp::Neighbors::Neighbor::UseMultiplePaths::State::State() {

}

Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config::Config() {

}

Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State::State() {

}

Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Ebgp() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State>();

}

Bgp::Neighbors::Neighbor::UseMultiplePaths::UseMultiplePaths() {
    config = std::make_unique<Bgp::Neighbors::Neighbor::UseMultiplePaths::Config>();
    ebgp = std::make_unique<Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::UseMultiplePaths::State>();

}

Bgp::Neighbors::Neighbor::Neighbor() {
    add_paths = std::make_unique<Bgp::Neighbors::Neighbor::AddPaths>();
    afi_safis = std::make_unique<Bgp::Neighbors::Neighbor::AfiSafis>();
    apply_policy = std::make_unique<Bgp::Neighbors::Neighbor::ApplyPolicy>();
    as_path_options = std::make_unique<Bgp::Neighbors::Neighbor::AsPathOptions>();
    config = std::make_unique<Bgp::Neighbors::Neighbor::Config>();
    ebgp_multihop = std::make_unique<Bgp::Neighbors::Neighbor::EbgpMultihop>();
    error_handling = std::make_unique<Bgp::Neighbors::Neighbor::ErrorHandling>();
    graceful_restart = std::make_unique<Bgp::Neighbors::Neighbor::GracefulRestart>();
    logging_options = std::make_unique<Bgp::Neighbors::Neighbor::LoggingOptions>();
    route_reflector = std::make_unique<Bgp::Neighbors::Neighbor::RouteReflector>();
    state = std::make_unique<Bgp::Neighbors::Neighbor::State>();
    timers = std::make_unique<Bgp::Neighbors::Neighbor::Timers>();
    transport = std::make_unique<Bgp::Neighbors::Neighbor::Transport>();
    use_multiple_paths = std::make_unique<Bgp::Neighbors::Neighbor::UseMultiplePaths>();

}

Bgp::Neighbors::Neighbors() {

}

Bgp::PeerGroups::PeerGroup::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::State::State() {

}

Bgp::PeerGroups::PeerGroup::Timers::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::Timers::State::State() {

}

Bgp::PeerGroups::PeerGroup::Timers::Timers() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::Timers::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::Timers::State>();

}

Bgp::PeerGroups::PeerGroup::Transport::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::Transport::State::State() {

}

Bgp::PeerGroups::PeerGroup::Transport::Transport() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::Transport::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::Transport::State>();

}

Bgp::PeerGroups::PeerGroup::ErrorHandling::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::ErrorHandling::State::State() {

}

Bgp::PeerGroups::PeerGroup::ErrorHandling::ErrorHandling() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::ErrorHandling::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::ErrorHandling::State>();

}

Bgp::PeerGroups::PeerGroup::LoggingOptions::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::LoggingOptions::State::State() {

}

Bgp::PeerGroups::PeerGroup::LoggingOptions::LoggingOptions() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::LoggingOptions::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::LoggingOptions::State>();

}

Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::EbgpMultihop::State::State() {

}

Bgp::PeerGroups::PeerGroup::EbgpMultihop::EbgpMultihop() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::EbgpMultihop::State>();

}

Bgp::PeerGroups::PeerGroup::RouteReflector::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::RouteReflector::State::State() {

}

Bgp::PeerGroups::PeerGroup::RouteReflector::RouteReflector() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::RouteReflector::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::RouteReflector::State>();

}

Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AsPathOptions::State::State() {

}

Bgp::PeerGroups::PeerGroup::AsPathOptions::AsPathOptions() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AsPathOptions::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AsPathOptions::State>();

}

Bgp::PeerGroups::PeerGroup::AddPaths::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AddPaths::State::State() {

}

Bgp::PeerGroups::PeerGroup::AddPaths::AddPaths() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AddPaths::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AddPaths::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::GracefulRestart() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::ApplyPolicy() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Ipv4Unicast() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config>();
    prefix_limit = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Ipv6Unicast() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config>();
    prefix_limit = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::Ipv4LabelledUnicast() {
    prefix_limit = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::Ipv6LabelledUnicast() {
    prefix_limit = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::L3VpnIpv4Unicast() {
    prefix_limit = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::L3VpnIpv6Unicast() {
    prefix_limit = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::L3VpnIpv4Multicast() {
    prefix_limit = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::L3VpnIpv6Multicast() {
    prefix_limit = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::L2VpnVpls() {
    prefix_limit = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::PrefixLimit() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::L2VpnEvpn() {
    prefix_limit = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Ebgp() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Ibgp() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::UseMultiplePaths() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config>();
    ebgp = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp>();
    ibgp = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State::State() {

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::RouteSelectionOptions() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::AfiSafi() {
    apply_policy = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy>();
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config>();
    graceful_restart = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart>();
    ipv4_labelled_unicast = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast>();
    ipv4_unicast = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast>();
    ipv6_labelled_unicast = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast>();
    ipv6_unicast = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast>();
    l2vpn_evpn = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn>();
    l2vpn_vpls = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls>();
    l3vpn_ipv4_multicast = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast>();
    l3vpn_ipv4_unicast = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast>();
    l3vpn_ipv6_multicast = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast>();
    l3vpn_ipv6_unicast = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast>();
    route_selection_options = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State>();
    use_multiple_paths = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths>();

}

Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafis() {

}

Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::GracefulRestart::State::State() {

}

Bgp::PeerGroups::PeerGroup::GracefulRestart::GracefulRestart() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::GracefulRestart::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::GracefulRestart::State>();

}

Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::ApplyPolicy::State::State() {

}

Bgp::PeerGroups::PeerGroup::ApplyPolicy::ApplyPolicy() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::ApplyPolicy::State>();

}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State::State() {

}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State::State() {

}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Ebgp() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State>();

}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config::Config() {

}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State::State() {

}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Ibgp() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State>();

}

Bgp::PeerGroups::PeerGroup::UseMultiplePaths::UseMultiplePaths() {
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config>();
    ebgp = std::make_unique<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp>();
    ibgp = std::make_unique<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State>();

}

Bgp::PeerGroups::PeerGroup::PeerGroup() {
    add_paths = std::make_unique<Bgp::PeerGroups::PeerGroup::AddPaths>();
    afi_safis = std::make_unique<Bgp::PeerGroups::PeerGroup::AfiSafis>();
    apply_policy = std::make_unique<Bgp::PeerGroups::PeerGroup::ApplyPolicy>();
    as_path_options = std::make_unique<Bgp::PeerGroups::PeerGroup::AsPathOptions>();
    config = std::make_unique<Bgp::PeerGroups::PeerGroup::Config>();
    ebgp_multihop = std::make_unique<Bgp::PeerGroups::PeerGroup::EbgpMultihop>();
    error_handling = std::make_unique<Bgp::PeerGroups::PeerGroup::ErrorHandling>();
    graceful_restart = std::make_unique<Bgp::PeerGroups::PeerGroup::GracefulRestart>();
    logging_options = std::make_unique<Bgp::PeerGroups::PeerGroup::LoggingOptions>();
    route_reflector = std::make_unique<Bgp::PeerGroups::PeerGroup::RouteReflector>();
    state = std::make_unique<Bgp::PeerGroups::PeerGroup::State>();
    timers = std::make_unique<Bgp::PeerGroups::PeerGroup::Timers>();
    transport = std::make_unique<Bgp::PeerGroups::PeerGroup::Transport>();
    use_multiple_paths = std::make_unique<Bgp::PeerGroups::PeerGroup::UseMultiplePaths>();

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

