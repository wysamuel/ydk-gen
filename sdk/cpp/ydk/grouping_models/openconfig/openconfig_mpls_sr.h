#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_mpls_sr {

class SrGlobal_Grouping {
    public:
        SrGlobal_Grouping();

    class SegmentRouting {
        public:
            SegmentRouting();

        class Srgb: public Srgb_Config_Grouping {
            public:
                Srgb();

            class Config: public Srgb_Config_Grouping {
                public:

            };

            class State: public Srgb_Config_Grouping, Srgb_State_Grouping {
                public:

            };

            public:
                std::unique_ptr<SrGlobal_Grouping::SegmentRouting::Srgb::Config> config;
                std::unique_ptr<SrGlobal_Grouping::SegmentRouting::Srgb::State> state;

        };

        class Interfaces: public Interface_Config_Grouping {
            public:
                Interfaces();

            class Config: public Interface_Config_Grouping {
                public:

            };

            class State: public Interface_Config_Grouping {
                public:

            };

            class AdjacencySid {
                public:
                    AdjacencySid();

                class Config: public AdjacencySid_Config_Grouping {
                    public:

                };

                class State: public AdjacencySid_Config_Grouping {
                    public:

                };

                public:
                    std::unique_ptr<SrGlobal_Grouping::SegmentRouting::Interfaces::AdjacencySid::Config> config;
                    std::unique_ptr<SrGlobal_Grouping::SegmentRouting::Interfaces::AdjacencySid::State> state;

            };

            public:
                std::unique_ptr<SrGlobal_Grouping::SegmentRouting::Interfaces::AdjacencySid> adjacency_sid;
                std::unique_ptr<SrGlobal_Grouping::SegmentRouting::Interfaces::Config> config;
                std::unique_ptr<SrGlobal_Grouping::SegmentRouting::Interfaces::State> state;

        };

        public:
            std::vector< std::unique_ptr<SrGlobal_Grouping::SegmentRouting::Interfaces> > interfaces;
            std::vector< std::unique_ptr<SrGlobal_Grouping::SegmentRouting::Srgb> > srgb;

    };

    public:
        std::unique_ptr<SrGlobal_Grouping::SegmentRouting> segment_routing;

};

class Sr_FecPrefixSid_Config_Grouping {
    public:
        std::string last_hop_behavior;
        bool node_flag;
        std::string type;

};

class Interface_Config_Grouping {
    public:
        std::string interface;

};

class IgpTunnelSr_Grouping {
    public:
        IgpTunnelSr_Grouping();

    class Tunnel {
        public:
            Tunnel();

        class P2PLsp {
            public:
                P2PLsp();

            class Fec: public Sr_FecAddress_Config_Grouping {
                public:
                    Fec();

                class Config: public Sr_FecAddress_Config_Grouping {
                    public:

                };

                class State: public Sr_FecAddress_Config_Grouping {
                    public:

                };

                class PrefixSid {
                    public:
                        PrefixSid();

                    class Config: public Sr_FecPrefixSid_Config_Grouping {
                        public:

                    };

                    class State: public Sr_FecPrefixSid_Config_Grouping {
                        public:

                    };

                    public:
                        std::unique_ptr<IgpTunnelSr_Grouping::Tunnel::P2PLsp::Fec::PrefixSid::Config> config;
                        std::unique_ptr<IgpTunnelSr_Grouping::Tunnel::P2PLsp::Fec::PrefixSid::State> state;

                };

                public:
                    std::unique_ptr<IgpTunnelSr_Grouping::Tunnel::P2PLsp::Fec::Config> config;
                    std::unique_ptr<IgpTunnelSr_Grouping::Tunnel::P2PLsp::Fec::PrefixSid> prefix_sid;
                    std::unique_ptr<IgpTunnelSr_Grouping::Tunnel::P2PLsp::Fec::State> state;

            };

            public:
                std::vector< std::unique_ptr<IgpTunnelSr_Grouping::Tunnel::P2PLsp::Fec> > fec;

        };

        public:
            std::unique_ptr<IgpTunnelSr_Grouping::Tunnel::P2PLsp> p2p_lsp;
            std::string tunnel_type;

    };

    public:
        std::unique_ptr<IgpTunnelSr_Grouping::Tunnel> tunnel;

};

class Srgb_State_Grouping {
    public:
        int free;
        int size;
        int used;

};

class SrPathAttributes_Config_Grouping {
    public:
        bool sid_protection_required;
        std::string sid_selection_mode;

};

class IgpLspSrSetup_Grouping {
    public:
        IgpLspSrSetup_Grouping();

    class SegmentRouting: public IgpTunnelSr_Grouping {
        public:

    };

    public:
        std::unique_ptr<IgpLspSrSetup_Grouping::SegmentRouting> segment_routing;

};

class AdjacencySid_Config_Grouping {
    public:
        std::vector<std::string> advertise;
        std::vector<std::string> groups;

};

class Sr_FecAddress_Config_Grouping {
    public:
        std::string fec_address;

};

class Srgb_Config_Grouping {
    public:
        int lower_bound;
        int upper_bound;

};


};
};
