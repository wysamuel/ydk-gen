#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_if_ethernet {

class Speed_100Gb_Identity: public EthernetSpeed_Identity {
    public:

};

class Speed_25Gb_Identity: public EthernetSpeed_Identity {
    public:

};

class Speed_1Gb_Identity: public EthernetSpeed_Identity {
    public:

};

class Speed_10Gb_Identity: public EthernetSpeed_Identity {
    public:

};

class Speed_10Mb_Identity: public EthernetSpeed_Identity {
    public:

};

class EthernetSpeed_Identity {


};

class Speed_40Gb_Identity: public EthernetSpeed_Identity {
    public:

};

class Speed_Unknown_Identity: public EthernetSpeed_Identity {
    public:

};

class Speed_50Gb_Identity: public EthernetSpeed_Identity {
    public:

};

class Speed_100Mb_Identity: public EthernetSpeed_Identity {
    public:

};

class EthernetTop_Grouping {
    public:
        EthernetTop_Grouping();

    class Ethernet {
        public:
            Ethernet();

        class Config: public EthernetInterfaceConfig_Grouping {
            public:

        };

        class State: public EthernetInterfaceConfig_Grouping, EthernetInterfaceState_Grouping {
            public:

        };

        public:
            std::unique_ptr<EthernetTop_Grouping::Ethernet::Config> config;
            std::unique_ptr<EthernetTop_Grouping::Ethernet::State> state;

    };

    public:
        std::unique_ptr<EthernetTop_Grouping::Ethernet> ethernet;

};

class EthernetInterfaceStateCounters_Grouping {
    public:
        int in_8021q_frames;
        int in_crc_errors;
        int in_fragment_frames;
        int in_jabber_frames;
        int in_mac_control_frames;
        int in_mac_pause_frames;
        int in_oversize_frames;
        int out_8021q_frames;
        int out_mac_control_frames;
        int out_mac_pause_frames;

};

class EthernetInterfaceState_Grouping {
    public:
        EthernetInterfaceState_Grouping();

    class Counters: public EthernetInterfaceStateCounters_Grouping {
        public:

    };

    public:
        std::unique_ptr<EthernetInterfaceState_Grouping::Counters> counters;
        std::string hw_mac_address;

};

class EthernetInterfaceConfig_Grouping {
    public:
        bool auto_negotiate;
        std::string duplex_mode;
        bool enable_flow_control;
        std::string mac_address;
        std::string port_speed;

};


};
};
