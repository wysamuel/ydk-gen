#include <memory>
#include <vector>
#include <string>
#include "ydk/models/openconfig_vlan/openconfig_vlan.h"

namespace ydk {
namespace openconfig_vlan {
Vlans::Vlan::Config::Config() {

}

Vlans::Vlan::State::State() {

}

Vlans::Vlan::Vlan() {
    config = std::make_unique<Vlans::Vlan::Config>();
    state = std::make_unique<Vlans::Vlan::State>();

}

Vlans::Vlans() {

}


};
};
