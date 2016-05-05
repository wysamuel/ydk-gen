#include <memory>
#include <vector>
#include <string>
#include "ydk/models/openconfig_mpls_ldp/openconfig_mpls_ldp.h"

namespace ydk {
namespace openconfig_mpls_ldp {
IgpLspLdpSetup_Grouping::Ldp::Ldp() {

}

IgpLspLdpSetup_Grouping::IgpLspLdpSetup_Grouping() {
    ldp = std::make_unique<IgpLspLdpSetup_Grouping::Ldp>();

}

IgpTunnelLdp_Grouping::Tunnel::P2PLsp::P2PLsp() {

}

IgpTunnelLdp_Grouping::Tunnel::P2MpLsp::P2MpLsp() {

}

IgpTunnelLdp_Grouping::Tunnel::Mp2MpLsp::Mp2MpLsp() {

}

IgpTunnelLdp_Grouping::Tunnel::Tunnel() {
    mp2mp_lsp = std::make_unique<IgpTunnelLdp_Grouping::Tunnel::Mp2MpLsp>();
    p2mp_lsp = std::make_unique<IgpTunnelLdp_Grouping::Tunnel::P2MpLsp>();
    p2p_lsp = std::make_unique<IgpTunnelLdp_Grouping::Tunnel::P2PLsp>();

}

IgpTunnelLdp_Grouping::IgpTunnelLdp_Grouping() {
    tunnel = std::make_unique<IgpTunnelLdp_Grouping::Tunnel>();

}

LdpGlobal_Grouping::Ldp::Timers::Timers() {

}

LdpGlobal_Grouping::Ldp::Ldp() {
    timers = std::make_unique<LdpGlobal_Grouping::Ldp::Timers>();

}

LdpGlobal_Grouping::LdpGlobal_Grouping() {
    ldp = std::make_unique<LdpGlobal_Grouping::Ldp>();

}


};
};
