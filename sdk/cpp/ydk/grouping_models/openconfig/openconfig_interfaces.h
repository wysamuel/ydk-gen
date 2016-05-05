#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_interfaces {

class InterfacePhysHoldtimeTop_Grouping {
    public:
        InterfacePhysHoldtimeTop_Grouping();

    class HoldTime {
        public:
            HoldTime();

        class Config: public InterfacePhysHoldtimeConfig_Grouping {
            public:

        };

        class State: public InterfacePhysHoldtimeConfig_Grouping, InterfacePhysHoldtimeState_Grouping {
            public:

        };

        public:
            std::unique_ptr<InterfacePhysHoldtimeTop_Grouping::HoldTime::Config> config;
            std::unique_ptr<InterfacePhysHoldtimeTop_Grouping::HoldTime::State> state;

    };

    public:
        std::unique_ptr<InterfacePhysHoldtimeTop_Grouping::HoldTime> hold_time;

};

class SubinterfacesConfig_Grouping: public InterfaceCommonConfig_Grouping {
    public:
        int index;
        int unnumbered;

};

class SubinterfacesState_Grouping: public InterfaceCommonState_Grouping, InterfaceCountersState_Grouping {
    public:

};

class InterfaceCommonState_Grouping {
    public:
        std::string admin_status;
        int ifindex;
        int last_change;
        std::string oper_status;

};

class InterfacePhysHoldtimeConfig_Grouping {
    public:
        int down;
        int up;

};

class InterfaceCountersState_Grouping {
    public:
        InterfaceCountersState_Grouping();

    class Counters {
        public:
            int in_broadcast_pkts;
            int in_discards;
            int in_errors;
            int in_multicast_pkts;
            int in_octets;
            int in_unicast_pkts;
            int in_unknown_protos;
            std::string last_clear;
            int out_broadcast_pkts;
            int out_discards;
            int out_errors;
            int out_multicast_pkts;
            int out_octets;
            int out_unicast_pkts;

    };

    public:
        std::unique_ptr<InterfaceCountersState_Grouping::Counters> counters;

};

class SubinterfacesTop_Grouping {
    public:
        SubinterfacesTop_Grouping();

    class Subinterfaces {
        public:
            Subinterfaces();

        class Subinterface {
            public:
                Subinterface();

            class Config: public SubinterfacesConfig_Grouping {
                public:

            };

            class State: public SubinterfacesConfig_Grouping, SubinterfacesState_Grouping {
                public:

            };

            public:
                std::unique_ptr<SubinterfacesTop_Grouping::Subinterfaces::Subinterface::Config> config;
                int index;
                std::unique_ptr<SubinterfacesTop_Grouping::Subinterfaces::Subinterface::State> state;

        };

        public:
            std::vector< std::unique_ptr<SubinterfacesTop_Grouping::Subinterfaces::Subinterface> > subinterface;

    };

    public:
        std::unique_ptr<SubinterfacesTop_Grouping::Subinterfaces> subinterfaces;

};

class InterfacePhysConfig_Grouping: public InterfaceCommonConfig_Grouping {
    public:
        int mtu;
        std::string type;

};

class InterfacePhysHoldtimeState_Grouping {
    public:

};

class InterfaceCommonConfig_Grouping {
    public:
        std::string description;
        bool enabled;
        std::string name;

};

class InterfacesTop_Grouping {
    public:
        InterfacesTop_Grouping();

    class Interfaces {
        public:
            Interfaces();

        class Interface: public InterfacePhysHoldtimeTop_Grouping, SubinterfacesTop_Grouping {
            public:
                Interface();

            class Config: public InterfacePhysConfig_Grouping {
                public:

            };

            class State: public InterfacePhysConfig_Grouping, InterfaceCommonState_Grouping, InterfaceCountersState_Grouping {
                public:

            };

            public:
                std::unique_ptr<InterfacesTop_Grouping::Interfaces::Interface::Config> config;
                std::string name;
                std::unique_ptr<InterfacesTop_Grouping::Interfaces::Interface::State> state;

        };

        public:
            std::vector< std::unique_ptr<InterfacesTop_Grouping::Interfaces::Interface> > interface;

    };

    public:
        std::unique_ptr<InterfacesTop_Grouping::Interfaces> interfaces;

};

class Interfaces {
    public:
        Interfaces();

    class Interface: public InterfacePhysHoldtimeTop_Grouping, SubinterfacesTop_Grouping {
        public:
            Interface();

        class Config: public InterfacePhysConfig_Grouping {
            public:

        };

        class State: public InterfacePhysConfig_Grouping, InterfaceCommonState_Grouping, InterfaceCountersState_Grouping {
            public:
                std::string hardware_port;

        };

        class Ethernet {
            public:
                Ethernet();

            class Config: public EthernetInterfaceConfig_Grouping {
                public:
                    std::string aggregate_id;

            };

            class State: public EthernetInterfaceConfig_Grouping, EthernetInterfaceState_Grouping {
                public:
                    std::string aggregate_id;

            };

            class Vlan {
                public:
                    Vlan();

                class Config: public VlanEthernetConfig_Grouping {
                    public:

                };

                class State: public VlanEthernetConfig_Grouping, VlanEthernetState_Grouping {
                    public:

                };

                public:
                    std::unique_ptr<Interfaces::Interface::Ethernet::Vlan::Config> config;
                    std::unique_ptr<Interfaces::Interface::Ethernet::Vlan::State> state;

            };

            public:
                std::unique_ptr<Interfaces::Interface::Ethernet::Config> config;
                std::unique_ptr<Interfaces::Interface::Ethernet::State> state;
                std::unique_ptr<Interfaces::Interface::Ethernet::Vlan> vlan;

        };

        class Aggregation: public AggregationLacpTop_Grouping {
            public:
                Aggregation();

            class Config: public AggregationLogicalConfig_Grouping {
                public:

            };

            class State: public AggregationLogicalConfig_Grouping {
                public:
                    std::vector<std::string> members;

            };

            class Vlan {
                public:
                    Vlan();

                class Config: public VlanEthernetConfig_Grouping {
                    public:

                };

                class State: public VlanEthernetConfig_Grouping, VlanEthernetState_Grouping {
                    public:

                };

                public:
                    std::unique_ptr<Interfaces::Interface::Aggregation::Vlan::Config> config;
                    std::unique_ptr<Interfaces::Interface::Aggregation::Vlan::State> state;

            };

            public:
                std::unique_ptr<Interfaces::Interface::Aggregation::Config> config;
                std::unique_ptr<Interfaces::Interface::Aggregation::State> state;
                std::unique_ptr<Interfaces::Interface::Aggregation::Vlan> vlan;

        };

        class RoutedVlan {
            public:
                RoutedVlan();

            class Config: public VlanRoutedConfig_Grouping {
                public:

            };

            class State: public VlanRoutedConfig_Grouping, VlanRoutedState_Grouping {
                public:

            };

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
                                std::string virtual_router_id;
                                std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config> config;
                                std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::State> state;

                        };

                        public:
                            std::vector< std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup> > vrrp_group;

                    };

                    public:
                        std::string ip;
                        std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Address::Config> config;
                        std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Address::State> state;
                        std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp> vrrp;

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
                        std::string ip;
                        std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Config> config;
                        std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::State> state;

                };

                class Config: public Ipv4ConfigGlobal_Grouping {
                    public:

                };

                class State: public Ipv4ConfigGlobal_Grouping {
                    public:

                };

                public:
                    std::vector< std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Address> > address;
                    std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Config> config;
                    std::vector< std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Neighbor> > neighbor;
                    std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::State> state;

            };

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

                    class Vrrp {
                        public:
                            Vrrp();

                        class VrrpGroup: public IpVrrpTrackingTop_Grouping {
                            public:
                                VrrpGroup();

                            class Config: public IpVrrpConfig_Grouping {
                                public:
                                    std::string virtual_link_local;

                            };

                            class State: public IpVrrpConfig_Grouping, IpVrrpState_Grouping {
                                public:
                                    std::string virtual_link_local;

                            };

                            public:
                                std::string virtual_router_id;
                                std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config> config;
                                std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::State> state;

                        };

                        public:
                            std::vector< std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup> > vrrp_group;

                    };

                    public:
                        std::string ip;
                        std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Address::Config> config;
                        std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Address::State> state;
                        std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp> vrrp;

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
                        std::string ip;
                        std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Config> config;
                        std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State> state;

                };

                class Config: public Ipv6ConfigGlobal_Grouping {
                    public:

                };

                class State: public Ipv6ConfigGlobal_Grouping {
                    public:

                };

                public:
                    std::vector< std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Address> > address;
                    std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Config> config;
                    std::vector< std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Neighbor> > neighbor;
                    std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::State> state;

            };

            public:
                std::unique_ptr<Interfaces::Interface::RoutedVlan::Config> config;
                std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4> ipv4;
                std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6> ipv6;
                std::unique_ptr<Interfaces::Interface::RoutedVlan::State> state;

        };

        public:
            std::string name;
            std::unique_ptr<Interfaces::Interface::Aggregation> aggregation;
            std::unique_ptr<Interfaces::Interface::Config> config;
            std::unique_ptr<Interfaces::Interface::Ethernet> ethernet;
            std::unique_ptr<Interfaces::Interface::RoutedVlan> routed_vlan;
            std::unique_ptr<Interfaces::Interface::State> state;

    };

    public:
        std::vector< std::unique_ptr<Interfaces::Interface> > interface;

};


};
};
