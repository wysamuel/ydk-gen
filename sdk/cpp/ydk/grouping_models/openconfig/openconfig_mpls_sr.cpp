#include <memory>
#include <vector>
#include <string>
#include "ydk/models/openconfig_mpls_sr/openconfig_mpls_sr.h"

namespace ydk {
namespace openconfig_mpls_sr {
SrGlobal_Grouping::SegmentRouting::Srgb::Config::Config() {

}

SrGlobal_Grouping::SegmentRouting::Srgb::State::State() {

}

SrGlobal_Grouping::SegmentRouting::Srgb::Srgb() {
    config = std::make_unique<SrGlobal_Grouping::SegmentRouting::Srgb::Config>();
    state = std::make_unique<SrGlobal_Grouping::SegmentRouting::Srgb::State>();

}

SrGlobal_Grouping::SegmentRouting::Interfaces::Config::Config() {

}

SrGlobal_Grouping::SegmentRouting::Interfaces::State::State() {

}

SrGlobal_Grouping::SegmentRouting::Interfaces::AdjacencySid::Config::Config() {

}

SrGlobal_Grouping::SegmentRouting::Interfaces::AdjacencySid::State::State() {

}

SrGlobal_Grouping::SegmentRouting::Interfaces::AdjacencySid::AdjacencySid() {
    config = std::make_unique<SrGlobal_Grouping::SegmentRouting::Interfaces::AdjacencySid::Config>();
    state = std::make_unique<SrGlobal_Grouping::SegmentRouting::Interfaces::AdjacencySid::State>();

}

SrGlobal_Grouping::SegmentRouting::Interfaces::Interfaces() {
    adjacency_sid = std::make_unique<SrGlobal_Grouping::SegmentRouting::Interfaces::AdjacencySid>();
    config = std::make_unique<SrGlobal_Grouping::SegmentRouting::Interfaces::Config>();
    state = std::make_unique<SrGlobal_Grouping::SegmentRouting::Interfaces::State>();

}

SrGlobal_Grouping::SegmentRouting::SegmentRouting() {

}

SrGlobal_Grouping::SrGlobal_Grouping() {
    segment_routing = std::make_unique<SrGlobal_Grouping::SegmentRouting>();

}

Sr_FecPrefixSid_Config_Grouping::Sr_FecPrefixSid_Config_Grouping() {

}

Interface_Config_Grouping::Interface_Config_Grouping() {

}

IgpTunnelSr_Grouping::Tunnel::P2PLsp::Fec::Config::Config() {

}

IgpTunnelSr_Grouping::Tunnel::P2PLsp::Fec::State::State() {

}

IgpTunnelSr_Grouping::Tunnel::P2PLsp::Fec::PrefixSid::Config::Config() {

}

IgpTunnelSr_Grouping::Tunnel::P2PLsp::Fec::PrefixSid::State::State() {

}

IgpTunnelSr_Grouping::Tunnel::P2PLsp::Fec::PrefixSid::PrefixSid() {
    config = std::make_unique<IgpTunnelSr_Grouping::Tunnel::P2PLsp::Fec::PrefixSid::Config>();
    state = std::make_unique<IgpTunnelSr_Grouping::Tunnel::P2PLsp::Fec::PrefixSid::State>();

}

IgpTunnelSr_Grouping::Tunnel::P2PLsp::Fec::Fec() {
    config = std::make_unique<IgpTunnelSr_Grouping::Tunnel::P2PLsp::Fec::Config>();
    prefix_sid = std::make_unique<IgpTunnelSr_Grouping::Tunnel::P2PLsp::Fec::PrefixSid>();
    state = std::make_unique<IgpTunnelSr_Grouping::Tunnel::P2PLsp::Fec::State>();

}

IgpTunnelSr_Grouping::Tunnel::P2PLsp::P2PLsp() {

}

IgpTunnelSr_Grouping::Tunnel::Tunnel() {
    p2p_lsp = std::make_unique<IgpTunnelSr_Grouping::Tunnel::P2PLsp>();

}

IgpTunnelSr_Grouping::IgpTunnelSr_Grouping() {
    tunnel = std::make_unique<IgpTunnelSr_Grouping::Tunnel>();

}

Srgb_State_Grouping::Srgb_State_Grouping() {

}

SrPathAttributes_Config_Grouping::SrPathAttributes_Config_Grouping() {

}

IgpLspSrSetup_Grouping::SegmentRouting::SegmentRouting() {

}

IgpLspSrSetup_Grouping::IgpLspSrSetup_Grouping() {
    segment_routing = std::make_unique<IgpLspSrSetup_Grouping::SegmentRouting>();

}

AdjacencySid_Config_Grouping::AdjacencySid_Config_Grouping() {

}

Sr_FecAddress_Config_Grouping::Sr_FecAddress_Config_Grouping() {

}

Srgb_Config_Grouping::Srgb_Config_Grouping() {

}


};
};
