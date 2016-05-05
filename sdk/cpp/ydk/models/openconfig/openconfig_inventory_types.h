#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_inventory_types {

class Transceiver_Identity: public OpenconfigHardwareComponent_Identity {
    public:
        Transceiver_Identity();

    public:

};

class Linecard_Identity: public OpenconfigHardwareComponent_Identity {
    public:
        Linecard_Identity();

    public:

};

class PowerSupply_Identity: public OpenconfigHardwareComponent_Identity {
    public:
        PowerSupply_Identity();

    public:

};

class Cpu_Identity: public OpenconfigHardwareComponent_Identity {
    public:
        Cpu_Identity();

    public:

};

class Module_Identity: public OpenconfigHardwareComponent_Identity {
    public:
        Module_Identity();

    public:

};

class OpenconfigSoftwareComponent_Identity {
    public:
        OpenconfigSoftwareComponent_Identity();



};

class Backplane_Identity: public OpenconfigHardwareComponent_Identity {
    public:
        Backplane_Identity();

    public:

};

class Chassis_Identity: public OpenconfigHardwareComponent_Identity {
    public:
        Chassis_Identity();

    public:

};

class Fan_Identity: public OpenconfigHardwareComponent_Identity {
    public:
        Fan_Identity();

    public:

};

class OperatingSystem_Identity: public OpenconfigSoftwareComponent_Identity {
    public:
        OperatingSystem_Identity();

    public:

};

class OpenconfigHardwareComponent_Identity {
    public:
        OpenconfigHardwareComponent_Identity();



};

class Sensor_Identity: public OpenconfigHardwareComponent_Identity {
    public:
        Sensor_Identity();

    public:

};

class Port_Identity: public OpenconfigHardwareComponent_Identity {
    public:
        Port_Identity();

    public:

};


};
};
