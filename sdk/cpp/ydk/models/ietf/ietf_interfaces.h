#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace ietf_interfaces {

class InterfaceType_Identity {
    public:
        InterfaceType_Identity();



};

class Interfaces {
    public:
        Interfaces();

    class Interface {
        public:
            Interface();

        public:
            std::string name;
            std::string description;
            bool enabled;
            std::string link_up_down_trap_enable;
            std::string type;

    };

    public:
        std::vector< std::unique_ptr<Interfaces::Interface> > interface;

};

class InterfacesState {
    public:
        InterfacesState();

    class Interface {
        public:
            Interface();

        class Statistics {
            public:
                Statistics();

            public:
                std::string discontinuity_time;
                int in_broadcast_pkts;
                int in_discards;
                int in_errors;
                int in_multicast_pkts;
                int in_octets;
                int in_pkts;
                int in_unicast_pkts;
                int in_unknown_protos;
                int out_broadcast_pkts;
                int out_discards;
                int out_errors;
                int out_multicast_pkts;
                int out_octets;
                int out_pkts;
                int out_unicast_pkts;

        };

        class Bandwidth {
            public:
                Bandwidth();

            public:
                std::string units;
                int value;

        };

        public:
            std::string name;
            std::string admin_status;
            std::unique_ptr<InterfacesState::Interface::Bandwidth> bandwidth;
            std::vector<std::string> higher_layer_if;
            std::string if_index;
            std::string last_change;
            std::vector<std::string> lower_layer_if;
            std::string oper_status;
            std::string phys_address;
            int speed;
            std::unique_ptr<InterfacesState::Interface::Statistics> statistics;
            std::string type;

    };

    public:
        std::vector< std::unique_ptr<InterfacesState::Interface> > interface;

};


};
};
