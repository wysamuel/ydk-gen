#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace bgp_types {

class RouteRefresh_Identity: public BgpCapability_Identity {
    public:

};

class No_Export_Subconfed_Identity: public BgpWellKnownStdCommunity_Identity {
    public:

};

class No_Advertise_Identity: public BgpWellKnownStdCommunity_Identity {
    public:

};

class Mpbgp_Identity: public BgpCapability_Identity {
    public:

};

class Ipv4Unicast_Identity: public AfiSafiType_Identity {
    public:

};

class AddPaths_Identity: public BgpCapability_Identity {
    public:

};

class L3VpnIpv4Multicast_Identity: public AfiSafiType_Identity {
    public:

};

class AfiSafiType_Identity {


};

class No_Export_Identity: public BgpWellKnownStdCommunity_Identity {
    public:

};

class L2VpnEvpn_Identity: public AfiSafiType_Identity {
    public:

};

class Ipv4LabelledUnicast_Identity: public AfiSafiType_Identity {
    public:

};

class L3VpnIpv6Unicast_Identity: public AfiSafiType_Identity {
    public:

};

class Ipv6LabelledUnicast_Identity: public AfiSafiType_Identity {
    public:

};

class L3VpnIpv6Multicast_Identity: public AfiSafiType_Identity {
    public:

};

class GracefulRestart_Identity: public BgpCapability_Identity {
    public:

};

class Ipv6Unicast_Identity: public AfiSafiType_Identity {
    public:

};

class L2VpnVpls_Identity: public AfiSafiType_Identity {
    public:

};

class Asn32_Identity: public BgpCapability_Identity {
    public:

};

class L3VpnIpv4Unicast_Identity: public AfiSafiType_Identity {
    public:

};

class BgpCapability_Identity {


};

class Nopeer_Identity: public BgpWellKnownStdCommunity_Identity {
    public:

};

class BgpWellKnownStdCommunity_Identity {


};

class Internet_Identity: public BgpWellKnownStdCommunity_Identity {
    public:

};


};
};
