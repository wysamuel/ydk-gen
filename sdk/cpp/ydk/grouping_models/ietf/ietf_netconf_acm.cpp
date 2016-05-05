#include <memory>
#include <vector>
#include <string>
#include "ydk/models/ietf_netconf_acm/ietf_netconf_acm.h"

namespace ydk {
namespace ietf_netconf_acm {
Nacm::Groups::Group::Group() {

}

Nacm::Groups::Groups() {

}

Nacm::RuleList::Rule::Rule() {

}

Nacm::RuleList::RuleList() {

}

Nacm::Nacm() {
    groups = std::make_unique<Nacm::Groups>();

}


};
};
