#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_telemetry {

class TelemetrySystem {
    public:
        TelemetrySystem();

    class SensorGroups {
        public:
            SensorGroups();

        class SensorGroup {
            public:
                SensorGroup();

            class Config {
                public:
                    Config();

                public:
                    std::string sensor_group_id;

            };

            class State {
                public:
                    State();

                public:
                    std::string sensor_group_id;

            };

            class SensorPaths {
                public:
                    SensorPaths();

                class SensorPath {
                    public:
                        SensorPath();

                    class Config {
                        public:
                            Config();

                        public:
                            std::string exclude_filter;
                            std::string path;

                    };

                    class State {
                        public:
                            State();

                        public:
                            std::string exclude_filter;
                            std::string path;

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
                    Config();

                public:
                    std::string group_id;

            };

            class State {
                public:
                    State();

                public:
                    std::string group_id;

            };

            class Destinations {
                public:
                    Destinations();

                class Destination {
                    public:
                        Destination();

                    class Config {
                        public:
                            Config();

                        public:
                            std::string destination_address;
                            int destination_port;
                            std::string destination_protocol;

                    };

                    class State {
                        public:
                            State();

                        public:
                            std::string destination_address;
                            int destination_port;
                            std::string destination_protocol;

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

                class Config {
                    public:
                        Config();

                    public:
                        std::string local_source_address;
                        std::string originated_qos_marking;
                        int subscription_id;

                };

                class State {
                    public:
                        State();

                    public:
                        std::string local_source_address;
                        std::string originated_qos_marking;
                        int subscription_id;

                };

                class SensorProfiles {
                    public:
                        SensorProfiles();

                    class SensorProfile {
                        public:
                            SensorProfile();

                        class Config {
                            public:
                                Config();

                            public:
                                int heartbeat_interval;
                                int sample_interval;
                                std::string sensor_group;
                                bool suppress_redundant;

                        };

                        class State {
                            public:
                                State();

                            public:
                                int heartbeat_interval;
                                int sample_interval;
                                std::string sensor_group;
                                bool suppress_redundant;

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
                                Config();

                            public:
                                std::string group_id;

                        };

                        class State {
                            public:
                                State();

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

                class State {
                    public:
                        State();

                    public:
                        std::string destination_address;
                        int destination_port;
                        std::string destination_protocol;
                        int heartbeat_interval;
                        std::string originated_qos_marking;
                        int sample_interval;
                        int subscription_id;
                        bool suppress_redundant;

                };

                class SensorPaths {
                    public:
                        SensorPaths();

                    class SensorPath {
                        public:
                            SensorPath();

                        class State {
                            public:
                                State();

                            public:
                                std::string exclude_filter;
                                std::string path;

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
