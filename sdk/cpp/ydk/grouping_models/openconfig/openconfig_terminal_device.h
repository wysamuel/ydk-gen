#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_terminal_device {

class TerminalInputOpticalPower_Grouping {
    public:
        int input_power;

};

class TerminalLinePhysicalPortTop_Grouping {
    public:
        TerminalLinePhysicalPortTop_Grouping();

    class LinePorts {
        public:
            LinePorts();

        class Port {
            public:
                Port();

            class Config: public TerminalLinePhysicalPortConfig_Grouping {
                public:

            };

            class State: public TerminalLinePhysicalPortConfig_Grouping, TerminalLinePhysicalPortState_Grouping {
                public:

            };

            public:
                std::unique_ptr<TerminalLinePhysicalPortTop_Grouping::LinePorts::Port::Config> config;
                std::string name;
                std::unique_ptr<TerminalLinePhysicalPortTop_Grouping::LinePorts::Port::State> state;

        };

        public:
            std::vector< std::unique_ptr<TerminalLinePhysicalPortTop_Grouping::LinePorts::Port> > port;

    };

    public:
        std::unique_ptr<TerminalLinePhysicalPortTop_Grouping::LinePorts> line_ports;

};

class TerminalOpticalChannelState_Grouping {
    public:

};

class TerminalLogicalChanAssignmentTop_Grouping {
    public:
        TerminalLogicalChanAssignmentTop_Grouping();

    class LogicalChannelAssignments {
        public:
            LogicalChannelAssignments();

        class Assignment {
            public:
                Assignment();

            class Config: public TerminalLogicalChanAssignmentConfig_Grouping {
                public:

            };

            class State: public TerminalLogicalChanAssignmentConfig_Grouping, TerminalLogicalChanAssignmentState_Grouping {
                public:

            };

            public:
                std::unique_ptr<TerminalLogicalChanAssignmentTop_Grouping::LogicalChannelAssignments::Assignment::Config> config;
                int index;
                std::unique_ptr<TerminalLogicalChanAssignmentTop_Grouping::LogicalChannelAssignments::Assignment::State> state;

        };

        public:
            std::vector< std::unique_ptr<TerminalLogicalChanAssignmentTop_Grouping::LogicalChannelAssignments::Assignment> > assignment;

    };

    public:
        std::unique_ptr<TerminalLogicalChanAssignmentTop_Grouping::LogicalChannelAssignments> logical_channel_assignments;

};

class TerminalClientPhysicalChannelState_Grouping: public TerminalOutputOpticalPower_Grouping, TerminalOutputOpticalFrequency_Grouping {
    public:

};

class TerminalClientPortAssignmentState_Grouping {
    public:

};

class TerminalOperationalModeTop_Grouping {
    public:
        TerminalOperationalModeTop_Grouping();

    class OperationalModes {
        public:
            OperationalModes();

        class Config: public TerminalOperationalModeConfig_Grouping {
            public:

        };

        class State: public TerminalOperationalModeConfig_Grouping, TerminalOperationalModeState_Grouping {
            public:

        };

        public:
            std::unique_ptr<TerminalOperationalModeTop_Grouping::OperationalModes::Config> config;
            std::unique_ptr<TerminalOperationalModeTop_Grouping::OperationalModes::State> state;

    };

    public:
        std::unique_ptr<TerminalOperationalModeTop_Grouping::OperationalModes> operational_modes;

};

class TerminalLogicalChanAssignmentState_Grouping {
    public:

};

class TerminalOtnProtocolStats_Grouping {
    public:
        TerminalOtnProtocolStats_Grouping();

    class Otn {
        public:
            Otn();

        class PreFecBer: public AvgMinMaxStatsPrecision1_Grouping {
            public:

        };

        class PostFecBer: public AvgMinMaxStatsPrecision1_Grouping {
            public:

        };

        public:
            std::unique_ptr<TerminalOtnProtocolStats_Grouping::Otn::PostFecBer> post_fec_ber;
            std::unique_ptr<TerminalOtnProtocolStats_Grouping::Otn::PreFecBer> pre_fec_ber;
            std::string rdi_msg;
            std::string tti_msg;

    };

    public:
        std::unique_ptr<TerminalOtnProtocolStats_Grouping::Otn> otn;

};

class TerminalLogicalChannelConfig_Grouping {
    public:
        std::string description;
        int index;
        std::string protocol_type;
        std::string trib_protocol;
        std::string trib_rate_class;

};

class TerminalClientPortTop_Grouping {
    public:
        TerminalClientPortTop_Grouping();

    class ClientPorts {
        public:
            ClientPorts();

        class Port: public TerminalClientPortTransceiverTop_Grouping, TerminalClientPhysicalChannelTop_Grouping, TerminalClientPortAssignmentTop_Grouping {
            public:
                Port();

            class Config: public TerminalClientPortConfig_Grouping {
                public:

            };

            class State: public TerminalClientPortConfig_Grouping, TerminalClientPortState_Grouping {
                public:

            };

            public:
                std::unique_ptr<TerminalClientPortTop_Grouping::ClientPorts::Port::Config> config;
                std::string name;
                std::unique_ptr<TerminalClientPortTop_Grouping::ClientPorts::Port::State> state;

        };

        public:
            std::vector< std::unique_ptr<TerminalClientPortTop_Grouping::ClientPorts::Port> > port;

    };

    public:
        std::unique_ptr<TerminalClientPortTop_Grouping::ClientPorts> client_ports;

};

class TerminalOpticalChannelTop_Grouping {
    public:
        TerminalOpticalChannelTop_Grouping();

    class OpticalChannels {
        public:
            OpticalChannels();

        class OpticalChannel {
            public:
                OpticalChannel();

            class Config: public TerminalOpticalChannelConfig_Grouping {
                public:

            };

            class State: public TerminalOpticalChannelConfig_Grouping, TerminalOpticalChannelState_Grouping {
                public:

            };

            public:
                std::unique_ptr<TerminalOpticalChannelTop_Grouping::OpticalChannels::OpticalChannel::Config> config;
                int index;
                std::unique_ptr<TerminalOpticalChannelTop_Grouping::OpticalChannels::OpticalChannel::State> state;

        };

        public:
            std::vector< std::unique_ptr<TerminalOpticalChannelTop_Grouping::OpticalChannels::OpticalChannel> > optical_channel;

    };

    public:
        std::unique_ptr<TerminalOpticalChannelTop_Grouping::OpticalChannels> optical_channels;

};

class TerminalOutputOpticalFrequency_Grouping {
    public:
        int output_frequency;

};

class TerminalClientPortAssignmentTop_Grouping {
    public:
        TerminalClientPortAssignmentTop_Grouping();

    class LogicalChannelAssignments {
        public:
            LogicalChannelAssignments();

        class Assignment {
            public:
                Assignment();

            class Config: public TerminalClientPortAssignmentConfig_Grouping {
                public:

            };

            class State: public TerminalClientPortAssignmentConfig_Grouping, TerminalClientPortAssignmentState_Grouping {
                public:

            };

            public:
                std::unique_ptr<TerminalClientPortAssignmentTop_Grouping::LogicalChannelAssignments::Assignment::Config> config;
                int index;
                std::unique_ptr<TerminalClientPortAssignmentTop_Grouping::LogicalChannelAssignments::Assignment::State> state;

        };

        public:
            std::vector< std::unique_ptr<TerminalClientPortAssignmentTop_Grouping::LogicalChannelAssignments::Assignment> > assignment;

    };

    public:
        std::unique_ptr<TerminalClientPortAssignmentTop_Grouping::LogicalChannelAssignments> logical_channel_assignments;

};

class TerminalOutputOpticalPower_Grouping {
    public:
        int output_power;

};

class TerminalDeviceState_Grouping {
    public:

};

class TerminalClientPortAssignmentConfig_Grouping {
    public:
        int64 allocation;
        std::string description;
        int index;
        int logical_channel;

};

class TerminalLogicalChanAssignmentConfig_Grouping {
    public:
        int64 allocation;
        std::string description;
        int index;

};

class TerminalDeviceConfig_Grouping {
    public:

};

class TerminalEthernetProtocolStats_Grouping {
    public:
        TerminalEthernetProtocolStats_Grouping();

    class Ethernet: public EthernetInterfaceStateCounters_Grouping {
        public:

    };

    public:
        std::unique_ptr<TerminalEthernetProtocolStats_Grouping::Ethernet> ethernet;

};

class TerminalClientPortState_Grouping: public TerminalOutputOpticalPower_Grouping, TerminalInputOpticalPower_Grouping {
    public:
        std::string ethernet_compliance_code;
        std::string otn_compliance_code;
        std::string sonet_sdh_compliance_code;

};

class TerminalClientPortTransceiverTop_Grouping {
    public:
        TerminalClientPortTransceiverTop_Grouping();

    class Transceiver {
        public:
            Transceiver();

        class Config: public TerminalClientPortTransceiverConfig_Grouping {
            public:

        };

        class State: public TerminalClientPortTransceiverConfig_Grouping, TerminalClientPortTransceiverState_Grouping {
            public:

        };

        public:
            std::unique_ptr<TerminalClientPortTransceiverTop_Grouping::Transceiver::Config> config;
            std::unique_ptr<TerminalClientPortTransceiverTop_Grouping::Transceiver::State> state;

    };

    public:
        std::unique_ptr<TerminalClientPortTransceiverTop_Grouping::Transceiver> transceiver;

};

class TerminalLogicalChannelState_Grouping: public TerminalEthernetProtocolStats_Grouping, TerminalOtnProtocolStats_Grouping {
    public:
        std::string link_state;

};

class TerminalOperationalModeConfig_Grouping {
    public:

};

class TerminalClientPortConfig_Grouping {
    public:
        std::string description;
        std::string name;

};

class TerminalLogicalChannelTop_Grouping {
    public:
        TerminalLogicalChannelTop_Grouping();

    class LogicalChannels {
        public:
            LogicalChannels();

        class Channel: public TerminalLogicalChanAssignmentTop_Grouping {
            public:
                Channel();

            class Config: public TerminalLogicalChannelConfig_Grouping {
                public:

            };

            class State: public TerminalLogicalChannelConfig_Grouping, TerminalLogicalChannelState_Grouping {
                public:

            };

            public:
                std::unique_ptr<TerminalLogicalChannelTop_Grouping::LogicalChannels::Channel::Config> config;
                int index;
                std::unique_ptr<TerminalLogicalChannelTop_Grouping::LogicalChannels::Channel::State> state;

        };

        public:
            std::vector< std::unique_ptr<TerminalLogicalChannelTop_Grouping::LogicalChannels::Channel> > channel;

    };

    public:
        std::unique_ptr<TerminalLogicalChannelTop_Grouping::LogicalChannels> logical_channels;

};

class TerminalDeviceTop_Grouping {
    public:
        TerminalDeviceTop_Grouping();

    class TerminalDevice: public TerminalClientPortTop_Grouping, TerminalLogicalChannelTop_Grouping, TerminalOpticalChannelTop_Grouping, TerminalLinePhysicalPortTop_Grouping, TerminalOperationalModeTop_Grouping {
        public:
            TerminalDevice();

        class Config: public TerminalDeviceConfig_Grouping {
            public:

        };

        class State: public TerminalDeviceConfig_Grouping, TerminalDeviceState_Grouping {
            public:

        };

        public:
            std::unique_ptr<TerminalDeviceTop_Grouping::TerminalDevice::Config> config;
            std::unique_ptr<TerminalDeviceTop_Grouping::TerminalDevice::State> state;

    };

    public:
        std::unique_ptr<TerminalDeviceTop_Grouping::TerminalDevice> terminal_device;

};

class TerminalClientPortTransceiverState_Grouping {
    public:
        std::string connector_type;
        std::string date_code;
        bool fault_condition;
        std::string form_factor;
        std::string internal_temp;
        std::string present;
        std::string serial_no;
        std::string vendor;
        std::string vendor_part;
        std::string vendor_rev;

};

class TerminalLinePhysicalPortState_Grouping {
    public:

};

class TerminalOperationalModeState_Grouping {
    public:
        TerminalOperationalModeState_Grouping();

    class SupportedModes {
        public:
            std::string description;
            int mode_id;
            std::string vendor_id;

    };

    public:
        std::vector< std::unique_ptr<TerminalOperationalModeState_Grouping::SupportedModes> > supported_modes;

};

class TerminalClientPhysicalChannelTop_Grouping {
    public:
        TerminalClientPhysicalChannelTop_Grouping();

    class PhysicalChannels {
        public:
            PhysicalChannels();

        class Channel {
            public:
                Channel();

            class Config: public TerminalClientPhysicalChannelConfig_Grouping {
                public:

            };

            class State: public TerminalClientPhysicalChannelConfig_Grouping, TerminalClientPhysicalChannelState_Grouping {
                public:

            };

            public:
                std::unique_ptr<TerminalClientPhysicalChannelTop_Grouping::PhysicalChannels::Channel::Config> config;
                std::string index;
                std::unique_ptr<TerminalClientPhysicalChannelTop_Grouping::PhysicalChannels::Channel::State> state;

        };

        public:
            std::vector< std::unique_ptr<TerminalClientPhysicalChannelTop_Grouping::PhysicalChannels::Channel> > channel;

    };

    public:
        std::unique_ptr<TerminalClientPhysicalChannelTop_Grouping::PhysicalChannels> physical_channels;

};

class TerminalClientPortTransceiverConfig_Grouping {
    public:
        bool enabled;

};

class TerminalClientPhysicalChannelConfig_Grouping {
    public:
        std::string description;
        std::string index;
        bool tx_laser;

};

class TerminalLinePhysicalPortConfig_Grouping: public TerminalOutputOpticalPower_Grouping {
    public:
        std::string name;

};

class TerminalOpticalChannelConfig_Grouping {
    public:
        int frequency;
        int index;
        std::string line_port;
        int operational_mode;
        int power;

};

class TerminalDevice: public TerminalClientPortTop_Grouping, TerminalLogicalChannelTop_Grouping, TerminalOpticalChannelTop_Grouping, TerminalLinePhysicalPortTop_Grouping, TerminalOperationalModeTop_Grouping {
    public:
        TerminalDevice();

    class Config: public TerminalDeviceConfig_Grouping {
        public:

    };

    class State: public TerminalDeviceConfig_Grouping, TerminalDeviceState_Grouping {
        public:

    };

    public:
        std::unique_ptr<TerminalDevice::Config> config;
        std::unique_ptr<TerminalDevice::State> state;

};


};
};
