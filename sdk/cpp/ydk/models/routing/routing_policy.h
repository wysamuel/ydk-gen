#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace routing_policy {

class RoutingPolicy {
    public:
        RoutingPolicy();

    class DefinedSets {
        public:
            DefinedSets();

        class PrefixSets {
            public:
                PrefixSets();

            class PrefixSet {
                public:
                    PrefixSet();

                class Prefix {
                    public:
                        Prefix();

                    public:
                        std::string ip_prefix;
                        std::string masklength_range;

                };

                public:
                    std::string prefix_set_name;
                    std::vector< std::unique_ptr<RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefix> > prefix;

            };

            public:
                std::vector< std::unique_ptr<RoutingPolicy::DefinedSets::PrefixSets::PrefixSet> > prefix_set;

        };

        class NeighborSets {
            public:
                NeighborSets();

            class NeighborSet {
                public:
                    NeighborSet();

                class Neighbor {
                    public:
                        Neighbor();

                    public:
                        std::string address;

                };

                public:
                    std::string neighbor_set_name;
                    std::vector< std::unique_ptr<RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Neighbor> > neighbor;

            };

            public:
                std::vector< std::unique_ptr<RoutingPolicy::DefinedSets::NeighborSets::NeighborSet> > neighbor_set;

        };

        class TagSets {
            public:
                TagSets();

            class TagSet {
                public:
                    TagSet();

                class Tag {
                    public:
                        Tag();

                    public:
                        std::string value;

                };

                public:
                    std::string tag_set_name;
                    std::vector< std::unique_ptr<RoutingPolicy::DefinedSets::TagSets::TagSet::Tag> > tag;

            };

            public:
                std::vector< std::unique_ptr<RoutingPolicy::DefinedSets::TagSets::TagSet> > tag_set;

        };

        public:
            std::unique_ptr<RoutingPolicy::DefinedSets::NeighborSets> neighbor_sets;
            std::unique_ptr<RoutingPolicy::DefinedSets::PrefixSets> prefix_sets;
            std::unique_ptr<RoutingPolicy::DefinedSets::TagSets> tag_sets;

    };

    class PolicyDefinitions {
        public:
            PolicyDefinitions();

        class PolicyDefinition {
            public:
                PolicyDefinition();

            class Statements {
                public:
                    Statements();

                class Statement {
                    public:
                        Statement();

                    class Conditions {
                        public:
                            Conditions();

                        class MatchPrefixSet {
                            public:
                                MatchPrefixSet();

                            public:
                                std::string match_set_options;
                                std::string prefix_set;

                        };

                        class MatchNeighborSet {
                            public:
                                MatchNeighborSet();

                            public:
                                std::string match_set_options;
                                std::string neighbor_set;

                        };

                        class MatchTagSet {
                            public:
                                MatchTagSet();

                            public:
                                std::string match_set_options;
                                std::string tag_set;

                        };

                        class IgpConditions {
                            public:
                                IgpConditions();

                            public:

                        };

                        public:
                            std::string call_policy;
                            std::unique_ptr<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions> igp_conditions;
                            std::string install_protocol_eq;
                            std::unique_ptr<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet> match_neighbor_set;
                            std::unique_ptr<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet> match_prefix_set;
                            std::unique_ptr<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet> match_tag_set;

                    };

                    class Actions {
                        public:
                            Actions();

                        class IgpActions {
                            public:
                                IgpActions();

                            public:
                                std::string set_tag;

                        };

                        public:
                            Empty accept_route;
                            std::unique_ptr<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions> igp_actions;
                            Empty reject_route;

                    };

                    public:
                        std::string name;
                        std::unique_ptr<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions> actions;
                        std::unique_ptr<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions> conditions;

                };

                public:
                    std::vector< std::unique_ptr<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement> > statement;

            };

            public:
                std::string name;
                std::unique_ptr<RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements> statements;

        };

        public:
            std::vector< std::unique_ptr<RoutingPolicy::PolicyDefinitions::PolicyDefinition> > policy_definition;

    };

    public:
        std::unique_ptr<RoutingPolicy::DefinedSets> defined_sets;
        std::unique_ptr<RoutingPolicy::PolicyDefinitions> policy_definitions;

};


};
};
