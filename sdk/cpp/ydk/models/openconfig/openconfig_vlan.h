#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_vlan {

class Vlans {
    public:
        Vlans();

    class Vlan {
        public:
            Vlan();

        class Config {
            public:
                Config();

            public:
                std::string name;
                std::string status;
                std::string vlan_id;

        };

        class State {
            public:
                State();

            public:
                std::vector<std::string> member_ports;
                std::string name;
                std::string status;
                std::string vlan_id;

        };

        public:
            std::string vlan_id;
            std::unique_ptr<Vlans::Vlan::Config> config;
            std::unique_ptr<Vlans::Vlan::State> state;

    };

    public:
        std::vector< std::unique_ptr<Vlans::Vlan> > vlan;

};


};
};
