#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_if_aggregate {

class AggregationLacpState_Grouping {
    public:

};

class AggregationLacpMembersConfig_Grouping {
    public:

};

class EthernetIfAggregationConfig_Grouping {
    public:
        std::string aggregate_id;

};

class AggregationLacpMembersState_Grouping {
    public:
        std::string activity;
        bool aggregatable;
        bool collecting;
        bool distributing;
        std::string interface;
        int oper_key;
        std::string partner_id;
        int partner_key;
        std::string synchronization;
        std::string system_id;
        std::string timeout;

};

class AggregationLacpMembersStatistics_Grouping {
    public:
        AggregationLacpMembersStatistics_Grouping();

    class Counters {
        public:
            int lacp_errors;
            int lacp_in_pkts;
            int lacp_out_pkts;
            int lacp_rx_errors;
            int lacp_tx_errors;
            int lacp_unknown_errors;

    };

    public:
        std::unique_ptr<AggregationLacpMembersStatistics_Grouping::Counters> counters;

};

class AggregationLacpConfig_Grouping {
    public:
        std::string interval;
        std::string lacp_mode;
        std::string system_id_mac;
        int system_priority;

};

class AggregationLogicalConfig_Grouping {
    public:
        std::string lag_type;
        int min_links;

};

class AggregationLacpMembersTop_Grouping {
    public:
        AggregationLacpMembersTop_Grouping();

    class Members {
        public:
            Members();

        class Member {
            public:
                Member();

            class State: public AggregationLacpMembersState_Grouping, AggregationLacpMembersStatistics_Grouping {
                public:

            };

            public:
                std::string interface;
                std::unique_ptr<AggregationLacpMembersTop_Grouping::Members::Member::State> state;

        };

        public:
            std::vector< std::unique_ptr<AggregationLacpMembersTop_Grouping::Members::Member> > member;

    };

    public:
        std::unique_ptr<AggregationLacpMembersTop_Grouping::Members> members;

};

class AggregationLogicalTop_Grouping {
    public:
        AggregationLogicalTop_Grouping();

    class Aggregation: public AggregationLacpTop_Grouping {
        public:
            Aggregation();

        class Config: public AggregationLogicalConfig_Grouping {
            public:

        };

        class State: public AggregationLogicalConfig_Grouping {
            public:
                std::vector<std::string> members;

        };

        public:
            std::unique_ptr<AggregationLogicalTop_Grouping::Aggregation::Config> config;
            std::unique_ptr<AggregationLogicalTop_Grouping::Aggregation::State> state;

    };

    public:
        std::unique_ptr<AggregationLogicalTop_Grouping::Aggregation> aggregation;

};

class AggregationLacpTop_Grouping {
    public:
        AggregationLacpTop_Grouping();

    class Lacp: public AggregationLacpMembersTop_Grouping {
        public:
            Lacp();

        class Config: public AggregationLacpConfig_Grouping {
            public:

        };

        class State: public AggregationLacpConfig_Grouping, AggregationLacpState_Grouping {
            public:

        };

        public:
            std::unique_ptr<AggregationLacpTop_Grouping::Lacp::Config> config;
            std::unique_ptr<AggregationLacpTop_Grouping::Lacp::State> state;

    };

    public:
        std::unique_ptr<AggregationLacpTop_Grouping::Lacp> lacp;

};


};
};
