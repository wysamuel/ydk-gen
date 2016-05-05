#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_rpc_api {

class ReplaceConfig_Identity: public EditConfigCommands_Identity {
    public:

};

class XsdSchema_Identity: public OpenconfigSchemaFormatTypes_Identity {
    public:

};

class OpenconfigRpcResponseTypes_Identity {


};

class OpenconfigDataEncodingTypes_Identity {


};

class YangSchema_Identity: public OpenconfigSchemaFormatTypes_Identity {
    public:

};

class EditConfigCommands_Identity {


};

class EncodingXml_Identity: public OpenconfigDataEncodingTypes_Identity {
    public:

};

class OpenconfigSchemaFormatTypes_Identity {


};

class JsonSchema_Identity: public OpenconfigSchemaFormatTypes_Identity {
    public:

};

class OpenconfigSchemaModeTypes_Identity {


};

class FileMode_Identity: public OpenconfigSchemaModeTypes_Identity {
    public:

};

class DeleteConfig_Identity: public EditConfigCommands_Identity {
    public:

};

class EncodingJsonIetf_Identity: public OpenconfigDataEncodingTypes_Identity {
    public:

};

class EncodingProto3_Identity: public OpenconfigDataEncodingTypes_Identity {
    public:

};

class UpdateConfig_Identity: public EditConfigCommands_Identity {
    public:

};

class UriMode_Identity: public OpenconfigSchemaModeTypes_Identity {
    public:

};

class ConfigDataRequest_Grouping: public RequestHdr_Grouping, PathList_Grouping {
    public:

};

class OperDataReply_Grouping: public ReplyHdr_Grouping {
    public:
        OperDataReply_Grouping();

    class Data: public OpenconfigData_Grouping {
        public:

    };

    public:
        std::vector< std::unique_ptr<OperDataReply_Grouping::Data> > data;

};

class PathList_Grouping {
    public:
        std::vector<std::string> path;

};

class SubscriptionResponse_Grouping {
    public:
        SubscriptionResponse_Grouping();

    class Collectors {
        public:
            std::string address;
            std::string port;

    };

    public:
        std::vector< std::unique_ptr<SubscriptionResponse_Grouping::Collectors> > collectors;
        std::string export_dscp_marking;
        int subscription_id;

};

class TelemetryPathList_Grouping {
    public:
        TelemetryPathList_Grouping();

    class Paths {
        public:
            std::string filter;
            int max_silent_interval;
            std::string path;
            int sample_frequency;
            bool suppress_unchanged;

    };

    public:
        std::vector< std::unique_ptr<TelemetryPathList_Grouping::Paths> > paths;

};

class ConfigReply_Grouping: public ReplyHdr_Grouping {
    public:

};

class ConfigRequest_Grouping: public RequestHdr_Grouping {
    public:
        ConfigRequest_Grouping();

    class ConfigCommand: public OpenconfigData_Grouping {
        public:
            std::string command;

    };

    public:
        std::vector< std::unique_ptr<ConfigRequest_Grouping::ConfigCommand> > config_command;

};

class SubscriptionInput_Grouping {
    public:
        SubscriptionInput_Grouping();

    class Collectors {
        public:
            std::string address;
            std::string port;

    };

    public:
        std::vector< std::unique_ptr<SubscriptionInput_Grouping::Collectors> > collectors;
        std::string export_dscp_marking;

};

class OpenconfigData_Grouping {
    public:
        std::string path;
        std::string values;

};

class ConfigDataReply_Grouping: public ReplyHdr_Grouping {
    public:
        ConfigDataReply_Grouping();

    class Data: public OpenconfigData_Grouping {
        public:

    };

    public:
        std::vector< std::unique_ptr<ConfigDataReply_Grouping::Data> > data;

};

class RequestHdr_Grouping {
    public:
        int request_id;

};

class SchemaRequest_Grouping {
    public:
        std::string request_mode;
        std::string schema_format;

};

class ReplyHdr_Grouping {
    public:
        std::string message;
        int request_id;
        std::string response_code;

};

class OperDataRequest_Grouping: public RequestHdr_Grouping, PathList_Grouping {
    public:
        bool oper_only;

};

class Schema_Grouping {
    public:
        std::string model_data;
        std::string model_name;
        std::string model_namespace;
        std::string model_version;

};


};
};
