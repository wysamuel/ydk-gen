#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_vlan {

class VlanTop_Grouping {
    public:
        VlanTop_Grouping();

    class Vlans {
        public:
            Vlans();

        class Vlan {
            public:
                Vlan();

            class Config: public VlanConfig_Grouping {
                public:

            };

            class State: public VlanConfig_Grouping, VlanState_Grouping {
                public:

            };

            public:
                std::unique_ptr<VlanTop_Grouping::Vlans::Vlan::Config> config;
                std::unique_ptr<VlanTop_Grouping::Vlans::Vlan::State> state;
                std::string vlan_id;

        };

        public:
            std::vector< std::unique_ptr<VlanTop_Grouping::Vlans::Vlan> > vlan;

    };

    public:
        std::unique_ptr<VlanTop_Grouping::Vlans> vlans;

};

class VlanEthernetState_Grouping {
    public:

};

class VlanLogicalTop_Grouping {
    public:
        VlanLogicalTop_Grouping();

    class Vlan {
        public:
            Vlan();

        class Config: public VlanLogicalConfig_Grouping {
            public:

        };

        class State: public VlanLogicalConfig_Grouping, VlanLogicalState_Grouping {
            public:

        };

        public:
            std::unique_ptr<VlanLogicalTop_Grouping::Vlan::Config> config;
            std::unique_ptr<VlanLogicalTop_Grouping::Vlan::State> state;

    };

    public:
        std::unique_ptr<VlanLogicalTop_Grouping::Vlan> vlan;

};

class VlanEthernetConfig_Grouping {
    public:
        std::string access_vlan;
        std::string interface_mode;
        std::string native_vlan;
        std::vector<std::string> trunk_vlans;

};

class VlanRoutedState_Grouping {
    public:

};

class VlanEthernetTop_Grouping {
    public:
        VlanEthernetTop_Grouping();

    class Vlan {
        public:
            Vlan();

        class Config: public VlanEthernetConfig_Grouping {
            public:

        };

        class State: public VlanEthernetConfig_Grouping, VlanEthernetState_Grouping {
            public:

        };

        public:
            std::unique_ptr<VlanEthernetTop_Grouping::Vlan::Config> config;
            std::unique_ptr<VlanEthernetTop_Grouping::Vlan::State> state;

    };

    public:
        std::unique_ptr<VlanEthernetTop_Grouping::Vlan> vlan;

};

class VlanLogicalState_Grouping {
    public:

};

class VlanConfig_Grouping {
    public:
        std::string name;
        std::string status;
        std::string vlan_id;

};

class VlanRoutedConfig_Grouping {
    public:
        std::string vlan;

};

class VlanLogicalConfig_Grouping {
    public:

};

class VlanRoutedTop_Grouping {
    public:
        VlanRoutedTop_Grouping();

    class RoutedVlan {
        public:
            RoutedVlan();

        class Config: public VlanRoutedConfig_Grouping {
            public:

        };

        class State: public VlanRoutedConfig_Grouping, VlanRoutedState_Grouping {
            public:

        };

        public:
            std::unique_ptr<VlanRoutedTop_Grouping::RoutedVlan::Config> config;
            std::unique_ptr<VlanRoutedTop_Grouping::RoutedVlan::State> state;

    };

    public:
        std::unique_ptr<VlanRoutedTop_Grouping::RoutedVlan> routed_vlan;

};

class VlanState_Grouping {
    public:
        std::vector<std::string> member_ports;

};

class Vlans {
    public:
        Vlans();

    class Vlan {
        public:
            Vlan();

        class Config: public VlanConfig_Grouping {
            public:

        };

        class State: public VlanConfig_Grouping, VlanState_Grouping {
            public:

        };

        public:
            std::string vlan_id;
            std::unique_ptr<Vlans::Vlan::Config> config;
            std::unique_ptr<Vlans::Vlan::State> state;

    };

    public:
        std::vector< std::unique_ptr<Vlans::Vlan> > vlan;

};


};
};
