#include <memory>
#include <vector>
#include <string>
#include "ydk/models/openconfig_inventory/openconfig_inventory.h"

namespace ydk {
namespace openconfig_inventory {
Components::Component::Config::Config() {

}

Components::Component::State::State() {

}

Components::Component::Properties::Property::Config::Config() {

}

Components::Component::Properties::Property::State::State() {

}

Components::Component::Properties::Property::Property() {
    config = std::make_unique<Components::Component::Properties::Property::Config>();
    state = std::make_unique<Components::Component::Properties::Property::State>();

}

Components::Component::Properties::Properties() {

}

Components::Component::Subcomponents::Subcomponent::Config::Config() {

}

Components::Component::Subcomponents::Subcomponent::State::State() {

}

Components::Component::Subcomponents::Subcomponent::Subcomponent() {
    config = std::make_unique<Components::Component::Subcomponents::Subcomponent::Config>();
    state = std::make_unique<Components::Component::Subcomponents::Subcomponent::State>();

}

Components::Component::Subcomponents::Subcomponents() {

}

Components::Component::Component() {
    config = std::make_unique<Components::Component::Config>();
    properties = std::make_unique<Components::Component::Properties>();
    state = std::make_unique<Components::Component::State>();
    subcomponents = std::make_unique<Components::Component::Subcomponents>();

}

Components::Components() {

}


};
};
