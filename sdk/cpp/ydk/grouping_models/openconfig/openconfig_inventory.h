#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_inventory {

class InventorySubcomponentRefTop_Grouping {
    public:
        InventorySubcomponentRefTop_Grouping();

    class Subcomponents {
        public:
            Subcomponents();

        class Subcomponent {
            public:
                Subcomponent();

            class Config: public InventorySubcomponentRefConfig_Grouping {
                public:

            };

            class State: public InventorySubcomponentRefConfig_Grouping, InventorySubcomponentRefState_Grouping {
                public:

            };

            public:
                std::unique_ptr<InventorySubcomponentRefTop_Grouping::Subcomponents::Subcomponent::Config> config;
                std::string name;
                std::unique_ptr<InventorySubcomponentRefTop_Grouping::Subcomponents::Subcomponent::State> state;

        };

        public:
            std::vector< std::unique_ptr<InventorySubcomponentRefTop_Grouping::Subcomponents::Subcomponent> > subcomponent;

    };

    public:
        std::unique_ptr<InventorySubcomponentRefTop_Grouping::Subcomponents> subcomponents;

};

class InventoryComponentTop_Grouping {
    public:
        InventoryComponentTop_Grouping();

    class Components {
        public:
            Components();

        class Component: public InventoryComponentPropertiesTop_Grouping, InventorySubcomponentRefTop_Grouping {
            public:
                Component();

            class Config: public InventoryComponentConfig_Grouping {
                public:

            };

            class State: public InventoryComponentConfig_Grouping, InventoryComponentState_Grouping {
                public:

            };

            public:
                std::unique_ptr<InventoryComponentTop_Grouping::Components::Component::Config> config;
                std::string name;
                std::unique_ptr<InventoryComponentTop_Grouping::Components::Component::State> state;

        };

        public:
            std::vector< std::unique_ptr<InventoryComponentTop_Grouping::Components::Component> > component;

    };

    public:
        std::unique_ptr<InventoryComponentTop_Grouping::Components> components;

};

class InventoryComponentPropertiesConfig_Grouping {
    public:
        std::string name;
        std::string value;

};

class InventoryComponentConfig_Grouping {
    public:
        std::string name;

};

class InventoryComponentState_Grouping {
    public:
        std::string description;
        std::string id;
        std::string part_no;
        std::string serial_no;
        std::string type;

};

class InventorySubcomponentRefConfig_Grouping {
    public:
        std::string name;

};

class InventoryComponentPropertiesTop_Grouping {
    public:
        InventoryComponentPropertiesTop_Grouping();

    class Properties {
        public:
            Properties();

        class Property {
            public:
                Property();

            class Config: public InventoryComponentPropertiesConfig_Grouping {
                public:

            };

            class State: public InventoryComponentPropertiesConfig_Grouping, InventoryComponentPropertiesState_Grouping {
                public:

            };

            public:
                std::unique_ptr<InventoryComponentPropertiesTop_Grouping::Properties::Property::Config> config;
                std::string name;
                std::unique_ptr<InventoryComponentPropertiesTop_Grouping::Properties::Property::State> state;

        };

        public:
            std::vector< std::unique_ptr<InventoryComponentPropertiesTop_Grouping::Properties::Property> > property;

    };

    public:
        std::unique_ptr<InventoryComponentPropertiesTop_Grouping::Properties> properties;

};

class InventoryComponentPropertiesState_Grouping {
    public:
        bool configurable;

};

class InventorySubcomponentRefState_Grouping {
    public:
        std::string reference;

};

class Components {
    public:
        Components();

    class Component: public InventoryComponentPropertiesTop_Grouping, InventorySubcomponentRefTop_Grouping {
        public:
            Component();

        class Config: public InventoryComponentConfig_Grouping {
            public:

        };

        class State: public InventoryComponentConfig_Grouping, InventoryComponentState_Grouping {
            public:

        };

        public:
            std::string name;
            std::unique_ptr<Components::Component::Config> config;
            std::unique_ptr<Components::Component::State> state;

    };

    public:
        std::vector< std::unique_ptr<Components::Component> > component;

};


};
};
