#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace policy_types {

class Isis_Identity: public InstallProtocolType_Identity {
    public:

};

class AttributeLe_Identity: public AttributeComparison_Identity {
    public:

};

class AttributeGe_Identity: public AttributeComparison_Identity {
    public:

};

class InstallProtocolType_Identity {


};

class Bgp_Identity: public InstallProtocolType_Identity {
    public:

};

class DirectlyConnected_Identity: public InstallProtocolType_Identity {
    public:

};

class Static_Identity: public InstallProtocolType_Identity {
    public:

};

class AttributeComparison_Identity {


};

class LocalAggregate_Identity: public InstallProtocolType_Identity {
    public:

};

class AttributeEq_Identity: public AttributeComparison_Identity {
    public:

};

class Ospf_Identity: public InstallProtocolType_Identity {
    public:

};

class Ospf3_Identity: public InstallProtocolType_Identity {
    public:

};

class AttributeCompareOperators_Grouping {
    public:
        std::string operator;
        int value;

};


};
};
