#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_inventory {

class Components {
    public:
        Components();

    class Component {
        public:
            Component();

        class Config {
            public:
                Config();

            public:
                std::string name;

        };

        class State {
            public:
                State();

            public:
                std::string description;
                std::string id;
                std::string name;
                std::string part_no;
                std::string serial_no;
                std::string type;

        };

        class Properties {
            public:
                Properties();

            class Property {
                public:
                    Property();

                class Config {
                    public:
                        Config();

                    public:
                        std::string name;
                        std::string value;

                };

                class State {
                    public:
                        State();

                    public:
                        bool configurable;
                        std::string name;
                        std::string value;

                };

                public:
                    std::string name;
                    std::unique_ptr<Components::Component::Properties::Property::Config> config;
                    std::unique_ptr<Components::Component::Properties::Property::State> state;

            };

            public:
                std::vector< std::unique_ptr<Components::Component::Properties::Property> > property;

        };

        class Subcomponents {
            public:
                Subcomponents();

            class Subcomponent {
                public:
                    Subcomponent();

                class Config {
                    public:
                        Config();

                    public:
                        std::string name;

                };

                class State {
                    public:
                        State();

                    public:
                        std::string name;
                        std::string reference;

                };

                public:
                    std::string name;
                    std::unique_ptr<Components::Component::Subcomponents::Subcomponent::Config> config;
                    std::unique_ptr<Components::Component::Subcomponents::Subcomponent::State> state;

            };

            public:
                std::vector< std::unique_ptr<Components::Component::Subcomponents::Subcomponent> > subcomponent;

        };

        public:
            std::string name;
            std::unique_ptr<Components::Component::Config> config;
            std::unique_ptr<Components::Component::Properties> properties;
            std::unique_ptr<Components::Component::State> state;
            std::unique_ptr<Components::Component::Subcomponents> subcomponents;

    };

    public:
        std::vector< std::unique_ptr<Components::Component> > component;

};


};
};
