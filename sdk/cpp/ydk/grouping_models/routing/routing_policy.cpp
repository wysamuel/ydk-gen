#include <memory>
#include <vector>
#include <string>
#include "ydk/models/routing_policy/routing_policy.h"

namespace ydk {
namespace routing_policy {
MatchSetOptionsRestrictedGroup_Grouping::MatchSetOptionsRestrictedGroup_Grouping() {

}

ApplyPolicyGroup_Grouping::ApplyPolicy::Config::Config() {

}

ApplyPolicyGroup_Grouping::ApplyPolicy::State::State() {

}

ApplyPolicyGroup_Grouping::ApplyPolicy::ApplyPolicy() {
    config = std::make_unique<ApplyPolicyGroup_Grouping::ApplyPolicy::Config>();
    state = std::make_unique<ApplyPolicyGroup_Grouping::ApplyPolicy::State>();

}

ApplyPolicyGroup_Grouping::ApplyPolicyGroup_Grouping() {
    apply_policy = std::make_unique<ApplyPolicyGroup_Grouping::ApplyPolicy>();

}

GenericConditions_Grouping::MatchPrefixSet::MatchPrefixSet() {

}

GenericConditions_Grouping::MatchNeighborSet::MatchNeighborSet() {

}

GenericConditions_Grouping::MatchTagSet::MatchTagSet() {

}

GenericConditions_Grouping::GenericConditions_Grouping() {
    match_neighbor_set = std::make_unique<GenericConditions_Grouping::MatchNeighborSet>();
    match_prefix_set = std::make_unique<GenericConditions_Grouping::MatchPrefixSet>();
    match_tag_set = std::make_unique<GenericConditions_Grouping::MatchTagSet>();

}

GenericActions_Grouping::GenericActions_Grouping() {

}

GenericDefinedSets_Grouping::PrefixSets::PrefixSet::Prefix::Prefix() {

}

GenericDefinedSets_Grouping::PrefixSets::PrefixSet::PrefixSet() {

}

GenericDefinedSets_Grouping::PrefixSets::PrefixSets() {

}

GenericDefinedSets_Grouping::NeighborSets::NeighborSet::Neighbor::Neighbor() {

}

GenericDefinedSets_Grouping::NeighborSets::NeighborSet::NeighborSet() {

}

GenericDefinedSets_Grouping::NeighborSets::NeighborSets() {

}

GenericDefinedSets_Grouping::TagSets::TagSet::Tag::Tag() {

}

GenericDefinedSets_Grouping::TagSets::TagSet::TagSet() {

}

GenericDefinedSets_Grouping::TagSets::TagSets() {

}

GenericDefinedSets_Grouping::GenericDefinedSets_Grouping() {
    neighbor_sets = std::make_unique<GenericDefinedSets_Grouping::NeighborSets>();
    prefix_sets = std::make_unique<GenericDefinedSets_Grouping::PrefixSets>();
    tag_sets = std::make_unique<GenericDefinedSets_Grouping::TagSets>();

}

IgpActions_Grouping::IgpActions::IgpActions() {

}

IgpActions_Grouping::IgpActions_Grouping() {
    igp_actions = std::make_unique<IgpActions_Grouping::IgpActions>();

}

LocalGenericConditions_Grouping::LocalGenericConditions_Grouping() {

}

IgpGenericConditions_Grouping::IgpGenericConditions_Grouping() {

}

ApplyPolicyState_Grouping::ApplyPolicyState_Grouping() {

}

ApplyPolicyConfig_Grouping::ApplyPolicyConfig_Grouping() {

}

IgpConditions_Grouping::IgpConditions::IgpConditions() {

}

IgpConditions_Grouping::IgpConditions_Grouping() {
    igp_conditions = std::make_unique<IgpConditions_Grouping::IgpConditions>();

}

MatchSetOptionsGroup_Grouping::MatchSetOptionsGroup_Grouping() {

}

RoutingPolicy::DefinedSets::DefinedSets() {

}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Conditions() {

}

RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Actions() {

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
