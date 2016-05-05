#include <memory>
#include <vector>
#include <string>
#include "ydk/models/openconfig_terminal_device/openconfig_terminal_device.h"

namespace ydk {
namespace openconfig_terminal_device {
TerminalInputOpticalPower_Grouping::TerminalInputOpticalPower_Grouping() {

}

TerminalLinePhysicalPortTop_Grouping::LinePorts::Port::Config::Config() {

}

TerminalLinePhysicalPortTop_Grouping::LinePorts::Port::State::State() {

}

TerminalLinePhysicalPortTop_Grouping::LinePorts::Port::Port() {
    config = std::make_unique<TerminalLinePhysicalPortTop_Grouping::LinePorts::Port::Config>();
    state = std::make_unique<TerminalLinePhysicalPortTop_Grouping::LinePorts::Port::State>();

}

TerminalLinePhysicalPortTop_Grouping::LinePorts::LinePorts() {

}

TerminalLinePhysicalPortTop_Grouping::TerminalLinePhysicalPortTop_Grouping() {
    line_ports = std::make_unique<TerminalLinePhysicalPortTop_Grouping::LinePorts>();

}

TerminalOpticalChannelState_Grouping::TerminalOpticalChannelState_Grouping() {

}

TerminalLogicalChanAssignmentTop_Grouping::LogicalChannelAssignments::Assignment::Config::Config() {

}

TerminalLogicalChanAssignmentTop_Grouping::LogicalChannelAssignments::Assignment::State::State() {

}

TerminalLogicalChanAssignmentTop_Grouping::LogicalChannelAssignments::Assignment::Assignment() {
    config = std::make_unique<TerminalLogicalChanAssignmentTop_Grouping::LogicalChannelAssignments::Assignment::Config>();
    state = std::make_unique<TerminalLogicalChanAssignmentTop_Grouping::LogicalChannelAssignments::Assignment::State>();

}

TerminalLogicalChanAssignmentTop_Grouping::LogicalChannelAssignments::LogicalChannelAssignments() {

}

TerminalLogicalChanAssignmentTop_Grouping::TerminalLogicalChanAssignmentTop_Grouping() {
    logical_channel_assignments = std::make_unique<TerminalLogicalChanAssignmentTop_Grouping::LogicalChannelAssignments>();

}

TerminalClientPhysicalChannelState_Grouping::TerminalClientPhysicalChannelState_Grouping() {

}

TerminalClientPortAssignmentState_Grouping::TerminalClientPortAssignmentState_Grouping() {

}

TerminalOperationalModeTop_Grouping::OperationalModes::Config::Config() {

}

TerminalOperationalModeTop_Grouping::OperationalModes::State::State() {

}

TerminalOperationalModeTop_Grouping::OperationalModes::OperationalModes() {
    config = std::make_unique<TerminalOperationalModeTop_Grouping::OperationalModes::Config>();
    state = std::make_unique<TerminalOperationalModeTop_Grouping::OperationalModes::State>();

}

TerminalOperationalModeTop_Grouping::TerminalOperationalModeTop_Grouping() {
    operational_modes = std::make_unique<TerminalOperationalModeTop_Grouping::OperationalModes>();

}

TerminalLogicalChanAssignmentState_Grouping::TerminalLogicalChanAssignmentState_Grouping() {

}

TerminalOtnProtocolStats_Grouping::Otn::PreFecBer::PreFecBer() {

}

TerminalOtnProtocolStats_Grouping::Otn::PostFecBer::PostFecBer() {

}

TerminalOtnProtocolStats_Grouping::Otn::Otn() {
    post_fec_ber = std::make_unique<TerminalOtnProtocolStats_Grouping::Otn::PostFecBer>();
    pre_fec_ber = std::make_unique<TerminalOtnProtocolStats_Grouping::Otn::PreFecBer>();

}

TerminalOtnProtocolStats_Grouping::TerminalOtnProtocolStats_Grouping() {
    otn = std::make_unique<TerminalOtnProtocolStats_Grouping::Otn>();

}

TerminalLogicalChannelConfig_Grouping::TerminalLogicalChannelConfig_Grouping() {

}

TerminalClientPortTop_Grouping::ClientPorts::Port::Config::Config() {

}

TerminalClientPortTop_Grouping::ClientPorts::Port::State::State() {

}

TerminalClientPortTop_Grouping::ClientPorts::Port::Port() {
    config = std::make_unique<TerminalClientPortTop_Grouping::ClientPorts::Port::Config>();
    state = std::make_unique<TerminalClientPortTop_Grouping::ClientPorts::Port::State>();

}

TerminalClientPortTop_Grouping::ClientPorts::ClientPorts() {

}

TerminalClientPortTop_Grouping::TerminalClientPortTop_Grouping() {
    client_ports = std::make_unique<TerminalClientPortTop_Grouping::ClientPorts>();

}

TerminalOpticalChannelTop_Grouping::OpticalChannels::OpticalChannel::Config::Config() {

}

TerminalOpticalChannelTop_Grouping::OpticalChannels::OpticalChannel::State::State() {

}

TerminalOpticalChannelTop_Grouping::OpticalChannels::OpticalChannel::OpticalChannel() {
    config = std::make_unique<TerminalOpticalChannelTop_Grouping::OpticalChannels::OpticalChannel::Config>();
    state = std::make_unique<TerminalOpticalChannelTop_Grouping::OpticalChannels::OpticalChannel::State>();

}

TerminalOpticalChannelTop_Grouping::OpticalChannels::OpticalChannels() {

}

TerminalOpticalChannelTop_Grouping::TerminalOpticalChannelTop_Grouping() {
    optical_channels = std::make_unique<TerminalOpticalChannelTop_Grouping::OpticalChannels>();

}

TerminalOutputOpticalFrequency_Grouping::TerminalOutputOpticalFrequency_Grouping() {

}

TerminalClientPortAssignmentTop_Grouping::LogicalChannelAssignments::Assignment::Config::Config() {

}

TerminalClientPortAssignmentTop_Grouping::LogicalChannelAssignments::Assignment::State::State() {

}

TerminalClientPortAssignmentTop_Grouping::LogicalChannelAssignments::Assignment::Assignment() {
    config = std::make_unique<TerminalClientPortAssignmentTop_Grouping::LogicalChannelAssignments::Assignment::Config>();
    state = std::make_unique<TerminalClientPortAssignmentTop_Grouping::LogicalChannelAssignments::Assignment::State>();

}

TerminalClientPortAssignmentTop_Grouping::LogicalChannelAssignments::LogicalChannelAssignments() {

}

TerminalClientPortAssignmentTop_Grouping::TerminalClientPortAssignmentTop_Grouping() {
    logical_channel_assignments = std::make_unique<TerminalClientPortAssignmentTop_Grouping::LogicalChannelAssignments>();

}

TerminalOutputOpticalPower_Grouping::TerminalOutputOpticalPower_Grouping() {

}

TerminalDeviceState_Grouping::TerminalDeviceState_Grouping() {

}

TerminalClientPortAssignmentConfig_Grouping::TerminalClientPortAssignmentConfig_Grouping() {

}

TerminalLogicalChanAssignmentConfig_Grouping::TerminalLogicalChanAssignmentConfig_Grouping() {

}

TerminalDeviceConfig_Grouping::TerminalDeviceConfig_Grouping() {

}

TerminalEthernetProtocolStats_Grouping::Ethernet::Ethernet() {

}

TerminalEthernetProtocolStats_Grouping::TerminalEthernetProtocolStats_Grouping() {
    ethernet = std::make_unique<TerminalEthernetProtocolStats_Grouping::Ethernet>();

}

TerminalClientPortState_Grouping::TerminalClientPortState_Grouping() {

}

TerminalClientPortTransceiverTop_Grouping::Transceiver::Config::Config() {

}

TerminalClientPortTransceiverTop_Grouping::Transceiver::State::State() {

}

TerminalClientPortTransceiverTop_Grouping::Transceiver::Transceiver() {
    config = std::make_unique<TerminalClientPortTransceiverTop_Grouping::Transceiver::Config>();
    state = std::make_unique<TerminalClientPortTransceiverTop_Grouping::Transceiver::State>();

}

TerminalClientPortTransceiverTop_Grouping::TerminalClientPortTransceiverTop_Grouping() {
    transceiver = std::make_unique<TerminalClientPortTransceiverTop_Grouping::Transceiver>();

}

TerminalLogicalChannelState_Grouping::TerminalLogicalChannelState_Grouping() {

}

TerminalOperationalModeConfig_Grouping::TerminalOperationalModeConfig_Grouping() {

}

TerminalClientPortConfig_Grouping::TerminalClientPortConfig_Grouping() {

}

TerminalLogicalChannelTop_Grouping::LogicalChannels::Channel::Config::Config() {

}

TerminalLogicalChannelTop_Grouping::LogicalChannels::Channel::State::State() {

}

TerminalLogicalChannelTop_Grouping::LogicalChannels::Channel::Channel() {
    config = std::make_unique<TerminalLogicalChannelTop_Grouping::LogicalChannels::Channel::Config>();
    state = std::make_unique<TerminalLogicalChannelTop_Grouping::LogicalChannels::Channel::State>();

}

TerminalLogicalChannelTop_Grouping::LogicalChannels::LogicalChannels() {

}

TerminalLogicalChannelTop_Grouping::TerminalLogicalChannelTop_Grouping() {
    logical_channels = std::make_unique<TerminalLogicalChannelTop_Grouping::LogicalChannels>();

}

TerminalDeviceTop_Grouping::TerminalDevice::Config::Config() {

}

TerminalDeviceTop_Grouping::TerminalDevice::State::State() {

}

TerminalDeviceTop_Grouping::TerminalDevice::TerminalDevice() {
    config = std::make_unique<TerminalDeviceTop_Grouping::TerminalDevice::Config>();
    state = std::make_unique<TerminalDeviceTop_Grouping::TerminalDevice::State>();

}

TerminalDeviceTop_Grouping::TerminalDeviceTop_Grouping() {
    terminal_device = std::make_unique<TerminalDeviceTop_Grouping::TerminalDevice>();

}

TerminalClientPortTransceiverState_Grouping::TerminalClientPortTransceiverState_Grouping() {

}

TerminalLinePhysicalPortState_Grouping::TerminalLinePhysicalPortState_Grouping() {

}

TerminalOperationalModeState_Grouping::SupportedModes::SupportedModes() {

}

TerminalOperationalModeState_Grouping::TerminalOperationalModeState_Grouping() {

}

TerminalClientPhysicalChannelTop_Grouping::PhysicalChannels::Channel::Config::Config() {

}

TerminalClientPhysicalChannelTop_Grouping::PhysicalChannels::Channel::State::State() {

}

TerminalClientPhysicalChannelTop_Grouping::PhysicalChannels::Channel::Channel() {
    config = std::make_unique<TerminalClientPhysicalChannelTop_Grouping::PhysicalChannels::Channel::Config>();
    state = std::make_unique<TerminalClientPhysicalChannelTop_Grouping::PhysicalChannels::Channel::State>();

}

TerminalClientPhysicalChannelTop_Grouping::PhysicalChannels::PhysicalChannels() {

}

TerminalClientPhysicalChannelTop_Grouping::TerminalClientPhysicalChannelTop_Grouping() {
    physical_channels = std::make_unique<TerminalClientPhysicalChannelTop_Grouping::PhysicalChannels>();

}

TerminalClientPortTransceiverConfig_Grouping::TerminalClientPortTransceiverConfig_Grouping() {

}

TerminalClientPhysicalChannelConfig_Grouping::TerminalClientPhysicalChannelConfig_Grouping() {

}

TerminalLinePhysicalPortConfig_Grouping::TerminalLinePhysicalPortConfig_Grouping() {

}

TerminalOpticalChannelConfig_Grouping::TerminalOpticalChannelConfig_Grouping() {

}

TerminalDevice::Config::Config() {

}

TerminalDevice::State::State() {

}

TerminalDevice::TerminalDevice() {
    config = std::make_unique<TerminalDevice::Config>();
    state = std::make_unique<TerminalDevice::State>();

}


};
};
