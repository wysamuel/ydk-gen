#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_mpls_types {

class PathSetupSr_Identity: public PathSetupProtocol_Identity {
    public:

};

class Down_Identity: public LspOperStatus_Identity {
    public:

};

class Unprotected_Identity: public ProtectionType_Identity {
    public:

};

class PathSetupLdp_Identity: public PathSetupProtocol_Identity {
    public:

};

class P2P_Identity: public TunnelType_Identity {
    public:

};

class LspRole_Identity {


};

class Admin_Down_Identity: public TunnelAdminStatus_Identity {
    public:

};

class LspOperStatus_Identity {


};

class Explicit_Identity: public NullLabelType_Identity {
    public:

};

class Admin_Up_Identity: public TunnelAdminStatus_Identity {
    public:

};

class P2Mp_Identity: public TunnelType_Identity {
    public:

};

class ProtectionType_Identity {


};

class TunnelAdminStatus_Identity {


};

class PathSetupRsvp_Identity: public PathSetupProtocol_Identity {
    public:

};

class Ingress_Identity: public LspRole_Identity {
    public:

};

class LinkProtectionRequested_Identity: public ProtectionType_Identity {
    public:

};

class Egress_Identity: public LspRole_Identity {
    public:

};

class LinkNodeProtectionRequested_Identity: public ProtectionType_Identity {
    public:

};

class Implicit_Identity: public NullLabelType_Identity {
    public:

};

class NullLabelType_Identity {


};

class Transit_Identity: public LspRole_Identity {
    public:

};

class Up_Identity: public LspOperStatus_Identity {
    public:

};

class TunnelType_Identity {


};

class PathSetupProtocol_Identity {


};


};
};
