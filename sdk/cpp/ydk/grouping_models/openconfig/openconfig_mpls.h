#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_mpls {

class PathComputationMethod_Identity {


};

class LocallyComputed_Identity: public PathComputationMethod_Identity {
    public:

};

class ExplicitlyDefined_Identity: public PathComputationMethod_Identity {
    public:

};

class ExternallyQueried_Identity: public PathComputationMethod_Identity {
    public:

};

class TeLspOverflow_Config_Grouping {
    public:
        bool enabled;
        std::string overflow_threshold;
        int trigger_event_count;

};

class P2PPath_Config_Grouping: public RsvpP2PPathAttributes_Config_Grouping {
    public:
        std::string cspf_tiebreaker;
        std::string explicit_path_name;
        std::string name;
        std::string path_computation_method;
        std::string path_computation_server;
        std::string preference;
        bool use_cspf;

};

class MplsTeLspTimers_Grouping {
    public:
        MplsTeLspTimers_Grouping();

    class TeLspTimers {
        public:
            TeLspTimers();

        class Config: public TeLspDelay_Config_Grouping, TeTunnelReoptimize_Config_Grouping {
            public:

        };

        class State: public TeLspDelay_Config_Grouping, TeTunnelReoptimize_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<MplsTeLspTimers_Grouping::TeLspTimers::Config> config;
            std::unique_ptr<MplsTeLspTimers_Grouping::TeLspTimers::State> state;

    };

    public:
        std::unique_ptr<MplsTeLspTimers_Grouping::TeLspTimers> te_lsp_timers;

};

class TunnelP2PAttributes_Config_Grouping {
    public:
        std::string destination;

};

class TeTunnel_State_Grouping {
    public:
        TeTunnel_State_Grouping();

    class Counters {
        public:
            int bytes;
            std::string current_path_time;
            std::string next_reoptimization_time;
            std::string online_time;
            int packets;
            int path_changes;
            int state_changes;

    };

    public:
        std::unique_ptr<TeTunnel_State_Grouping::Counters> counters;
        std::string oper_status;
        std::string role;

};

class TeInterfaceAttributesTop_Grouping {
    public:
        TeInterfaceAttributesTop_Grouping();

    class Interface: public MplsTeIgpFloodingBandwidth_Grouping {
        public:
            Interface();

        class Config: public TeInterfaceAttributes_Config_Grouping {
            public:

        };

        class State: public TeInterfaceAttributes_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<TeInterfaceAttributesTop_Grouping::Interface::Config> config;
            std::string name;
            std::unique_ptr<TeInterfaceAttributesTop_Grouping::Interface::State> state;

    };

    public:
        std::vector< std::unique_ptr<TeInterfaceAttributesTop_Grouping::Interface> > interface;

};

class MplsTeSrlgTop_Grouping {
    public:
        MplsTeSrlgTop_Grouping();

    class Srlg {
        public:
            Srlg();

        class Srlg {
            public:
                Srlg();

            class Config: public MplsTeSrlg_Config_Grouping {
                public:

            };

            class State: public MplsTeSrlg_Config_Grouping {
                public:

            };

            class StaticSrlgMembers {
                public:
                    StaticSrlgMembers();

                class MembersList {
                    public:
                        MembersList();

                    class Config: public MplsTeSrlgMembers_Config_Grouping {
                        public:

                    };

                    class State: public MplsTeSrlgMembers_Config_Grouping {
                        public:

                    };

                    public:
                        std::unique_ptr<MplsTeSrlgTop_Grouping::Srlg::Srlg::StaticSrlgMembers::MembersList::Config> config;
                        std::string from_address;
                        std::unique_ptr<MplsTeSrlgTop_Grouping::Srlg::Srlg::StaticSrlgMembers::MembersList::State> state;

                };

                public:
                    std::vector< std::unique_ptr<MplsTeSrlgTop_Grouping::Srlg::Srlg::StaticSrlgMembers::MembersList> > members_list;

            };

            public:
                std::unique_ptr<MplsTeSrlgTop_Grouping::Srlg::Srlg::Config> config;
                std::string name;
                std::unique_ptr<MplsTeSrlgTop_Grouping::Srlg::Srlg::State> state;
                std::unique_ptr<MplsTeSrlgTop_Grouping::Srlg::Srlg::StaticSrlgMembers> static_srlg_members;

        };

        public:
            std::vector< std::unique_ptr<MplsTeSrlgTop_Grouping::Srlg::Srlg> > srlg;

    };

    public:
        std::unique_ptr<MplsTeSrlgTop_Grouping::Srlg> srlg;

};

class ExplicitRouteSubobjectConfig_Grouping {
    public:
        std::string address;
        std::string hop_type;
        std::string index;

};

class MplsGlobalTop_Grouping {
    public:
        MplsGlobalTop_Grouping();

    class Config: public MplsGlobal_Config_Grouping {
        public:

    };

    class State: public MplsGlobal_Config_Grouping {
        public:

    };

    public:
        std::unique_ptr<MplsGlobalTop_Grouping::Config> config;
        std::unique_ptr<MplsGlobalTop_Grouping::State> state;

};

class TeTunnelP2P_Top_Grouping {
    public:
        TeTunnelP2P_Top_Grouping();

    class P2PTunnelAttributes: public P2PPrimaryPaths_Top_Grouping, P2PSecondaryPaths_Top_Grouping {
        public:
            P2PTunnelAttributes();

        class Config: public TunnelP2PAttributes_Config_Grouping {
            public:

        };

        class State: public TunnelP2PAttributes_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<TeTunnelP2P_Top_Grouping::P2PTunnelAttributes::Config> config;
            std::unique_ptr<TeTunnelP2P_Top_Grouping::P2PTunnelAttributes::State> state;

    };

    public:
        std::unique_ptr<TeTunnelP2P_Top_Grouping::P2PTunnelAttributes> p2p_tunnel_attributes;

};

class P2PSecondaryPaths_Top_Grouping {
    public:
        P2PSecondaryPaths_Top_Grouping();

    class P2PSecondaryPaths: public TePathPlacementConstraintsTop_Grouping {
        public:
            P2PSecondaryPaths();

        class Config: public P2PPath_Config_Grouping {
            public:

        };

        class State: public P2PPath_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<P2PSecondaryPaths_Top_Grouping::P2PSecondaryPaths::Config> config;
            std::string name;
            std::unique_ptr<P2PSecondaryPaths_Top_Grouping::P2PSecondaryPaths::State> state;

    };

    public:
        std::vector< std::unique_ptr<P2PSecondaryPaths_Top_Grouping::P2PSecondaryPaths> > p2p_secondary_paths;

};

class TeInterfaceAttributes_Config_Grouping {
    public:
        std::vector<std::string> admin_group;
        std::string name;
        std::vector<std::string> srlg_membership;
        int te_metric;

};

class MplsInterfacesTop_Grouping {
    public:
        MplsInterfacesTop_Grouping();

    class MplsInterfaceAttributes {
        public:
            MplsInterfaceAttributes();

        class Interface {
            public:
                Interface();

            class Config: public MplsInterfaceAttributesConfig_Grouping {
                public:

            };

            class State: public MplsInterfaceAttributesConfig_Grouping {
                public:

            };

            public:
                std::unique_ptr<MplsInterfacesTop_Grouping::MplsInterfaceAttributes::Interface::Config> config;
                std::string name;
                std::unique_ptr<MplsInterfacesTop_Grouping::MplsInterfaceAttributes::Interface::State> state;

        };

        public:
            std::vector< std::unique_ptr<MplsInterfacesTop_Grouping::MplsInterfaceAttributes::Interface> > interface;

    };

    public:
        std::unique_ptr<MplsInterfacesTop_Grouping::MplsInterfaceAttributes> mpls_interface_attributes;

};

class NamedExplicitPathConfig_Grouping {
    public:
        std::string name;

};

class IgpLspSetup_Grouping {
    public:
        IgpLspSetup_Grouping();

    class PathSetupProtocol: public IgpLspLdpSetup_Grouping, IgpLspSrSetup_Grouping {
        public:

    };

    public:
        std::unique_ptr<IgpLspSetup_Grouping::PathSetupProtocol> path_setup_protocol;

};

class MplsTeIgpFloodingBandwidth_Grouping {
    public:
        MplsTeIgpFloodingBandwidth_Grouping();

    class IgpFloodingBandwidth {
        public:
            IgpFloodingBandwidth();

        class Config: public MplsTeIgpFloodingBandwidth_Config_Grouping {
            public:

        };

        class State: public MplsTeIgpFloodingBandwidth_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<MplsTeIgpFloodingBandwidth_Grouping::IgpFloodingBandwidth::Config> config;
            std::unique_ptr<MplsTeIgpFloodingBandwidth_Grouping::IgpFloodingBandwidth::State> state;

    };

    public:
        std::unique_ptr<MplsTeIgpFloodingBandwidth_Grouping::IgpFloodingBandwidth> igp_flooding_bandwidth;

};

class TeLspUnderflow_Config_Grouping {
    public:
        bool enabled;
        int trigger_event_count;
        std::string underflow_threshold;

};

class TeTunnelBandwidth_Config_Grouping {
    public:
        int set_bandwidth;
        std::string specification_type;

};

class MplsAdminGroupsTop_Grouping {
    public:
        MplsAdminGroupsTop_Grouping();

    class MplsAdminGroups {
        public:
            MplsAdminGroups();

        class AdminGroup {
            public:
                AdminGroup();

            class Config: public MplsAdminGroup_Config_Grouping {
                public:

            };

            class State: public MplsAdminGroup_Config_Grouping {
                public:

            };

            public:
                std::string admin_group_name;
                std::unique_ptr<MplsAdminGroupsTop_Grouping::MplsAdminGroups::AdminGroup::Config> config;
                std::unique_ptr<MplsAdminGroupsTop_Grouping::MplsAdminGroups::AdminGroup::State> state;

        };

        public:
            std::vector< std::unique_ptr<MplsAdminGroupsTop_Grouping::MplsAdminGroups::AdminGroup> > admin_group;

    };

    public:
        std::unique_ptr<MplsAdminGroupsTop_Grouping::MplsAdminGroups> mpls_admin_groups;

};

class TeTunnels_Top_Grouping {
    public:
        TeTunnels_Top_Grouping();

    class Tunnel: public TeTunnelBandwidth_Top_Grouping, TeTunnelP2P_Top_Grouping {
        public:
            Tunnel();

        class Config: public TeGlobalTunnel_Config_Grouping {
            public:

        };

        class State: public TeGlobalTunnel_Config_Grouping, TeTunnel_State_Grouping {
            public:

        };

        public:
            std::unique_ptr<TeTunnels_Top_Grouping::Tunnel::Config> config;
            std::string name;
            std::unique_ptr<TeTunnels_Top_Grouping::Tunnel::State> state;
            std::string type;

    };

    public:
        std::vector< std::unique_ptr<TeTunnels_Top_Grouping::Tunnel> > tunnel;

};

class StaticLspMain_Grouping {
    public:
        StaticLspMain_Grouping();

    class LabelSwitchedPath {
        public:
            LabelSwitchedPath();

        class Ingress: public StaticLspCommon_Grouping {
            public:

        };

        class Transit: public StaticLspCommon_Grouping {
            public:

        };

        class Egress: public StaticLspCommon_Grouping {
            public:

        };

        public:
            std::unique_ptr<StaticLspMain_Grouping::LabelSwitchedPath::Egress> egress;
            std::unique_ptr<StaticLspMain_Grouping::LabelSwitchedPath::Ingress> ingress;
            std::string name;
            std::unique_ptr<StaticLspMain_Grouping::LabelSwitchedPath::Transit> transit;

    };

    public:
        std::vector< std::unique_ptr<StaticLspMain_Grouping::LabelSwitchedPath> > label_switched_path;

};

class TePathPlacementConstraintsTop_Grouping {
    public:
        TePathPlacementConstraintsTop_Grouping();

    class AdminGroups {
        public:
            AdminGroups();

        class Config: public TePathPlacementConstraintsConfig_Grouping {
            public:

        };

        class State: public TePathPlacementConstraintsConfig_Grouping, TePathPlacementConstraintsState_Grouping {
            public:

        };

        public:
            std::unique_ptr<TePathPlacementConstraintsTop_Grouping::AdminGroups::Config> config;
            std::unique_ptr<TePathPlacementConstraintsTop_Grouping::AdminGroups::State> state;

    };

    public:
        std::unique_ptr<TePathPlacementConstraintsTop_Grouping::AdminGroups> admin_groups;

};

class MplsTeSrlgMembers_Config_Grouping {
    public:
        std::string from_address;
        std::string to_address;

};

class TePathPlacementConstraintsConfig_Grouping {
    public:
        std::vector<std::string> exclude_group;
        std::vector<std::string> include_all_group;
        std::vector<std::string> include_any_group;

};

class StaticLspCommon_Grouping {
    public:
        std::string incoming_label;
        std::string next_hop;
        std::string push_label;

};

class ExplicitPaths_Top_Grouping {
    public:
        ExplicitPaths_Top_Grouping();

    class NamedExplicitPaths {
        public:
            NamedExplicitPaths();

        class Config: public NamedExplicitPathConfig_Grouping {
            public:

        };

        class State: public NamedExplicitPathConfig_Grouping {
            public:

        };

        class ExplicitRouteObjects {
            public:
                ExplicitRouteObjects();

            class Config: public ExplicitRouteSubobjectConfig_Grouping {
                public:

            };

            class State: public ExplicitRouteSubobjectConfig_Grouping {
                public:

            };

            public:
                std::unique_ptr<ExplicitPaths_Top_Grouping::NamedExplicitPaths::ExplicitRouteObjects::Config> config;
                std::string index;
                std::unique_ptr<ExplicitPaths_Top_Grouping::NamedExplicitPaths::ExplicitRouteObjects::State> state;

        };

        public:
            std::unique_ptr<ExplicitPaths_Top_Grouping::NamedExplicitPaths::Config> config;
            std::vector< std::unique_ptr<ExplicitPaths_Top_Grouping::NamedExplicitPaths::ExplicitRouteObjects> > explicit_route_objects;
            std::string name;
            std::unique_ptr<ExplicitPaths_Top_Grouping::NamedExplicitPaths::State> state;

    };

    public:
        std::vector< std::unique_ptr<ExplicitPaths_Top_Grouping::NamedExplicitPaths> > named_explicit_paths;

};

class MplsAdminGroup_Config_Grouping {
    public:
        std::string admin_group_name;
        int bit_position;

};

class P2PPathCandidateSecondaryPathState_Grouping {
    public:
        bool active;

};

class TeTunnelBandwidth_Top_Grouping {
    public:
        TeTunnelBandwidth_Top_Grouping();

    class Bandwidth {
        public:
            Bandwidth();

        class Config: public TeTunnelBandwidth_Config_Grouping {
            public:

        };

        class State: public TeTunnelBandwidth_Config_Grouping {
            public:

        };

        class AutoBandwidth {
            public:
                AutoBandwidth();

            class Config: public TeLspAutoBandwidth_Config_Grouping {
                public:

            };

            class State: public TeLspAutoBandwidth_Config_Grouping {
                public:

            };

            class Overflow {
                public:
                    Overflow();

                class Config: public TeLspOverflow_Config_Grouping {
                    public:

                };

                class State: public TeLspOverflow_Config_Grouping {
                    public:

                };

                public:
                    std::unique_ptr<TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Overflow::Config> config;
                    std::unique_ptr<TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Overflow::State> state;

            };

            class Underflow {
                public:
                    Underflow();

                class Config: public TeLspUnderflow_Config_Grouping {
                    public:

                };

                class State: public TeLspUnderflow_Config_Grouping {
                    public:

                };

                public:
                    std::unique_ptr<TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Underflow::Config> config;
                    std::unique_ptr<TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Underflow::State> state;

            };

            public:
                std::unique_ptr<TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Config> config;
                std::unique_ptr<TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Overflow> overflow;
                std::unique_ptr<TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::State> state;
                std::unique_ptr<TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth::Underflow> underflow;

        };

        public:
            std::unique_ptr<TeTunnelBandwidth_Top_Grouping::Bandwidth::AutoBandwidth> auto_bandwidth;
            std::unique_ptr<TeTunnelBandwidth_Top_Grouping::Bandwidth::Config> config;
            std::unique_ptr<TeTunnelBandwidth_Top_Grouping::Bandwidth::State> state;

    };

    public:
        std::unique_ptr<TeTunnelBandwidth_Top_Grouping::Bandwidth> bandwidth;

};

class MplsTeIgpFloodingBandwidth_Config_Grouping {
    public:
        std::string delta_percentage;
        std::vector<std::string> down_thresholds;
        std::string threshold_specification;
        std::string threshold_type;
        std::vector<std::string> up_down_thresholds;
        std::vector<std::string> up_thresholds;

};

class MplsGlobal_Config_Grouping {
    public:
        std::string null_label;

};

class MplsInterfaceAttributesConfig_Grouping {
    public:
        bool mpls_enabled;
        std::string name;

};

class P2PPrimaryPaths_Top_Grouping {
    public:
        P2PPrimaryPaths_Top_Grouping();

    class P2PPrimaryPaths: public TePathPlacementConstraintsTop_Grouping {
        public:
            P2PPrimaryPaths();

        class Config: public P2PPath_Config_Grouping {
            public:

        };

        class State: public P2PPath_Config_Grouping {
            public:

        };

        class CandidateSecondaryPaths {
            public:
                CandidateSecondaryPaths();

            class CandidateSecondaryPath {
                public:
                    CandidateSecondaryPath();

                class Config: public P2PPathCandidateSecondaryPathConfig_Grouping {
                    public:

                };

                class State: public P2PPathCandidateSecondaryPathConfig_Grouping, P2PPathCandidateSecondaryPathState_Grouping {
                    public:

                };

                public:
                    std::unique_ptr<P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config> config;
                    std::string secondary_path;
                    std::unique_ptr<P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State> state;

            };

            public:
                std::vector< std::unique_ptr<P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath> > candidate_secondary_path;

        };

        public:
            std::unique_ptr<P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths::CandidateSecondaryPaths> candidate_secondary_paths;
            std::unique_ptr<P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths::Config> config;
            std::string name;
            std::unique_ptr<P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths::State> state;

    };

    public:
        std::vector< std::unique_ptr<P2PPrimaryPaths_Top_Grouping::P2PPrimaryPaths> > p2p_primary_paths;

};

class TeTunnelReoptimize_Config_Grouping {
    public:
        int reoptimize_timer;

};

class TeLspAutoBandwidth_Config_Grouping {
    public:
        int adjust_interval;
        std::string adjust_threshold;
        bool enabled;
        int max_bw;
        int min_bw;

};

class IgpLspCommon_Grouping {
    public:

};

class MplsTeSrlg_Config_Grouping {
    public:
        int cost;
        std::string flooding_type;
        std::string name;
        int value;

};

class P2PPathCandidateSecondaryPathConfig_Grouping {
    public:
        int priority;
        std::string secondary_path;

};

class TeLspDelay_Config_Grouping {
    public:
        int cleanup_delay;
        std::string install_delay;

};

class TeGlobalTunnel_Config_Grouping: public TeTunnelReoptimize_Config_Grouping, RsvpP2PTunnelAttributes_Config_Grouping {
    public:
        std::string admin_status;
        std::string description;
        std::string local_id;
        std::string metric;
        std::string name;
        std::string preference;
        std::string protection_style_requested;
        std::string signaling_protocol;
        std::string type;

};

class TeTunnelProtection_Config_Grouping {
    public:
        std::string protection_style_requested;

};

class TePathPlacementConstraintsState_Grouping {
    public:

};

class Mpls {
    public:
        Mpls();

    class Global: public MplsGlobalTop_Grouping, MplsInterfacesTop_Grouping {
        public:

    };

    class TeGlobalAttributes: public MplsTeSrlgTop_Grouping, MplsTeIgpFloodingBandwidth_Grouping, MplsAdminGroupsTop_Grouping, MplsTeLspTimers_Grouping {
        public:

    };

    class TeInterfaceAttributes: public TeInterfaceAttributesTop_Grouping {
        public:

    };

    class SignalingProtocols: public RsvpGlobal_Grouping, SrGlobal_Grouping, LdpGlobal_Grouping {
        public:

    };

    class Lsps {
        public:
            Lsps();

        class ConstrainedPath: public ExplicitPaths_Top_Grouping, TeTunnels_Top_Grouping {
            public:

        };

        class UnconstrainedPath: public IgpLspCommon_Grouping, IgpLspSetup_Grouping {
            public:

        };

        class StaticLsps: public StaticLspMain_Grouping {
            public:

        };

        public:
            std::unique_ptr<Mpls::Lsps::ConstrainedPath> constrained_path;
            std::unique_ptr<Mpls::Lsps::StaticLsps> static_lsps;
            std::unique_ptr<Mpls::Lsps::UnconstrainedPath> unconstrained_path;

    };

    public:
        std::unique_ptr<Mpls::Global> global_;
        std::unique_ptr<Mpls::Lsps> lsps;
        std::unique_ptr<Mpls::SignalingProtocols> signaling_protocols;
        std::unique_ptr<Mpls::TeGlobalAttributes> te_global_attributes;
        std::unique_ptr<Mpls::TeInterfaceAttributes> te_interface_attributes;

};


};
};
