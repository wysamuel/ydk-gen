#include <memory>
#include <vector>
#include <string>
#include "ydk/models/openconfig_telemetry/openconfig_telemetry.h"

namespace ydk {
namespace openconfig_telemetry {
TelemetrySystem::SensorGroups::SensorGroup::Config::Config() {

}

TelemetrySystem::SensorGroups::SensorGroup::State::State() {

}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::Config() {

}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::State() {

}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::SensorPath() {
    config = std::make_unique<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config>();
    state = std::make_unique<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State>();

}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPaths() {

}

TelemetrySystem::SensorGroups::SensorGroup::SensorGroup() {
    config = std::make_unique<TelemetrySystem::SensorGroups::SensorGroup::Config>();
    sensor_paths = std::make_unique<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths>();
    state = std::make_unique<TelemetrySystem::SensorGroups::SensorGroup::State>();

}

TelemetrySystem::SensorGroups::SensorGroups() {

}

TelemetrySystem::DestinationGroups::DestinationGroup::Config::Config() {

}

TelemetrySystem::DestinationGroups::DestinationGroup::State::State() {

}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::Config() {

}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::State() {

}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Destination() {
    config = std::make_unique<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config>();
    state = std::make_unique<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State>();

}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destinations() {

}

TelemetrySystem::DestinationGroups::DestinationGroup::DestinationGroup() {
    config = std::make_unique<TelemetrySystem::DestinationGroups::DestinationGroup::Config>();
    destinations = std::make_unique<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations>();
    state = std::make_unique<TelemetrySystem::DestinationGroups::DestinationGroup::State>();

}

TelemetrySystem::DestinationGroups::DestinationGroups() {

}

TelemetrySystem::Subscriptions::Persistent::Subscription::Config::Config() {

}

TelemetrySystem::Subscriptions::Persistent::Subscription::State::State() {

}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::Config() {

}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::State() {

}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::SensorProfile() {
    config = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config>();
    state = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State>();

}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfiles() {

}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::Config() {

}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::State() {

}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::DestinationGroup() {
    config = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config>();
    state = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State>();

}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroups() {

}

TelemetrySystem::Subscriptions::Persistent::Subscription::Subscription() {
    config = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::Config>();
    destination_groups = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups>();
    sensor_profiles = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles>();
    state = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::State>();

}

TelemetrySystem::Subscriptions::Persistent::Persistent() {

}

TelemetrySystem::Subscriptions::Dynamic::Subscription::State::State() {

}

TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::State() {

}

TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::SensorPath() {
    state = std::make_unique<TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State>();

}

TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPaths() {

}

TelemetrySystem::Subscriptions::Dynamic::Subscription::Subscription() {
    sensor_paths = std::make_unique<TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths>();
    state = std::make_unique<TelemetrySystem::Subscriptions::Dynamic::Subscription::State>();

}

TelemetrySystem::Subscriptions::Dynamic::Dynamic() {

}

TelemetrySystem::Subscriptions::Subscriptions() {
    dynamic = std::make_unique<TelemetrySystem::Subscriptions::Dynamic>();
    persistent = std::make_unique<TelemetrySystem::Subscriptions::Persistent>();

}

TelemetrySystem::TelemetrySystem() {
    destination_groups = std::make_unique<TelemetrySystem::DestinationGroups>();
    sensor_groups = std::make_unique<TelemetrySystem::SensorGroups>();
    subscriptions = std::make_unique<TelemetrySystem::Subscriptions>();

}


};
};
