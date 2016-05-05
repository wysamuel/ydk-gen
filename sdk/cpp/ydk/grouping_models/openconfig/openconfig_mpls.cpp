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

TeLspOverflow_Config_Grouping::TeLspOverflow_Config_Grouping() {

}

P2PPath_Config_Grouping::P2PPath_Config_Grouping() {

}

MplsTeLspTimers_Grouping::TeLspTimers::Config::Config() {

}

MplsTeLspTimers_Grouping::TeLspTimers::State::State() {

}

MplsTeLspTimers_Grouping::TeLspTimers::TeLspTimers() {
    config = std::make_unique<MplsTeLspTimers_Grouping::TeLspTimers::Config>();
    state = std::make_unique<MplsTeLspTimers_Grouping::TeLspTimers::State>();

}

MplsTeLspTimers_Grouping::MplsTeLspTimers_Grouping() {
    te_lsp_timers = std::make_unique<MplsTeLspTimers_Grouping::TeLspTimers>();

}

TunnelP2PAttributes_Config_Grouping::TunnelP2PAttributes_Config_Grouping() {

}

TeTunnel_State_Grouping::Counters::Counters() {

}

TeTunnel_State_Grouping::TeTunnel_State_Grouping() {
    counters = std::make_unique<TeTunnel_State_Grouping::Counters>();

}

TeInterfaceAttributesTop_Grouping::Interface::Config::Config() {

}

TeInterfaceAttributesTop_Grouping::Interface::State::State() {

}

TeInterfaceAttributesTop_Grouping::Interface::Interface() {
    config = std::make_unique<TeInterfaceAttributesTop_Grouping::Interface::Config>();
    state = std::make_unique<TeInterfaceAttributesTop_Grouping::Interface::State>();

}

TeInterfaceAttributesTop_Grouping::TeInterfaceAttributesTop_Grouping() {

}

MplsTeSrlgTop_Grouping::Srlg::Srlg::Config::Config() {

}

MplsTeSrlgTop_Grouping::Srlg::Srlg::State::State() {

}

MplsTeSrlgTop_Grouping::Srlg::Srlg::StaticSrlgMembers::MembersList::Config::Config() {

}

MplsTeSrlgTop_Grouping::Srlg::Srlg::StaticSrlgMembers::MembersList::State::State() {

}

MplsTeSrlgTop_Grouping::Srlg::Srlg::StaticSrlgMembers::MembersList::MembersList() {
    config = std::make_unique<MplsTeSrlgTop_Grouping::Srlg::Srlg::StaticSrlgMembers::MembersList::Config>();
    state = std::make_unique<MplsTeSrlgTop_Grouping::Srlg::Srlg::StaticSrlgMembers::MembersList::State>();

}

MplsTeSrlgTop_Grouping::Srlg::Srlg::StaticSrlgMembers::StaticSrlgMembers() {

}

MplsTeSrlgTop_Grouping::Srlg::Srlg::Srlg() {
    config = std::make_unique<MplsTeSrlgTop_Grouping::Srlg::Srlg::Config>();
    state = std::make_unique<MplsTeSrlgTop_Grouping::Srlg::Srlg::State>();
    static_srlg_members = std::make_unique<MplsTeSrlgTop_Grouping::Srlg::Srlg::StaticSrlgMembers>();

}

MplsTeSrlgTop_Grouping::Srlg::Srlg() {

}

MplsTeSrlgTop_Grouping::MplsTeSrlgTop_Grouping() {
    srlg = std::make_unique<MplsTeSrlgTop_Grouping::Srlg>();

}

ExplicitRouteSubobjectConfig_Grouping::ExplicitRouteSubobjectConfig_Grouping() {

}

MplsGlobalTop_Grouping::Config::Config() {

}

MplsGlobalTop_Grouping::State::State() {

}

MplsGlobalTop_Grouping::MplsGlobalTop_Grouping() {
    config = std::make_unique<MplsGlobalTop_Grouping::Config>();
    state = std::make_unique<MplsGlobalTop_Grouping::State>();

}

TeTunnelP2P_Top_Grouping::P2PTunnelAttributes::Config::Config() {

}

TeTunnelP2P_Top_Grouping::P2PTunnelAttributes::State::State() {

}

TeTunnelP2P_Top_Grouping::P2PTunnelAttributes::P2PTunnelAttributes() {
    config = std::make_unique<TeTunnelP2P_Top_Grouping::P2PTunnelAttributes::Config>();
    state = std::make_unique<TeTunnelP2P_Top_Grouping::P2PTunnelAttributes::State>();

}

TeTunnelP2P_Top_Grouping::TeTunnelP2P_Top_Grouping() {
    p2p_tunnel_attributes = std::make_unique<TeTunnelP2P_Top_Grouping::P2PTunnelAttributes>();

}

P2PSecondaryPaths_Top_Grouping::P2PSecondaryPaths::Config::Config() {

}

P2PSecondaryPaths_Top_Grouping::P2PSecondaryPaths::State::State() {

}

P2PSecondaryPaths_Top_Grouping::P2PSecondaryPaths::P2PSecondaryPaths() {
    config = std::make_unique<P2PSecondaryPaths_Top_Grouping::P2PSecondaryPaths::Config>();
    state = std::make_unique<P2PSecondaryPaths_Top_Grouping::P2PSecondaryPaths::State>();

}

P2PSecondaryPaths_Top_Grouping::P2PSecondaryPaths_Top_Grouping() {

}

TeInterfaceAttributes_Config_Grouping::TeInterfaceAttributes_Config_Grouping() {

}

MplsInterfacesTop_Grouping::MplsInterfaceAttributes::Interface::Config::Config() {

}

MplsInterfacesTop_Grouping::MplsInterfaceAttributes::Interface::State::State() {

}

MplsInterfacesTop_Grouping::MplsInterfaceAttributes::Interface::Interface() {
    config = std::make_unique<MplsInterfacesTop_Grouping::MplsInterfaceAttributes::Interface::Config>();
    state = std::make_unique<MplsInterfacesTop_Grouping::MplsInterfaceAttributes::Interface::State>();

}

MplsInterfacesTop_Grouping::MplsInterfaceAttributes::MplsInterfaceAttributes() {

}

MplsInterfacesTop_Grouping::MplsInterfacesTop_Grouping() {
    mpls_interface_attributes = std::make_unique<MplsInterfacesTop_Grouping::MplsInterfaceAttributes>();

}

NamedExplicitPathConfig_Grouping::NamedExplicitPathConfig_Grouping() {

}

IgpLspSetup_Grouping::PathSetupProtocol::PathSetupProtocol() {

}

IgpLspSetup_Grouping::IgpLspSetup_Grouping() {
    path_setup_protocol = std::make_unique<IgpLspSetup_Grouping::PathSetupProtocol>();

}

MplsTeIgpFloodingBandwidth_Grouping::IgpFloodingBandwidth::Config::Config() {

}

MplsTeIgpFloodingBandwidth_Grouping::IgpFloodingBandwidth::State::State() {

}

MplsTeIgpFloodingBandwidth_Grouping::IgpFloodingBandwidth::IgpFloodingBandwidth() {
    config = std::make_unique<MplsTeIgpFloodingBandwidth_Grouping::IgpFloodingBandwidth::Config>();
    state = std::make_unique<MplsTeIgpFloodingBandwidth_Grouping::IgpFloodingBandwidth::State>();

}

MplsTeIgpFloodingBandwidth_Grouping::MplsTeIgpFloodingBandwidth_Grouping() {
    igp_flooding_bandwidth = std::make_unique<MplsTeIgpFloodingBandwidth_Grouping::IgpFloodingBandwidth>();

}

TeLspUnderflow_Config_Grouping::TeLspUnderflow_Config_Grouping() {

}

TeTunnelBandwidth_Config_Grouping::TeTunnelBandwidth_Config_Grouping() {

}

MplsAdminGroupsTop_Grouping::MplsAdminGroups::AdminGroup::Config::Config() {

}

MplsAdminGroupsTop_Grouping::MplsAdminGroups::AdminGroup::State::State() {

}

MplsAdminGroupsTop_Grouping::MplsAdminGroups::AdminGroup::AdminGroup() {
    config = std::make_unique<MplsAdminGroupsTop_Grouping::MplsAdminGroups::AdminGroup::Config>();
    state = std::make_unique<MplsAdminGroupsTop_Grouping::MplsAdminGroups::AdminGroup::State>();

}

MplsAdminGroupsTop_Grouping::MplsAdminGroups::MplsAdminGroups() {

}

MplsAdminGroupsTop_Grouping::MplsAdminGroupsTop_Grouping() {
    mpls_admin_groups = std::make_unique<MplsAdminGroupsTop_Grouping::MplsAdminGroups>();

}

TeTunnels_Top_Grouping::Tunnel::Config::Config() {

}

TeTunnels_Top_Grouping::Tunnel::State::State() {

}

TeTunnels_Top_Grouping::Tunnel::Tunnel() {
    config = std::make_unique<TeTunnels_Top_Grouping::Tunnel::Config>();
    state = std::make_unique<TeTunnels_Top_Grouping::Tunnel::State>();

}

TeTunnels_Top_Grouping::TeTunnels_Top_Grouping() {

}

StaticLspMain_Grouping::LabelSwitchedPath::Ingress::Ingress() {

}

StaticLspMain_Grouping::LabelSwitchedPath::Transit::Transit() {

}

StaticLspMain_Grouping::LabelSwitchedPath::Egress::Egress() {

}

StaticLspMain_Grouping::LabelSwitchedPath::LabelSwitchedPath() {
    egress = std::make_unique<StaticLspMain_Grouping::LabelSwitchedPath::Egress>();
    ingress = std::make_unique<StaticLspMain_Grouping::LabelSwitchedPath::Ingress>();
    transit = std::make_unique<StaticLspMain_Grouping::LabelSwitchedPath::Transit>();

}

StaticLspMain_Grouping::StaticLspMain_Grouping() {

}

TePathPlacementConstraintsTop_Grouping::AdminGroups::Config::Config() {

}

TePathPlacementConstraintsTop_Grouping::AdminGroups::State::State() {

}

TePathPlacementConstraintsTop_Grouping::AdminGroups::AdminGroups() {
    config = std::make_unique<TePathPlacementConstraintsTop_Grouping::AdminGroups::Config>();
    state = std::make_unique<TePathPlacementConstraintsTop_Grouping::AdminGroups::State>();

}

TePathPlacementConstraintsTop_Grouping::TePathPlacementConstraintsTop_Grouping() {
    admin_groups = std::make_unique<TePathPlacementConstraintsTop_Grouping::AdminGroups>();

}

MplsTeSrlgMembers_Config_Grouping::MplsTeSrlgMembers_Config_Grouping() {

}

TePathPlacementConstraintsConfig_Grouping::TePathPlacementConstraintsConfig_Grouping() {

}

StaticLspCommon_Grouping::StaticLspCommon_Grouping() {

}

ExplicitPaths_Top_Grouping::NamedExplicitPaths::Config::Config() {

}

ExplicitPaths_Top_Grouping::NamedExplicitPaths::State::State() {

}

ExplicitPaths_Top_Grouping::NamedExplicitPaths::ExplicitRouteObjects::Config::Config() {

}

ExplicitPaths_Top_Grouping::NamedExplicitPaths::ExplicitRouteObjects::State::State() {

}

ExplicitPaths_Top_Grouping::NamedExplicitPaths::ExplicitRouteObjects::ExplicitRouteObjects() {
    config = std::make_unique<ExplicitPaths_Top_Grouping::NamedExplicitPaths::ExplicitRouteObjects::Config>();
    state = std::make_unique<ExplicitPaths_Top_Grouping::NamedExplicitPaths::ExplicitRouteObjects::State>();

}

ExplicitPaths_Top_Grouping::NamedExplicitPaths::NamedExplicitPaths() {
    config = std::make_unique<ExplicitPaths_Top_Grouping::NamedExplicitPaths::Config>();
    state = std::make_unique<ExplicitPaths_Top_Grouping::NamedExplicitPaths::State>();

}

ExplicitPaths_Top_Grouping::ExplicitPaths_Top_Grouping() {

}

MplsAdminGroup_Config_Grouping::MplsAdminGroup_Config_Grouping() {

}

P2PPathCandidateSecondaryPathState_Grouping::P2PPathCandidateSecondaryPathState_Grouping() {

}

TeTunnelBandwidth_Top_Grouping::Bandwidth::Config::Config() {

}

TeTunnelBandwidth_Top_Grouping::Bandwidth::State::State() {

}

TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Config::Config() {

}

TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::State::State() {

}

TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Overflow::Config::Config() {

}

TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Overflow::State::State() {

}

TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Overflow::Overflow() {
    config = std::make_unique<TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Overflow::Config>();
    state = std::make_unique<TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Overflow::State>();

}

TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Underflow::Config::Config() {

}

TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Underflow::State::State() {

}

TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Underflow::Underflow() {
    config = std::make_unique<TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Underflow::Config>();
    state = std::make_unique<TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Underflow::State>();

}

TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::AutoBandwidth() {
    config = std::make_unique<TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Config>();
    overflow = std::make_unique<TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Overflow>();
    state = std::make_unique<TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::State>();
    underflow = std::make_unique<TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Underflow>();

}

TeTunnelBandwidth_Top_Grouping::Bandwidth::Bandwidth() {
    auto_bandwidth = std::make_unique<TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth>();
    config = std::make_unique<TeTunnelBandwidth_Top_Grouping::Bandwidth::Config>();
    state = std::make_unique<TeTunnelBandwidth_Top_Grouping::Bandwidth::State>();

}

TeTunnelBandwidth_Top_Grouping::TeTunnelBandwidth_Top_Grouping() {
    bandwidth = std::make_unique<TeTunnelBandwidth_Top_Grouping::Bandwidth>();

}

MplsTeIgpFloodingBandwidth_Config_Grouping::MplsTeIgpFloodingBandwidth_Config_Grouping() {

}

MplsGlobal_Config_Grouping::MplsGlobal_Config_Grouping() {

}

MplsInterfaceAttributesConfig_Grouping::MplsInterfaceAttributesConfig_Grouping() {

}

P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths::Config::Config() {

}

P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths::State::State() {

}

P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::Config() {

}

P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State::State() {

}

P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::CandidateSecondaryPath() {
    config = std::make_unique<P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config>();
    state = std::make_unique<P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State>();

}

P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPaths() {

}

P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths::P2PPrimaryPaths() {
    candidate_secondary_paths = std::make_unique<P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths::CandidateSecondaryPaths>();
    config = std::make_unique<P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths::Config>();
    state = std::make_unique<P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths::State>();

}

P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths_Top_Grouping() {

}

TeTunnelReoptimize_Config_Grouping::TeTunnelReoptimize_Config_Grouping() {

}

TeLspAutoBandwidth_Config_Grouping::TeLspAutoBandwidth_Config_Grouping() {

}

IgpLspCommon_Grouping::IgpLspCommon_Grouping() {

}

MplsTeSrlg_Config_Grouping::MplsTeSrlg_Config_Grouping() {

}

P2PPathCandidateSecondaryPathConfig_Grouping::P2PPathCandidateSecondaryPathConfig_Grouping() {

}

TeLspDelay_Config_Grouping::TeLspDelay_Config_Grouping() {

}

TeGlobalTunnel_Config_Grouping::TeGlobalTunnel_Config_Grouping() {

}

TeTunnelProtection_Config_Grouping::TeTunnelProtection_Config_Grouping() {

}

TePathPlacementConstraintsState_Grouping::TePathPlacementConstraintsState_Grouping() {

}

Mpls::Global::Global() {

}

Mpls::TeGlobalAttributes::TeGlobalAttributes() {

}

Mpls::TeInterfaceAttributes::TeInterfaceAttributes() {

}

Mpls::SignalingProtocols::SignalingProtocols() {

}

Mpls::Lsps::ConstrainedPath::ConstrainedPath() {

}

Mpls::Lsps::UnconstrainedPath::UnconstrainedPath() {

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
