#include <memory>
#include <vector>
#include <string>
#include "ydk/models/routing_policy/routing_policy.h"

namespace ydk {
namespace routing_policy {
RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefix::Prefix() {

}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::PrefixSet() {

}

RoutingPolicy::DefinedSets::PrefixSets::PrefixSets() {

}

RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Neighbor::Neighbor() {

}

RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::NeighborSet() {

}

RoutingPolicy::DefinedSets::NeighborSets::NeighborSets() {

}

RoutingPolicy::DefinedSets::TagSets::TagSet::Tag::Tag() {

}

RoutingPolicy::DefinedSets::TagSets::TagSet::TagSet() {

}

RoutingPolicy::DefinedSets::TagSets::TagSets() {

}

RoutingPolicy::DefinedSets::DefinedSets() {
    neighbor_sets = std::make_unique<RoutingPolicy::DefinedSets::NeighborSets>();
    prefix_sets = std::make_unique<RoutingPolicy::DefinedSets::PrefixSets>();
    tag_sets = std::make_unique<RoutingPolicy::DefinedSets::TagSets>();

}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::MatchPrefixSet() {

}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::MatchNeighborSet() {

}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::MatchTagSet() {

}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions::IgpConditions() {

}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Conditions() {
    igp_conditions = std::make_unique<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions>();
    match_neighbor_set = std::make_unique<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet>();
    match_prefix_set = std::make_unique<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet>();
    match_tag_set = std::make_unique<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet>();

}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::IgpActions() {

}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Actions() {
    igp_actions = std::make_unique<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions>();

}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Statement() {
    actions = std::make_unique<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions>();
    conditions = std::make_unique<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions>();

}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statements() {

}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::PolicyDefinition() {
    statements = std::make_unique<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements>();

}

RoutingPolicy::PolicyDefinitions::PolicyDefinitions() {

}

RoutingPolicy::RoutingPolicy() {
    defined_sets = std::make_unique<RoutingPolicy::DefinedSets>();
    policy_definitions = std::make_unique<RoutingPolicy::PolicyDefinitions>();

}


};
};
