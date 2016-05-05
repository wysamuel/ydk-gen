#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace bgp {

class BgpNeighborPeerGroup_Config_Grouping {
    public:
        std::string peer_group;

};

class BgpNeighbor_Config_Grouping {
    public:
        std::string auth_password;
        std::string description;
        int local_as;
        int peer_as;
        std::string peer_type;
        std::string remove_private_as;
        bool route_flap_damping;
        std::string send_community;

};

class BgpPeerGroup_Grouping {
    public:
        BgpPeerGroup_Grouping();

    class PeerGroup: public BgpNeighborGroup_Grouping {
        public:
            std::string peer_group_name;

    };

    public:
        std::vector< std::unique_ptr<BgpPeerGroup_Grouping::PeerGroup> > peer_group;

};

class BgpNeighborGracefulRestart_Config_Grouping {
    public:
        bool enabled;
        bool helper_only;
        std::string restart_time;
        int64 stale_routes_time;

};

class BgpGlobal_Config_Grouping {
    public:
        int as_;
        std::string router_id;

};

class BgpNeighborTimers_Config_Grouping {
    public:
        int64 connect_retry;
        int64 hold_time;
        int64 keepalive_interval;
        int64 minimum_advertisement_interval;

};

class BgpPeerGroupPeerGroupName_Config_Grouping {
    public:
        std::string peer_group_name;

};

class BgpNeighborAsPathOptions_Config_Grouping {
    public:
        int allow_own_as;
        bool replace_peer_as;

};

class BgpNeighborNeighborAddress_Config_Grouping {
    public:
        std::string neighbor_address;

};

class BgpGracefulRestart_Grouping {
    public:
        BgpGracefulRestart_Grouping();

    class GracefulRestart {
        public:
            GracefulRestart();

        class Config: public BgpNeighborGracefulRestart_Config_Grouping {
            public:

        };

        class State: public BgpNeighborGracefulRestart_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<BgpGracefulRestart_Grouping::GracefulRestart::Config> config;
            std::unique_ptr<BgpGracefulRestart_Grouping::GracefulRestart::State> state;

    };

    public:
        std::unique_ptr<BgpGracefulRestart_Grouping::GracefulRestart> graceful_restart;

};

class BgpConfederation_Config_Grouping {
    public:
        bool enabled;
        int identifier;
        std::vector<std::string> member_as;

};

class BgpNeighbors_Grouping {
    public:
        BgpNeighbors_Grouping();

    class Neighbor: public BgpNeighborGroup_Grouping {
        public:
            std::string neighbor_address;

    };

    public:
        std::vector< std::unique_ptr<BgpNeighbors_Grouping::Neighbor> > neighbor;

};

class BgpGlobalBase_Grouping: public BgpRouteSelectionOptions_Grouping, BgpUseMultiplePaths_Grouping, BgpGracefulRestart_Grouping {
    public:
        BgpGlobalBase_Grouping();

    class Config: public BgpGlobal_Config_Grouping {
        public:

    };

    class State: public BgpGlobal_Config_Grouping, BgpGlobal_State_Grouping {
        public:

    };

    class DefaultRouteDistance {
        public:
            DefaultRouteDistance();

        class Config: public BgpDefaultRouteDistance_Config_Grouping {
            public:

        };

        class State: public BgpDefaultRouteDistance_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<BgpGlobalBase_Grouping::DefaultRouteDistance::Config> config;
            std::unique_ptr<BgpGlobalBase_Grouping::DefaultRouteDistance::State> state;

    };

    class Confederation {
        public:
            Confederation();

        class Config: public BgpConfederation_Config_Grouping {
            public:

        };

        class State: public BgpConfederation_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<BgpGlobalBase_Grouping::Confederation::Config> config;
            std::unique_ptr<BgpGlobalBase_Grouping::Confederation::State> state;

    };

    class AfiSafis: public BgpCommonAfiSafiList_Grouping {
        public:

    };

    public:
        std::unique_ptr<BgpGlobalBase_Grouping::AfiSafis> afi_safis;
        std::unique_ptr<BgpGlobalBase_Grouping::Confederation> confederation;
        std::unique_ptr<BgpGlobalBase_Grouping::Config> config;
        std::unique_ptr<BgpGlobalBase_Grouping::DefaultRouteDistance> default_route_distance;
        std::unique_ptr<BgpGlobalBase_Grouping::State> state;

};

class BgpDefaultRouteDistance_Config_Grouping {
    public:
        std::string external_route_distance;
        std::string internal_route_distance;

};

class BgpNeighborLoggingOptions_Config_Grouping {
    public:
        bool log_neighbor_state_changes;

};

class BgpNeighborErrorHandling_Config_Grouping {
    public:
        bool treat_as_withdraw;

};

class BgpNeighborAddPaths_Config_Grouping {
    public:
        bool receive;
        int send_max;

};

class BgpNeighborRouteReflector_Config_Grouping {
    public:
        bool route_reflector_client;
        std::string route_reflector_cluster_id;

};

class BgpNeighborGroup_Grouping: public BgpGracefulRestart_Grouping, ApplyPolicyGroup_Grouping {
    public:
        BgpNeighborGroup_Grouping();

    class Config: public BgpNeighbor_Config_Grouping {
        public:

    };

    class State: public BgpNeighbor_Config_Grouping {
        public:

    };

    class Timers {
        public:
            Timers();

        class Config: public BgpNeighborTimers_Config_Grouping {
            public:

        };

        class State: public BgpNeighborTimers_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<BgpNeighborGroup_Grouping::Timers::Config> config;
            std::unique_ptr<BgpNeighborGroup_Grouping::Timers::State> state;

    };

    class Transport {
        public:
            Transport();

        class Config: public BgpNeighborTransport_Config_Grouping {
            public:

        };

        class State: public BgpNeighborTransport_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<BgpNeighborGroup_Grouping::Transport::Config> config;
            std::unique_ptr<BgpNeighborGroup_Grouping::Transport::State> state;

    };

    class ErrorHandling {
        public:
            ErrorHandling();

        class Config: public BgpNeighborErrorHandling_Config_Grouping {
            public:

        };

        class State: public BgpNeighborErrorHandling_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<BgpNeighborGroup_Grouping::ErrorHandling::Config> config;
            std::unique_ptr<BgpNeighborGroup_Grouping::ErrorHandling::State> state;

    };

    class LoggingOptions {
        public:
            LoggingOptions();

        class Config: public BgpNeighborLoggingOptions_Config_Grouping {
            public:

        };

        class State: public BgpNeighborLoggingOptions_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<BgpNeighborGroup_Grouping::LoggingOptions::Config> config;
            std::unique_ptr<BgpNeighborGroup_Grouping::LoggingOptions::State> state;

    };

    class EbgpMultihop {
        public:
            EbgpMultihop();

        class Config: public BgpNeighborMultihop_Config_Grouping {
            public:

        };

        class State: public BgpNeighborMultihop_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<BgpNeighborGroup_Grouping::EbgpMultihop::Config> config;
            std::unique_ptr<BgpNeighborGroup_Grouping::EbgpMultihop::State> state;

    };

    class RouteReflector {
        public:
            RouteReflector();

        class Config: public BgpNeighborRouteReflector_Config_Grouping {
            public:

        };

        class State: public BgpNeighborRouteReflector_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<BgpNeighborGroup_Grouping::RouteReflector::Config> config;
            std::unique_ptr<BgpNeighborGroup_Grouping::RouteReflector::State> state;

    };

    class AsPathOptions {
        public:
            AsPathOptions();

        class Config: public BgpNeighborAsPathOptions_Config_Grouping {
            public:

        };

        class State: public BgpNeighborAsPathOptions_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<BgpNeighborGroup_Grouping::AsPathOptions::Config> config;
            std::unique_ptr<BgpNeighborGroup_Grouping::AsPathOptions::State> state;

    };

    class AddPaths {
        public:
            AddPaths();

        class Config: public BgpNeighborAddPaths_Config_Grouping {
            public:

        };

        class State: public BgpNeighborAddPaths_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<BgpNeighborGroup_Grouping::AddPaths::Config> config;
            std::unique_ptr<BgpNeighborGroup_Grouping::AddPaths::State> state;

    };

    class AfiSafis: public BgpCommonAfiSafiList_Grouping {
        public:

    };

    public:
        std::unique_ptr<BgpNeighborGroup_Grouping::AddPaths> add_paths;
        std::unique_ptr<BgpNeighborGroup_Grouping::AfiSafis> afi_safis;
        std::unique_ptr<BgpNeighborGroup_Grouping::AsPathOptions> as_path_options;
        std::unique_ptr<BgpNeighborGroup_Grouping::Config> config;
        std::unique_ptr<BgpNeighborGroup_Grouping::EbgpMultihop> ebgp_multihop;
        std::unique_ptr<BgpNeighborGroup_Grouping::ErrorHandling> error_handling;
        std::unique_ptr<BgpNeighborGroup_Grouping::LoggingOptions> logging_options;
        std::unique_ptr<BgpNeighborGroup_Grouping::RouteReflector> route_reflector;
        std::unique_ptr<BgpNeighborGroup_Grouping::State> state;
        std::unique_ptr<BgpNeighborGroup_Grouping::Timers> timers;
        std::unique_ptr<BgpNeighborGroup_Grouping::Transport> transport;

};

class BgpNeighborMultihop_Config_Grouping {
    public:
        bool enabled;
        int multihop_ttl;

};

class BgpNeighborTransport_Config_Grouping {
    public:
        std::string local_address;
        bool mtu_discovery;
        bool passive_mode;
        int tcp_mss;

};

class Bgp {
    public:
        Bgp();

    class Global: public BgpGlobalBase_Grouping, ApplyPolicyGroup_Grouping {
        public:

    };

    class Neighbors: public BgpNeighbors_Grouping {
        public:

    };

    class PeerGroups: public BgpPeerGroup_Grouping {
        public:

    };

    public:
        std::unique_ptr<Bgp::Global> global_;
        std::unique_ptr<Bgp::Neighbors> neighbors;
        std::unique_ptr<Bgp::PeerGroups> peer_groups;

};


};
};
