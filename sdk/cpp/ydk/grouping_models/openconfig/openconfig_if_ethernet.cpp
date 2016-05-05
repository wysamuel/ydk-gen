#include <memory>
#include <vector>
#include <string>
#include "ydk/models/openconfig_if_ethernet/openconfig_if_ethernet.h"

namespace ydk {
namespace openconfig_if_ethernet {
Speed_100Gb_Identity::Speed_100Gb_Identity() {

}

Speed_25Gb_Identity::Speed_25Gb_Identity() {

}

Speed_1Gb_Identity::Speed_1Gb_Identity() {

}

Speed_10Gb_Identity::Speed_10Gb_Identity() {

}

Speed_10Mb_Identity::Speed_10Mb_Identity() {

}

EthernetSpeed_Identity::EthernetSpeed_Identity() {


}

Speed_40Gb_Identity::Speed_40Gb_Identity() {

}

Speed_Unknown_Identity::Speed_Unknown_Identity() {

}

Speed_50Gb_Identity::Speed_50Gb_Identity() {

}

Speed_100Mb_Identity::Speed_100Mb_Identity() {

}

EthernetTop_Grouping::Ethernet::Config::Config() {

}

EthernetTop_Grouping::Ethernet::State::State() {

}

EthernetTop_Grouping::Ethernet::Ethernet() {
    config = std::make_unique<EthernetTop_Grouping::Ethernet::Config>();
    state = std::make_unique<EthernetTop_Grouping::Ethernet::State>();

}

EthernetTop_Grouping::EthernetTop_Grouping() {
    ethernet = std::make_unique<EthernetTop_Grouping::Ethernet>();

}

EthernetInterfaceStateCounters_Grouping::EthernetInterfaceStateCounters_Grouping() {

}

EthernetInterfaceState_Grouping::Counters::Counters() {

}

EthernetInterfaceState_Grouping::EthernetInterfaceState_Grouping() {
    counters = std::make_unique<EthernetInterfaceState_Grouping::Counters>();

}

EthernetInterfaceConfig_Grouping::EthernetInterfaceConfig_Grouping() {

}


};
};
