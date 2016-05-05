#include <memory>
#include <vector>
#include <string>
#include "ydk/models/ietf_interfaces/ietf_interfaces.h"

namespace ydk {
namespace ietf_interfaces {
InterfaceType_Identity::InterfaceType_Identity() {


}

Interfaces::Interface::Interface() {

}

Interfaces::Interfaces() {

}

InterfacesState::Interface::Statistics::Statistics() {

}

InterfacesState::Interface::Bandwidth::Bandwidth() {

}

InterfacesState::Interface::Interface() {
    bandwidth = std::make_unique<InterfacesState::Interface::Bandwidth>();
    statistics = std::make_unique<InterfacesState::Interface::Statistics>();

}

InterfacesState::InterfacesState() {

}


};
};
