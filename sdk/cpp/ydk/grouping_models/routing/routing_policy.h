#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace routing_policy {

class MatchSetOptionsRestrictedGroup_Grouping {
    public:
        std::string match_set_options;

};

class ApplyPolicyGroup_Grouping {
    public:
        ApplyPolicyGroup_Grouping();

    class ApplyPolicy {
        public:
            ApplyPolicy();

        class Config: public ApplyPolicyConfig_Grouping {
            public:

        };

        class State: public ApplyPolicyConfig_Grouping, ApplyPolicyState_Grouping {
            public:

        };

        public:
            std::unique_ptr<ApplyPolicyGroup_Grouping::ApplyPolicy::Config> config;
            std::unique_ptr<ApplyPolicyGroup_Grouping::ApplyPolicy::State> state;

    };

    public:
        std::unique_ptr<ApplyPolicyGroup_Grouping::ApplyPolicy> apply_policy;

};

class GenericConditions_Grouping: public LocalGenericConditions_Grouping {
    public:
        GenericConditions_Grouping();

    class MatchPrefixSet: public MatchSetOptionsRestrictedGroup_Grouping {
        public:
            std::string prefix_set;

    };

    class MatchNeighborSet: public MatchSetOptionsRestrictedGroup_Grouping {
        public:
            std::string neighbor_set;

    };

    class MatchTagSet: public MatchSetOptionsRestrictedGroup_Grouping {
        public:
            std::string tag_set;

    };

    public:
        std::unique_ptr<GenericConditions_Grouping::MatchNeighborSet> match_neighbor_set;
        std::unique_ptr<GenericConditions_Grouping::MatchPrefixSet> match_prefix_set;
        std::unique_ptr<GenericConditions_Grouping::MatchTagSet> match_tag_set;

};

class GenericActions_Grouping {
    public:

};

class GenericDefinedSets_Grouping {
    public:
        GenericDefinedSets_Grouping();

    class PrefixSets {
        public:
            PrefixSets();

        class PrefixSet {
            public:
                PrefixSet();

            class Prefix {
                public:
                    std::string ip_prefix;
                    std::string masklength_range;

            };

            public:
                std::vector< std::unique_ptr<GenericDefinedSets_Grouping::PrefixSets::PrefixSet::Prefix> > prefix;
                std::string prefix_set_name;

        };

        public:
            std::vector< std::unique_ptr<GenericDefinedSets_Grouping::PrefixSets::PrefixSet> > prefix_set;

    };

    class NeighborSets {
        public:
            NeighborSets();

        class NeighborSet {
            public:
                NeighborSet();

            class Neighbor {
                public:
                    std::string address;

            };

            public:
                std::vector< std::unique_ptr<GenericDefinedSets_Grouping::NeighborSets::NeighborSet::Neighbor> > neighbor;
                std::string neighbor_set_name;

        };

        public:
            std::vector< std::unique_ptr<GenericDefinedSets_Grouping::NeighborSets::NeighborSet> > neighbor_set;

    };

    class TagSets {
        public:
            TagSets();

        class TagSet {
            public:
                TagSet();

            class Tag {
                public:
                    std::string value;

            };

            public:
                std::vector< std::unique_ptr<GenericDefinedSets_Grouping::TagSets::TagSet::Tag> > tag;
                std::string tag_set_name;

        };

        public:
            std::vector< std::unique_ptr<GenericDefinedSets_Grouping::TagSets::TagSet> > tag_set;

    };

    public:
        std::unique_ptr<GenericDefinedSets_Grouping::NeighborSets> neighbor_sets;
        std::unique_ptr<GenericDefinedSets_Grouping::PrefixSets> prefix_sets;
        std::unique_ptr<GenericDefinedSets_Grouping::TagSets> tag_sets;

};

class IgpActions_Grouping {
    public:
        IgpActions_Grouping();

    class IgpActions {
        public:
            std::string set_tag;

    };

    public:
        std::unique_ptr<IgpActions_Grouping::IgpActions> igp_actions;

};

class LocalGenericConditions_Grouping {
    public:
        std::string install_protocol_eq;

};

class IgpGenericConditions_Grouping {
    public:

};

class ApplyPolicyState_Grouping {
    public:

};

class ApplyPolicyConfig_Grouping {
    public:
        std::string default_export_policy;
        std::string default_import_policy;
        std::vector<std::string> export_policy;
        std::vector<std::string> import_policy;

};

class IgpConditions_Grouping {
    public:
        IgpConditions_Grouping();

    class IgpConditions: public IgpGenericConditions_Grouping {
        public:

    };

    public:
        std::unique_ptr<IgpConditions_Grouping::IgpConditions> igp_conditions;

};

class MatchSetOptionsGroup_Grouping {
    public:
        std::string match_set_options;

};

class RoutingPolicy {
    public:
        RoutingPolicy();

    class DefinedSets: public GenericDefinedSets_Grouping {
        public:

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

                    class Conditions: public GenericConditions_Grouping, IgpConditions_Grouping {
                        public:
                            std::string call_policy;

                    };

                    class Actions: public GenericActions_Grouping, IgpActions_Grouping {
                        public:

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
