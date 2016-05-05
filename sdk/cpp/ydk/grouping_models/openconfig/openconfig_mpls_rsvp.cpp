#include <memory>
#include <vector>
#include <string>
#include "ydk/models/openconfig_mpls_rsvp/openconfig_mpls_rsvp.h"

namespace ydk {
namespace openconfig_mpls_rsvp {
MplsRsvpInterfacesState_Grouping::Bandwidth::Bandwidth() {

}

MplsRsvpInterfacesState_Grouping::MplsRsvpInterfacesState_Grouping() {

}

MplsRsvpSoftPreemption_Config_Grouping::MplsRsvpSoftPreemption_Config_Grouping() {

}

MplsRsvpGlobalProtocolState_Grouping::MplsRsvpGlobalProtocolState_Grouping() {

}

RsvpP2PTunnelAttributes_Config_Grouping::RsvpP2PTunnelAttributes_Config_Grouping() {

}

MplsRsvpLinkProtection_Grouping::Protection::Config::Config() {

}

MplsRsvpLinkProtection_Grouping::Protection::State::State() {

}

MplsRsvpLinkProtection_Grouping::Protection::Protection() {
    config = std::make_unique<MplsRsvpLinkProtection_Grouping::Protection::Config>();
    state = std::make_unique<MplsRsvpLinkProtection_Grouping::Protection::State>();

}

MplsRsvpLinkProtection_Grouping::MplsRsvpLinkProtection_Grouping() {
    protection = std::make_unique<MplsRsvpLinkProtection_Grouping::Protection>();

}

MplsRsvpErrorStatistics_Grouping::Error::Error() {

}

MplsRsvpErrorStatistics_Grouping::MplsRsvpErrorStatistics_Grouping() {
    error = std::make_unique<MplsRsvpErrorStatistics_Grouping::Error>();

}

MplsRsvpHellos_Grouping::Hellos::Config::Config() {

}

MplsRsvpHellos_Grouping::Hellos::State::State() {

}

MplsRsvpHellos_Grouping::Hellos::Hellos() {
    config = std::make_unique<MplsRsvpHellos_Grouping::Hellos::Config>();
    state = std::make_unique<MplsRsvpHellos_Grouping::Hellos::State>();

}

MplsRsvpHellos_Grouping::MplsRsvpHellos_Grouping() {
    hellos = std::make_unique<MplsRsvpHellos_Grouping::Hellos>();

}

MplsRsvpGracefulRestart_Config_Grouping::MplsRsvpGracefulRestart_Config_Grouping() {

}

RsvpP2PPathAttributes_Config_Grouping::RsvpP2PPathAttributes_Config_Grouping() {

}

MplsRsvpHellos_Config_Grouping::MplsRsvpHellos_Config_Grouping() {

}

MplsRsvpProtection_Config_Grouping::MplsRsvpProtection_Config_Grouping() {

}

MplsRsvpSoftPreemption_Grouping::SoftPreemption::Config::Config() {

}

MplsRsvpSoftPreemption_Grouping::SoftPreemption::State::State() {

}

MplsRsvpSoftPreemption_Grouping::SoftPreemption::SoftPreemption() {
    config = std::make_unique<MplsRsvpSoftPreemption_Grouping::SoftPreemption::Config>();
    state = std::make_unique<MplsRsvpSoftPreemption_Grouping::SoftPreemption::State>();

}

MplsRsvpSoftPreemption_Grouping::MplsRsvpSoftPreemption_Grouping() {
    soft_preemption = std::make_unique<MplsRsvpSoftPreemption_Grouping::SoftPreemption>();

}

MplsRsvpStatistics_Grouping::MplsRsvpStatistics_Grouping() {

}

RsvpPriorities_Config_Grouping::RsvpPriorities_Config_Grouping() {

}

RsvpGlobal_Grouping::RsvpTe::Sessions::Config::Config() {

}

RsvpGlobal_Grouping::RsvpTe::Sessions::State::State() {

}

RsvpGlobal_Grouping::RsvpTe::Sessions::Sessions() {
    config = std::make_unique<RsvpGlobal_Grouping::RsvpTe::Sessions::Config>();
    state = std::make_unique<RsvpGlobal_Grouping::RsvpTe::Sessions::State>();

}

RsvpGlobal_Grouping::RsvpTe::Neighbors::Config::Config() {

}

RsvpGlobal_Grouping::RsvpTe::Neighbors::State::State() {

}

RsvpGlobal_Grouping::RsvpTe::Neighbors::Neighbors() {
    config = std::make_unique<RsvpGlobal_Grouping::RsvpTe::Neighbors::Config>();
    state = std::make_unique<RsvpGlobal_Grouping::RsvpTe::Neighbors::State>();

}

RsvpGlobal_Grouping::RsvpTe::Global::State::Counters::Counters() {

}

RsvpGlobal_Grouping::RsvpTe::Global::State::State() {
    counters = std::make_unique<RsvpGlobal_Grouping::RsvpTe::Global::State::Counters>();

}

RsvpGlobal_Grouping::RsvpTe::Global::Global() {
    state = std::make_unique<RsvpGlobal_Grouping::RsvpTe::Global::State>();

}

RsvpGlobal_Grouping::RsvpTe::InterfaceAttributes::Interface::Config::Config() {

}

RsvpGlobal_Grouping::RsvpTe::InterfaceAttributes::Interface::State::Counters::Counters() {

}

RsvpGlobal_Grouping::RsvpTe::InterfaceAttributes::Interface::State::State() {
    counters = std::make_unique<RsvpGlobal_Grouping::RsvpTe::InterfaceAttributes::Interface::State::Counters>();

}

RsvpGlobal_Grouping::RsvpTe::InterfaceAttributes::Interface::Interface() {
    config = std::make_unique<RsvpGlobal_Grouping::RsvpTe::InterfaceAttributes::Interface::Config>();
    state = std::make_unique<RsvpGlobal_Grouping::RsvpTe::InterfaceAttributes::Interface::State>();

}

RsvpGlobal_Grouping::RsvpTe::InterfaceAttributes::InterfaceAttributes() {

}

RsvpGlobal_Grouping::RsvpTe::RsvpTe() {
    global_ = std::make_unique<RsvpGlobal_Grouping::RsvpTe::Global>();
    interface_attributes = std::make_unique<RsvpGlobal_Grouping::RsvpTe::InterfaceAttributes>();
    neighbors = std::make_unique<RsvpGlobal_Grouping::RsvpTe::Neighbors>();
    sessions = std::make_unique<RsvpGlobal_Grouping::RsvpTe::Sessions>();

}

RsvpGlobal_Grouping::RsvpGlobal_Grouping() {
    rsvp_te = std::make_unique<RsvpGlobal_Grouping::RsvpTe>();

}

MplsRsvpSessionState_Grouping::Session::Session() {

}

MplsRsvpSessionState_Grouping::MplsRsvpSessionState_Grouping() {

}

MplsRsvpNeighborState_Grouping::Neighbor::Neighbor() {

}

MplsRsvpNeighborState_Grouping::MplsRsvpNeighborState_Grouping() {

}

MplsRsvpAuthentication_Grouping::Authentication::Config::Config() {

}

MplsRsvpAuthentication_Grouping::Authentication::State::State() {

}

MplsRsvpAuthentication_Grouping::Authentication::Authentication() {
    config = std::make_unique<MplsRsvpAuthentication_Grouping::Authentication::Config>();
    state = std::make_unique<MplsRsvpAuthentication_Grouping::Authentication::State>();

}

MplsRsvpAuthentication_Grouping::MplsRsvpAuthentication_Grouping() {
    authentication = std::make_unique<MplsRsvpAuthentication_Grouping::Authentication>();

}

MplsRsvpProtocolState_Grouping::MplsRsvpProtocolState_Grouping() {

}

MplsRsvpSubscription_Config_Grouping::MplsRsvpSubscription_Config_Grouping() {

}

MplsRsvpSubscription_Grouping::Subscription::Config::Config() {

}

MplsRsvpSubscription_Grouping::Subscription::State::State() {

}

MplsRsvpSubscription_Grouping::Subscription::Subscription() {
    config = std::make_unique<MplsRsvpSubscription_Grouping::Subscription::Config>();
    state = std::make_unique<MplsRsvpSubscription_Grouping::Subscription::State>();

}

MplsRsvpSubscription_Grouping::MplsRsvpSubscription_Grouping() {
    subscription = std::make_unique<MplsRsvpSubscription_Grouping::Subscription>();

}

MplsRsvpAuthentication_Config_Grouping::MplsRsvpAuthentication_Config_Grouping() {

}

MplsRsvpGracefulRestart_Grouping::GracefulRestart::Config::Config() {

}

MplsRsvpGracefulRestart_Grouping::GracefulRestart::State::State() {

}

MplsRsvpGracefulRestart_Grouping::GracefulRestart::GracefulRestart() {
    config = std::make_unique<MplsRsvpGracefulRestart_Grouping::GracefulRestart::Config>();
    state = std::make_unique<MplsRsvpGracefulRestart_Grouping::GracefulRestart::State>();

}

MplsRsvpGracefulRestart_Grouping::MplsRsvpGracefulRestart_Grouping() {
    graceful_restart = std::make_unique<MplsRsvpGracefulRestart_Grouping::GracefulRestart>();

}

MplsRsvpProtocolStatistics_Grouping::Protocol::Protocol() {

}

MplsRsvpProtocolStatistics_Grouping::MplsRsvpProtocolStatistics_Grouping() {
    protocol = std::make_unique<MplsRsvpProtocolStatistics_Grouping::Protocol>();

}


};
};
