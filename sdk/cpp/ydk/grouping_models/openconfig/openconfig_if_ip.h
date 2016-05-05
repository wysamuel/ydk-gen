#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_if_ip {

class IpVrrpTrackingConfig_Grouping {
    public:
        std::string priority_decrement;
        std::string track_interface;

};

class Ipv6ConfigNeighbor_Grouping {
    public:
        std::string ip;
        std::string link_layer_address;

};

class IpVrrpIpv6State_Grouping: public IpVrrpIpv6Config_Grouping {
    public:

};

class Ipv4ConfigNeighbor_Grouping {
    public:
        std::string ip;
        std::string link_layer_address;

};

class IpVrrpIpv6Config_Grouping {
    public:
        std::string virtual_link_local;

};

class Ipv6AutoconfState_Grouping {
    public:

};

class Ipv6ConfigAddress_Grouping {
    public:
        std::string ip;
        std::string prefix_length;

};

class IpVrrpState_Grouping {
    public:
        int current_priority;

};

class Ipv6AutoconfConfig_Grouping {
    public:
        bool create_global_addresses;
        bool create_temporary_addresses;
        int temporary_preferred_lifetime;
        int temporary_valid_lifetime;

};

class IpVrrpConfig_Grouping {
    public:
        bool accept_mode;
        std::string advertisement_interval;
        bool preempt;
        std::string preempt_delay;
        std::string priority;
        std::vector<std::string> virtual_address;
        std::string virtual_router_id;

};

class Ipv4ConfigGlobal_Grouping {
    public:
        bool enabled;
        std::string mtu;

};

class IpVrrpTop_Grouping {
    public:
        IpVrrpTop_Grouping();

    class Vrrp {
        public:
            Vrrp();

        class VrrpGroup: public IpVrrpTrackingTop_Grouping {
            public:
                VrrpGroup();

            class Config: public IpVrrpConfig_Grouping {
                public:

            };

            class State: public IpVrrpConfig_Grouping, IpVrrpState_Grouping {
                public:

            };

            public:
                std::unique_ptr<IpVrrpTop_Grouping::Vrrp::VrrpGroup::Config> config;
                std::unique_ptr<IpVrrpTop_Grouping::Vrrp::VrrpGroup::State> state;
                std::string virtual_router_id;

        };

        public:
            std::vector< std::unique_ptr<IpVrrpTop_Grouping::Vrrp::VrrpGroup> > vrrp_group;

    };

    public:
        std::unique_ptr<IpVrrpTop_Grouping::Vrrp> vrrp;

};

class Ipv4StateAddress_Grouping {
    public:
        std::string origin;

};

class Ipv6AutoconfTop_Grouping {
    public:
        Ipv6AutoconfTop_Grouping();

    class Autoconf {
        public:
            Autoconf();

        class Config: public Ipv6AutoconfConfig_Grouping {
            public:

        };

        class State: public Ipv6AutoconfConfig_Grouping, Ipv6AutoconfState_Grouping {
            public:

        };

        public:
            std::unique_ptr<Ipv6AutoconfTop_Grouping::Autoconf::Config> config;
            std::unique_ptr<Ipv6AutoconfTop_Grouping::Autoconf::State> state;

    };

    public:
        std::unique_ptr<Ipv6AutoconfTop_Grouping::Autoconf> autoconf;

};

class Ipv6StateAddress_Grouping {
    public:
        std::string origin;
        std::string status;

};

class Ipv4StateNeighbor_Grouping {
    public:
        std::string origin;

};

class Ipv6StateNeighbor_Grouping {
    public:
        Empty is_router;
        std::string neighbor_state;
        std::string origin;

};

class Ipv4ConfigAddress_Grouping {
    public:
        std::string ip;
        std::string prefix_length;

};

class IpVrrpTrackingState_Grouping {
    public:

};

class Ipv4Top_Grouping {
    public:
        Ipv4Top_Grouping();

    class Ipv4 {
        public:
            Ipv4();

        class Address {
            public:
                Address();

            class Config: public Ipv4ConfigAddress_Grouping {
                public:

            };

            class State: public Ipv4ConfigAddress_Grouping, Ipv4StateAddress_Grouping {
                public:

            };

            public:
                std::unique_ptr<Ipv4Top_Grouping::Ipv4::Address::Config> config;
                std::string ip;
                std::unique_ptr<Ipv4Top_Grouping::Ipv4::Address::State> state;

        };

        class Neighbor {
            public:
                Neighbor();

            class Config: public Ipv4ConfigNeighbor_Grouping {
                public:

            };

            class State: public Ipv4ConfigNeighbor_Grouping, Ipv4StateNeighbor_Grouping {
                public:

            };

            public:
                std::unique_ptr<Ipv4Top_Grouping::Ipv4::Neighbor::Config> config;
                std::string ip;
                std::unique_ptr<Ipv4Top_Grouping::Ipv4::Neighbor::State> state;

        };

        class Config: public Ipv4ConfigGlobal_Grouping {
            public:

        };

        class State: public Ipv4ConfigGlobal_Grouping {
            public:

        };

        public:
            std::vector< std::unique_ptr<Ipv4Top_Grouping::Ipv4::Address> > address;
            std::unique_ptr<Ipv4Top_Grouping::Ipv4::Config> config;
            std::vector< std::unique_ptr<Ipv4Top_Grouping::Ipv4::Neighbor> > neighbor;
            std::unique_ptr<Ipv4Top_Grouping::Ipv4::State> state;

    };

    public:
        std::unique_ptr<Ipv4Top_Grouping::Ipv4> ipv4;

};

class Ipv6ConfigGlobal_Grouping {
    public:
        int dup_addr_detect_transmits;
        bool enabled;
        std::string mtu;

};

class Ipv6Top_Grouping {
    public:
        Ipv6Top_Grouping();

    class Ipv6: public Ipv6AutoconfTop_Grouping {
        public:
            Ipv6();

        class Address {
            public:
                Address();

            class Config: public Ipv6ConfigAddress_Grouping {
                public:

            };

            class State: public Ipv6ConfigAddress_Grouping, Ipv6StateAddress_Grouping {
                public:

            };

            public:
                std::unique_ptr<Ipv6Top_Grouping::Ipv6::Address::Config> config;
                std::string ip;
                std::unique_ptr<Ipv6Top_Grouping::Ipv6::Address::State> state;

        };

        class Neighbor {
            public:
                Neighbor();

            class Config: public Ipv6ConfigNeighbor_Grouping {
                public:

            };

            class State: public Ipv6ConfigNeighbor_Grouping, Ipv6StateNeighbor_Grouping {
                public:

            };

            public:
                std::unique_ptr<Ipv6Top_Grouping::Ipv6::Neighbor::Config> config;
                std::string ip;
                std::unique_ptr<Ipv6Top_Grouping::Ipv6::Neighbor::State> state;

        };

        class Config: public Ipv6ConfigGlobal_Grouping {
            public:

        };

        class State: public Ipv6ConfigGlobal_Grouping {
            public:

        };

        public:
            std::vector< std::unique_ptr<Ipv6Top_Grouping::Ipv6::Address> > address;
            std::unique_ptr<Ipv6Top_Grouping::Ipv6::Config> config;
            std::vector< std::unique_ptr<Ipv6Top_Grouping::Ipv6::Neighbor> > neighbor;
            std::unique_ptr<Ipv6Top_Grouping::Ipv6::State> state;

    };

    public:
        std::unique_ptr<Ipv6Top_Grouping::Ipv6> ipv6;

};

class IpVrrpTrackingTop_Grouping {
    public:
        IpVrrpTrackingTop_Grouping();

    class InterfaceTracking {
        public:
            InterfaceTracking();

        class Config: public IpVrrpTrackingConfig_Grouping {
            public:

        };

        class State: public IpVrrpTrackingConfig_Grouping, IpVrrpTrackingState_Grouping {
            public:

        };

        public:
            std::unique_ptr<IpVrrpTrackingTop_Grouping::InterfaceTracking::Config> config;
            std::unique_ptr<IpVrrpTrackingTop_Grouping::InterfaceTracking::State> state;

    };

    public:
        std::unique_ptr<IpVrrpTrackingTop_Grouping::InterfaceTracking> interface_tracking;

};


};
};
