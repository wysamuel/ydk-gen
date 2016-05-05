#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace bgp_operational {

class BgpNeighborTimers_State_Grouping {
    public:
        int64 negotiated_hold_time;
        int uptime;

};

class BgpNeighborMessageCountersSent_State_Grouping: public BgpCountersMessageTypes_Common_Grouping {
    public:

};

class BgpNeighbor_State_Grouping {
    public:
        std::string session_state;
        std::vector<std::string> supported_capabilities;

};

class BgpContextPfxPathCounters_Common_Grouping {
    public:
        int total_paths;
        int total_prefixes;

};

class BgpPeerGroup_State_Grouping: public BgpContextPfxPathCounters_Common_Grouping {
    public:

};

class BgpGlobalAfiSafi_State_Grouping: public BgpContextPfxPathCounters_Common_Grouping {
    public:

};

class BgpNeighborErrorHandling_State_Grouping {
    public:
        int erroneous_update_messages;

};

class BgpNeighborAfiSafiGracefulRestart_State_Grouping {
    public:
        bool advertised;
        bool received;

};

class BgpAfiSafiGracefulRestart_State_Grouping {
    public:
        bool local_restarting;
        std::string mode;
        std::string peer_restart_time;
        bool peer_restarting;

};

class BgpAfiSafi_State_Grouping {
    public:

};

class BgpNeighborTransport_State_Grouping {
    public:
        std::string local_port;
        std::string remote_address;
        std::string remote_port;

};

class BgpGlobal_State_Grouping: public BgpContextPfxPathCounters_Common_Grouping {
    public:

};

class BgpCountersMessageTypes_Common_Grouping {
    public:
        int notification;
        int update;

};

class BgpNeighborMessageCountersReceived_State_Grouping: public BgpCountersMessageTypes_Common_Grouping {
    public:

};

class BgpNeighborQueueCounters_State_Grouping {
    public:
        int input;
        int output;

};

class BgpNeighborAfiSafi_State_Grouping: public BgpNeighborPrefixCounters_State_Grouping {
    public:
        bool active;

};

class BgpNeighborPrefixCounters_State_Grouping {
    public:
        BgpNeighborPrefixCounters_State_Grouping();

    class Prefixes {
        public:
            int installed;
            int received;
            int sent;

    };

    public:
        std::unique_ptr<BgpNeighborPrefixCounters_State_Grouping::Prefixes> prefixes;

};


};
};
