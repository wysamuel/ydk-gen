#include <memory>
#include <vector>
#include <string>
#include "ydk/models/openconfig_terminal_device/openconfig_terminal_device.h"

namespace ydk {
namespace openconfig_terminal_device {
TerminalDevice::Config::Config() {

}

TerminalDevice::State::State() {

}

TerminalDevice::ClientPorts::Port::Config::Config() {

}

TerminalDevice::ClientPorts::Port::State::State() {

}

TerminalDevice::ClientPorts::Port::Transceiver::Config::Config() {

}

TerminalDevice::ClientPorts::Port::Transceiver::State::State() {

}

TerminalDevice::ClientPorts::Port::Transceiver::Transceiver() {
    config = std::make_unique<TerminalDevice::ClientPorts::Port::Transceiver::Config>();
    state = std::make_unique<TerminalDevice::ClientPorts::Port::Transceiver::State>();

}

TerminalDevice::ClientPorts::Port::PhysicalChannels::Channel::Config::Config() {

}

TerminalDevice::ClientPorts::Port::PhysicalChannels::Channel::State::State() {

}

TerminalDevice::ClientPorts::Port::PhysicalChannels::Channel::Channel() {
    config = std::make_unique<TerminalDevice::ClientPorts::Port::PhysicalChannels::Channel::Config>();
    state = std::make_unique<TerminalDevice::ClientPorts::Port::PhysicalChannels::Channel::State>();

}

TerminalDevice::ClientPorts::Port::PhysicalChannels::PhysicalChannels() {

}

TerminalDevice::ClientPorts::Port::LogicalChannelAssignments::Assignment::Config::Config() {

}

TerminalDevice::ClientPorts::Port::LogicalChannelAssignments::Assignment::State::State() {

}

TerminalDevice::ClientPorts::Port::LogicalChannelAssignments::Assignment::Assignment() {
    config = std::make_unique<TerminalDevice::ClientPorts::Port::LogicalChannelAssignments::Assignment::Config>();
    state = std::make_unique<TerminalDevice::ClientPorts::Port::LogicalChannelAssignments::Assignment::State>();

}

TerminalDevice::ClientPorts::Port::LogicalChannelAssignments::LogicalChannelAssignments() {

}

TerminalDevice::ClientPorts::Port::Port() {
    config = std::make_unique<TerminalDevice::ClientPorts::Port::Config>();
    logical_channel_assignments = std::make_unique<TerminalDevice::ClientPorts::Port::LogicalChannelAssignments>();
    physical_channels = std::make_unique<TerminalDevice::ClientPorts::Port::PhysicalChannels>();
    state = std::make_unique<TerminalDevice::ClientPorts::Port::State>();
    transceiver = std::make_unique<TerminalDevice::ClientPorts::Port::Transceiver>();

}

TerminalDevice::ClientPorts::ClientPorts() {

}

TerminalDevice::LogicalChannels::Channel::Config::Config() {

}

TerminalDevice::LogicalChannels::Channel::State::Ethernet::Ethernet() {

}

TerminalDevice::LogicalChannels::Channel::State::Otn::PreFecBer::PreFecBer() {

}

TerminalDevice::LogicalChannels::Channel::State::Otn::PostFecBer::PostFecBer() {

}

TerminalDevice::LogicalChannels::Channel::State::Otn::Otn() {
    post_fec_ber = std::make_unique<TerminalDevice::LogicalChannels::Channel::State::Otn::PostFecBer>();
    pre_fec_ber = std::make_unique<TerminalDevice::LogicalChannels::Channel::State::Otn::PreFecBer>();

}

TerminalDevice::LogicalChannels::Channel::State::State() {
    ethernet = std::make_unique<TerminalDevice::LogicalChannels::Channel::State::Ethernet>();
    otn = std::make_unique<TerminalDevice::LogicalChannels::Channel::State::Otn>();

}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config::Config() {

}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State::State() {

}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Assignment() {
    config = std::make_unique<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config>();
    state = std::make_unique<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State>();

}

TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::LogicalChannelAssignments() {

}

TerminalDevice::LogicalChannels::Channel::Channel() {
    config = std::make_unique<TerminalDevice::LogicalChannels::Channel::Config>();
    logical_channel_assignments = std::make_unique<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments>();
    state = std::make_unique<TerminalDevice::LogicalChannels::Channel::State>();

}

TerminalDevice::LogicalChannels::LogicalChannels() {

}

TerminalDevice::OpticalChannels::OpticalChannel::Config::Config() {

}

TerminalDevice::OpticalChannels::OpticalChannel::State::State() {

}

TerminalDevice::OpticalChannels::OpticalChannel::OpticalChannel() {
    config = std::make_unique<TerminalDevice::OpticalChannels::OpticalChannel::Config>();
    state = std::make_unique<TerminalDevice::OpticalChannels::OpticalChannel::State>();

}

TerminalDevice::OpticalChannels::OpticalChannels() {

}

TerminalDevice::LinePorts::Port::Config::Config() {

}

TerminalDevice::LinePorts::Port::State::State() {

}

TerminalDevice::LinePorts::Port::Port() {
    config = std::make_unique<TerminalDevice::LinePorts::Port::Config>();
    state = std::make_unique<TerminalDevice::LinePorts::Port::State>();

}

TerminalDevice::LinePorts::LinePorts() {

}

TerminalDevice::OperationalModes::Config::Config() {

}

TerminalDevice::OperationalModes::State::SupportedModes::SupportedModes() {

}

TerminalDevice::OperationalModes::State::State() {

}

TerminalDevice::OperationalModes::OperationalModes() {
    config = std::make_unique<TerminalDevice::OperationalModes::Config>();
    state = std::make_unique<TerminalDevice::OperationalModes::State>();

}

TerminalDevice::TerminalDevice() {
    client_ports = std::make_unique<TerminalDevice::ClientPorts>();
    config = std::make_unique<TerminalDevice::Config>();
    line_ports = std::make_unique<TerminalDevice::LinePorts>();
    logical_channels = std::make_unique<TerminalDevice::LogicalChannels>();
    operational_modes = std::make_unique<TerminalDevice::OperationalModes>();
    optical_channels = std::make_unique<TerminalDevice::OpticalChannels>();
    state = std::make_unique<TerminalDevice::State>();

}


};
};
