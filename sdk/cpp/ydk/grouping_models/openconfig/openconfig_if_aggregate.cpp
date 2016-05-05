#include <memory>
#include <vector>
#include <string>
#include "ydk/models/openconfig_if_aggregate/openconfig_if_aggregate.h"

namespace ydk {
namespace openconfig_if_aggregate {
AggregationLacpState_Grouping::AggregationLacpState_Grouping() {

}

AggregationLacpMembersConfig_Grouping::AggregationLacpMembersConfig_Grouping() {

}

EthernetIfAggregationConfig_Grouping::EthernetIfAggregationConfig_Grouping() {

}

AggregationLacpMembersState_Grouping::AggregationLacpMembersState_Grouping() {

}

AggregationLacpMembersStatistics_Grouping::Counters::Counters() {

}

AggregationLacpMembersStatistics_Grouping::AggregationLacpMembersStatistics_Grouping() {
    counters = std::make_unique<AggregationLacpMembersStatistics_Grouping::Counters>();

}

AggregationLacpConfig_Grouping::AggregationLacpConfig_Grouping() {

}

AggregationLogicalConfig_Grouping::AggregationLogicalConfig_Grouping() {

}

AggregationLacpMembersTop_Grouping::Members::Member::State::State() {

}

AggregationLacpMembersTop_Grouping::Members::Member::Member() {
    state = std::make_unique<AggregationLacpMembersTop_Grouping::Members::Member::State>();

}

AggregationLacpMembersTop_Grouping::Members::Members() {

}

AggregationLacpMembersTop_Grouping::AggregationLacpMembersTop_Grouping() {
    members = std::make_unique<AggregationLacpMembersTop_Grouping::Members>();

}

AggregationLogicalTop_Grouping::Aggregation::Config::Config() {

}

AggregationLogicalTop_Grouping::Aggregation::State::State() {

}

AggregationLogicalTop_Grouping::Aggregation::Aggregation() {
    config = std::make_unique<AggregationLogicalTop_Grouping::Aggregation::Config>();
    state = std::make_unique<AggregationLogicalTop_Grouping::Aggregation::State>();

}

AggregationLogicalTop_Grouping::AggregationLogicalTop_Grouping() {
    aggregation = std::make_unique<AggregationLogicalTop_Grouping::Aggregation>();

}

AggregationLacpTop_Grouping::Lacp::Config::Config() {

}

AggregationLacpTop_Grouping::Lacp::State::State() {

}

AggregationLacpTop_Grouping::Lacp::Lacp() {
    config = std::make_unique<AggregationLacpTop_Grouping::Lacp::Config>();
    state = std::make_unique<AggregationLacpTop_Grouping::Lacp::State>();

}

AggregationLacpTop_Grouping::AggregationLacpTop_Grouping() {
    lacp = std::make_unique<AggregationLacpTop_Grouping::Lacp>();

}


};
};
