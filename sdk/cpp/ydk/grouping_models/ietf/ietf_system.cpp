#include <memory>
#include <vector>
#include <string>
#include "ydk/models/ietf_system/ietf_system.h"

namespace ydk {
namespace ietf_system {
RadiusAuthenticationType_Identity::RadiusAuthenticationType_Identity() {


}

RadiusChap_Identity::RadiusChap_Identity() {

}

AuthenticationMethod_Identity::AuthenticationMethod_Identity() {


}

Radius_Identity::Radius_Identity() {

}

RadiusPap_Identity::RadiusPap_Identity() {

}

LocalUsers_Identity::LocalUsers_Identity() {

}

System::Clock::Clock() {

}

System::Ntp::Server::Server() {

}

System::Ntp::Ntp() {

}

System::DnsResolver::Server::Server() {

}

System::DnsResolver::Options::Options() {

}

System::DnsResolver::DnsResolver() {
    options = std::make_unique<System::DnsResolver::Options>();

}

System::Radius::Server::Server() {

}

System::Radius::Options::Options() {

}

System::Radius::Radius() {
    options = std::make_unique<System::Radius::Options>();

}

System::Authentication::User::AuthorizedKey::AuthorizedKey() {

}

System::Authentication::User::User() {

}

System::Authentication::Authentication() {

}

System::System() {
    authentication = std::make_unique<System::Authentication>();
    clock = std::make_unique<System::Clock>();
    dns_resolver = std::make_unique<System::DnsResolver>();
    ntp = std::make_unique<System::Ntp>();
    radius = std::make_unique<System::Radius>();

}

SystemState::Platform::Platform() {

}

SystemState::Clock::Clock() {

}

SystemState::SystemState() {
    clock = std::make_unique<SystemState::Clock>();
    platform = std::make_unique<SystemState::Platform>();

}


};
};
