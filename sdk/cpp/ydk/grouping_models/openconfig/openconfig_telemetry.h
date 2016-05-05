#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_telemetry {

class TelemetrySensorProfileConfig_Grouping: public TelemetryStreamSubscriptionConfig_Grouping {
    public:
        std::string sensor_group;

};

class TelemetrySensorProfile_Grouping {
    public:
        TelemetrySensorProfile_Grouping();

    class TelemetrySensorProfile {
        public:

    };

    public:
        std::vector< std::unique_ptr<TelemetrySensorProfile_Grouping::TelemetrySensorProfile> > telemetry_sensor_profile;

};

class TelemetryStreamSubscriptionConfig_Grouping: public TelemetryStreamFrequencyConfig_Grouping, TelemetryHeartbeatConfig_Grouping, TelemetrySuppressRedundantConfig_Grouping {
    public:

};

class TelemetrySuppressRedundantConfig_Grouping {
    public:
        bool suppress_redundant;

};

class TelemetryStreamDestinationConfig_Grouping {
    public:
        std::string destination_address;
        int destination_port;
        std::string destination_protocol;

};

class TelemetrySubscriptionConfig_Grouping {
    public:
        int subscription_id;

};

class TelemetryStreamFrequencyConfig_Grouping {
    public:
        int sample_interval;

};

class TelemetrySubscriptionState_Grouping {
    public:

};

class TelemetryQosMarkingConfig_Grouping {
    public:
        std::string originated_qos_marking;

};

class TelemetrySensorGroupConfig_Grouping {
    public:
        std::string sensor_group_id;

};

class TelemetrySensorPaths_Grouping {
    public:
        TelemetrySensorPaths_Grouping();

    class TelemetrySensorPaths {
        public:
            std::string sensor_exclude_filter;
            std::string telemetry_sensor_path;

    };

    public:
        std::vector< std::unique_ptr<TelemetrySensorPaths_Grouping::TelemetrySensorPaths> > telemetry_sensor_paths;

};

class TelemetryHeartbeatConfig_Grouping {
    public:
        int heartbeat_interval;

};

class TelemetryLocalSourceAddressConfig_Grouping {
    public:
        std::string local_source_address;

};

class TelemetrySensorPathConfig_Grouping {
    public:
        std::string exclude_filter;
        std::string path;

};

class TelemetrySensorSpecification_Grouping {
    public:
        TelemetrySensorSpecification_Grouping();

    class TelemetrySensorGroup: public TelemetrySensorPaths_Grouping {
        public:
            std::string telemetry_sensor_group_id;

    };

    public:
        std::vector< std::unique_ptr<TelemetrySensorSpecification_Grouping::TelemetrySensorGroup> > telemetry_sensor_group;

};

class TelemetrySystem {
    public:
        TelemetrySystem();

    class SensorGroups {
        public:
            SensorGroups();

        class SensorGroup {
            public:
                SensorGroup();

            class Config: public TelemetrySensorGroupConfig_Grouping {
                public:

            };

            class State: public TelemetrySensorGroupConfig_Grouping {
                public:

            };

            class SensorPaths {
                public:
                    SensorPaths();

                class SensorPath {
                    public:
                        SensorPath();

                    class Config: public TelemetrySensorPathConfig_Grouping {
                        public:

                    };

                    class State: public TelemetrySensorPathConfig_Grouping {
                        public:

                    };

                    public:
                        std::string path;
                        std::unique_ptr<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config> config;
                        std::unique_ptr<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State> state;

                };

                public:
                    std::vector< std::unique_ptr<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath> > sensor_path;

            };

            public:
                std::string sensor_group_id;
                std::unique_ptr<TelemetrySystem::SensorGroups::SensorGroup::Config> config;
                std::unique_ptr<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths> sensor_paths;
                std::unique_ptr<TelemetrySystem::SensorGroups::SensorGroup::State> state;

        };

        public:
            std::vector< std::unique_ptr<TelemetrySystem::SensorGroups::SensorGroup> > sensor_group;

    };

    class DestinationGroups {
        public:
            DestinationGroups();

        class DestinationGroup {
            public:
                DestinationGroup();

            class Config {
                public:
                    std::string group_id;

            };

            class State {
                public:
                    std::string group_id;

            };

            class Destinations {
                public:
                    Destinations();

                class Destination {
                    public:
                        Destination();

                    class Config: public TelemetryStreamDestinationConfig_Grouping {
                        public:

                    };

                    class State: public TelemetryStreamDestinationConfig_Grouping {
                        public:

                    };

                    public:
                        std::string destination_address;
                        int destination_port;
                        std::unique_ptr<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config> config;
                        std::unique_ptr<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State> state;

                };

                public:
                    std::vector< std::unique_ptr<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination> > destination;

            };

            public:
                std::string group_id;
                std::unique_ptr<TelemetrySystem::DestinationGroups::DestinationGroup::Config> config;
                std::unique_ptr<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations> destinations;
                std::unique_ptr<TelemetrySystem::DestinationGroups::DestinationGroup::State> state;

        };

        public:
            std::vector< std::unique_ptr<TelemetrySystem::DestinationGroups::DestinationGroup> > destination_group;

    };

    class Subscriptions {
        public:
            Subscriptions();

        class Persistent {
            public:
                Persistent();

            class Subscription {
                public:
                    Subscription();

                class Config: public TelemetrySubscriptionConfig_Grouping, TelemetryLocalSourceAddressConfig_Grouping, TelemetryQosMarkingConfig_Grouping {
                    public:

                };

                class State: public TelemetrySubscriptionConfig_Grouping, TelemetrySubscriptionState_Grouping, TelemetryLocalSourceAddressConfig_Grouping, TelemetryQosMarkingConfig_Grouping {
                    public:

                };

                class SensorProfiles {
                    public:
                        SensorProfiles();

                    class SensorProfile {
                        public:
                            SensorProfile();

                        class Config: public TelemetrySensorProfileConfig_Grouping {
                            public:

                        };

                        class State: public TelemetrySensorProfileConfig_Grouping {
                            public:

                        };

                        public:
                            std::string sensor_group;
                            std::unique_ptr<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config> config;
                            std::unique_ptr<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State> state;

                    };

                    public:
                        std::vector< std::unique_ptr<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile> > sensor_profile;

                };

                class DestinationGroups {
                    public:
                        DestinationGroups();

                    class DestinationGroup {
                        public:
                            DestinationGroup();

                        class Config {
                            public:
                                std::string group_id;

                        };

                        class State {
                            public:
                                std::string group_id;

                        };

                        public:
                            std::string group_id;
                            std::unique_ptr<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config> config;
                            std::unique_ptr<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State> state;

                    };

                    public:
                        std::vector< std::unique_ptr<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup> > destination_group;

                };

                public:
                    int subscription_id;
                    std::unique_ptr<TelemetrySystem::Subscriptions::Persistent::Subscription::Config> config;
                    std::unique_ptr<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups> destination_groups;
                    std::unique_ptr<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles> sensor_profiles;
                    std::unique_ptr<TelemetrySystem::Subscriptions::Persistent::Subscription::State> state;

            };

            public:
                std::vector< std::unique_ptr<TelemetrySystem::Subscriptions::Persistent::Subscription> > subscription;

        };

        class Dynamic {
            public:
                Dynamic();

            class Subscription {
                public:
                    Subscription();

                class State: public TelemetrySubscriptionConfig_Grouping, TelemetryStreamDestinationConfig_Grouping, TelemetryStreamFrequencyConfig_Grouping, TelemetryHeartbeatConfig_Grouping, TelemetrySuppressRedundantConfig_Grouping, TelemetryQosMarkingConfig_Grouping {
                    public:

                };

                class SensorPaths {
                    public:
                        SensorPaths();

                    class SensorPath {
                        public:
                            SensorPath();

                        class State: public TelemetrySensorPathConfig_Grouping {
                            public:

                        };

                        public:
                            std::string path;
                            std::unique_ptr<TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State> state;

                    };

                    public:
                        std::vector< std::unique_ptr<TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath> > sensor_path;

                };

                public:
                    int subscription_id;
                    std::unique_ptr<TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths> sensor_paths;
                    std::unique_ptr<TelemetrySystem::Subscriptions::Dynamic::Subscription::State> state;

            };

            public:
                std::vector< std::unique_ptr<TelemetrySystem::Subscriptions::Dynamic::Subscription> > subscription;

        };

        public:
            std::unique_ptr<TelemetrySystem::Subscriptions::Dynamic> dynamic;
            std::unique_ptr<TelemetrySystem::Subscriptions::Persistent> persistent;

    };

    public:
        std::unique_ptr<TelemetrySystem::DestinationGroups> destination_groups;
        std::unique_ptr<TelemetrySystem::SensorGroups> sensor_groups;
        std::unique_ptr<TelemetrySystem::Subscriptions> subscriptions;

};


};
};
