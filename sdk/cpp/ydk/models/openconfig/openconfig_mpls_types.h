#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_mpls_types {

class PathSetupSr_Identity: public PathSetupProtocol_Identity {
    public:
        PathSetupSr_Identity();

    public:

};

class Down_Identity: public LspOperStatus_Identity {
    public:
        Down_Identity();

    public:

};

class Unprotected_Identity: public ProtectionType_Identity {
    public:
        Unprotected_Identity();

    public:

};

class PathSetupLdp_Identity: public PathSetupProtocol_Identity {
    public:
        PathSetupLdp_Identity();

    public:

};

class P2P_Identity: public TunnelType_Identity {
    public:
        P2P_Identity();

    public:

};

class LspRole_Identity {
    public:
        LspRole_Identity();



};

class Admin_Down_Identity: public TunnelAdminStatus_Identity {
    public:
        Admin_Down_Identity();

    public:

};

class LspOperStatus_Identity {
    public:
        LspOperStatus_Identity();



};

class Explicit_Identity: public NullLabelType_Identity {
    public:
        Explicit_Identity();

    public:

};

class Admin_Up_Identity: public TunnelAdminStatus_Identity {
    public:
        Admin_Up_Identity();

    public:

};

class P2Mp_Identity: public TunnelType_Identity {
    public:
        P2Mp_Identity();

    public:

};

class ProtectionType_Identity {
    public:
        ProtectionType_Identity();



};

class TunnelAdminStatus_Identity {
    public:
        TunnelAdminStatus_Identity();



};

class PathSetupRsvp_Identity: public PathSetupProtocol_Identity {
    public:
        PathSetupRsvp_Identity();

    public:

};

class Ingress_Identity: public LspRole_Identity {
    public:
        Ingress_Identity();

    public:

};

class LinkProtectionRequested_Identity: public ProtectionType_Identity {
    public:
        LinkProtectionRequested_Identity();

    public:

};

class Egress_Identity: public LspRole_Identity {
    public:
        Egress_Identity();

    public:

};

class LinkNodeProtectionRequested_Identity: public ProtectionType_Identity {
    public:
        LinkNodeProtectionRequested_Identity();

    public:

};

class Implicit_Identity: public NullLabelType_Identity {
    public:
        Implicit_Identity();

    public:

};

class NullLabelType_Identity {
    public:
        NullLabelType_Identity();



};

class Transit_Identity: public LspRole_Identity {
    public:
        Transit_Identity();

    public:

};

class Up_Identity: public LspOperStatus_Identity {
    public:
        Up_Identity();

    public:

};

class TunnelType_Identity {
    public:
        TunnelType_Identity();



};

class PathSetupProtocol_Identity {
    public:
        PathSetupProtocol_Identity();



};


};
};
