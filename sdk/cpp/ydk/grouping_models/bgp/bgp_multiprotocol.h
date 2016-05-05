#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace bgp_multiprotocol {

class BgpRouteSelectionOptions_Grouping {
    public:
        BgpRouteSelectionOptions_Grouping();

    class RouteSelectionOptions {
        public:
            RouteSelectionOptions();

        class Config: public BgpRouteSelectionOptions_Config_Grouping {
            public:

        };

        class State: public BgpRouteSelectionOptions_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<BgpRouteSelectionOptions_Grouping::RouteSelectionOptions::Config> config;
            std::unique_ptr<BgpRouteSelectionOptions_Grouping::RouteSelectionOptions::State> state;

    };

    public:
        std::unique_ptr<BgpRouteSelectionOptions_Grouping::RouteSelectionOptions> route_selection_options;

};

class Ipv6UnicastGroup_Grouping {
    public:
        Ipv6UnicastGroup_Grouping();

    class Ipv6Unicast: public Ipv4Ipv6UnicastCommon_Grouping {
        public:

    };

    public:
        std::unique_ptr<Ipv6UnicastGroup_Grouping::Ipv6Unicast> ipv6_unicast;

};

class L3VpnIpv6MulticastGroup_Grouping {
    public:
        L3VpnIpv6MulticastGroup_Grouping();

    class L3VpnIpv6Multicast: public L3VpnIpv4Ipv6MulticastCommon_Grouping {
        public:

    };

    public:
        std::unique_ptr<L3VpnIpv6MulticastGroup_Grouping::L3VpnIpv6Multicast> l3vpn_ipv6_multicast;

};

class L3VpnIpv4Ipv6UnicastCommon_Grouping: public AllAfiSafiCommon_Grouping {
    public:

};

class L3VpnIpv4Ipv6MulticastCommon_Grouping: public AllAfiSafiCommon_Grouping {
    public:

};

class BgpGlobalAfiSafi_Grouping: public BgpRouteSelectionOptions_Grouping {
    public:

};

class Ipv4Ipv6UnicastCommon_Config_Grouping {
    public:
        bool send_default_route;

};

class L2VpnEvpnGroup_Grouping {
    public:
        L2VpnEvpnGroup_Grouping();

    class L2VpnEvpn: public L2VpnCommon_Grouping {
        public:

    };

    public:
        std::unique_ptr<L2VpnEvpnGroup_Grouping::L2VpnEvpn> l2vpn_evpn;

};

class Ipv4UnicastGroup_Grouping {
    public:
        Ipv4UnicastGroup_Grouping();

    class Ipv4Unicast: public Ipv4Ipv6UnicastCommon_Grouping {
        public:

    };

    public:
        std::unique_ptr<Ipv4UnicastGroup_Grouping::Ipv4Unicast> ipv4_unicast;

};

class BgpCommonAfiSafiList_Grouping {
    public:
        BgpCommonAfiSafiList_Grouping();

    class AfiSafi: public ApplyPolicyGroup_Grouping, Ipv4UnicastGroup_Grouping, Ipv6UnicastGroup_Grouping, Ipv4LabelledUnicastGroup_Grouping, Ipv6LabelledUnicastGroup_Grouping, L3VpnIpv4UnicastGroup_Grouping, L3VpnIpv6UnicastGroup_Grouping, L3VpnIpv4MulticastGroup_Grouping, L3VpnIpv6MulticastGroup_Grouping, L2VpnVplsGroup_Grouping, L2VpnEvpnGroup_Grouping {
        public:
            AfiSafi();

        class GracefulRestart {
            public:
                GracefulRestart();

            class Config: public BgpAfiSafiGracefulRestart_Config_Grouping {
                public:

            };

            class State: public BgpAfiSafiGracefulRestart_Config_Grouping {
                public:

            };

            public:
                std::unique_ptr<BgpCommonAfiSafiList_Grouping::AfiSafi::GracefulRestart::Config> config;
                std::unique_ptr<BgpCommonAfiSafiList_Grouping::AfiSafi::GracefulRestart::State> state;

        };

        class Config: public BgpAfiSafi_Config_Grouping {
            public:

        };

        class State: public BgpAfiSafi_Config_Grouping, BgpAfiSafi_State_Grouping {
            public:

        };

        public:
            std::string afi_safi_name;
            std::unique_ptr<BgpCommonAfiSafiList_Grouping::AfiSafi::Config> config;
            std::unique_ptr<BgpCommonAfiSafiList_Grouping::AfiSafi::GracefulRestart> graceful_restart;
            std::unique_ptr<BgpCommonAfiSafiList_Grouping::AfiSafi::State> state;

    };

    public:
        std::vector< std::unique_ptr<BgpCommonAfiSafiList_Grouping::AfiSafi> > afi_safi;

};

class BgpRouteSelectionOptions_Config_Grouping {
    public:
        bool advertise_inactive_routes;
        bool always_compare_med;
        bool enable_aigp;
        bool external_compare_router_id;
        bool ignore_as_path_length;
        bool ignore_next_hop_igp_metric;

};

class L3VpnIpv6UnicastGroup_Grouping {
    public:
        L3VpnIpv6UnicastGroup_Grouping();

    class L3VpnIpv6Unicast: public L3VpnIpv4Ipv6UnicastCommon_Grouping {
        public:

    };

    public:
        std::unique_ptr<L3VpnIpv6UnicastGroup_Grouping::L3VpnIpv6Unicast> l3vpn_ipv6_unicast;

};

class BgpUseMultiplePathsEbgp_Config_Grouping: public BgpUseMultiplePathsEbgpAsOptions_Config_Grouping {
    public:
        int maximum_paths;

};

class L3VpnIpv4MulticastGroup_Grouping {
    public:
        L3VpnIpv4MulticastGroup_Grouping();

    class L3VpnIpv4Multicast: public L3VpnIpv4Ipv6MulticastCommon_Grouping {
        public:

    };

    public:
        std::unique_ptr<L3VpnIpv4MulticastGroup_Grouping::L3VpnIpv4Multicast> l3vpn_ipv4_multicast;

};

class Ipv4Ipv6UnicastCommon_Grouping: public AllAfiSafiCommon_Grouping {
    public:
        Ipv4Ipv6UnicastCommon_Grouping();

    class Config: public Ipv4Ipv6UnicastCommon_Config_Grouping {
        public:

    };

    class State: public Ipv4Ipv6UnicastCommon_Config_Grouping {
        public:

    };

    public:
        std::unique_ptr<Ipv4Ipv6UnicastCommon_Grouping::Config> config;
        std::unique_ptr<Ipv4Ipv6UnicastCommon_Grouping::State> state;

};

class BgpUseMultiplePaths_Config_Grouping {
    public:
        bool enabled;

};

class BgpGroupAfiSafi_Grouping: public BgpRouteSelectionOptions_Grouping {
    public:

};

class Ipv4LabelledUnicastGroup_Grouping {
    public:
        Ipv4LabelledUnicastGroup_Grouping();

    class Ipv4LabelledUnicast: public AllAfiSafiCommon_Grouping {
        public:

    };

    public:
        std::unique_ptr<Ipv4LabelledUnicastGroup_Grouping::Ipv4LabelledUnicast> ipv4_labelled_unicast;

};

class BgpAfiSafi_Config_Grouping {
    public:
        std::string afi_safi_name;
        bool enabled;

};

class AllAfiSafiCommon_Grouping {
    public:
        AllAfiSafiCommon_Grouping();

    class PrefixLimit {
        public:
            PrefixLimit();

        class Config: public AllAfiSafiCommonPrefixLimit_Config_Grouping {
            public:

        };

        class State: public AllAfiSafiCommonPrefixLimit_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<AllAfiSafiCommon_Grouping::PrefixLimit::Config> config;
            std::unique_ptr<AllAfiSafiCommon_Grouping::PrefixLimit::State> state;

    };

    public:
        std::unique_ptr<AllAfiSafiCommon_Grouping::PrefixLimit> prefix_limit;

};

class BgpAfiSafiGracefulRestart_Config_Grouping {
    public:
        bool enabled;

};

class L2VpnVplsGroup_Grouping {
    public:
        L2VpnVplsGroup_Grouping();

    class L2VpnVpls: public L2VpnCommon_Grouping {
        public:

    };

    public:
        std::unique_ptr<L2VpnVplsGroup_Grouping::L2VpnVpls> l2vpn_vpls;

};

class L3VpnIpv4UnicastGroup_Grouping {
    public:
        L3VpnIpv4UnicastGroup_Grouping();

    class L3VpnIpv4Unicast: public L3VpnIpv4Ipv6UnicastCommon_Grouping {
        public:

    };

    public:
        std::unique_ptr<L3VpnIpv4UnicastGroup_Grouping::L3VpnIpv4Unicast> l3vpn_ipv4_unicast;

};

class L2VpnCommon_Grouping: public AllAfiSafiCommon_Grouping {
    public:

};

class BgpUseMultiplePathsIbgp_Config_Grouping {
    public:
        int maximum_paths;

};

class AllAfiSafiCommonPrefixLimit_Config_Grouping {
    public:
        int max_prefixes;
        int64 restart_timer;
        std::string shutdown_threshold_pct;

};

class Ipv6LabelledUnicastGroup_Grouping {
    public:
        Ipv6LabelledUnicastGroup_Grouping();

    class Ipv6LabelledUnicast: public AllAfiSafiCommon_Grouping {
        public:

    };

    public:
        std::unique_ptr<Ipv6LabelledUnicastGroup_Grouping::Ipv6LabelledUnicast> ipv6_labelled_unicast;

};

class BgpUseMultiplePaths_Grouping {
    public:
        BgpUseMultiplePaths_Grouping();

    class UseMultiplePaths {
        public:
            UseMultiplePaths();

        class Config: public BgpUseMultiplePaths_Config_Grouping {
            public:

        };

        class State: public BgpUseMultiplePaths_Config_Grouping {
            public:

        };

        class Ebgp {
            public:
                Ebgp();

            class Config: public BgpUseMultiplePathsEbgp_Config_Grouping {
                public:

            };

            class State: public BgpUseMultiplePathsEbgp_Config_Grouping {
                public:

            };

            public:
                std::unique_ptr<BgpUseMultiplePaths_Grouping::UseMultiplePaths::Ebgp::Config> config;
                std::unique_ptr<BgpUseMultiplePaths_Grouping::UseMultiplePaths::Ebgp::State> state;

        };

        class Ibgp {
            public:
                Ibgp();

            class Config: public BgpUseMultiplePathsIbgp_Config_Grouping {
                public:

            };

            class State: public BgpUseMultiplePathsIbgp_Config_Grouping {
                public:

            };

            public:
                std::unique_ptr<BgpUseMultiplePaths_Grouping::UseMultiplePaths::Ibgp::Config> config;
                std::unique_ptr<BgpUseMultiplePaths_Grouping::UseMultiplePaths::Ibgp::State> state;

        };

        public:
            std::unique_ptr<BgpUseMultiplePaths_Grouping::UseMultiplePaths::Config> config;
            std::unique_ptr<BgpUseMultiplePaths_Grouping::UseMultiplePaths::Ebgp> ebgp;
            std::unique_ptr<BgpUseMultiplePaths_Grouping::UseMultiplePaths::Ibgp> ibgp;
            std::unique_ptr<BgpUseMultiplePaths_Grouping::UseMultiplePaths::State> state;

    };

    public:
        std::unique_ptr<BgpUseMultiplePaths_Grouping::UseMultiplePaths> use_multiple_paths;

};

class BgpUseMultiplePathsEbgpAsOptions_Config_Grouping {
    public:
        bool allow_multiple_as;

};

class BgpUseMultiplePathsNeighbor_Grouping {
    public:
        BgpUseMultiplePathsNeighbor_Grouping();

    class UseMultiplePaths {
        public:
            UseMultiplePaths();

        class Config: public BgpUseMultiplePaths_Config_Grouping {
            public:

        };

        class State: public BgpUseMultiplePaths_Config_Grouping {
            public:

        };

        class Ebgp {
            public:
                Ebgp();

            class Config: public BgpUseMultiplePathsEbgpAsOptions_Config_Grouping {
                public:

            };

            class State: public BgpUseMultiplePathsEbgpAsOptions_Config_Grouping {
                public:

            };

            public:
                std::unique_ptr<BgpUseMultiplePathsNeighbor_Grouping::UseMultiplePaths::Ebgp::Config> config;
                std::unique_ptr<BgpUseMultiplePathsNeighbor_Grouping::UseMultiplePaths::Ebgp::State> state;

        };

        public:
            std::unique_ptr<BgpUseMultiplePathsNeighbor_Grouping::UseMultiplePaths::Config> config;
            std::unique_ptr<BgpUseMultiplePathsNeighbor_Grouping::UseMultiplePaths::Ebgp> ebgp;
            std::unique_ptr<BgpUseMultiplePathsNeighbor_Grouping::UseMultiplePaths::State> state;

    };

    public:
        std::unique_ptr<BgpUseMultiplePathsNeighbor_Grouping::UseMultiplePaths> use_multiple_paths;

};


};
};
