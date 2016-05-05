#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_mpls {

class PathComputationMethod_Identity {
    public:
        PathComputationMethod_Identity();



};

class LocallyComputed_Identity: public PathComputationMethod_Identity {
    public:
        LocallyComputed_Identity();

    public:

};

class ExplicitlyDefined_Identity: public PathComputationMethod_Identity {
    public:
        ExplicitlyDefined_Identity();

    public:

};

class ExternallyQueried_Identity: public PathComputationMethod_Identity {
    public:
        ExternallyQueried_Identity();

    public:

};

class Mpls {
    public:
        Mpls();

    class Global {
        public:
            Global();

        class Config {
            public:
                Config();

            public:
                std::string null_label;

        };

        class State {
            public:
                State();

            public:
                std::string null_label;

        };

        class MplsInterfaceAttributes {
            public:
                MplsInterfaceAttributes();

            class Interface {
                public:
                    Interface();

                class Config {
                    public:
                        Config();

                    public:
                        bool mpls_enabled;
                        std::string name;

                };

                class State {
                    public:
                        State();

                    public:
                        bool mpls_enabled;
                        std::string name;

                };

                public:
                    std::string name;
                    std::unique_ptr<Mpls::Global::MplsInterfaceAttributes::Interface::Config> config;
                    std::unique_ptr<Mpls::Global::MplsInterfaceAttributes::Interface::State> state;

            };

            public:
                std::vector< std::unique_ptr<Mpls::Global::MplsInterfaceAttributes::Interface> > interface;

        };

        public:
            std::unique_ptr<Mpls::Global::Config> config;
            std::unique_ptr<Mpls::Global::MplsInterfaceAttributes> mpls_interface_attributes;
            std::unique_ptr<Mpls::Global::State> state;

    };

    class TeGlobalAttributes {
        public:
            TeGlobalAttributes();

        class Srlg {
            public:
                Srlg();

            class Srlg {
                public:
                    Srlg();

                class Config {
                    public:
                        Config();

                    public:
                        int cost;
                        std::string flooding_type;
                        std::string name;
                        int value;

                };

                class State {
                    public:
                        State();

                    public:
                        int cost;
                        std::string flooding_type;
                        std::string name;
                        int value;

                };

                class StaticSrlgMembers {
                    public:
                        StaticSrlgMembers();

                    class MembersList {
                        public:
                            MembersList();

                        class Config {
                            public:
                                Config();

                            public:
                                std::string from_address;
                                std::string to_address;

                        };

                        class State {
                            public:
                                State();

                            public:
                                std::string from_address;
                                std::string to_address;

                        };

                        public:
                            std::string from_address;
                            std::unique_ptr<Mpls::TeGlobalAttributes::Srlg::Srlg::StaticSrlgMembers::MembersList::Config> config;
                            std::unique_ptr<Mpls::TeGlobalAttributes::Srlg::Srlg::StaticSrlgMembers::MembersList::State> state;

                    };

                    public:
                        std::vector< std::unique_ptr<Mpls::TeGlobalAttributes::Srlg::Srlg::StaticSrlgMembers::MembersList> > members_list;

                };

                public:
                    std::string name;
                    std::unique_ptr<Mpls::TeGlobalAttributes::Srlg::Srlg::Config> config;
                    std::unique_ptr<Mpls::TeGlobalAttributes::Srlg::Srlg::State> state;
                    std::unique_ptr<Mpls::TeGlobalAttributes::Srlg::Srlg::StaticSrlgMembers> static_srlg_members;

            };

            public:
                std::vector< std::unique_ptr<Mpls::TeGlobalAttributes::Srlg::Srlg> > srlg;

        };

        class IgpFloodingBandwidth {
            public:
                IgpFloodingBandwidth();

            class Config {
                public:
                    Config();

                public:
                    std::string delta_percentage;
                    std::vector<std::string> down_thresholds;
                    std::string threshold_specification;
                    std::string threshold_type;
                    std::vector<std::string> up_down_thresholds;
                    std::vector<std::string> up_thresholds;

            };

            class State {
                public:
                    State();

                public:
                    std::string delta_percentage;
                    std::vector<std::string> down_thresholds;
                    std::string threshold_specification;
                    std::string threshold_type;
                    std::vector<std::string> up_down_thresholds;
                    std::vector<std::string> up_thresholds;

            };

            public:
                std::unique_ptr<Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config> config;
                std::unique_ptr<Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State> state;

        };

        class MplsAdminGroups {
            public:
                MplsAdminGroups();

            class AdminGroup {
                public:
                    AdminGroup();

                class Config {
                    public:
                        Config();

                    public:
                        std::string admin_group_name;
                        int bit_position;

                };

                class State {
                    public:
                        State();

                    public:
                        std::string admin_group_name;
                        int bit_position;

                };

                public:
                    std::string admin_group_name;
                    std::unique_ptr<Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config> config;
                    std::unique_ptr<Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State> state;

            };

            public:
                std::vector< std::unique_ptr<Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup> > admin_group;

        };

        class TeLspTimers {
            public:
                TeLspTimers();

            class Config {
                public:
                    Config();

                public:
                    int cleanup_delay;
                    std::string install_delay;
                    int reoptimize_timer;

            };

            class State {
                public:
                    State();

                public:
                    int cleanup_delay;
                    std::string install_delay;
                    int reoptimize_timer;

            };

            public:
                std::unique_ptr<Mpls::TeGlobalAttributes::TeLspTimers::Config> config;
                std::unique_ptr<Mpls::TeGlobalAttributes::TeLspTimers::State> state;

        };

        public:
            std::unique_ptr<Mpls::TeGlobalAttributes::IgpFloodingBandwidth> igp_flooding_bandwidth;
            std::unique_ptr<Mpls::TeGlobalAttributes::MplsAdminGroups> mpls_admin_groups;
            std::unique_ptr<Mpls::TeGlobalAttributes::Srlg> srlg;
            std::unique_ptr<Mpls::TeGlobalAttributes::TeLspTimers> te_lsp_timers;

    };

    class TeInterfaceAttributes {
        public:
            TeInterfaceAttributes();

        class Interface {
            public:
                Interface();

            class Config {
                public:
                    Config();

                public:
                    std::vector<std::string> admin_group;
                    std::string name;
                    std::vector<std::string> srlg_membership;
                    int te_metric;

            };

            class State {
                public:
                    State();

                public:
                    std::vector<std::string> admin_group;
                    std::string name;
                    std::vector<std::string> srlg_membership;
                    int te_metric;

            };

            class IgpFloodingBandwidth {
                public:
                    IgpFloodingBandwidth();

                class Config {
                    public:
                        Config();

                    public:
                        std::string delta_percentage;
                        std::vector<std::string> down_thresholds;
                        std::string threshold_specification;
                        std::string threshold_type;
                        std::vector<std::string> up_down_thresholds;
                        std::vector<std::string> up_thresholds;

                };

                class State {
                    public:
                        State();

                    public:
                        std::string delta_percentage;
                        std::vector<std::string> down_thresholds;
                        std::string threshold_specification;
                        std::string threshold_type;
                        std::vector<std::string> up_down_thresholds;
                        std::vector<std::string> up_thresholds;

                };

                public:
                    std::unique_ptr<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config> config;
                    std::unique_ptr<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State> state;

            };

            public:
                std::string name;
                std::unique_ptr<Mpls::TeInterfaceAttributes::Interface::Config> config;
                std::unique_ptr<Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth> igp_flooding_bandwidth;
                std::unique_ptr<Mpls::TeInterfaceAttributes::Interface::State> state;

        };

        public:
            std::vector< std::unique_ptr<Mpls::TeInterfaceAttributes::Interface> > interface;

    };

    class SignalingProtocols {
        public:
            SignalingProtocols();

        class RsvpTe {
            public:
                RsvpTe();

            class Sessions {
                public:
                    Sessions();

                class Config {
                    public:
                        Config();

                    public:

                };

                class State {
                    public:
                        State();

                    class Session {
                        public:
                            Session();

                        public:
                            std::string destination_address;
                            int destination_port;
                            std::string source_address;
                            int source_port;
                            std::vector<std::string> associated_lsps;
                            std::string label_in;
                            std::string label_out;
                            std::string status;
                            int tunnel_id;
                            std::string type;

                    };

                    public:
                        std::vector< std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session> > session;

                };

                public:
                    std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Sessions::Config> config;
                    std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Sessions::State> state;

            };

            class Neighbors {
                public:
                    Neighbors();

                class Config {
                    public:
                        Config();

                    public:

                };

                class State {
                    public:
                        State();

                    class Neighbor {
                        public:
                            Neighbor();

                        public:
                            std::string address;
                            std::string detected_interface;
                            std::string neighbor_status;
                            bool refresh_reduction;

                    };

                    public:
                        std::vector< std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor> > neighbor;

                };

                public:
                    std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Neighbors::Config> config;
                    std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Neighbors::State> state;

            };

            class Global {
                public:
                    Global();

                class GracefulRestart {
                    public:
                        GracefulRestart();

                    class Config {
                        public:
                            Config();

                        public:
                            bool enable;
                            int recovery_time;
                            int restart_time;

                    };

                    class State {
                        public:
                            State();

                        public:
                            bool enable;
                            int recovery_time;
                            int restart_time;

                    };

                    public:
                        std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config> config;
                        std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State> state;

                };

                class SoftPreemption {
                    public:
                        SoftPreemption();

                    class Config {
                        public:
                            Config();

                        public:
                            bool enable;
                            std::string soft_preemption_timeout;

                    };

                    class State {
                        public:
                            State();

                        public:
                            bool enable;
                            std::string soft_preemption_timeout;

                    };

                    public:
                        std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config> config;
                        std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State> state;

                };

                class Hellos {
                    public:
                        Hellos();

                    class Config {
                        public:
                            Config();

                        public:
                            std::string hello_interval;
                            bool refresh_reduction;

                    };

                    class State {
                        public:
                            State();

                        public:
                            std::string hello_interval;
                            bool refresh_reduction;

                    };

                    public:
                        std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config> config;
                        std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State> state;

                };

                class State {
                    public:
                        State();

                    class Counters {
                        public:
                            Counters();

                        public:
                            int in_ack_messages;
                            int in_hello_messages;
                            int in_path_error_messages;
                            int in_path_messages;
                            int in_path_tear_messages;
                            int in_reservation_error_messages;
                            int in_reservation_messages;
                            int in_reservation_tear_messages;
                            int in_srefresh_messages;
                            int out_ack_messages;
                            int out_hello_messages;
                            int out_path_error_messages;
                            int out_path_messages;
                            int out_path_tear_messages;
                            int out_reservation_error_messages;
                            int out_reservation_messages;
                            int out_reservation_tear_messages;
                            int out_srefresh_messages;
                            int path_timeouts;
                            int rate_limited_messages;
                            int reservation_timeouts;

                    };

                    public:
                        std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Global::State::Counters> counters;

                };

                public:
                    std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart> graceful_restart;
                    std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Global::Hellos> hellos;
                    std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption> soft_preemption;
                    std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Global::State> state;

            };

            class InterfaceAttributes {
                public:
                    InterfaceAttributes();

                class Interface {
                    public:
                        Interface();

                    class Config {
                        public:
                            Config();

                        public:
                            std::string interface_name;

                    };

                    class State {
                        public:
                            State();

                        class Bandwidth {
                            public:
                                Bandwidth();

                            public:
                                std::string priority;
                                int available_bandwidth;
                                int reserved_bandwidth;

                        };

                        class Counters {
                            public:
                                Counters();

                            public:
                                int in_ack_messages;
                                int in_hello_messages;
                                int in_path_error_messages;
                                int in_path_messages;
                                int in_path_tear_messages;
                                int in_reservation_error_messages;
                                int in_reservation_messages;
                                int in_reservation_tear_messages;
                                int in_srefresh_messages;
                                int out_ack_messages;
                                int out_hello_messages;
                                int out_path_error_messages;
                                int out_path_messages;
                                int out_path_tear_messages;
                                int out_reservation_error_messages;
                                int out_reservation_messages;
                                int out_reservation_tear_messages;
                                int out_srefresh_messages;

                        };

                        public:
                            int active_reservation_count;
                            std::vector< std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth> > bandwidth;
                            std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters> counters;
                            int highwater_mark;

                    };

                    class Hellos {
                        public:
                            Hellos();

                        class Config {
                            public:
                                Config();

                            public:
                                std::string hello_interval;
                                bool refresh_reduction;

                        };

                        class State {
                            public:
                                State();

                            public:
                                std::string hello_interval;
                                bool refresh_reduction;

                        };

                        public:
                            std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config> config;
                            std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State> state;

                    };

                    class Authentication {
                        public:
                            Authentication();

                        class Config {
                            public:
                                Config();

                            public:
                                std::string authentication_key;
                                bool enable;

                        };

                        class State {
                            public:
                                State();

                            public:
                                std::string authentication_key;
                                bool enable;

                        };

                        public:
                            std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config> config;
                            std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State> state;

                    };

                    class Subscription {
                        public:
                            Subscription();

                        class Config {
                            public:
                                Config();

                            public:
                                std::string subscription;

                        };

                        class State {
                            public:
                                State();

                            public:
                                std::string subscription;

                        };

                        public:
                            std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config> config;
                            std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State> state;

                    };

                    class Protection {
                        public:
                            Protection();

                        class Config {
                            public:
                                Config();

                            public:
                                int bypass_optimize_interval;
                                std::string link_protection_style_requested;

                        };

                        class State {
                            public:
                                State();

                            public:
                                int bypass_optimize_interval;
                                std::string link_protection_style_requested;

                        };

                        public:
                            std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config> config;
                            std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State> state;

                    };

                    public:
                        std::string interface_name;
                        std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication> authentication;
                        std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config> config;
                        std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos> hellos;
                        std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection> protection;
                        std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State> state;
                        std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription> subscription;

                };

                public:
                    std::vector< std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface> > interface;

            };

            public:
                std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Global> global_;
                std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes> interface_attributes;
                std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Neighbors> neighbors;
                std::unique_ptr<Mpls::SignalingProtocols::RsvpTe::Sessions> sessions;

        };

        class SegmentRouting {
            public:
                SegmentRouting();

            class Srgb {
                public:
                    Srgb();

                class Config {
                    public:
                        Config();

                    public:
                        int lower_bound;
                        int upper_bound;

                };

                class State {
                    public:
                        State();

                    public:
                        int free;
                        int lower_bound;
                        int size;
                        int upper_bound;
                        int used;

                };

                public:
                    int lower_bound;
                    int upper_bound;
                    std::unique_ptr<Mpls::SignalingProtocols::SegmentRouting::Srgb::Config> config;
                    std::unique_ptr<Mpls::SignalingProtocols::SegmentRouting::Srgb::State> state;

            };

            class Interfaces {
                public:
                    Interfaces();

                class Config {
                    public:
                        Config();

                    public:
                        std::string interface;

                };

                class State {
                    public:
                        State();

                    public:
                        std::string interface;

                };

                class AdjacencySid {
                    public:
                        AdjacencySid();

                    class Config {
                        public:
                            Config();

                        public:
                            std::vector<std::string> advertise;
                            std::vector<std::string> groups;

                    };

                    class State {
                        public:
                            State();

                        public:
                            std::vector<std::string> advertise;
                            std::vector<std::string> groups;

                    };

                    public:
                        std::unique_ptr<Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config> config;
                        std::unique_ptr<Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State> state;

                };

                public:
                    std::string interface;
                    std::unique_ptr<Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid> adjacency_sid;
                    std::unique_ptr<Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config> config;
                    std::unique_ptr<Mpls::SignalingProtocols::SegmentRouting::Interfaces::State> state;

            };

            public:
                std::vector< std::unique_ptr<Mpls::SignalingProtocols::SegmentRouting::Interfaces> > interfaces;
                std::vector< std::unique_ptr<Mpls::SignalingProtocols::SegmentRouting::Srgb> > srgb;

        };

        class Ldp {
            public:
                Ldp();

            class Timers {
                public:
                    Timers();

                public:

            };

            public:
                std::unique_ptr<Mpls::SignalingProtocols::Ldp::Timers> timers;

        };

        public:
            std::unique_ptr<Mpls::SignalingProtocols::Ldp> ldp;
            std::unique_ptr<Mpls::SignalingProtocols::RsvpTe> rsvp_te;
            std::unique_ptr<Mpls::SignalingProtocols::SegmentRouting> segment_routing;

    };

    class Lsps {
        public:
            Lsps();

        class ConstrainedPath {
            public:
                ConstrainedPath();

            class NamedExplicitPaths {
                public:
                    NamedExplicitPaths();

                class Config {
                    public:
                        Config();

                    public:
                        std::string name;

                };

                class State {
                    public:
                        State();

                    public:
                        std::string name;

                };

                class ExplicitRouteObjects {
                    public:
                        ExplicitRouteObjects();

                    class Config {
                        public:
                            Config();

                        public:
                            std::string address;
                            std::string hop_type;
                            std::string index;

                    };

                    class State {
                        public:
                            State();

                        public:
                            std::string address;
                            std::string hop_type;
                            std::string index;

                    };

                    public:
                        std::string index;
                        std::unique_ptr<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config> config;
                        std::unique_ptr<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State> state;

                };

                public:
                    std::string name;
                    std::unique_ptr<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config> config;
                    std::vector< std::unique_ptr<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects> > explicit_route_objects;
                    std::unique_ptr<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State> state;

            };

            class Tunnel {
                public:
                    Tunnel();

                class Config {
                    public:
                        Config();

                    public:
                        std::string admin_status;
                        std::string description;
                        std::string hold_priority;
                        std::string local_id;
                        std::string metric;
                        std::string name;
                        std::string preference;
                        std::string protection_style_requested;
                        int reoptimize_timer;
                        std::string setup_priority;
                        std::string signaling_protocol;
                        bool soft_preemption;
                        std::string source;
                        std::string type;

                };

                class State {
                    public:
                        State();

                    class Counters {
                        public:
                            Counters();

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
                        std::string admin_status;
                        std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters> counters;
                        std::string description;
                        std::string hold_priority;
                        std::string local_id;
                        std::string metric;
                        std::string name;
                        std::string oper_status;
                        std::string preference;
                        std::string protection_style_requested;
                        int reoptimize_timer;
                        std::string role;
                        std::string setup_priority;
                        std::string signaling_protocol;
                        bool soft_preemption;
                        std::string source;
                        std::string type;

                };

                class Bandwidth {
                    public:
                        Bandwidth();

                    class Config {
                        public:
                            Config();

                        public:
                            int set_bandwidth;
                            std::string specification_type;

                    };

                    class State {
                        public:
                            State();

                        public:
                            int set_bandwidth;
                            std::string specification_type;

                    };

                    class AutoBandwidth {
                        public:
                            AutoBandwidth();

                        class Config {
                            public:
                                Config();

                            public:
                                int adjust_interval;
                                std::string adjust_threshold;
                                bool enabled;
                                int max_bw;
                                int min_bw;

                        };

                        class State {
                            public:
                                State();

                            public:
                                int adjust_interval;
                                std::string adjust_threshold;
                                bool enabled;
                                int max_bw;
                                int min_bw;

                        };

                        class Overflow {
                            public:
                                Overflow();

                            class Config {
                                public:
                                    Config();

                                public:
                                    bool enabled;
                                    std::string overflow_threshold;
                                    int trigger_event_count;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    bool enabled;
                                    std::string overflow_threshold;
                                    int trigger_event_count;

                            };

                            public:
                                std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config> config;
                                std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State> state;

                        };

                        class Underflow {
                            public:
                                Underflow();

                            class Config {
                                public:
                                    Config();

                                public:
                                    bool enabled;
                                    int trigger_event_count;
                                    std::string underflow_threshold;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    bool enabled;
                                    int trigger_event_count;
                                    std::string underflow_threshold;

                            };

                            public:
                                std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config> config;
                                std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State> state;

                        };

                        public:
                            std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config> config;
                            std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow> overflow;
                            std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State> state;
                            std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow> underflow;

                    };

                    public:
                        std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth> auto_bandwidth;
                        std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config> config;
                        std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State> state;

                };

                class P2PTunnelAttributes {
                    public:
                        P2PTunnelAttributes();

                    class Config {
                        public:
                            Config();

                        public:
                            std::string destination;

                    };

                    class State {
                        public:
                            State();

                        public:
                            std::string destination;

                    };

                    class P2PPrimaryPaths {
                        public:
                            P2PPrimaryPaths();

                        class Config {
                            public:
                                Config();

                            public:
                                std::string cspf_tiebreaker;
                                std::string explicit_path_name;
                                std::string hold_priority;
                                std::string name;
                                std::string path_computation_method;
                                std::string path_computation_server;
                                std::string preference;
                                std::string retry_timer;
                                std::string setup_priority;
                                bool use_cspf;

                        };

                        class State {
                            public:
                                State();

                            public:
                                std::string cspf_tiebreaker;
                                std::string explicit_path_name;
                                std::string hold_priority;
                                std::string name;
                                std::string path_computation_method;
                                std::string path_computation_server;
                                std::string preference;
                                std::string retry_timer;
                                std::string setup_priority;
                                bool use_cspf;

                        };

                        class CandidateSecondaryPaths {
                            public:
                                CandidateSecondaryPaths();

                            class CandidateSecondaryPath {
                                public:
                                    CandidateSecondaryPath();

                                class Config {
                                    public:
                                        Config();

                                    public:
                                        int priority;
                                        std::string secondary_path;

                                };

                                class State {
                                    public:
                                        State();

                                    public:
                                        bool active;
                                        int priority;
                                        std::string secondary_path;

                                };

                                public:
                                    std::string secondary_path;
                                    std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config> config;
                                    std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State> state;

                            };

                            public:
                                std::vector< std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath> > candidate_secondary_path;

                        };

                        class AdminGroups {
                            public:
                                AdminGroups();

                            class Config {
                                public:
                                    Config();

                                public:
                                    std::vector<std::string> exclude_group;
                                    std::vector<std::string> include_all_group;
                                    std::vector<std::string> include_any_group;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    std::vector<std::string> exclude_group;
                                    std::vector<std::string> include_all_group;
                                    std::vector<std::string> include_any_group;

                            };

                            public:
                                std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config> config;
                                std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State> state;

                        };

                        public:
                            std::string name;
                            std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups> admin_groups;
                            std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths> candidate_secondary_paths;
                            std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config> config;
                            std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State> state;

                    };

                    class P2PSecondaryPaths {
                        public:
                            P2PSecondaryPaths();

                        class Config {
                            public:
                                Config();

                            public:
                                std::string cspf_tiebreaker;
                                std::string explicit_path_name;
                                std::string hold_priority;
                                std::string name;
                                std::string path_computation_method;
                                std::string path_computation_server;
                                std::string preference;
                                std::string retry_timer;
                                std::string setup_priority;
                                bool use_cspf;

                        };

                        class State {
                            public:
                                State();

                            public:
                                std::string cspf_tiebreaker;
                                std::string explicit_path_name;
                                std::string hold_priority;
                                std::string name;
                                std::string path_computation_method;
                                std::string path_computation_server;
                                std::string preference;
                                std::string retry_timer;
                                std::string setup_priority;
                                bool use_cspf;

                        };

                        class AdminGroups {
                            public:
                                AdminGroups();

                            class Config {
                                public:
                                    Config();

                                public:
                                    std::vector<std::string> exclude_group;
                                    std::vector<std::string> include_all_group;
                                    std::vector<std::string> include_any_group;

                            };

                            class State {
                                public:
                                    State();

                                public:
                                    std::vector<std::string> exclude_group;
                                    std::vector<std::string> include_all_group;
                                    std::vector<std::string> include_any_group;

                            };

                            public:
                                std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config> config;
                                std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State> state;

                        };

                        public:
                            std::string name;
                            std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups> admin_groups;
                            std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config> config;
                            std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State> state;

                    };

                    public:
                        std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config> config;
                        std::vector< std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths> > p2p_primary_paths;
                        std::vector< std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths> > p2p_secondary_paths;
                        std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State> state;

                };

                public:
                    std::string name;
                    std::string type;
                    std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth> bandwidth;
                    std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::Config> config;
                    std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes> p2p_tunnel_attributes;
                    std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel::State> state;

            };

            public:
                std::vector< std::unique_ptr<Mpls::Lsps::ConstrainedPath::NamedExplicitPaths> > named_explicit_paths;
                std::vector< std::unique_ptr<Mpls::Lsps::ConstrainedPath::Tunnel> > tunnel;

        };

        class UnconstrainedPath {
            public:
                UnconstrainedPath();

            class PathSetupProtocol {
                public:
                    PathSetupProtocol();

                class Ldp {
                    public:
                        Ldp();

                    class Tunnel {
                        public:
                            Tunnel();

                        class P2PLsp {
                            public:
                                P2PLsp();

                            public:
                                std::vector<std::string> fec_address;

                        };

                        class P2MpLsp {
                            public:
                                P2MpLsp();

                            public:

                        };

                        class Mp2MpLsp {
                            public:
                                Mp2MpLsp();

                            public:

                        };

                        public:
                            std::string ldp_type;
                            std::unique_ptr<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp> mp2mp_lsp;
                            std::unique_ptr<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp> p2mp_lsp;
                            std::unique_ptr<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp> p2p_lsp;
                            std::string tunnel_type;

                    };

                    public:
                        std::unique_ptr<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel> tunnel;

                };

                class SegmentRouting {
                    public:
                        SegmentRouting();

                    class Tunnel {
                        public:
                            Tunnel();

                        class P2PLsp {
                            public:
                                P2PLsp();

                            class Fec {
                                public:
                                    Fec();

                                class Config {
                                    public:
                                        Config();

                                    public:
                                        std::string fec_address;

                                };

                                class State {
                                    public:
                                        State();

                                    public:
                                        std::string fec_address;

                                };

                                class PrefixSid {
                                    public:
                                        PrefixSid();

                                    class Config {
                                        public:
                                            Config();

                                        public:
                                            std::string last_hop_behavior;
                                            bool node_flag;
                                            std::string type;

                                    };

                                    class State {
                                        public:
                                            State();

                                        public:
                                            std::string last_hop_behavior;
                                            bool node_flag;
                                            std::string type;

                                    };

                                    public:
                                        std::unique_ptr<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config> config;
                                        std::unique_ptr<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State> state;

                                };

                                public:
                                    std::string fec_address;
                                    std::unique_ptr<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config> config;
                                    std::unique_ptr<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid> prefix_sid;
                                    std::unique_ptr<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State> state;

                            };

                            public:
                                std::vector< std::unique_ptr<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec> > fec;

                        };

                        public:
                            std::unique_ptr<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp> p2p_lsp;
                            std::string tunnel_type;

                    };

                    public:
                        std::unique_ptr<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel> tunnel;

                };

                public:
                    std::unique_ptr<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp> ldp;
                    std::unique_ptr<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting> segment_routing;

            };

            public:
                std::unique_ptr<Mpls::Lsps::UnconstrainedPath::PathSetupProtocol> path_setup_protocol;

        };

        class StaticLsps {
            public:
                StaticLsps();

            class LabelSwitchedPath {
                public:
                    LabelSwitchedPath();

                class Ingress {
                    public:
                        Ingress();

                    public:
                        std::string incoming_label;
                        std::string next_hop;
                        std::string push_label;

                };

                class Transit {
                    public:
                        Transit();

                    public:
                        std::string incoming_label;
                        std::string next_hop;
                        std::string push_label;

                };

                class Egress {
                    public:
                        Egress();

                    public:
                        std::string incoming_label;
                        std::string next_hop;
                        std::string push_label;

                };

                public:
                    std::string name;
                    std::unique_ptr<Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress> egress;
                    std::unique_ptr<Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress> ingress;
                    std::unique_ptr<Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit> transit;

            };

            public:
                std::vector< std::unique_ptr<Mpls::Lsps::StaticLsps::LabelSwitchedPath> > label_switched_path;

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
