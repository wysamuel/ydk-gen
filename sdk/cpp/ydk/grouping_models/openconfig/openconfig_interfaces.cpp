#include <memory>
#include <vector>
#include <string>
#include "ydk/models/openconfig_interfaces/openconfig_interfaces.h"

namespace ydk {
namespace openconfig_interfaces {
InterfacePhysHoldtimeTop_Grouping::HoldTime::Config::Config() {

}

InterfacePhysHoldtimeTop_Grouping::HoldTime::State::State() {

}

InterfacePhysHoldtimeTop_Grouping::HoldTime::HoldTime() {
    config = std::make_unique<InterfacePhysHoldtimeTop_Grouping::HoldTime::Config>();
    state = std::make_unique<InterfacePhysHoldtimeTop_Grouping::HoldTime::State>();

}

InterfacePhysHoldtimeTop_Grouping::InterfacePhysHoldtimeTop_Grouping() {
    hold_time = std::make_unique<InterfacePhysHoldtimeTop_Grouping::HoldTime>();

}

SubinterfacesConfig_Grouping::SubinterfacesConfig_Grouping() {

}

SubinterfacesState_Grouping::SubinterfacesState_Grouping() {

}

InterfaceCommonState_Grouping::InterfaceCommonState_Grouping() {

}

InterfacePhysHoldtimeConfig_Grouping::InterfacePhysHoldtimeConfig_Grouping() {

}

InterfaceCountersState_Grouping::Counters::Counters() {

}

InterfaceCountersState_Grouping::InterfaceCountersState_Grouping() {
    counters = std::make_unique<InterfaceCountersState_Grouping::Counters>();

}

SubinterfacesTop_Grouping::Subinterfaces::Subinterface::Config::Config() {

}

SubinterfacesTop_Grouping::Subinterfaces::Subinterface::State::State() {

}

SubinterfacesTop_Grouping::Subinterfaces::Subinterface::Subinterface() {
    config = std::make_unique<SubinterfacesTop_Grouping::Subinterfaces::Subinterface::Config>();
    state = std::make_unique<SubinterfacesTop_Grouping::Subinterfaces::Subinterface::State>();

}

SubinterfacesTop_Grouping::Subinterfaces::Subinterfaces() {

}

SubinterfacesTop_Grouping::SubinterfacesTop_Grouping() {
    subinterfaces = std::make_unique<SubinterfacesTop_Grouping::Subinterfaces>();

}

InterfacePhysConfig_Grouping::InterfacePhysConfig_Grouping() {

}

InterfacePhysHoldtimeState_Grouping::InterfacePhysHoldtimeState_Grouping() {

}

InterfaceCommonConfig_Grouping::InterfaceCommonConfig_Grouping() {

}

InterfacesTop_Grouping::Interfaces::Interface::Config::Config() {

}

InterfacesTop_Grouping::Interfaces::Interface::State::State() {

}

InterfacesTop_Grouping::Interfaces::Interface::Interface() {
    config = std::make_unique<InterfacesTop_Grouping::Interfaces::Interface::Config>();
    state = std::make_unique<InterfacesTop_Grouping::Interfaces::Interface::State>();

}

InterfacesTop_Grouping::Interfaces::Interfaces() {

}

InterfacesTop_Grouping::InterfacesTop_Grouping() {
    interfaces = std::make_unique<InterfacesTop_Grouping::Interfaces>();

}

Interfaces::Interface::Config::Config() {

}

Interfaces::Interface::State::State() {

}

Interfaces::Interface::Ethernet::Config::Config() {

}

Interfaces::Interface::Ethernet::State::State() {

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

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::VrrpGroup() {
    config = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config>();
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

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::VrrpGroup() {
    config = std::make_unique<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config>();
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

Interfaces::Interface::RoutedVlan::Ipv6::Ipv6() {
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
    routed_vlan = std::make_unique<Interfaces::Interface::RoutedVlan>();
    state = std::make_unique<Interfaces::Interface::State>();

}

Interfaces::Interfaces() {

}


};
};
