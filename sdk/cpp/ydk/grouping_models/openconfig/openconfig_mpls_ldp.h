#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_mpls_ldp {

class IgpLspLdpSetup_Grouping {
    public:
        IgpLspLdpSetup_Grouping();

    class Ldp: public IgpTunnelLdp_Grouping {
        public:

    };

    public:
        std::unique_ptr<IgpLspLdpSetup_Grouping::Ldp> ldp;

};

class IgpTunnelLdp_Grouping {
    public:
        IgpTunnelLdp_Grouping();

    class Tunnel {
        public:
            Tunnel();

        class P2PLsp {
            public:
                std::vector<std::string> fec_address;

        };

        class P2MpLsp {
            public:

        };

        class Mp2MpLsp {
            public:

        };

        public:
            std::string ldp_type;
            std::unique_ptr<IgpTunnelLdp_Grouping::Tunnel::Mp2MpLsp> mp2mp_lsp;
            std::unique_ptr<IgpTunnelLdp_Grouping::Tunnel::P2MpLsp> p2mp_lsp;
            std::unique_ptr<IgpTunnelLdp_Grouping::Tunnel::P2PLsp> p2p_lsp;
            std::string tunnel_type;

    };

    public:
        std::unique_ptr<IgpTunnelLdp_Grouping::Tunnel> tunnel;

};

class LdpGlobal_Grouping {
    public:
        LdpGlobal_Grouping();

    class Ldp {
        public:
            Ldp();

        class Timers {
            public:

        };

        public:
            std::unique_ptr<LdpGlobal_Grouping::Ldp::Timers> timers;

    };

    public:
        std::unique_ptr<LdpGlobal_Grouping::Ldp> ldp;

};


};
};
