#include <memory>
#include <vector>
#include <string>
#include "ydk/models/openconfig_if_ip/openconfig_if_ip.h"

namespace ydk {
namespace openconfig_if_ip {
IpVrrpTrackingConfig_Grouping::IpVrrpTrackingConfig_Grouping() {

}

Ipv6ConfigNeighbor_Grouping::Ipv6ConfigNeighbor_Grouping() {

}

IpVrrpIpv6State_Grouping::IpVrrpIpv6State_Grouping() {

}

Ipv4ConfigNeighbor_Grouping::Ipv4ConfigNeighbor_Grouping() {

}

IpVrrpIpv6Config_Grouping::IpVrrpIpv6Config_Grouping() {

}

Ipv6AutoconfState_Grouping::Ipv6AutoconfState_Grouping() {

}

Ipv6ConfigAddress_Grouping::Ipv6ConfigAddress_Grouping() {

}

IpVrrpState_Grouping::IpVrrpState_Grouping() {

}

Ipv6AutoconfConfig_Grouping::Ipv6AutoconfConfig_Grouping() {

}

IpVrrpConfig_Grouping::IpVrrpConfig_Grouping() {

}

Ipv4ConfigGlobal_Grouping::Ipv4ConfigGlobal_Grouping() {

}

IpVrrpTop_Grouping::Vrrp::VrrpGroup::Config::Config() {

}

IpVrrpTop_Grouping::Vrrp::VrrpGroup::State::State() {

}

IpVrrpTop_Grouping::Vrrp::VrrpGroup::VrrpGroup() {
    config = std::make_unique<IpVrrpTop_Grouping::Vrrp::VrrpGroup::Config>();
    state = std::make_unique<IpVrrpTop_Grouping::Vrrp::VrrpGroup::State>();

}

IpVrrpTop_Grouping::Vrrp::Vrrp() {

}

IpVrrpTop_Grouping::IpVrrpTop_Grouping() {
    vrrp = std::make_unique<IpVrrpTop_Grouping::Vrrp>();

}

Ipv4StateAddress_Grouping::Ipv4StateAddress_Grouping() {

}

Ipv6AutoconfTop_Grouping::Autoconf::Config::Config() {

}

Ipv6AutoconfTop_Grouping::Autoconf::State::State() {

}

Ipv6AutoconfTop_Grouping::Autoconf::Autoconf() {
    config = std::make_unique<Ipv6AutoconfTop_Grouping::Autoconf::Config>();
    state = std::make_unique<Ipv6AutoconfTop_Grouping::Autoconf::State>();

}

Ipv6AutoconfTop_Grouping::Ipv6AutoconfTop_Grouping() {
    autoconf = std::make_unique<Ipv6AutoconfTop_Grouping::Autoconf>();

}

Ipv6StateAddress_Grouping::Ipv6StateAddress_Grouping() {

}

Ipv4StateNeighbor_Grouping::Ipv4StateNeighbor_Grouping() {

}

Ipv6StateNeighbor_Grouping::Ipv6StateNeighbor_Grouping() {

}

Ipv4ConfigAddress_Grouping::Ipv4ConfigAddress_Grouping() {

}

IpVrrpTrackingState_Grouping::IpVrrpTrackingState_Grouping() {

}

Ipv4Top_Grouping::Ipv4::Address::Config::Config() {

}

Ipv4Top_Grouping::Ipv4::Address::State::State() {

}

Ipv4Top_Grouping::Ipv4::Address::Address() {
    config = std::make_unique<Ipv4Top_Grouping::Ipv4::Address::Config>();
    state = std::make_unique<Ipv4Top_Grouping::Ipv4::Address::State>();

}

Ipv4Top_Grouping::Ipv4::Neighbor::Config::Config() {

}

Ipv4Top_Grouping::Ipv4::Neighbor::State::State() {

}

Ipv4Top_Grouping::Ipv4::Neighbor::Neighbor() {
    config = std::make_unique<Ipv4Top_Grouping::Ipv4::Neighbor::Config>();
    state = std::make_unique<Ipv4Top_Grouping::Ipv4::Neighbor::State>();

}

Ipv4Top_Grouping::Ipv4::Config::Config() {

}

Ipv4Top_Grouping::Ipv4::State::State() {

}

Ipv4Top_Grouping::Ipv4::Ipv4() {
    config = std::make_unique<Ipv4Top_Grouping::Ipv4::Config>();
    state = std::make_unique<Ipv4Top_Grouping::Ipv4::State>();

}

Ipv4Top_Grouping::Ipv4Top_Grouping() {
    ipv4 = std::make_unique<Ipv4Top_Grouping::Ipv4>();

}

Ipv6ConfigGlobal_Grouping::Ipv6ConfigGlobal_Grouping() {

}

Ipv6Top_Grouping::Ipv6::Address::Config::Config() {

}

Ipv6Top_Grouping::Ipv6::Address::State::State() {

}

Ipv6Top_Grouping::Ipv6::Address::Address() {
    config = std::make_unique<Ipv6Top_Grouping::Ipv6::Address::Config>();
    state = std::make_unique<Ipv6Top_Grouping::Ipv6::Address::State>();

}

Ipv6Top_Grouping::Ipv6::Neighbor::Config::Config() {

}

Ipv6Top_Grouping::Ipv6::Neighbor::State::State() {

}

Ipv6Top_Grouping::Ipv6::Neighbor::Neighbor() {
    config = std::make_unique<Ipv6Top_Grouping::Ipv6::Neighbor::Config>();
    state = std::make_unique<Ipv6Top_Grouping::Ipv6::Neighbor::State>();

}

Ipv6Top_Grouping::Ipv6::Config::Config() {

}

Ipv6Top_Grouping::Ipv6::State::State() {

}

Ipv6Top_Grouping::Ipv6::Ipv6() {
    config = std::make_unique<Ipv6Top_Grouping::Ipv6::Config>();
    state = std::make_unique<Ipv6Top_Grouping::Ipv6::State>();

}

Ipv6Top_Grouping::Ipv6Top_Grouping() {
    ipv6 = std::make_unique<Ipv6Top_Grouping::Ipv6>();

}

IpVrrpTrackingTop_Grouping::InterfaceTracking::Config::Config() {

}

IpVrrpTrackingTop_Grouping::InterfaceTracking::State::State() {

}

IpVrrpTrackingTop_Grouping::InterfaceTracking::InterfaceTracking() {
    config = std::make_unique<IpVrrpTrackingTop_Grouping::InterfaceTracking::Config>();
    state = std::make_unique<IpVrrpTrackingTop_Grouping::InterfaceTracking::State>();

}

IpVrrpTrackingTop_Grouping::IpVrrpTrackingTop_Grouping() {
    interface_tracking = std::make_unique<IpVrrpTrackingTop_Grouping::InterfaceTracking>();

}


};
};
