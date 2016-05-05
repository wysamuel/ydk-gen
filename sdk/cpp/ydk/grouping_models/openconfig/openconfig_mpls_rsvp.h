#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_mpls_rsvp {

class MplsRsvpInterfacesState_Grouping {
    public:
        MplsRsvpInterfacesState_Grouping();

    class Bandwidth {
        public:
            int available_bandwidth;
            std::string priority;
            int reserved_bandwidth;

    };

    public:
        int active_reservation_count;
        std::vector< std::unique_ptr<MplsRsvpInterfacesState_Grouping::Bandwidth> > bandwidth;
        int highwater_mark;

};

class MplsRsvpSoftPreemption_Config_Grouping {
    public:
        bool enable;
        std::string soft_preemption_timeout;

};

class MplsRsvpGlobalProtocolState_Grouping {
    public:
        int path_timeouts;
        int rate_limited_messages;
        int reservation_timeouts;

};

class RsvpP2PTunnelAttributes_Config_Grouping: public RsvpPriorities_Config_Grouping {
    public:
        bool soft_preemption;
        std::string source;

};

class MplsRsvpLinkProtection_Grouping {
    public:
        MplsRsvpLinkProtection_Grouping();

    class Protection {
        public:
            Protection();

        class Config: public MplsRsvpProtection_Config_Grouping {
            public:

        };

        class State: public MplsRsvpProtection_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<MplsRsvpLinkProtection_Grouping::Protection::Config> config;
            std::unique_ptr<MplsRsvpLinkProtection_Grouping::Protection::State> state;

    };

    public:
        std::unique_ptr<MplsRsvpLinkProtection_Grouping::Protection> protection;

};

class MplsRsvpErrorStatistics_Grouping {
    public:
        MplsRsvpErrorStatistics_Grouping();

    class Error {
        public:
            int authentication_failure;
            int path_error;
            int path_timeout;
            int rate_limit;
            int resv_error;
            int resv_timeout;

    };

    public:
        std::unique_ptr<MplsRsvpErrorStatistics_Grouping::Error> error;

};

class MplsRsvpHellos_Grouping {
    public:
        MplsRsvpHellos_Grouping();

    class Hellos {
        public:
            Hellos();

        class Config: public MplsRsvpHellos_Config_Grouping {
            public:

        };

        class State: public MplsRsvpHellos_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<MplsRsvpHellos_Grouping::Hellos::Config> config;
            std::unique_ptr<MplsRsvpHellos_Grouping::Hellos::State> state;

    };

    public:
        std::unique_ptr<MplsRsvpHellos_Grouping::Hellos> hellos;

};

class MplsRsvpGracefulRestart_Config_Grouping {
    public:
        bool enable;
        int recovery_time;
        int restart_time;

};

class RsvpP2PPathAttributes_Config_Grouping: public RsvpPriorities_Config_Grouping {
    public:
        std::string retry_timer;

};

class MplsRsvpHellos_Config_Grouping {
    public:
        std::string hello_interval;
        bool refresh_reduction;

};

class MplsRsvpProtection_Config_Grouping {
    public:
        int bypass_optimize_interval;
        std::string link_protection_style_requested;

};

class MplsRsvpSoftPreemption_Grouping {
    public:
        MplsRsvpSoftPreemption_Grouping();

    class SoftPreemption {
        public:
            SoftPreemption();

        class Config: public MplsRsvpSoftPreemption_Config_Grouping {
            public:

        };

        class State: public MplsRsvpSoftPreemption_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<MplsRsvpSoftPreemption_Grouping::SoftPreemption::Config> config;
            std::unique_ptr<MplsRsvpSoftPreemption_Grouping::SoftPreemption::State> state;

    };

    public:
        std::unique_ptr<MplsRsvpSoftPreemption_Grouping::SoftPreemption> soft_preemption;

};

class MplsRsvpStatistics_Grouping: public MplsRsvpProtocolState_Grouping {
    public:

};

class RsvpPriorities_Config_Grouping {
    public:
        std::string hold_priority;
        std::string setup_priority;

};

class RsvpGlobal_Grouping {
    public:
        RsvpGlobal_Grouping();

    class RsvpTe {
        public:
            RsvpTe();

        class Sessions {
            public:
                Sessions();

            class Config {
                public:

            };

            class State: public MplsRsvpSessionState_Grouping {
                public:

            };

            public:
                std::unique_ptr<RsvpGlobal_Grouping::RsvpTe::Sessions::Config> config;
                std::unique_ptr<RsvpGlobal_Grouping::RsvpTe::Sessions::State> state;

        };

        class Neighbors {
            public:
                Neighbors();

            class Config {
                public:

            };

            class State: public MplsRsvpNeighborState_Grouping {
                public:

            };

            public:
                std::unique_ptr<RsvpGlobal_Grouping::RsvpTe::Neighbors::Config> config;
                std::unique_ptr<RsvpGlobal_Grouping::RsvpTe::Neighbors::State> state;

        };

        class Global: public MplsRsvpGracefulRestart_Grouping, MplsRsvpSoftPreemption_Grouping, MplsRsvpHellos_Grouping {
            public:
                Global();

            class State {
                public:
                    State();

                class Counters: public MplsRsvpGlobalProtocolState_Grouping, MplsRsvpStatistics_Grouping {
                    public:

                };

                public:
                    std::unique_ptr<RsvpGlobal_Grouping::RsvpTe::Global::State::Counters> counters;

            };

            public:
                std::unique_ptr<RsvpGlobal_Grouping::RsvpTe::Global::State> state;

        };

        class InterfaceAttributes {
            public:
                InterfaceAttributes();

            class Interface: public MplsRsvpHellos_Grouping, MplsRsvpAuthentication_Grouping, MplsRsvpSubscription_Grouping, MplsRsvpLinkProtection_Grouping {
                public:
                    Interface();

                class Config {
                    public:
                        std::string interface_name;

                };

                class State: public MplsRsvpInterfacesState_Grouping {
                    public:
                        State();

                    class Counters: public MplsRsvpProtocolState_Grouping {
                        public:

                    };

                    public:
                        std::unique_ptr<RsvpGlobal_Grouping::RsvpTe::InterfaceAttributes::Interface::State::Counters> counters;

                };

                public:
                    std::unique_ptr<RsvpGlobal_Grouping::RsvpTe::InterfaceAttributes::Interface::Config> config;
                    std::string interface_name;
                    std::unique_ptr<RsvpGlobal_Grouping::RsvpTe::InterfaceAttributes::Interface::State> state;

            };

            public:
                std::vector< std::unique_ptr<RsvpGlobal_Grouping::RsvpTe::InterfaceAttributes::Interface> > interface;

        };

        public:
            std::unique_ptr<RsvpGlobal_Grouping::RsvpTe::Global> global_;
            std::unique_ptr<RsvpGlobal_Grouping::RsvpTe::InterfaceAttributes> interface_attributes;
            std::unique_ptr<RsvpGlobal_Grouping::RsvpTe::Neighbors> neighbors;
            std::unique_ptr<RsvpGlobal_Grouping::RsvpTe::Sessions> sessions;

    };

    public:
        std::unique_ptr<RsvpGlobal_Grouping::RsvpTe> rsvp_te;

};

class MplsRsvpSessionState_Grouping {
    public:
        MplsRsvpSessionState_Grouping();

    class Session {
        public:
            std::vector<std::string> associated_lsps;
            std::string destination_address;
            int destination_port;
            std::string label_in;
            std::string label_out;
            std::string source_address;
            int source_port;
            std::string status;
            int tunnel_id;
            std::string type;

    };

    public:
        std::vector< std::unique_ptr<MplsRsvpSessionState_Grouping::Session> > session;

};

class MplsRsvpNeighborState_Grouping {
    public:
        MplsRsvpNeighborState_Grouping();

    class Neighbor {
        public:
            std::string address;
            std::string detected_interface;
            std::string neighbor_status;
            bool refresh_reduction;

    };

    public:
        std::vector< std::unique_ptr<MplsRsvpNeighborState_Grouping::Neighbor> > neighbor;

};

class MplsRsvpAuthentication_Grouping {
    public:
        MplsRsvpAuthentication_Grouping();

    class Authentication {
        public:
            Authentication();

        class Config: public MplsRsvpAuthentication_Config_Grouping {
            public:

        };

        class State: public MplsRsvpAuthentication_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<MplsRsvpAuthentication_Grouping::Authentication::Config> config;
            std::unique_ptr<MplsRsvpAuthentication_Grouping::Authentication::State> state;

    };

    public:
        std::unique_ptr<MplsRsvpAuthentication_Grouping::Authentication> authentication;

};

class MplsRsvpProtocolState_Grouping {
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

class MplsRsvpSubscription_Config_Grouping {
    public:
        std::string subscription;

};

class MplsRsvpSubscription_Grouping {
    public:
        MplsRsvpSubscription_Grouping();

    class Subscription {
        public:
            Subscription();

        class Config: public MplsRsvpSubscription_Config_Grouping {
            public:

        };

        class State: public MplsRsvpSubscription_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<MplsRsvpSubscription_Grouping::Subscription::Config> config;
            std::unique_ptr<MplsRsvpSubscription_Grouping::Subscription::State> state;

    };

    public:
        std::unique_ptr<MplsRsvpSubscription_Grouping::Subscription> subscription;

};

class MplsRsvpAuthentication_Config_Grouping {
    public:
        std::string authentication_key;
        bool enable;

};

class MplsRsvpGracefulRestart_Grouping {
    public:
        MplsRsvpGracefulRestart_Grouping();

    class GracefulRestart {
        public:
            GracefulRestart();

        class Config: public MplsRsvpGracefulRestart_Config_Grouping {
            public:

        };

        class State: public MplsRsvpGracefulRestart_Config_Grouping {
            public:

        };

        public:
            std::unique_ptr<MplsRsvpGracefulRestart_Grouping::GracefulRestart::Config> config;
            std::unique_ptr<MplsRsvpGracefulRestart_Grouping::GracefulRestart::State> state;

    };

    public:
        std::unique_ptr<MplsRsvpGracefulRestart_Grouping::GracefulRestart> graceful_restart;

};

class MplsRsvpProtocolStatistics_Grouping {
    public:
        MplsRsvpProtocolStatistics_Grouping();

    class Protocol {
        public:
            int hello_rcvd;
            int hello_sent;
            int path_rcvd;
            int path_sent;

    };

    public:
        std::unique_ptr<MplsRsvpProtocolStatistics_Grouping::Protocol> protocol;

};


};
};
