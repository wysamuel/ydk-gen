#include <memory>
#include <vector>
#include <string>
#include "ydk/models/openconfig_vlan/openconfig_vlan.h"

namespace ydk {
namespace openconfig_vlan {
VlanTop_Grouping::Vlans::Vlan::Config::Config() {

}

VlanTop_Grouping::Vlans::Vlan::State::State() {

}

VlanTop_Grouping::Vlans::Vlan::Vlan() {
    config = std::make_unique<VlanTop_Grouping::Vlans::Vlan::Config>();
    state = std::make_unique<VlanTop_Grouping::Vlans::Vlan::State>();

}

VlanTop_Grouping::Vlans::Vlans() {

}

VlanTop_Grouping::VlanTop_Grouping() {
    vlans = std::make_unique<VlanTop_Grouping::Vlans>();

}

VlanEthernetState_Grouping::VlanEthernetState_Grouping() {

}

VlanLogicalTop_Grouping::Vlan::Config::Config() {

}

VlanLogicalTop_Grouping::Vlan::State::State() {

}

VlanLogicalTop_Grouping::Vlan::Vlan() {
    config = std::make_unique<VlanLogicalTop_Grouping::Vlan::Config>();
    state = std::make_unique<VlanLogicalTop_Grouping::Vlan::State>();

}

VlanLogicalTop_Grouping::VlanLogicalTop_Grouping() {
    vlan = std::make_unique<VlanLogicalTop_Grouping::Vlan>();

}

VlanEthernetConfig_Grouping::VlanEthernetConfig_Grouping() {

}

VlanRoutedState_Grouping::VlanRoutedState_Grouping() {

}

VlanEthernetTop_Grouping::Vlan::Config::Config() {

}

VlanEthernetTop_Grouping::Vlan::State::State() {

}

VlanEthernetTop_Grouping::Vlan::Vlan() {
    config = std::make_unique<VlanEthernetTop_Grouping::Vlan::Config>();
    state = std::make_unique<VlanEthernetTop_Grouping::Vlan::State>();

}

VlanEthernetTop_Grouping::VlanEthernetTop_Grouping() {
    vlan = std::make_unique<VlanEthernetTop_Grouping::Vlan>();

}

VlanLogicalState_Grouping::VlanLogicalState_Grouping() {

}

VlanConfig_Grouping::VlanConfig_Grouping() {

}

VlanRoutedConfig_Grouping::VlanRoutedConfig_Grouping() {

}

VlanLogicalConfig_Grouping::VlanLogicalConfig_Grouping() {

}

VlanRoutedTop_Grouping::RoutedVlan::Config::Config() {

}

VlanRoutedTop_Grouping::RoutedVlan::State::State() {

}

VlanRoutedTop_Grouping::RoutedVlan::RoutedVlan() {
    config = std::make_unique<VlanRoutedTop_Grouping::RoutedVlan::Config>();
    state = std::make_unique<VlanRoutedTop_Grouping::RoutedVlan::State>();

}

VlanRoutedTop_Grouping::VlanRoutedTop_Grouping() {
    routed_vlan = std::make_unique<VlanRoutedTop_Grouping::RoutedVlan>();

}

VlanState_Grouping::VlanState_Grouping() {

}

Vlans::Vlan::Config::Config() {

}

Vlans::Vlan::State::State() {

}

Vlans::Vlan::Vlan() {
    config = std::make_unique<Vlans::Vlan::Config>();
    state = std::make_unique<Vlans::Vlan::State>();

}

Vlans::Vlans() {

}


};
};
