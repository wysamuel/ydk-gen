#include <memory>
#include <vector>
#include <string>
#include "ydk/models/openconfig_interfaces/openconfig_interfaces.h"

namespace ydk {
namespace openconfig_interfaces {
Interfaces::Interface::Config::Config() {

}

Interfaces::Interface::State::Counters::Counters() {

}

Interfaces::Interface::State::State() {
    counters = std::make_unique<Interfaces::Interface::State::Counters>();

}

Interfaces::Interface::HoldTime::Config::Config() {

}

Interfaces::Interface::HoldTime::State::State() {

}

Interfaces::Interface::HoldTime::HoldTime() {
    config = std::make_unique<Interfaces::Interface::HoldTime::Config>();
    state = std::make_unique<Interfaces::Interface::HoldTime::State>();

}

Interfaces::Interface::Subinterfaces::Subinterface::Config::Config() {

}

Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::Counters() {

}

Interfaces::Interface::Subinterfaces::Subinterface::State::State() {
    counters = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::State::Counters>();

}

Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::Config() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::State() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Vlan() {
    config = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config>();
    state = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State>();

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Config::Config() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::State::State() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::Config::Config() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::State::State() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::Config() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::State() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::InterfaceTracking() {
    config = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>();
    state = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State>();

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::VrrpGroup() {
    config = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::Config>();
    interface_tracking = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking>();
    state = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::State>();

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::Vrrp() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Address() {
    config = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Config>();
    state = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::State>();
    vrrp = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp>();

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Config::Config() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::State::State() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Neighbor() {
    config = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Config>();
    state = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::State>();

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::Config() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::State() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Ipv4() {
    config = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config>();
    state = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State>();

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Config::Config() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::State() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::Config::Config() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::State::State() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::Config() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::State() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::InterfaceTracking() {
    config = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>();
    state = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State>();

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::VrrpGroup() {
    config = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::Config>();
    interface_tracking = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking>();
    state = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::State>();

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::Vrrp() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Address() {
    config = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Config>();
    state = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State>();
    vrrp = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp>();

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Config::Config() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State::State() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Neighbor() {
    config = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Config>();
    state = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State>();

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::Config() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::State() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::Config::Config() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::State::State() {

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::Autoconf() {
    config = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::Config>();
    state = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::State>();

}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Ipv6() {
    autoconf = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf>();
    config = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config>();
    state = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State>();

}

Interfaces::Interface::Subinterfaces::Subinterface::Subinterface() {
    config = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Config>();
    ipv4 = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4>();
    ipv6 = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6>();
    state = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::State>();
    vlan = std::make_unique<Interfaces::Interface::Subinterfaces::Subinterface::Vlan>();

}

Interfaces::Interface::Subinterfaces::Subinterfaces() {

}

Interfaces::Interface::Ethernet::Config::Config() {

}

Interfaces::Interface::Ethernet::State::Counters::Counters() {

}

Interfaces::Interface::Ethernet::State::State() {
    counters = std::make_unique<Interfaces::Interface::Ethernet::State::Counters>();

}

Interfaces::Interface::Ethernet::Vlan::Config::Config() {

}

Interfaces::Interface::Ethernet::Vlan::State::State() {

}

Interfaces::Interface::Ethernet::Vlan::Vlan() {
    config = std::make_unique<Interfaces::Interface::Ethernet::Vlan::Config>();
    state = std::make_unique<Interfaces::Interface::Ethernet::Vlan::State>();

}

Interfaces::Interface::Ethernet::Ethernet() {
    config = std::make_unique<Interfaces::Interface::Ethernet::Config>();
    state = std::make_unique<Interfaces::Interface::Ethernet::State>();
    vlan = std::make_unique<Interfaces::Interface::Ethernet::Vlan>();

}

Interfaces::Interface::Aggregation::Config::Config() {

}

Interfaces::Interface::Aggregation::State::State() {

}

Interfaces::Interface::Aggregation::Lacp::Config::Config() {

}

Interfaces::Interface::Aggregation::Lacp::State::State() {

}

Interfaces::Interface::Aggregation::Lacp::Members::Member::State::Counters::Counters() {

}

Interfaces::Interface::Aggregation::Lacp::Members::Member::State::State() {
    counters = std::make_unique<Interfaces::Interface::Aggregation::Lacp::Members::Member::State::Counters>();

}

Interfaces::Interface::Aggregation::Lacp::Members::Member::Member() {
    state = std::make_unique<Interfaces::Interface::Aggregation::Lacp::Members::Member::State>();

}

Interfaces::Interface::Aggregation::Lacp::Members::Members() {

}

Interfaces::Interface::Aggregation::Lacp::Lacp() {
    config = std::make_unique<Interfaces::Interface::Aggregation::Lacp::Config>();
    members = std::make_unique<Interfaces::Interface::Aggregation::Lacp::Members>();
    state = std::make_unique<Interfaces::Interface::Aggregation::Lacp::State>();

}

Interfaces::Interface::Aggregation::Vlan::Config::Config() {

}

Interfaces::Interface::Aggregation::Vlan::State::State() {

}

Interfaces::Interface::Aggregation::Vlan::Vlan() {
    config = std::make_unique<Interfaces::Interface::Aggregation::Vlan::Config>();
    state = std::make_unique<Interfaces::Interface::Aggregation::Vlan::State>();

}

Interfaces::Interface::Aggregation::Aggregation() {
    config = std::make_unique<Interfaces::Interface::Aggregation::Config>();
    lacp = std::make_unique<Interfaces::Interface::Aggregation::Lacp>();
    state = std::make_unique<Interfaces::Interface::Aggregation::State>();
    vlan = std::make_unique<Interfaces::Interface::Aggregation::Vlan>();

}

Interfaces::Interface::RoutedVlan::Config::Config() {

}

Interfaces::Interface::RoutedVlan::State::State() {

}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Config::Config() {

}

Interfaces::Interface::RoutedVlan::Ipv4::Address::State::State() {

}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config::Config() {

}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::State::State() {

}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::Config() {

}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::State() {

}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::InterfaceTracking() {
    config = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>();
    state = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State>();

}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::VrrpGroup() {
    config = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config>();
    interface_tracking = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking>();
    state = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::State>();

}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::Vrrp() {

}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Address() {
    config = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv4::Address::Config>();
    state = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv4::Address::State>();
    vrrp = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp>();

}

Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Config::Config() {

}

Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::State::State() {

}

Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Neighbor() {
    config = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Config>();
    state = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::State>();

}

Interfaces::Interface::RoutedVlan::Ipv4::Config::Config() {

}

Interfaces::Interface::RoutedVlan::Ipv4::State::State() {

}

Interfaces::Interface::RoutedVlan::Ipv4::Ipv4() {
    config = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv4::Config>();
    state = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv4::State>();

}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Config::Config() {

}

Interfaces::Interface::RoutedVlan::Ipv6::Address::State::State() {

}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config::Config() {

}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::State::State() {

}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::Config() {

}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::State() {

}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::InterfaceTracking() {
    config = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>();
    state = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State>();

}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::VrrpGroup() {
    config = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config>();
    interface_tracking = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking>();
    state = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::State>();

}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::Vrrp() {

}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Address() {
    config = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv6::Address::Config>();
    state = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv6::Address::State>();
    vrrp = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp>();

}

Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Config::Config() {

}

Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State::State() {

}

Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Neighbor() {
    config = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Config>();
    state = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State>();

}

Interfaces::Interface::RoutedVlan::Ipv6::Config::Config() {

}

Interfaces::Interface::RoutedVlan::Ipv6::State::State() {

}

Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::Config::Config() {

}

Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::State::State() {

}

Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::Autoconf() {
    config = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::Config>();
    state = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::State>();

}

Interfaces::Interface::RoutedVlan::Ipv6::Ipv6() {
    autoconf = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv6::Autoconf>();
    config = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv6::Config>();
    state = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv6::State>();

}

Interfaces::Interface::RoutedVlan::RoutedVlan() {
    config = std::make_unique<Interfaces::Interface::RoutedVlan::Config>();
    ipv4 = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv4>();
    ipv6 = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv6>();
    state = std::make_unique<Interfaces::Interface::RoutedVlan::State>();

}

Interfaces::Interface::Interface() {
    aggregation = std::make_unique<Interfaces::Interface::Aggregation>();
    config = std::make_unique<Interfaces::Interface::Config>();
    ethernet = std::make_unique<Interfaces::Interface::Ethernet>();
    hold_time = std::make_unique<Interfaces::Interface::HoldTime>();
    routed_vlan = std::make_unique<Interfaces::Interface::RoutedVlan>();
    state = std::make_unique<Interfaces::Interface::State>();
    subinterfaces = std::make_unique<Interfaces::Interface::Subinterfaces>();

}

Interfaces::Interfaces() {

}


};
};
