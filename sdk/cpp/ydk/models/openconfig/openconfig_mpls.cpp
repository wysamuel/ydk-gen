#include <memory>
#include <vector>
#include <string>
#include "ydk/models/openconfig_mpls/openconfig_mpls.h"

namespace ydk {
namespace openconfig_mpls {
PathComputationMethod_Identity::PathComputationMethod_Identity() {


}

LocallyComputed_Identity::LocallyComputed_Identity() {

}

ExplicitlyDefined_Identity::ExplicitlyDefined_Identity() {

}

ExternallyQueried_Identity::ExternallyQueried_Identity() {

}

Mpls::Global::Config::Config() {

}

Mpls::Global::State::State() {

}

Mpls::Global::MplsInterfaceAttributes::Interface::Config::Config() {

}

Mpls::Global::MplsInterfaceAttributes::Interface::State::State() {

}

Mpls::Global::MplsInterfaceAttributes::Interface::Interface() {
    config = std::make_unique<Mpls::Global::MplsInterfaceAttributes::Interface::Config>();
    state = std::make_unique<Mpls::Global::MplsInterfaceAttributes::Interface::State>();

}

Mpls::Global::MplsInterfaceAttributes::MplsInterfaceAttributes() {

}

Mpls::Global::Global() {
    config = std::make_unique<Mpls::Global::Config>();
    mpls_interface_attributes = std::make_unique<Mpls::Global::MplsInterfaceAttributes>();
    state = std::make_unique<Mpls::Global::State>();

}

Mpls::TeGlobalAttributes::Srlg::Srlg::Config::Config() {

}

Mpls::TeGlobalAttributes::Srlg::Srlg::State::State() {

}

Mpls::TeGlobalAttributes::Srlg::Srlg::StaticSrlgMembers::MembersList::Config::Config() {

}

Mpls::TeGlobalAttributes::Srlg::Srlg::StaticSrlgMembers::MembersList::State::State() {

}

Mpls::TeGlobalAttributes::Srlg::Srlg::StaticSrlgMembers::MembersList::MembersList() {
    config = std::make_unique<Mpls::TeGlobalAttributes::Srlg::Srlg::StaticSrlgMembers::MembersList::Config>();
    state = std::make_unique<Mpls::TeGlobalAttributes::Srlg::Srlg::StaticSrlgMembers::MembersList::State>();

}

Mpls::TeGlobalAttributes::Srlg::Srlg::StaticSrlgMembers::StaticSrlgMembers() {

}

Mpls::TeGlobalAttributes::Srlg::Srlg::Srlg() {
    config = std::make_unique<Mpls::TeGlobalAttributes::Srlg::Srlg::Config>();
    state = std::make_unique<Mpls::TeGlobalAttributes::Srlg::Srlg::State>();
    static_srlg_members = std::make_unique<Mpls::TeGlobalAttributes::Srlg::Srlg::StaticSrlgMembers>();

}

Mpls::TeGlobalAttributes::Srlg::Srlg() {

}

Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::Config() {

}

Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::State() {

}

Mpls::TeGlobalAttributes::IgpFloodingBandwidth::IgpFloodingBandwidth() {
    config = std::make_unique<Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config>();
    state = std::make_unique<Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State>();

}

Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::Config() {

}

Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State::State() {

}

Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::AdminGroup() {
    config = std::make_unique<Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config>();
    state = std::make_unique<Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State>();

}

Mpls::TeGlobalAttributes::MplsAdminGroups::MplsAdminGroups() {

}

Mpls::TeGlobalAttributes::TeLspTimers::Config::Config() {

}

Mpls::TeGlobalAttributes::TeLspTimers::State::State() {

}

Mpls::TeGlobalAttributes::TeLspTimers::TeLspTimers() {
    config = std::make_unique<Mpls::TeGlobalAttributes::TeLspTimers::Config>();
    state = std::make_unique<Mpls::TeGlobalAttributes::TeLspTimers::State>();

}

Mpls::TeGlobalAttributes::TeGlobalAttributes() {
    igp_flooding_bandwidth = std::make_unique<Mpls::TeGlobalAttributes::IgpFloodingBandwidth>();
    mpls_admin_groups = std::make_unique<Mpls::TeGlobalAttributes::MplsAdminGroups>();
    srlg = std::make_unique<Mpls::TeGlobalAttributes::Srlg>();
    te_lsp_timers = std::make_unique<Mpls::TeGlobalAttributes::TeLspTimers>();

}

Mpls::TeInterfaceAttributes::Interface::Config::Config() {

}

Mpls::TeInterfaceAttributes::Interface::State::State() {

}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::Config() {

}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::State() {

}

Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::IgpFloodingBandwidth() {
    config = std::make_unique<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config>();
    state = std::make_unique<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State>();

}

Mpls::TeInterfaceAttributes::Interface::Interface() {
    config = std::make_unique<Mpls::TeInterfaceAttributes::Interface::Config>();
    igp_flooding_bandwidth = std::make_unique<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth>();
    state = std::make_unique<Mpls::TeInterfaceAttributes::Interface::State>();

}

Mpls::TeInterfaceAttributes::TeInterfaceAttributes() {

}

Mpls::SignalingProtocols::RsvpTe::Sessions::Config::Config() {

}

Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::Session() {

}

Mpls::SignalingProtocols::RsvpTe::Sessions::State::State() {

}

Mpls::SignalingProtocols::RsvpTe::Sessions::Sessions() {
    config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Sessions::Config>();
    state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Sessions::State>();

}

Mpls::SignalingProtocols::RsvpTe::Neighbors::Config::Config() {

}

Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::Neighbor() {

}

Mpls::SignalingProtocols::RsvpTe::Neighbors::State::State() {

}

Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbors() {
    config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Neighbors::Config>();
    state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Neighbors::State>();

}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config::Config() {

}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State::State() {

}

Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::GracefulRestart() {
    config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config>();
    state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State>();

}

Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config::Config() {

}

Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State::State() {

}

Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::SoftPreemption() {
    config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config>();
    state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State>();

}

Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config::Config() {

}

Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State::State() {

}

Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Hellos() {
    config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config>();
    state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State>();

}

Mpls::SignalingProtocols::RsvpTe::Global::State::Counters::Counters() {

}

Mpls::SignalingProtocols::RsvpTe::Global::State::State() {
    counters = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::State::Counters>();

}

Mpls::SignalingProtocols::RsvpTe::Global::Global() {
    graceful_restart = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart>();
    hellos = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::Hellos>();
    soft_preemption = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption>();
    state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global::State>();

}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::Config() {

}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth::Bandwidth() {

}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters::Counters() {

}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::State() {
    counters = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters>();

}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config::Config() {

}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State::State() {

}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Hellos() {
    config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config>();
    state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State>();

}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config::Config() {

}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State::State() {

}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Authentication() {
    config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config>();
    state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State>();

}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config::Config() {

}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State::State() {

}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Subscription() {
    config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config>();
    state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State>();

}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config::Config() {

}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State::State() {

}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Protection() {
    config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config>();
    state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State>();

}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Interface() {
    authentication = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication>();
    config = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config>();
    hellos = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos>();
    protection = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection>();
    state = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State>();
    subscription = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription>();

}

Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::InterfaceAttributes() {

}

Mpls::SignalingProtocols::RsvpTe::RsvpTe() {
    global_ = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Global>();
    interface_attributes = std::make_unique<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes>();
    neighbors = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Neighbors>();
    sessions = std::make_unique<Mpls::SignalingProtocols::RsvpTe::Sessions>();

}

Mpls::SignalingProtocols::SegmentRouting::Srgb::Config::Config() {

}

Mpls::SignalingProtocols::SegmentRouting::Srgb::State::State() {

}

Mpls::SignalingProtocols::SegmentRouting::Srgb::Srgb() {
    config = std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Srgb::Config>();
    state = std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Srgb::State>();

}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config::Config() {

}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::State::State() {

}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::Config() {

}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::State() {

}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::AdjacencySid() {
    config = std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config>();
    state = std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State>();

}

Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interfaces() {
    adjacency_sid = std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid>();
    config = std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config>();
    state = std::make_unique<Mpls::SignalingProtocols::SegmentRouting::Interfaces::State>();

}

Mpls::SignalingProtocols::SegmentRouting::SegmentRouting() {

}

Mpls::SignalingProtocols::Ldp::Timers::Timers() {

}

Mpls::SignalingProtocols::Ldp::Ldp() {
    timers = std::make_unique<Mpls::SignalingProtocols::Ldp::Timers>();

}

Mpls::SignalingProtocols::SignalingProtocols() {
    ldp = std::make_unique<Mpls::SignalingProtocols::Ldp>();
    rsvp_te = std::make_unique<Mpls::SignalingProtocols::RsvpTe>();
    segment_routing = std::make_unique<Mpls::SignalingProtocols::SegmentRouting>();

}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::Config() {

}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State::State() {

}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::Config() {

}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State::State() {

}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::ExplicitRouteObjects() {
    config = std::make_unique<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config>();
    state = std::make_unique<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State>();

}

Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPaths() {
    config = std::make_unique<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config>();
    state = std::make_unique<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State>();

}

Mpls::Lsps::ConstrainedPath::Tunnel::Config::Config() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters::Counters() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::State::State() {
    counters = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters>();

}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config::Config() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State::State() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config::Config() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State::State() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::Config() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::State() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Overflow() {
    config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config>();
    state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State>();

}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::Config() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::State() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Underflow() {
    config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config>();
    state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State>();

}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::AutoBandwidth() {
    config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config>();
    overflow = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow>();
    state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State>();
    underflow = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow>();

}

Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Bandwidth() {
    auto_bandwidth = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth>();
    config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config>();
    state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State>();

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config::Config() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State::State() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::Config() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State::State() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::Config() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::State() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::CandidateSecondaryPath() {
    config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config>();
    state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State>();

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPaths() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config::Config() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State::State() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::AdminGroups() {
    config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config>();
    state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State>();

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::P2PPrimaryPaths() {
    admin_groups = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups>();
    candidate_secondary_paths = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths>();
    config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config>();
    state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State>();

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::Config() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State::State() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config::Config() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State::State() {

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::AdminGroups() {
    config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config>();
    state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State>();

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::P2PSecondaryPaths() {
    admin_groups = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups>();
    config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config>();
    state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State>();

}

Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PTunnelAttributes() {
    config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config>();
    state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State>();

}

Mpls::Lsps::ConstrainedPath::Tunnel::Tunnel() {
    bandwidth = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth>();
    config = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::Config>();
    p2p_tunnel_attributes = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes>();
    state = std::make_unique<Mpls::Lsps::ConstrainedPath::Tunnel::State>();

}

Mpls::Lsps::ConstrainedPath::ConstrainedPath() {

}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp::P2PLsp() {

}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp::P2MpLsp() {

}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp::Mp2MpLsp() {

}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Tunnel() {
    mp2mp_lsp = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp>();
    p2mp_lsp = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp>();
    p2p_lsp = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp>();

}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Ldp() {
    tunnel = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel>();

}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config::Config() {

}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State::State() {

}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::Config() {

}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::State() {

}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::PrefixSid() {
    config = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config>();
    state = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State>();

}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Fec() {
    config = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config>();
    prefix_sid = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid>();
    state = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State>();

}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::P2PLsp() {

}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::Tunnel() {
    p2p_lsp = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp>();

}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::SegmentRouting() {
    tunnel = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel>();

}

Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::PathSetupProtocol() {
    ldp = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp>();
    segment_routing = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting>();

}

Mpls::Lsps::UnconstrainedPath::UnconstrainedPath() {
    path_setup_protocol = std::make_unique<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol>();

}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress::Ingress() {

}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit::Transit() {

}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress::Egress() {

}

Mpls::Lsps::StaticLsps::LabelSwitchedPath::LabelSwitchedPath() {
    egress = std::make_unique<Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress>();
    ingress = std::make_unique<Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress>();
    transit = std::make_unique<Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit>();

}

Mpls::Lsps::StaticLsps::StaticLsps() {

}

Mpls::Lsps::Lsps() {
    constrained_path = std::make_unique<Mpls::Lsps::ConstrainedPath>();
    static_lsps = std::make_unique<Mpls::Lsps::StaticLsps>();
    unconstrained_path = std::make_unique<Mpls::Lsps::UnconstrainedPath>();

}

Mpls::Mpls() {
    global_ = std::make_unique<Mpls::Global>();
    lsps = std::make_unique<Mpls::Lsps>();
    signaling_protocols = std::make_unique<Mpls::SignalingProtocols>();
    te_global_attributes = std::make_unique<Mpls::TeGlobalAttributes>();
    te_interface_attributes = std::make_unique<Mpls::TeInterfaceAttributes>();

}


};
};
