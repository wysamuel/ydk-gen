#include <memory>
#include <vector>
#include <string>
#include "ydk/entity.h"
#include "ydk/types.h"

namespace ydk {
namespace bgp {

class Bgp : public Entity {
    public:
        Bgp();

    class Global : public Entity {
        public:
            Global();

        class Config : public Entity {
            public:
                Config();

            public:
                int as_;
                std::string router_id;

        };

        class State {
            public:
                State();

            public:
                int as_;
                std::string router_id;
                int total_paths;
                int total_prefixes;

        };

        class RouteSelectionOptions {
            public:
                RouteSelectionOptions();

            class Config {
                public:
                    Config();

                public:
                    bool advertise_inactive_routes;
                    bool always_compare_med;
                    bool enable_aigp;
                    bool external_compare_router_id;
                    bool ignore_as_path_length;
                    bool ignore_next_hop_igp_metric;

            };

            class State {
                public:
                    State();

                public:
                    bool advertise_inactive_routes;
                    bool always_compare_med;
                    bool enable_aigp;
                    bool external_compare_router_id;
                    bool ignore_as_path_length;
                    bool ignore_next_hop_igp_metric;

            };

            public:
                std::unique_ptr<Bgp::Global::RouteSelectionOptions::Config> config;
                std::unique_ptr<Bgp::Global::RouteSelectionOptions::State> state;

        };

        class DefaultRouteDistance {
            public:
                DefaultRouteDistance();

            class Config {
                public:
                    Config();

                public:
                    std::string external_route_distance;
                    std::string internal_route_distance;

            };

            class State {
                public:
                    State();

                public:
                    std::string external_route_distance;
                    std::string internal_route_distance;

            };

            public:
                std::unique_ptr<Bgp::Global::DefaultRouteDistance::Config> config;
                std::unique_ptr<Bgp::Global::DefaultRouteDistance::State> state;

        };

        class Confederation {
            public:
                Confederation();

            class Config {
                public:
                    Config();

                public:
                    bool enabled;
                    int identifier;
                    std::vector<std::string> member_as;

            };

            class State {
                public:
                    State();

                public:
                    bool enabled;
                    int identifier;
                    std::vector<std::string> member_as;

            };

            public:
                std::unique_ptr<Bgp::Global::Confederation::Config> config;
                std::unique_ptr<Bgp::Global::Confederation::State> state;

        };

        class UseMultiplePaths {
            public:
                UseMultiplePaths();

            class Config {
                public:
                    Config();

                public:
                    bool enabled;

            };

            class State {
                public:
                    State();

                public:
                    bool enabled;

            };

            class Ebgp {
                public:
                    Ebgp();

                class Config {
                    public:
                        Config();

                    public:
                        bool allow_multiple_as;
                        int maximum_paths;

                };

                class State {
                    public:
                        State();

                    public:
                        bool allow_multiple_as;
                        int maximum_paths;

                };

                public:
                    std::unique_ptr<Bgp::Global::UseMultiplePaths::Ebgp::Config> config;
                    std::unique_ptr<Bgp::Global::UseMultiplePaths::Ebgp::State> state;

            };

            class Ibgp {
                public:
                    Ibgp();

                class Config {
                    public:
                        Config();

                    public:
                        int maximum_paths;

                };

                class State {
                    public:
                        State();

                    public:
                        int maximum_paths;

                };

                public:
                    std::unique_ptr<Bgp::Global::UseMultiplePaths::Ibgp::Config> config;
                    std::unique_ptr<Bgp::Global::UseMultiplePaths::Ibgp::State> state;

            };

            public:
                std::unique_ptr<Bgp::Global::UseMultiplePaths::Config> config;
                std::unique_ptr<Bgp::Global::UseMultiplePaths::Ebgp> ebgp;
                std::unique_ptr<Bgp::Global::UseMultiplePaths::Ibgp> ibgp;
                std::unique_ptr<Bgp::Global::UseMultiplePaths::State> state;

        };

        class GracefulRestart {
            public:
                GracefulRestart();

            class Config {
                public:
                    Config();

                public:
                    bool enabled;
                    bool helper_only;
                    std::string restart_time;
                    int64 stale_routes_time;

            };

            class State {
                public:
                    State();

                public:
                    bool enabled;
                    bool helper_only;
                    std::string restart_time;
                    int64 stale_routes_time;

            };

            public:
                std::unique_ptr<Bgp::Global::GracefulRestart::Config> config;
                std::unique_ptr<Bgp::Global::GracefulRestart::State> state;

        };

        class AfiSafis {
            public:
                AfiSafis();

            class AfiSafi {
                public:
                    AfiSafi();

                class GracefulRestart {
                    public:
                        GracefulRestart();

                    class Config {
                        public:
                            Config();

                        public:
                            bool enabled;

                    };

                    class State {
                        public:
                            State();

                        public:
                            bool enabled;

                    };

                    public:
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config> config;
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State> state;

                };

                class Config {
                    public:
                        Config();

                    public:
                        std::string afi_safi_name;
                        bool enabled;

                };

                class State {
                    public:
                        State();

                    public:
                        std::string afi_safi_name;
                        bool enabled;
                        int total_paths;
                        int total_prefixes;

                };

                class ApplyPolicy {
                    public:
                        ApplyPolicy();

                    class Config {
                        public:
                            Config();

                        public:
                            std::string default_export_policy;
                            std::string default_import_policy;
                            std::vector<std::string> export_policy;
                            std::vector<std::string> import_policy;

                    };

                    class State {
                        public:
                            State();

                        public:
                            std::string default_export_policy;
                            std::string default_import_policy;
                            std::vector<std::string> export_policy;
                            std::vector<std::string> import_policy;

                    };

                    public:
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config> config;
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State> state;

                };

                class Ipv4Unicast {
                    public:
                        Ipv4Unicast();

                    class PrefixLimit {
                        public:
                            PrefixLimit();

                        class Config {
                            public:
                                Config();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        class State {
                            public:
                                State();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        public:
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config> config;
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State> state;

                    };

                    class Config {
                        public:
                            Config();

                        public:
                            bool send_default_route;

                    };

                    class State {
                        public:
                            State();

                        public:
                            bool send_default_route;

                    };

                    public:
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config> config;
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit> prefix_limit;
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State> state;

                };

                class Ipv6Unicast {
                    public:
                        Ipv6Unicast();

                    class PrefixLimit {
                        public:
                            PrefixLimit();

                        class Config {
                            public:
                                Config();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        class State {
                            public:
                                State();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        public:
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config> config;
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State> state;

                    };

                    class Config {
                        public:
                            Config();

                        public:
                            bool send_default_route;

                    };

                    class State {
                        public:
                            State();

                        public:
                            bool send_default_route;

                    };

                    public:
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config> config;
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit> prefix_limit;
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State> state;

                };

                class Ipv4LabelledUnicast {
                    public:
                        Ipv4LabelledUnicast();

                    class PrefixLimit {
                        public:
                            PrefixLimit();

                        class Config {
                            public:
                                Config();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        class State {
                            public:
                                State();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        public:
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config> config;
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State> state;

                    };

                    public:
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit> prefix_limit;

                };

                class Ipv6LabelledUnicast {
                    public:
                        Ipv6LabelledUnicast();

                    class PrefixLimit {
                        public:
                            PrefixLimit();

                        class Config {
                            public:
                                Config();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        class State {
                            public:
                                State();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        public:
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config> config;
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State> state;

                    };

                    public:
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit> prefix_limit;

                };

                class L3VpnIpv4Unicast {
                    public:
                        L3VpnIpv4Unicast();

                    class PrefixLimit {
                        public:
                            PrefixLimit();

                        class Config {
                            public:
                                Config();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        class State {
                            public:
                                State();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        public:
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config> config;
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State> state;

                    };

                    public:
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit> prefix_limit;

                };

                class L3VpnIpv6Unicast {
                    public:
                        L3VpnIpv6Unicast();

                    class PrefixLimit {
                        public:
                            PrefixLimit();

                        class Config {
                            public:
                                Config();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        class State {
                            public:
                                State();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        public:
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config> config;
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State> state;

                    };

                    public:
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit> prefix_limit;

                };

                class L3VpnIpv4Multicast {
                    public:
                        L3VpnIpv4Multicast();

                    class PrefixLimit {
                        public:
                            PrefixLimit();

                        class Config {
                            public:
                                Config();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        class State {
                            public:
                                State();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        public:
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config> config;
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State> state;

                    };

                    public:
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit> prefix_limit;

                };

                class L3VpnIpv6Multicast {
                    public:
                        L3VpnIpv6Multicast();

                    class PrefixLimit {
                        public:
                            PrefixLimit();

                        class Config {
                            public:
                                Config();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        class State {
                            public:
                                State();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        public:
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config> config;
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State> state;

                    };

                    public:
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit> prefix_limit;

                };

                class L2VpnVpls {
                    public:
                        L2VpnVpls();

                    class PrefixLimit {
                        public:
                            PrefixLimit();

                        class Config {
                            public:
                                Config();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        class State {
                            public:
                                State();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        public:
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config> config;
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State> state;

                    };

                    public:
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit> prefix_limit;

                };

                class L2VpnEvpn {
                    public:
                        L2VpnEvpn();

                    class PrefixLimit {
                        public:
                            PrefixLimit();

                        class Config {
                            public:
                                Config();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        class State {
                            public:
                                State();

                            public:
                                int max_prefixes;
                                int64 restart_timer;
                                std::string shutdown_threshold_pct;

                        };

                        public:
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config> config;
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State> state;

                    };

                    public:
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit> prefix_limit;

                };

                class RouteSelectionOptions {
                    public:
                        RouteSelectionOptions();

                    class Config {
                        public:
                            Config();

                        public:
                            bool advertise_inactive_routes;
                            bool always_compare_med;
                            bool enable_aigp;
                            bool external_compare_router_id;
                            bool ignore_as_path_length;
                            bool ignore_next_hop_igp_metric;

                    };

                    class State {
                        public:
                            State();

                        public:
                            bool advertise_inactive_routes;
                            bool always_compare_med;
                            bool enable_aigp;
                            bool external_compare_router_id;
                            bool ignore_as_path_length;
                            bool ignore_next_hop_igp_metric;

                    };

                    public:
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config> config;
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State> state;

                };

                class UseMultiplePaths {
                    public:
                        UseMultiplePaths();

                    class Config {
                        public:
                            Config();

                        public:
                            bool enabled;

                    };

                    class State {
                        public:
                            State();

                        public:
                            bool enabled;

                    };

                    class Ebgp {
                        public:
                            Ebgp();

                        class Config {
                            public:
                                Config();

                            public:
                                bool allow_multiple_as;
                                int maximum_paths;

                        };

                        class State {
                            public:
                                State();

                            public:
                                bool allow_multiple_as;
                                int maximum_paths;

                        };

                        public:
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config> config;
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State> state;

                    };

                    class Ibgp {
                        public:
                            Ibgp();

                        class Config {
                            public:
                                Config();

                            public:
                                int maximum_paths;

                        };

                        class State {
                            public:
                                State();

                            public:
                                int maximum_paths;

                        };

                        public:
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config> config;
                            std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State> state;

                    };

                    public:
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config> config;
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp> ebgp;
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp> ibgp;
                        std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State> state;

                };

                public:
                    std::string afi_safi_name;
                    std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy> apply_policy;
                    std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Config> config;
                    std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::GracefulRestart> graceful_restart;
                    std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast> ipv4_labelled_unicast;
                    std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast> ipv4_unicast;
                    std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast> ipv6_labelled_unicast;
                    std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast> ipv6_unicast;
                    std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn> l2vpn_evpn;
                    std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls> l2vpn_vpls;
                    std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast> l3vpn_ipv4_multicast;
                    std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast> l3vpn_ipv4_unicast;
                    std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast> l3vpn_ipv6_multicast;
                    std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast> l3vpn_ipv6_unicast;
                    std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions> route_selection_options;
                    std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::State> state;
                    std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths> use_multiple_paths;

            };

            public:
                std::vector< std::unique_ptr<Bgp::Global::AfiSafis::AfiSafi> > afi_safi;

        };

        class ApplyPolicy {
            public:
                ApplyPolicy();

            class Config {
                public:
                    Config();

                public:
                    std::string default_export_policy;
                    std::string default_import_policy;
                    std::vector<std::string> export_policy;
                    std::vector<std::string> import_policy;

            };

            class State {
                public:
                    State();

                public:
                    std::string default_export_policy;
                    std::string default_import_policy;
                    std::vector<std::string> export_policy;
                    std::vector<std::string> import_policy;

            };

            public:
                std::unique_ptr<Bgp::Global::ApplyPolicy::Config> config;
                std::unique_ptr<Bgp::Global::ApplyPolicy::State> state;

        };

        public:
            std::unique_ptr<Bgp::Global::AfiSafis> afi_safis;
            std::unique_ptr<Bgp::Global::ApplyPolicy> apply_policy;
            std::unique_ptr<Bgp::Global::Confederation> confederation;
            std::unique_ptr<Bgp::Global::Config> config;
            std::unique_ptr<Bgp::Global::DefaultRouteDistance> default_route_distance;
            std::unique_ptr<Bgp::Global::GracefulRestart> graceful_restart;
            std::unique_ptr<Bgp::Global::RouteSelectionOptions> route_selection_options;
            std::unique_ptr<Bgp::Global::State> state;
            std::unique_ptr<Bgp::Global::UseMultiplePaths> use_multiple_paths;

    };

    class Neighbors {
        public:
            Neighbors();

        class Neighbor {
            public:
                Neighbor();

            class Config {
                public:
                    Config();

                public:
                    std::string auth_password;
                    std::string description;
                    int local_as;
                    std::string neighbor_address;
                    int peer_as;
                    std::string peer_group;
                    std::string peer_type;
                    std::string remove_private_as;
                    bool route_flap_damping;
                    std::string send_community;

            };

            class State {
                public:
                    State();

                class Messages {
                    public:
                        Messages();

                    class Sent {
                        public:
                            Sent();

                        public:
                            int notification;
                            int update;

                    };

                    class Received {
                        public:
                            Received();

                        public:
                            int notification;
                            int update;

                    };

                    public:
                        std::unique_ptr<Bgp::Neighbors::Neighbor::State::Messages::Received> received;
                        std::unique_ptr<Bgp::Neighbors::Neighbor::State::Messages::Sent> sent;

                };

                class Queues {
                    public:
                        Queues();

                    public:
                        int input;
                        int output;

                };

                public:
                    std::string auth_password;
                    std::string description;
                    int local_as;
                    std::unique_ptr<Bgp::Neighbors::Neighbor::State::Messages> messages;
                    std::string neighbor_address;
                    int peer_as;
                    std::string peer_group;
                    std::string peer_type;
                    std::unique_ptr<Bgp::Neighbors::Neighbor::State::Queues> queues;
                    std::string remove_private_as;
                    bool route_flap_damping;
                    std::string send_community;
                    std::string session_state;
                    std::vector<std::string> supported_capabilities;

            };

            class Timers {
                public:
                    Timers();

                class Config {
                    public:
                        Config();

                    public:
                        int64 connect_retry;
                        int64 hold_time;
                        int64 keepalive_interval;
                        int64 minimum_advertisement_interval;

                };

                class State {
                    public:
                        State();

                    public:
                        int64 connect_retry;
                        int64 hold_time;
                        int64 keepalive_interval;
                        int64 minimum_advertisement_interval;
                        int64 negotiated_hold_time;
                        int uptime;

                };

                public:
                    std::unique_ptr<Bgp::Neighbors::Neighbor::Timers::Config> config;
                    std::unique_ptr<Bgp::Neighbors::Neighbor::Timers::State> state;

            };

            class Transport {
                public:
                    Transport();

                class Config {
                    public:
                        Config();

                    public:
                        std::string local_address;
                        bool mtu_discovery;
                        bool passive_mode;
                        int tcp_mss;

                };

                class State {
                    public:
                        State();

                    public:
                        std::string local_address;
                        std::string local_port;
                        bool mtu_discovery;
                        bool passive_mode;
                        std::string remote_address;
                        std::string remote_port;
                        int tcp_mss;

                };

                public:
                    std::unique_ptr<Bgp::Neighbors::Neighbor::Transport::Config> config;
                    std::unique_ptr<Bgp::Neighbors::Neighbor::Transport::State> state;

            };

            class ErrorHandling {
                public:
                    ErrorHandling();

                class Config {
                    public:
                        Config();

                    public:
                        bool treat_as_withdraw;

                };

                class State {
                    public:
                        State();

                    public:
                        int erroneous_update_messages;
                        bool treat_as_withdraw;

                };

                public:
                    std::unique_ptr<Bgp::Neighbors::Neighbor::ErrorHandling::Config> config;
                    std::unique_ptr<Bgp::Neighbors::Neighbor::ErrorHandling::State> state;

            };

            class LoggingOptions {
                public:
                    LoggingOptions();

                class Config {
                    public:
                        Config();

                    public:
                        bool log_neighbor_state_changes;

                };

                class State {
                    public:
                        State();

                    public:
                        bool log_neighbor_state_changes;

                };

                public:
                    std::unique_ptr<Bgp::Neighbors::Neighbor::LoggingOptions::Config> config;
                    std::unique_ptr<Bgp::Neighbors::Neighbor::LoggingOptions::State> state;

            };

            class EbgpMultihop {
                public:
                    EbgpMultihop();

                class Config {
                    public:
                        Config();

                    public:
                        bool enabled;
                        int multihop_ttl;

                };

                class State {
                    public:
                        State();

                    public:
                        bool enabled;
                        int multihop_ttl;

                };

                public:
                    std::unique_ptr<Bgp::Neighbors::Neighbor::EbgpMultihop::Config> config;
                    std::unique_ptr<Bgp::Neighbors::Neighbor::EbgpMultihop::State> state;

            };

            class RouteReflector {
                public:
                    RouteReflector();

                class Config {
                    public:
                        Config();

                    public:
                        bool route_reflector_client;
                        std::string route_reflector_cluster_id;

                };

                class State {
                    public:
                        State();

                    public:
                        bool route_reflector_client;
                        std::string route_reflector_cluster_id;

                };

                public:
                    std::unique_ptr<Bgp::Neighbors::Neighbor::RouteReflector::Config> config;
                    std::unique_ptr<Bgp::Neighbors::Neighbor::RouteReflector::State> state;

            };

            class AsPathOptions {
                public:
                    AsPathOptions();

                class Config {
                    public:
                        Config();

                    public:
                        int allow_own_as;
                        bool replace_peer_as;

                };

                class State {
                    public:
                        State();

                    public:
                        int allow_own_as;
                        bool replace_peer_as;

                };

                public:
                    std::unique_ptr<Bgp::Neighbors::Neighbor::AsPathOptions::Config> config;
                    std::unique_ptr<Bgp::Neighbors::Neighbor::AsPathOptions::State> state;

            };

            class AddPaths {
                public:
                    AddPaths();

                class Config {
                    public:
                        Config();

                    public:
                        bool receive;
                        int send_max;

                };

                class State {
                    public:
                        State();

                    public:
                        bool receive;
                        int send_max;

                };

                public:
                    std::unique_ptr<Bgp::Neighbors::Neighbor::AddPaths::Config> config;
                    std::unique_ptr<Bgp::Neighbors::Neighbor::AddPaths::State> state;

            };

            class AfiSafis {
                public:
                    AfiSafis();

                class AfiSafi {
                    public:
                        AfiSafi();

                    class GracefulRestart {
                        public:
                            GracefulRestart();

                        class Config {
                            public:
                                Config();

                            public:
                                bool enabled;

                        };

                        class State {
                            public:
                                State();

                            public:
                                bool advertised;
                                bool enabled;
                                bool received;

                        };

                        public:
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config> config;
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State> state;

                    };

                    class Config {
                        public:
                            Config();

                        public:
                            std::string afi_safi_name;
                            bool enabled;

                    };

                    class State {
                        public:
                            State();

                        class Prefixes {
                            public:
                                Prefixes();

                            public:
                                int installed;
                                int received;
                                int sent;

                        };

                        public:
                            bool active;
                            std::string afi_safi_name;
                            bool enabled;
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes> prefixes;

                    };

                    class ApplyPolicy {
                        public:
                            ApplyPolicy();

                        class Config {
                            public:
                                Config();

                            public:
                                std::string default_export_policy;
                                std::string default_import_policy;
                                std::vector<std::string> export_policy;
                                std::vector<std::string> import_policy;

                        };

                        class State {
                            public:
                                State();

                            public:
                                std::string default_export_policy;
                                std::string default_import_policy;
                                std::vector<std::string> export_policy;
                                std::vector<std::string> import_policy;

                        };

                        public:
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config> config;
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State> state;

                    };

                    class Ipv4Unicast {
                        public:
                            Ipv4Unicast();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State> state;

                        };

                        class Config {
                            public:
                                Config();

                            public:
                                bool send_default_route;

                        };

                        class State {
                            public:
                                State();

                            public:
                                bool send_default_route;

                        };

                        public:
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config> config;
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit> prefix_limit;
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State> state;

                    };

                    class Ipv6Unicast {
                        public:
                            Ipv6Unicast();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State> state;

                        };

                        class Config {
                            public:
                                Config();

                            public:
                                bool send_default_route;

                        };

                        class State {
                            public:
                                State();

                            public:
                                bool send_default_route;

                        };

                        public:
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config> config;
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit> prefix_limit;
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State> state;

                    };

                    class Ipv4LabelledUnicast {
                        public:
                            Ipv4LabelledUnicast();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State> state;

                        };

                        public:
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit> prefix_limit;

                    };

                    class Ipv6LabelledUnicast {
                        public:
                            Ipv6LabelledUnicast();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State> state;

                        };

                        public:
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit> prefix_limit;

                    };

                    class L3VpnIpv4Unicast {
                        public:
                            L3VpnIpv4Unicast();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State> state;

                        };

                        public:
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit> prefix_limit;

                    };

                    class L3VpnIpv6Unicast {
                        public:
                            L3VpnIpv6Unicast();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State> state;

                        };

                        public:
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit> prefix_limit;

                    };

                    class L3VpnIpv4Multicast {
                        public:
                            L3VpnIpv4Multicast();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State> state;

                        };

                        public:
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit> prefix_limit;

                    };

                    class L3VpnIpv6Multicast {
                        public:
                            L3VpnIpv6Multicast();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State> state;

                        };

                        public:
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit> prefix_limit;

                    };

                    class L2VpnVpls {
                        public:
                            L2VpnVpls();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State> state;

                        };

                        public:
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit> prefix_limit;

                    };

                    class L2VpnEvpn {
                        public:
                            L2VpnEvpn();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State> state;

                        };

                        public:
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit> prefix_limit;

                    };

                    class UseMultiplePaths {
                        public:
                            UseMultiplePaths();

                        class Config {
                            public:
                                Config();

                            public:
                                bool enabled;

                        };

                        class State {
                            public:
                                State();

                            public:
                                bool enabled;

                        };

                        class Ebgp {
                            public:
                                Ebgp();

                            class Config {
                                public:
                                    Config();

                                public:
                                    bool allow_multiple_as;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    bool allow_multiple_as;

                            };

                            public:
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config> config;
                                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State> state;

                        };

                        public:
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config> config;
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp> ebgp;
                            std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State> state;

                    };

                    public:
                        std::string afi_safi_name;
                        std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy> apply_policy;
                        std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config> config;
                        std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart> graceful_restart;
                        std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast> ipv4_labelled_unicast;
                        std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast> ipv4_unicast;
                        std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast> ipv6_labelled_unicast;
                        std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast> ipv6_unicast;
                        std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn> l2vpn_evpn;
                        std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls> l2vpn_vpls;
                        std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast> l3vpn_ipv4_multicast;
                        std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast> l3vpn_ipv4_unicast;
                        std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast> l3vpn_ipv6_multicast;
                        std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast> l3vpn_ipv6_unicast;
                        std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State> state;
                        std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths> use_multiple_paths;

                };

                public:
                    std::vector< std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi> > afi_safi;

            };

            class GracefulRestart {
                public:
                    GracefulRestart();

                class Config {
                    public:
                        Config();

                    public:
                        bool enabled;
                        bool helper_only;
                        std::string restart_time;
                        int64 stale_routes_time;

                };

                class State {
                    public:
                        State();

                    public:
                        bool enabled;
                        bool helper_only;
                        bool local_restarting;
                        std::string mode;
                        std::string peer_restart_time;
                        bool peer_restarting;
                        std::string restart_time;
                        int64 stale_routes_time;

                };

                public:
                    std::unique_ptr<Bgp::Neighbors::Neighbor::GracefulRestart::Config> config;
                    std::unique_ptr<Bgp::Neighbors::Neighbor::GracefulRestart::State> state;

            };

            class ApplyPolicy {
                public:
                    ApplyPolicy();

                class Config {
                    public:
                        Config();

                    public:
                        std::string default_export_policy;
                        std::string default_import_policy;
                        std::vector<std::string> export_policy;
                        std::vector<std::string> import_policy;

                };

                class State {
                    public:
                        State();

                    public:
                        std::string default_export_policy;
                        std::string default_import_policy;
                        std::vector<std::string> export_policy;
                        std::vector<std::string> import_policy;

                };

                public:
                    std::unique_ptr<Bgp::Neighbors::Neighbor::ApplyPolicy::Config> config;
                    std::unique_ptr<Bgp::Neighbors::Neighbor::ApplyPolicy::State> state;

            };

            class UseMultiplePaths {
                public:
                    UseMultiplePaths();

                class Config {
                    public:
                        Config();

                    public:
                        bool enabled;

                };

                class State {
                    public:
                        State();

                    public:
                        bool enabled;

                };

                class Ebgp {
                    public:
                        Ebgp();

                    class Config {
                        public:
                            Config();

                        public:
                            bool allow_multiple_as;

                    };

                    class State {
                        public:
                            State();

                        public:
                            bool allow_multiple_as;

                    };

                    public:
                        std::unique_ptr<Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config> config;
                        std::unique_ptr<Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State> state;

                };

                public:
                    std::unique_ptr<Bgp::Neighbors::Neighbor::UseMultiplePaths::Config> config;
                    std::unique_ptr<Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp> ebgp;
                    std::unique_ptr<Bgp::Neighbors::Neighbor::UseMultiplePaths::State> state;

            };

            public:
                std::string neighbor_address;
                std::unique_ptr<Bgp::Neighbors::Neighbor::AddPaths> add_paths;
                std::unique_ptr<Bgp::Neighbors::Neighbor::AfiSafis> afi_safis;
                std::unique_ptr<Bgp::Neighbors::Neighbor::ApplyPolicy> apply_policy;
                std::unique_ptr<Bgp::Neighbors::Neighbor::AsPathOptions> as_path_options;
                std::unique_ptr<Bgp::Neighbors::Neighbor::Config> config;
                std::unique_ptr<Bgp::Neighbors::Neighbor::EbgpMultihop> ebgp_multihop;
                std::unique_ptr<Bgp::Neighbors::Neighbor::ErrorHandling> error_handling;
                std::unique_ptr<Bgp::Neighbors::Neighbor::GracefulRestart> graceful_restart;
                std::unique_ptr<Bgp::Neighbors::Neighbor::LoggingOptions> logging_options;
                std::unique_ptr<Bgp::Neighbors::Neighbor::RouteReflector> route_reflector;
                std::unique_ptr<Bgp::Neighbors::Neighbor::State> state;
                std::unique_ptr<Bgp::Neighbors::Neighbor::Timers> timers;
                std::unique_ptr<Bgp::Neighbors::Neighbor::Transport> transport;
                std::unique_ptr<Bgp::Neighbors::Neighbor::UseMultiplePaths> use_multiple_paths;

        };

        public:
            std::vector< std::unique_ptr<Bgp::Neighbors::Neighbor> > neighbor;

    };

    class PeerGroups {
        public:
            PeerGroups();

        class PeerGroup {
            public:
                PeerGroup();

            class Config {
                public:
                    Config();

                public:
                    std::string auth_password;
                    std::string description;
                    int local_as;
                    int peer_as;
                    std::string peer_group_name;
                    std::string peer_type;
                    std::string remove_private_as;
                    bool route_flap_damping;
                    std::string send_community;

            };

            class State {
                public:
                    State();

                public:
                    std::string auth_password;
                    std::string description;
                    int local_as;
                    int peer_as;
                    std::string peer_group_name;
                    std::string peer_type;
                    std::string remove_private_as;
                    bool route_flap_damping;
                    std::string send_community;
                    int total_paths;
                    int total_prefixes;

            };

            class Timers {
                public:
                    Timers();

                class Config {
                    public:
                        Config();

                    public:
                        int64 connect_retry;
                        int64 hold_time;
                        int64 keepalive_interval;
                        int64 minimum_advertisement_interval;

                };

                class State {
                    public:
                        State();

                    public:
                        int64 connect_retry;
                        int64 hold_time;
                        int64 keepalive_interval;
                        int64 minimum_advertisement_interval;

                };

                public:
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::Timers::Config> config;
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::Timers::State> state;

            };

            class Transport {
                public:
                    Transport();

                class Config {
                    public:
                        Config();

                    public:
                        std::string local_address;
                        bool mtu_discovery;
                        bool passive_mode;
                        int tcp_mss;

                };

                class State {
                    public:
                        State();

                    public:
                        std::string local_address;
                        bool mtu_discovery;
                        bool passive_mode;
                        int tcp_mss;

                };

                public:
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::Transport::Config> config;
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::Transport::State> state;

            };

            class ErrorHandling {
                public:
                    ErrorHandling();

                class Config {
                    public:
                        Config();

                    public:
                        bool treat_as_withdraw;

                };

                class State {
                    public:
                        State();

                    public:
                        bool treat_as_withdraw;

                };

                public:
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::ErrorHandling::Config> config;
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::ErrorHandling::State> state;

            };

            class LoggingOptions {
                public:
                    LoggingOptions();

                class Config {
                    public:
                        Config();

                    public:
                        bool log_neighbor_state_changes;

                };

                class State {
                    public:
                        State();

                    public:
                        bool log_neighbor_state_changes;

                };

                public:
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::LoggingOptions::Config> config;
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::LoggingOptions::State> state;

            };

            class EbgpMultihop {
                public:
                    EbgpMultihop();

                class Config {
                    public:
                        Config();

                    public:
                        bool enabled;
                        int multihop_ttl;

                };

                class State {
                    public:
                        State();

                    public:
                        bool enabled;
                        int multihop_ttl;

                };

                public:
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config> config;
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::EbgpMultihop::State> state;

            };

            class RouteReflector {
                public:
                    RouteReflector();

                class Config {
                    public:
                        Config();

                    public:
                        bool route_reflector_client;
                        std::string route_reflector_cluster_id;

                };

                class State {
                    public:
                        State();

                    public:
                        bool route_reflector_client;
                        std::string route_reflector_cluster_id;

                };

                public:
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::RouteReflector::Config> config;
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::RouteReflector::State> state;

            };

            class AsPathOptions {
                public:
                    AsPathOptions();

                class Config {
                    public:
                        Config();

                    public:
                        int allow_own_as;
                        bool replace_peer_as;

                };

                class State {
                    public:
                        State();

                    public:
                        int allow_own_as;
                        bool replace_peer_as;

                };

                public:
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::AsPathOptions::Config> config;
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::AsPathOptions::State> state;

            };

            class AddPaths {
                public:
                    AddPaths();

                class Config {
                    public:
                        Config();

                    public:
                        bool receive;
                        int send_max;

                };

                class State {
                    public:
                        State();

                    public:
                        bool receive;
                        int send_max;

                };

                public:
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::AddPaths::Config> config;
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::AddPaths::State> state;

            };

            class AfiSafis {
                public:
                    AfiSafis();

                class AfiSafi {
                    public:
                        AfiSafi();

                    class GracefulRestart {
                        public:
                            GracefulRestart();

                        class Config {
                            public:
                                Config();

                            public:
                                bool enabled;

                        };

                        class State {
                            public:
                                State();

                            public:
                                bool enabled;

                        };

                        public:
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config> config;
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State> state;

                    };

                    class Config {
                        public:
                            Config();

                        public:
                            std::string afi_safi_name;
                            bool enabled;

                    };

                    class State {
                        public:
                            State();

                        public:
                            std::string afi_safi_name;
                            bool enabled;

                    };

                    class ApplyPolicy {
                        public:
                            ApplyPolicy();

                        class Config {
                            public:
                                Config();

                            public:
                                std::string default_export_policy;
                                std::string default_import_policy;
                                std::vector<std::string> export_policy;
                                std::vector<std::string> import_policy;

                        };

                        class State {
                            public:
                                State();

                            public:
                                std::string default_export_policy;
                                std::string default_import_policy;
                                std::vector<std::string> export_policy;
                                std::vector<std::string> import_policy;

                        };

                        public:
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config> config;
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State> state;

                    };

                    class Ipv4Unicast {
                        public:
                            Ipv4Unicast();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State> state;

                        };

                        class Config {
                            public:
                                Config();

                            public:
                                bool send_default_route;

                        };

                        class State {
                            public:
                                State();

                            public:
                                bool send_default_route;

                        };

                        public:
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config> config;
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit> prefix_limit;
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State> state;

                    };

                    class Ipv6Unicast {
                        public:
                            Ipv6Unicast();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State> state;

                        };

                        class Config {
                            public:
                                Config();

                            public:
                                bool send_default_route;

                        };

                        class State {
                            public:
                                State();

                            public:
                                bool send_default_route;

                        };

                        public:
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config> config;
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit> prefix_limit;
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State> state;

                    };

                    class Ipv4LabelledUnicast {
                        public:
                            Ipv4LabelledUnicast();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State> state;

                        };

                        public:
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit> prefix_limit;

                    };

                    class Ipv6LabelledUnicast {
                        public:
                            Ipv6LabelledUnicast();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State> state;

                        };

                        public:
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit> prefix_limit;

                    };

                    class L3VpnIpv4Unicast {
                        public:
                            L3VpnIpv4Unicast();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State> state;

                        };

                        public:
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit> prefix_limit;

                    };

                    class L3VpnIpv6Unicast {
                        public:
                            L3VpnIpv6Unicast();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State> state;

                        };

                        public:
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit> prefix_limit;

                    };

                    class L3VpnIpv4Multicast {
                        public:
                            L3VpnIpv4Multicast();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State> state;

                        };

                        public:
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit> prefix_limit;

                    };

                    class L3VpnIpv6Multicast {
                        public:
                            L3VpnIpv6Multicast();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State> state;

                        };

                        public:
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit> prefix_limit;

                    };

                    class L2VpnVpls {
                        public:
                            L2VpnVpls();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State> state;

                        };

                        public:
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit> prefix_limit;

                    };

                    class L2VpnEvpn {
                        public:
                            L2VpnEvpn();

                        class PrefixLimit {
                            public:
                                PrefixLimit();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int max_prefixes;
                                    int64 restart_timer;
                                    std::string shutdown_threshold_pct;

                            };

                            public:
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config> config;
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State> state;

                        };

                        public:
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit> prefix_limit;

                    };

                    class UseMultiplePaths {
                        public:
                            UseMultiplePaths();

                        class Config {
                            public:
                                Config();

                            public:
                                bool enabled;

                        };

                        class State {
                            public:
                                State();

                            public:
                                bool enabled;

                        };

                        class Ebgp {
                            public:
                                Ebgp();

                            class Config {
                                public:
                                    Config();

                                public:
                                    bool allow_multiple_as;
                                    int maximum_paths;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    bool allow_multiple_as;
                                    int maximum_paths;

                            };

                            public:
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config> config;
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State> state;

                        };

                        class Ibgp {
                            public:
                                Ibgp();

                            class Config {
                                public:
                                    Config();

                                public:
                                    int maximum_paths;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    int maximum_paths;

                            };

                            public:
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config> config;
                                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State> state;

                        };

                        public:
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config> config;
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp> ebgp;
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp> ibgp;
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State> state;

                    };

                    class RouteSelectionOptions {
                        public:
                            RouteSelectionOptions();

                        class Config {
                            public:
                                Config();

                            public:
                                bool advertise_inactive_routes;
                                bool always_compare_med;
                                bool enable_aigp;
                                bool external_compare_router_id;
                                bool ignore_as_path_length;
                                bool ignore_next_hop_igp_metric;

                        };

                        class State {
                            public:
                                State();

                            public:
                                bool advertise_inactive_routes;
                                bool always_compare_med;
                                bool enable_aigp;
                                bool external_compare_router_id;
                                bool ignore_as_path_length;
                                bool ignore_next_hop_igp_metric;

                        };

                        public:
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config> config;
                            std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State> state;

                    };

                    public:
                        std::string afi_safi_name;
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy> apply_policy;
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config> config;
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart> graceful_restart;
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast> ipv4_labelled_unicast;
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast> ipv4_unicast;
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast> ipv6_labelled_unicast;
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast> ipv6_unicast;
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn> l2vpn_evpn;
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls> l2vpn_vpls;
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast> l3vpn_ipv4_multicast;
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast> l3vpn_ipv4_unicast;
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast> l3vpn_ipv6_multicast;
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast> l3vpn_ipv6_unicast;
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions> route_selection_options;
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State> state;
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths> use_multiple_paths;

                };

                public:
                    std::vector< std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi> > afi_safi;

            };

            class GracefulRestart {
                public:
                    GracefulRestart();

                class Config {
                    public:
                        Config();

                    public:
                        bool enabled;
                        bool helper_only;
                        std::string restart_time;
                        int64 stale_routes_time;

                };

                class State {
                    public:
                        State();

                    public:
                        bool enabled;
                        bool helper_only;
                        std::string restart_time;
                        int64 stale_routes_time;

                };

                public:
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::GracefulRestart::Config> config;
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::GracefulRestart::State> state;

            };

            class ApplyPolicy {
                public:
                    ApplyPolicy();

                class Config {
                    public:
                        Config();

                    public:
                        std::string default_export_policy;
                        std::string default_import_policy;
                        std::vector<std::string> export_policy;
                        std::vector<std::string> import_policy;

                };

                class State {
                    public:
                        State();

                    public:
                        std::string default_export_policy;
                        std::string default_import_policy;
                        std::vector<std::string> export_policy;
                        std::vector<std::string> import_policy;

                };

                public:
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config> config;
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::ApplyPolicy::State> state;

            };

            class UseMultiplePaths {
                public:
                    UseMultiplePaths();

                class Config {
                    public:
                        Config();

                    public:
                        bool enabled;

                };

                class State {
                    public:
                        State();

                    public:
                        bool enabled;

                };

                class Ebgp {
                    public:
                        Ebgp();

                    class Config {
                        public:
                            Config();

                        public:
                            bool allow_multiple_as;
                            int maximum_paths;

                    };

                    class State {
                        public:
                            State();

                        public:
                            bool allow_multiple_as;
                            int maximum_paths;

                    };

                    public:
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config> config;
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State> state;

                };

                class Ibgp {
                    public:
                        Ibgp();

                    class Config {
                        public:
                            Config();

                        public:
                            int maximum_paths;

                    };

                    class State {
                        public:
                            State();

                        public:
                            int maximum_paths;

                    };

                    public:
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config> config;
                        std::unique_ptr<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State> state;

                };

                public:
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config> config;
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp> ebgp;
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp> ibgp;
                    std::unique_ptr<Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State> state;

            };

            public:
                std::string peer_group_name;
                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AddPaths> add_paths;
                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AfiSafis> afi_safis;
                std::unique_ptr<Bgp::PeerGroups::PeerGroup::ApplyPolicy> apply_policy;
                std::unique_ptr<Bgp::PeerGroups::PeerGroup::AsPathOptions> as_path_options;
                std::unique_ptr<Bgp::PeerGroups::PeerGroup::Config> config;
                std::unique_ptr<Bgp::PeerGroups::PeerGroup::EbgpMultihop> ebgp_multihop;
                std::unique_ptr<Bgp::PeerGroups::PeerGroup::ErrorHandling> error_handling;
                std::unique_ptr<Bgp::PeerGroups::PeerGroup::GracefulRestart> graceful_restart;
                std::unique_ptr<Bgp::PeerGroups::PeerGroup::LoggingOptions> logging_options;
                std::unique_ptr<Bgp::PeerGroups::PeerGroup::RouteReflector> route_reflector;
                std::unique_ptr<Bgp::PeerGroups::PeerGroup::State> state;
                std::unique_ptr<Bgp::PeerGroups::PeerGroup::Timers> timers;
                std::unique_ptr<Bgp::PeerGroups::PeerGroup::Transport> transport;
                std::unique_ptr<Bgp::PeerGroups::PeerGroup::UseMultiplePaths> use_multiple_paths;

        };

        public:
            std::vector< std::unique_ptr<Bgp::PeerGroups::PeerGroup> > peer_group;

    };

    public:
        std::unique_ptr<Bgp::Global> global_;
        std::unique_ptr<Bgp::Neighbors> neighbors;
        std::unique_ptr<Bgp::PeerGroups> peer_groups;

};


};
};
