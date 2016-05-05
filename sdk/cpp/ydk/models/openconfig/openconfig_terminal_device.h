#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_terminal_device {

class TerminalDevice {
    public:
        TerminalDevice();

    class Config {
        public:
            Config();

        public:

    };

    class State {
        public:
            State();

        public:

    };

    class ClientPorts {
        public:
            ClientPorts();

        class Port {
            public:
                Port();

            class Config {
                public:
                    Config();

                public:
                    std::string description;
                    std::string name;

            };

            class State {
                public:
                    State();

                public:
                    std::string description;
                    std::string ethernet_compliance_code;
                    int input_power;
                    std::string name;
                    std::string otn_compliance_code;
                    int output_power;
                    std::string sonet_sdh_compliance_code;

            };

            class Transceiver {
                public:
                    Transceiver();

                class Config {
                    public:
                        Config();

                    public:
                        bool enabled;

                };

                class State {
                    public:
                        State();

                    public:
                        std::string connector_type;
                        std::string date_code;
                        bool enabled;
                        bool fault_condition;
                        std::string form_factor;
                        std::string internal_temp;
                        std::string present;
                        std::string serial_no;
                        std::string vendor;
                        std::string vendor_part;
                        std::string vendor_rev;

                };

                public:
                    std::unique_ptr<TerminalDevice::ClientPorts::Port::Transceiver::Config> config;
                    std::unique_ptr<TerminalDevice::ClientPorts::Port::Transceiver::State> state;

            };

            class PhysicalChannels {
                public:
                    PhysicalChannels();

                class Channel {
                    public:
                        Channel();

                    class Config {
                        public:
                            Config();

                        public:
                            std::string description;
                            std::string index;
                            bool tx_laser;

                    };

                    class State {
                        public:
                            State();

                        public:
                            std::string description;
                            std::string index;
                            int output_frequency;
                            int output_power;
                            bool tx_laser;

                    };

                    public:
                        std::string index;
                        std::unique_ptr<TerminalDevice::ClientPorts::Port::PhysicalChannels::Channel::Config> config;
                        std::unique_ptr<TerminalDevice::ClientPorts::Port::PhysicalChannels::Channel::State> state;

                };

                public:
                    std::vector< std::unique_ptr<TerminalDevice::ClientPorts::Port::PhysicalChannels::Channel> > channel;

            };

            class LogicalChannelAssignments {
                public:
                    LogicalChannelAssignments();

                class Assignment {
                    public:
                        Assignment();

                    class Config {
                        public:
                            Config();

                        public:
                            int64 allocation;
                            std::string description;
                            int index;
                            int logical_channel;

                    };

                    class State {
                        public:
                            State();

                        public:
                            int64 allocation;
                            std::string description;
                            int index;
                            int logical_channel;

                    };

                    public:
                        int index;
                        std::unique_ptr<TerminalDevice::ClientPorts::Port::LogicalChannelAssignments::Assignment::Config> config;
                        std::unique_ptr<TerminalDevice::ClientPorts::Port::LogicalChannelAssignments::Assignment::State> state;

                };

                public:
                    std::vector< std::unique_ptr<TerminalDevice::ClientPorts::Port::LogicalChannelAssignments::Assignment> > assignment;

            };

            public:
                std::string name;
                std::unique_ptr<TerminalDevice::ClientPorts::Port::Config> config;
                std::unique_ptr<TerminalDevice::ClientPorts::Port::LogicalChannelAssignments> logical_channel_assignments;
                std::unique_ptr<TerminalDevice::ClientPorts::Port::PhysicalChannels> physical_channels;
                std::unique_ptr<TerminalDevice::ClientPorts::Port::State> state;
                std::unique_ptr<TerminalDevice::ClientPorts::Port::Transceiver> transceiver;

        };

        public:
            std::vector< std::unique_ptr<TerminalDevice::ClientPorts::Port> > port;

    };

    class LogicalChannels {
        public:
            LogicalChannels();

        class Channel {
            public:
                Channel();

            class Config {
                public:
                    Config();

                public:
                    std::string description;
                    int index;
                    std::string protocol_type;
                    std::string trib_protocol;
                    std::string trib_rate_class;

            };

            class State {
                public:
                    State();

                class Ethernet {
                    public:
                        Ethernet();

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

                class Otn {
                    public:
                        Otn();

                    class PreFecBer {
                        public:
                            PreFecBer();

                        public:
                            int64 avg;
                            int64 max;
                            int64 min;

                    };

                    class PostFecBer {
                        public:
                            PostFecBer();

                        public:
                            int64 avg;
                            int64 max;
                            int64 min;

                    };

                    public:
                        std::unique_ptr<TerminalDevice::LogicalChannels::Channel::State::Otn::PostFecBer> post_fec_ber;
                        std::unique_ptr<TerminalDevice::LogicalChannels::Channel::State::Otn::PreFecBer> pre_fec_ber;
                        std::string rdi_msg;
                        std::string tti_msg;

                };

                public:
                    std::string description;
                    std::unique_ptr<TerminalDevice::LogicalChannels::Channel::State::Ethernet> ethernet;
                    int index;
                    std::string link_state;
                    std::unique_ptr<TerminalDevice::LogicalChannels::Channel::State::Otn> otn;
                    std::string protocol_type;
                    std::string trib_protocol;
                    std::string trib_rate_class;

            };

            class LogicalChannelAssignments {
                public:
                    LogicalChannelAssignments();

                class Assignment {
                    public:
                        Assignment();

                    class Config {
                        public:
                            Config();

                        public:
                            int64 allocation;
                            std::string description;
                            int index;
                            int logical_channel;
                            int optical_channel;

                    };

                    class State {
                        public:
                            State();

                        public:
                            int64 allocation;
                            std::string description;
                            int index;
                            int logical_channel;
                            int optical_channel;

                    };

                    public:
                        int index;
                        std::unique_ptr<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::Config> config;
                        std::unique_ptr<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment::State> state;

                };

                public:
                    std::vector< std::unique_ptr<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments::Assignment> > assignment;

            };

            public:
                int index;
                std::unique_ptr<TerminalDevice::LogicalChannels::Channel::Config> config;
                std::unique_ptr<TerminalDevice::LogicalChannels::Channel::LogicalChannelAssignments> logical_channel_assignments;
                std::unique_ptr<TerminalDevice::LogicalChannels::Channel::State> state;

        };

        public:
            std::vector< std::unique_ptr<TerminalDevice::LogicalChannels::Channel> > channel;

    };

    class OpticalChannels {
        public:
            OpticalChannels();

        class OpticalChannel {
            public:
                OpticalChannel();

            class Config {
                public:
                    Config();

                public:
                    int frequency;
                    int index;
                    std::string line_port;
                    int operational_mode;
                    int power;

            };

            class State {
                public:
                    State();

                public:
                    int frequency;
                    int index;
                    std::string line_port;
                    int operational_mode;
                    int power;

            };

            public:
                int index;
                std::unique_ptr<TerminalDevice::OpticalChannels::OpticalChannel::Config> config;
                std::unique_ptr<TerminalDevice::OpticalChannels::OpticalChannel::State> state;

        };

        public:
            std::vector< std::unique_ptr<TerminalDevice::OpticalChannels::OpticalChannel> > optical_channel;

    };

    class LinePorts {
        public:
            LinePorts();

        class Port {
            public:
                Port();

            class Config {
                public:
                    Config();

                public:
                    std::string name;
                    int output_power;

            };

            class State {
                public:
                    State();

                public:
                    std::string name;
                    int output_power;

            };

            public:
                std::string name;
                std::unique_ptr<TerminalDevice::LinePorts::Port::Config> config;
                std::unique_ptr<TerminalDevice::LinePorts::Port::State> state;

        };

        public:
            std::vector< std::unique_ptr<TerminalDevice::LinePorts::Port> > port;

    };

    class OperationalModes {
        public:
            OperationalModes();

        class Config {
            public:
                Config();

            public:

        };

        class State {
            public:
                State();

            class SupportedModes {
                public:
                    SupportedModes();

                public:
                    int mode_id;
                    std::string description;
                    std::string vendor_id;

            };

            public:
                std::vector< std::unique_ptr<TerminalDevice::OperationalModes::State::SupportedModes> > supported_modes;

        };

        public:
            std::unique_ptr<TerminalDevice::OperationalModes::Config> config;
            std::unique_ptr<TerminalDevice::OperationalModes::State> state;

    };

    public:
        std::unique_ptr<TerminalDevice::ClientPorts> client_ports;
        std::unique_ptr<TerminalDevice::Config> config;
        std::unique_ptr<TerminalDevice::LinePorts> line_ports;
        std::unique_ptr<TerminalDevice::LogicalChannels> logical_channels;
        std::unique_ptr<TerminalDevice::OperationalModes> operational_modes;
        std::unique_ptr<TerminalDevice::OpticalChannels> optical_channels;
        std::unique_ptr<TerminalDevice::State> state;

};


};
};
