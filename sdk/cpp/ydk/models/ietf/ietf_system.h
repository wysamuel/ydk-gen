#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace ietf_system {

class RadiusAuthenticationType_Identity {
    public:
        RadiusAuthenticationType_Identity();



};

class RadiusChap_Identity: public RadiusAuthenticationType_Identity {
    public:
        RadiusChap_Identity();

    public:

};

class AuthenticationMethod_Identity {
    public:
        AuthenticationMethod_Identity();



};

class Radius_Identity: public AuthenticationMethod_Identity {
    public:
        Radius_Identity();

    public:

};

class RadiusPap_Identity: public RadiusAuthenticationType_Identity {
    public:
        RadiusPap_Identity();

    public:

};

class LocalUsers_Identity: public AuthenticationMethod_Identity {
    public:
        LocalUsers_Identity();

    public:

};

class System {
    public:
        System();

    class Clock {
        public:
            Clock();

        public:
            std::string timezone_name;
            std::string timezone_utc_offset;

    };

    class Ntp {
        public:
            Ntp();

        class Server {
            public:
                Server();

            class Udp {
                public:
                    Udp();

                public:
                    std::string address;
                    std::string port;

            };

            public:
                std::string name;
                std::string association_type;
                bool iburst;
                bool prefer;
                std::unique_ptr<System::Ntp::Server::Udp> udp;

        };

        public:
            bool enabled;
            std::vector< std::unique_ptr<System::Ntp::Server> > server;

    };

    class DnsResolver {
        public:
            DnsResolver();

        class Server {
            public:
                Server();

            class UdpAndTcp {
                public:
                    UdpAndTcp();

                public:
                    std::string address;
                    std::string port;

            };

            public:
                std::string name;
                std::unique_ptr<System::DnsResolver::Server::UdpAndTcp> udp_and_tcp;

        };

        class Options {
            public:
                Options();

            public:
                std::string attempts;
                std::string timeout;

        };

        public:
            std::unique_ptr<System::DnsResolver::Options> options;
            std::vector<std::string> search;
            std::vector< std::unique_ptr<System::DnsResolver::Server> > server;

    };

    class Radius {
        public:
            Radius();

        class Server {
            public:
                Server();

            class Udp {
                public:
                    Udp();

                public:
                    std::string address;
                    std::string authentication_port;
                    std::string shared_secret;

            };

            public:
                std::string name;
                std::string authentication_type;
                std::unique_ptr<System::Radius::Server::Udp> udp;

        };

        class Options {
            public:
                Options();

            public:
                std::string attempts;
                std::string timeout;

        };

        public:
            std::unique_ptr<System::Radius::Options> options;
            std::vector< std::unique_ptr<System::Radius::Server> > server;

    };

    class Authentication {
        public:
            Authentication();

        class User {
            public:
                User();

            class AuthorizedKey {
                public:
                    AuthorizedKey();

                public:
                    std::string name;
                    std::string algorithm;
                    std::string key_data;

            };

            public:
                std::string name;
                std::vector< std::unique_ptr<System::Authentication::User::AuthorizedKey> > authorized_key;
                std::string password;

        };

        public:
            std::vector< std::unique_ptr<System::Authentication::User> > user;
            std::vector< std::unique_ptr<AuthenticationMethod_Identity> > user_authentication_order;

    };

    public:
        std::unique_ptr<System::Authentication> authentication;
        std::unique_ptr<System::Clock> clock;
        std::string contact;
        std::unique_ptr<System::DnsResolver> dns_resolver;
        std::string hostname;
        std::string location;
        std::unique_ptr<System::Ntp> ntp;
        std::unique_ptr<System::Radius> radius;

};

class SystemState {
    public:
        SystemState();

    class Platform {
        public:
            Platform();

        public:
            std::string machine;
            std::string os_name;
            std::string os_release;
            std::string os_version;

    };

    class Clock {
        public:
            Clock();

        public:
            std::string boot_datetime;
            std::string current_datetime;

    };

    public:
        std::unique_ptr<SystemState::Clock> clock;
        std::unique_ptr<SystemState::Platform> platform;

};

class SetCurrentDatetimeRpc {
    public:
        SetCurrentDatetimeRpc();

    class Input {
        public:
            Input();

        public:
            std::string current_datetime;

    };

    public:
        std::unique_ptr<SetCurrentDatetimeRpc::Input> input;

};

class SystemRestartRpc {
    public:
        SystemRestartRpc();

    public:

};

class SystemShutdownRpc {
    public:
        SystemShutdownRpc();

    public:

};


};
};
