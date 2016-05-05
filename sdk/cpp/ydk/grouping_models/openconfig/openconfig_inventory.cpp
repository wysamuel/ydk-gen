#include <memory>
#include <vector>
#include <string>
#include "ydk/models/openconfig_inventory/openconfig_inventory.h"

namespace ydk {
namespace openconfig_inventory {
InventorySubcomponentRefTop_Grouping::Subcomponents::Subcomponent::Config::Config() {

}

InventorySubcomponentRefTop_Grouping::Subcomponents::Subcomponent::State::State() {

}

InventorySubcomponentRefTop_Grouping::Subcomponents::Subcomponent::Subcomponent() {
    config = std::make_unique<InventorySubcomponentRefTop_Grouping::Subcomponents::Subcomponent::Config>();
    state = std::make_unique<InventorySubcomponentRefTop_Grouping::Subcomponents::Subcomponent::State>();

}

InventorySubcomponentRefTop_Grouping::Subcomponents::Subcomponents() {

}

InventorySubcomponentRefTop_Grouping::InventorySubcomponentRefTop_Grouping() {
    subcomponents = std::make_unique<InventorySubcomponentRefTop_Grouping::Subcomponents>();

}

InventoryComponentTop_Grouping::Components::Component::Config::Config() {

}

InventoryComponentTop_Grouping::Components::Component::State::State() {

}

InventoryComponentTop_Grouping::Components::Component::Component() {
    config = std::make_unique<InventoryComponentTop_Grouping::Components::Component::Config>();
    state = std::make_unique<InventoryComponentTop_Grouping::Components::Component::State>();

}

InventoryComponentTop_Grouping::Components::Components() {

}

InventoryComponentTop_Grouping::InventoryComponentTop_Grouping() {
    components = std::make_unique<InventoryComponentTop_Grouping::Components>();

}

InventoryComponentPropertiesConfig_Grouping::InventoryComponentPropertiesConfig_Grouping() {

}

InventoryComponentConfig_Grouping::InventoryComponentConfig_Grouping() {

}

InventoryComponentState_Grouping::InventoryComponentState_Grouping() {

}

InventorySubcomponentRefConfig_Grouping::InventorySubcomponentRefConfig_Grouping() {

}

InventoryComponentPropertiesTop_Grouping::Properties::Property::Config::Config() {

}

InventoryComponentPropertiesTop_Grouping::Properties::Property::State::State() {

}

InventoryComponentPropertiesTop_Grouping::Properties::Property::Property() {
    config = std::make_unique<InventoryComponentPropertiesTop_Grouping::Properties::Property::Config>();
    state = std::make_unique<InventoryComponentPropertiesTop_Grouping::Properties::Property::State>();

}

InventoryComponentPropertiesTop_Grouping::Properties::Properties() {

}

InventoryComponentPropertiesTop_Grouping::InventoryComponentPropertiesTop_Grouping() {
    properties = std::make_unique<InventoryComponentPropertiesTop_Grouping::Properties>();

}

InventoryComponentPropertiesState_Grouping::InventoryComponentPropertiesState_Grouping() {

}

InventorySubcomponentRefState_Grouping::InventorySubcomponentRefState_Grouping() {

}

Components::Component::Config::Config() {

}

Components::Component::State::State() {

}

Components::Component::Component() {
    config = std::make_unique<Components::Component::Config>();
    state = std::make_unique<Components::Component::State>();

}

Components::Components() {

}


};
};
