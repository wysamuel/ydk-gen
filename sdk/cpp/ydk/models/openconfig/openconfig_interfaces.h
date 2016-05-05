#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_interfaces {

class Interfaces {
    public:
        Interfaces();

    class Interface {
        public:
            Interface();

        class Config {
            public:
                Config();

            public:
                std::string description;
                bool enabled;
                int mtu;
                std::string name;
                std::string type;

        };

        class State {
            public:
                State();

            class Counters {
                public:
                    Counters();

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
                std::string admin_status;
                std::unique_ptr<Interfaces::Interface::State::Counters> counters;
                std::string description;
                bool enabled;
                std::string hardware_port;
                int ifindex;
                int last_change;
                int mtu;
                std::string name;
                std::string oper_status;
                std::string type;

        };

        class HoldTime {
            public:
                HoldTime();

            class Config {
                public:
                    Config();

                public:
                    int down;
                    int up;

            };

            class State {
                public:
                    State();

                public:
                    int down;
                    int up;

            };

            public:
                std::unique_ptr<Interfaces::Interface::HoldTime::Config> config;
                std::unique_ptr<Interfaces::Interface::HoldTime::State> state;

        };

        class Subinterfaces {
            public:
                Subinterfaces();

            class Subinterface {
                public:
                    Subinterface();

                class Config {
                    public:
                        Config();

                    public:
                        std::string description;
                        bool enabled;
                        int index;
                        std::string name;
                        int unnumbered;

                };

                class State {
                    public:
                        State();

                    class Counters {
                        public:
                            Counters();

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
                        std::string admin_status;
                        std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::State::Counters> counters;
                        std::string description;
                        bool enabled;
                        int ifindex;
                        int index;
                        int last_change;
                        std::string name;
                        std::string oper_status;
                        int unnumbered;

                };

                class Vlan {
                    public:
                        Vlan();

                    class Config {
                        public:
                            Config();

                        public:
                            std::string global_vlan_id;
                            std::string vlan_id;

                    };

                    class State {
                        public:
                            State();

                        public:
                            std::string global_vlan_id;
                            std::string vlan_id;

                    };

                    public:
                        std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config> config;
                        std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State> state;

                };

                class Ipv4 {
                    public:
                        Ipv4();

                    class Address {
                        public:
                            Address();

                        class Config {
                            public:
                                Config();

                            public:
                                std::string ip;
                                std::string prefix_length;

                        };

                        class State {
                            public:
                                State();

                            public:
                                std::string ip;
                                std::string origin;
                                std::string prefix_length;

                        };

                        class Vrrp {
                            public:
                                Vrrp();

                            class VrrpGroup {
                                public:
                                    VrrpGroup();

                                class Config {
                                    public:
                                        Config();

                                    public:
                                        bool accept_mode;
                                        std::string advertisement_interval;
                                        bool preempt;
                                        std::string preempt_delay;
                                        std::string priority;
                                        std::vector<std::string> virtual_address;
                                        std::string virtual_router_id;

                                };

                                class State {
                                    public:
                                        State();

                                    public:
                                        bool accept_mode;
                                        std::string advertisement_interval;
                                        int current_priority;
                                        bool preempt;
                                        std::string preempt_delay;
                                        std::string priority;
                                        std::vector<std::string> virtual_address;
                                        std::string virtual_router_id;

                                };

                                class InterfaceTracking {
                                    public:
                                        InterfaceTracking();

                                    class Config {
                                        public:
                                            Config();

                                        public:
                                            std::string priority_decrement;
                                            std::string track_interface;

                                    };

                                    class State {
                                        public:
                                            State();

                                        public:
                                            std::string priority_decrement;
                                            std::string track_interface;

                                    };

                                    public:
                                        std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config> config;
                                        std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State> state;

                                };

                                public:
                                    std::string virtual_router_id;
                                    std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::Config> config;
                                    std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking> interface_tracking;
                                    std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::State> state;

                            };

                            public:
                                std::vector< std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup> > vrrp_group;

                        };

                        public:
                            std::string ip;
                            std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Config> config;
                            std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::State> state;
                            std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp> vrrp;

                    };

                    class Neighbor {
                        public:
                            Neighbor();

                        class Config {
                            public:
                                Config();

                            public:
                                std::string ip;
                                std::string link_layer_address;

                        };

                        class State {
                            public:
                                State();

                            public:
                                std::string ip;
                                std::string link_layer_address;
                                std::string origin;

                        };

                        public:
                            std::string ip;
                            std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Config> config;
                            std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::State> state;

                    };

                    class Config {
                        public:
                            Config();

                        public:
                            bool enabled;
                            std::string mtu;

                    };

                    class State {
                        public:
                            State();

                        public:
                            bool enabled;
                            std::string mtu;

                    };

                    public:
                        std::vector< std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address> > address;
                        std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config> config;
                        std::vector< std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor> > neighbor;
                        std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State> state;

                };

                class Ipv6 {
                    public:
                        Ipv6();

                    class Address {
                        public:
                            Address();

                        class Config {
                            public:
                                Config();

                            public:
                                std::string ip;
                                std::string prefix_length;

                        };

                        class State {
                            public:
                                State();

                            public:
                                std::string ip;
                                std::string origin;
                                std::string prefix_length;
                                std::string status;

                        };

                        class Vrrp {
                            public:
                                Vrrp();

                            class VrrpGroup {
                                public:
                                    VrrpGroup();

                                class Config {
                                    public:
                                        Config();

                                    public:
                                        bool accept_mode;
                                        std::string advertisement_interval;
                                        bool preempt;
                                        std::string preempt_delay;
                                        std::string priority;
                                        std::vector<std::string> virtual_address;
                                        std::string virtual_link_local;
                                        std::string virtual_router_id;

                                };

                                class State {
                                    public:
                                        State();

                                    public:
                                        bool accept_mode;
                                        std::string advertisement_interval;
                                        int current_priority;
                                        bool preempt;
                                        std::string preempt_delay;
                                        std::string priority;
                                        std::vector<std::string> virtual_address;
                                        std::string virtual_link_local;
                                        std::string virtual_router_id;

                                };

                                class InterfaceTracking {
                                    public:
                                        InterfaceTracking();

                                    class Config {
                                        public:
                                            Config();

                                        public:
                                            std::string priority_decrement;
                                            std::string track_interface;

                                    };

                                    class State {
                                        public:
                                            State();

                                        public:
                                            std::string priority_decrement;
                                            std::string track_interface;

                                    };

                                    public:
                                        std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config> config;
                                        std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State> state;

                                };

                                public:
                                    std::string virtual_router_id;
                                    std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::Config> config;
                                    std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking> interface_tracking;
                                    std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::State> state;

                            };

                            public:
                                std::vector< std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup> > vrrp_group;

                        };

                        public:
                            std::string ip;
                            std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Config> config;
                            std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State> state;
                            std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp> vrrp;

                    };

                    class Neighbor {
                        public:
                            Neighbor();

                        class Config {
                            public:
                                Config();

                            public:
                                std::string ip;
                                std::string link_layer_address;

                        };

                        class State {
                            public:
                                State();

                            public:
                                std::string ip;
                                Empty is_router;
                                std::string link_layer_address;
                                std::string neighbor_state;
                                std::string origin;

                        };

                        public:
                            std::string ip;
                            std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Config> config;
                            std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State> state;

                    };

                    class Config {
                        public:
                            Config();

                        public:
                            int dup_addr_detect_transmits;
                            bool enabled;
                            std::string mtu;

                    };

                    class State {
                        public:
                            State();

                        public:
                            int dup_addr_detect_transmits;
                            bool enabled;
                            std::string mtu;

                    };

                    class Autoconf {
                        public:
                            Autoconf();

                        class Config {
                            public:
                                Config();

                            public:
                                bool create_global_addresses;
                                bool create_temporary_addresses;
                                int temporary_preferred_lifetime;
                                int temporary_valid_lifetime;

                        };

                        class State {
                            public:
                                State();

                            public:
                                bool create_global_addresses;
                                bool create_temporary_addresses;
                                int temporary_preferred_lifetime;
                                int temporary_valid_lifetime;

                        };

                        public:
                            std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::Config> config;
                            std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::State> state;

                    };

                    public:
                        std::vector< std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address> > address;
                        std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf> autoconf;
                        std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config> config;
                        std::vector< std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor> > neighbor;
                        std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State> state;

                };

                public:
                    int index;
                    std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Config> config;
                    std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4> ipv4;
                    std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6> ipv6;
                    std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::State> state;
                    std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface::Vlan> vlan;

            };

            public:
                std::vector< std::unique_ptr<Interfaces::Interface::Subinterfaces::Subinterface> > subinterface;

        };

        class Ethernet {
            public:
                Ethernet();

            class Config {
                public:
                    Config();

                public:
                    std::string aggregate_id;
                    bool auto_negotiate;
                    std::string duplex_mode;
                    bool enable_flow_control;
                    std::string mac_address;
                    std::string port_speed;

            };

            class State {
                public:
                    State();

                class Counters {
                    public:
                        Counters();

                    public:
                        int in_8021q_frames;
                        int in_crc_errors;
                        int in_fragment_frames;
                        int in_jabber_frames;
                        int in_mac_control_frames;
                        int in_mac_pause_frames;
                        int in_oversize_frames;
                        int out_8021q_frames;
                        int out_mac_control_frames;
                        int out_mac_pause_frames;

                };

                public:
                    std::string aggregate_id;
                    bool auto_negotiate;
                    std::unique_ptr<Interfaces::Interface::Ethernet::State::Counters> counters;
                    std::string duplex_mode;
                    bool enable_flow_control;
                    std::string hw_mac_address;
                    std::string mac_address;
                    std::string port_speed;

            };

            class Vlan {
                public:
                    Vlan();

                class Config {
                    public:
                        Config();

                    public:
                        std::string access_vlan;
                        std::string interface_mode;
                        std::string native_vlan;
                        std::vector<std::string> trunk_vlans;

                };

                class State {
                    public:
                        State();

                    public:
                        std::string access_vlan;
                        std::string interface_mode;
                        std::string native_vlan;
                        std::vector<std::string> trunk_vlans;

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

        class Aggregation {
            public:
                Aggregation();

            class Config {
                public:
                    Config();

                public:
                    std::string lag_type;
                    int min_links;

            };

            class State {
                public:
                    State();

                public:
                    std::string lag_type;
                    std::vector<std::string> members;
                    int min_links;

            };

            class Lacp {
                public:
                    Lacp();

                class Config {
                    public:
                        Config();

                    public:
                        std::string interval;
                        std::string lacp_mode;
                        std::string system_id_mac;
                        int system_priority;

                };

                class State {
                    public:
                        State();

                    public:
                        std::string interval;
                        std::string lacp_mode;
                        std::string system_id_mac;
                        int system_priority;

                };

                class Members {
                    public:
                        Members();

                    class Member {
                        public:
                            Member();

                        class State {
                            public:
                                State();

                            class Counters {
                                public:
                                    Counters();

                                public:
                                    int lacp_errors;
                                    int lacp_in_pkts;
                                    int lacp_out_pkts;
                                    int lacp_rx_errors;
                                    int lacp_tx_errors;
                                    int lacp_unknown_errors;

                            };

                            public:
                                std::string activity;
                                bool aggregatable;
                                bool collecting;
                                std::unique_ptr<Interfaces::Interface::Aggregation::Lacp::Members::Member::State::Counters> counters;
                                bool distributing;
                                std::string interface;
                                int oper_key;
                                std::string partner_id;
                                int partner_key;
                                std::string synchronization;
                                std::string system_id;
                                std::string timeout;

                        };

                        public:
                            std::string interface;
                            std::unique_ptr<Interfaces::Interface::Aggregation::Lacp::Members::Member::State> state;

                    };

                    public:
                        std::vector< std::unique_ptr<Interfaces::Interface::Aggregation::Lacp::Members::Member> > member;

                };

                public:
                    std::unique_ptr<Interfaces::Interface::Aggregation::Lacp::Config> config;
                    std::unique_ptr<Interfaces::Interface::Aggregation::Lacp::Members> members;
                    std::unique_ptr<Interfaces::Interface::Aggregation::Lacp::State> state;

            };

            class Vlan {
                public:
                    Vlan();

                class Config {
                    public:
                        Config();

                    public:
                        std::string access_vlan;
                        std::string interface_mode;
                        std::string native_vlan;
                        std::vector<std::string> trunk_vlans;

                };

                class State {
                    public:
                        State();

                    public:
                        std::string access_vlan;
                        std::string interface_mode;
                        std::string native_vlan;
                        std::vector<std::string> trunk_vlans;

                };

                public:
                    std::unique_ptr<Interfaces::Interface::Aggregation::Vlan::Config> config;
                    std::unique_ptr<Interfaces::Interface::Aggregation::Vlan::State> state;

            };

            public:
                std::unique_ptr<Interfaces::Interface::Aggregation::Config> config;
                std::unique_ptr<Interfaces::Interface::Aggregation::Lacp> lacp;
                std::unique_ptr<Interfaces::Interface::Aggregation::State> state;
                std::unique_ptr<Interfaces::Interface::Aggregation::Vlan> vlan;

        };

        class RoutedVlan {
            public:
                RoutedVlan();

            class Config {
                public:
                    Config();

                public:
                    std::string vlan;

            };

            class State {
                public:
                    State();

                public:
                    std::string vlan;

            };

            class Ipv4 {
                public:
                    Ipv4();

                class Address {
                    public:
                        Address();

                    class Config {
                        public:
                            Config();

                        public:
                            std::string ip;
                            std::string prefix_length;

                    };

                    class State {
                        public:
                            State();

                        public:
                            std::string ip;
                            std::string origin;
                            std::string prefix_length;

                    };

                    class Vrrp {
                        public:
                            Vrrp();

                        class VrrpGroup {
                            public:
                                VrrpGroup();

                            class Config {
                                public:
                                    Config();

                                public:
                                    bool accept_mode;
                                    std::string advertisement_interval;
                                    bool preempt;
                                    std::string preempt_delay;
                                    std::string priority;
                                    std::vector<std::string> virtual_address;
                                    std::string virtual_router_id;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    bool accept_mode;
                                    std::string advertisement_interval;
                                    int current_priority;
                                    bool preempt;
                                    std::string preempt_delay;
                                    std::string priority;
                                    std::vector<std::string> virtual_address;
                                    std::string virtual_router_id;

                            };

                            class InterfaceTracking {
                                public:
                                    InterfaceTracking();

                                class Config {
                                    public:
                                        Config();

                                    public:
                                        std::string priority_decrement;
                                        std::string track_interface;

                                };

                                class State {
                                    public:
                                        State();

                                    public:
                                        std::string priority_decrement;
                                        std::string track_interface;

                                };

                                public:
                                    std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config> config;
                                    std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State> state;

                            };

                            public:
                                std::string virtual_router_id;
                                std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config> config;
                                std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking> interface_tracking;
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

                    class Config {
                        public:
                            Config();

                        public:
                            std::string ip;
                            std::string link_layer_address;

                    };

                    class State {
                        public:
                            State();

                        public:
                            std::string ip;
                            std::string link_layer_address;
                            std::string origin;

                    };

                    public:
                        std::string ip;
                        std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Config> config;
                        std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::State> state;

                };

                class Config {
                    public:
                        Config();

                    public:
                        bool enabled;
                        std::string mtu;

                };

                class State {
                    public:
                        State();

                    public:
                        bool enabled;
                        std::string mtu;

                };

                public:
                    std::vector< std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Address> > address;
                    std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Config> config;
                    std::vector< std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::Neighbor> > neighbor;
                    std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv4::State> state;

            };

            class Ipv6 {
                public:
                    Ipv6();

                class Address {
                    public:
                        Address();

                    class Config {
                        public:
                            Config();

                        public:
                            std::string ip;
                            std::string prefix_length;

                    };

                    class State {
                        public:
                            State();

                        public:
                            std::string ip;
                            std::string origin;
                            std::string prefix_length;
                            std::string status;

                    };

                    class Vrrp {
                        public:
                            Vrrp();

                        class VrrpGroup {
                            public:
                                VrrpGroup();

                            class Config {
                                public:
                                    Config();

                                public:
                                    bool accept_mode;
                                    std::string advertisement_interval;
                                    bool preempt;
                                    std::string preempt_delay;
                                    std::string priority;
                                    std::vector<std::string> virtual_address;
                                    std::string virtual_link_local;
                                    std::string virtual_router_id;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    bool accept_mode;
                                    std::string advertisement_interval;
                                    int current_priority;
                                    bool preempt;
                                    std::string preempt_delay;
                                    std::string priority;
                                    std::vector<std::string> virtual_address;
                                    std::string virtual_link_local;
                                    std::string virtual_router_id;

                            };

                            class InterfaceTracking {
                                public:
                                    InterfaceTracking();

                                class Config {
                                    public:
                                        Config();

                                    public:
                                        std::string priority_decrement;
                                        std::string track_interface;

                                };

                                class State {
                                    public:
                                        State();

                                    public:
                                        std::string priority_decrement;
                                        std::string track_interface;

                                };

                                public:
                                    std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config> config;
                                    std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State> state;

                            };

                            public:
                                std::string virtual_router_id;
                                std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config> config;
                                std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking> interface_tracking;
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

                    class Config {
                        public:
                            Config();

                        public:
                            std::string ip;
                            std::string link_layer_address;

                    };

                    class State {
                        public:
                            State();

                        public:
                            std::string ip;
                            Empty is_router;
                            std::string link_layer_address;
                            std::string neighbor_state;
                            std::string origin;

                    };

                    public:
                        std::string ip;
                        std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Config> config;
                        std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State> state;

                };

                class Config {
                    public:
                        Config();

                    public:
                        int dup_addr_detect_transmits;
                        bool enabled;
                        std::string mtu;

                };

                class State {
                    public:
                        State();

                    public:
                        int dup_addr_detect_transmits;
                        bool enabled;
                        std::string mtu;

                };

                class Autoconf {
                    public:
                        Autoconf();

                    class Config {
                        public:
                            Config();

                        public:
                            bool create_global_addresses;
                            bool create_temporary_addresses;
                            int temporary_preferred_lifetime;
                            int temporary_valid_lifetime;

                    };

                    class State {
                        public:
                            State();

                        public:
                            bool create_global_addresses;
                            bool create_temporary_addresses;
                            int temporary_preferred_lifetime;
                            int temporary_valid_lifetime;

                    };

                    public:
                        std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::Config> config;
                        std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::State> state;

                };

                public:
                    std::vector< std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Address> > address;
                    std::unique_ptr<Interfaces::Interface::RoutedVlan::Ipv6::Autoconf> autoconf;
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
            std::unique_ptr<Interfaces::Interface::HoldTime> hold_time;
            std::unique_ptr<Interfaces::Interface::RoutedVlan> routed_vlan;
            std::unique_ptr<Interfaces::Interface::State> state;
            std::unique_ptr<Interfaces::Interface::Subinterfaces> subinterfaces;

    };

    public:
        std::vector< std::unique_ptr<Interfaces::Interface> > interface;

};


};
};
