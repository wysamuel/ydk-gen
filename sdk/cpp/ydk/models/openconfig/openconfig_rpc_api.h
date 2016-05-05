#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace openconfig_rpc_api {

class ReplaceConfig_Identity: public EditConfigCommands_Identity {
    public:
        ReplaceConfig_Identity();

    public:

};

class XsdSchema_Identity: public OpenconfigSchemaFormatTypes_Identity {
    public:
        XsdSchema_Identity();

    public:

};

class OpenconfigRpcResponseTypes_Identity {
    public:
        OpenconfigRpcResponseTypes_Identity();



};

class OpenconfigDataEncodingTypes_Identity {
    public:
        OpenconfigDataEncodingTypes_Identity();



};

class YangSchema_Identity: public OpenconfigSchemaFormatTypes_Identity {
    public:
        YangSchema_Identity();

    public:

};

class EditConfigCommands_Identity {
    public:
        EditConfigCommands_Identity();



};

class EncodingXml_Identity: public OpenconfigDataEncodingTypes_Identity {
    public:
        EncodingXml_Identity();

    public:

};

class OpenconfigSchemaFormatTypes_Identity {
    public:
        OpenconfigSchemaFormatTypes_Identity();



};

class JsonSchema_Identity: public OpenconfigSchemaFormatTypes_Identity {
    public:
        JsonSchema_Identity();

    public:

};

class OpenconfigSchemaModeTypes_Identity {
    public:
        OpenconfigSchemaModeTypes_Identity();



};

class FileMode_Identity: public OpenconfigSchemaModeTypes_Identity {
    public:
        FileMode_Identity();

    public:

};

class DeleteConfig_Identity: public EditConfigCommands_Identity {
    public:
        DeleteConfig_Identity();

    public:

};

class EncodingJsonIetf_Identity: public OpenconfigDataEncodingTypes_Identity {
    public:
        EncodingJsonIetf_Identity();

    public:

};

class EncodingProto3_Identity: public OpenconfigDataEncodingTypes_Identity {
    public:
        EncodingProto3_Identity();

    public:

};

class UpdateConfig_Identity: public EditConfigCommands_Identity {
    public:
        UpdateConfig_Identity();

    public:

};

class UriMode_Identity: public OpenconfigSchemaModeTypes_Identity {
    public:
        UriMode_Identity();

    public:

};

class GetmodelsRpc {
    public:
        GetmodelsRpc();

    class Input {
        public:
            Input();

        public:
            std::string request_mode;
            std::string schema_format;

    };

    class Output {
        public:
            Output();

        class Schema {
            public:
                Schema();

            public:
                std::string model_name;
                std::string model_data;
                std::string model_namespace;
                std::string model_version;

        };

        public:
            std::vector< std::unique_ptr<GetmodelsRpc::Output::Schema> > schema;

    };

    public:
        std::unique_ptr<GetmodelsRpc::Input> input;
        std::unique_ptr<GetmodelsRpc::Output> output;

};

class SetdataencodingRpc {
    public:
        SetdataencodingRpc();

    class Input {
        public:
            Input();

        public:
            std::string encoding;

    };

    public:
        std::unique_ptr<SetdataencodingRpc::Input> input;

};

class GetdataencodingsRpc {
    public:
        GetdataencodingsRpc();

    class Output {
        public:
            Output();

        public:
            std::vector< std::unique_ptr<OpenconfigDataEncodingTypes_Identity> > encoding;

    };

    public:
        std::unique_ptr<GetdataencodingsRpc::Output> output;

};

class EditconfigRpc {
    public:
        EditconfigRpc();

    class Input {
        public:
            Input();

        class ConfigCommand {
            public:
                ConfigCommand();

            public:
                std::string path;
                std::string command;
                std::string values;

        };

        public:
            std::vector< std::unique_ptr<EditconfigRpc::Input::ConfigCommand> > config_command;
            int request_id;

    };

    class Output {
        public:
            Output();

        public:
            std::string message;
            int request_id;
            std::string response_code;

    };

    public:
        std::unique_ptr<EditconfigRpc::Input> input;
        std::unique_ptr<EditconfigRpc::Output> output;

};

class TelemetrysubscribeRpc {
    public:
        TelemetrysubscribeRpc();

    class Input {
        public:
            Input();

        class Collectors {
            public:
                Collectors();

            public:
                std::string address;
                std::string port;

        };

        class Paths {
            public:
                Paths();

            public:
                std::string path;
                std::string filter;
                int max_silent_interval;
                int sample_frequency;
                bool suppress_unchanged;

        };

        public:
            std::vector< std::unique_ptr<TelemetrysubscribeRpc::Input::Collectors> > collectors;
            std::string export_dscp_marking;
            std::vector< std::unique_ptr<TelemetrysubscribeRpc::Input::Paths> > paths;

    };

    class Output {
        public:
            Output();

        class Collectors {
            public:
                Collectors();

            public:
                std::string address;
                std::string port;

        };

        class Paths {
            public:
                Paths();

            public:
                std::string path;
                std::string filter;
                int max_silent_interval;
                int sample_frequency;
                bool suppress_unchanged;

        };

        public:
            std::vector< std::unique_ptr<TelemetrysubscribeRpc::Output::Collectors> > collectors;
            std::string export_dscp_marking;
            std::vector< std::unique_ptr<TelemetrysubscribeRpc::Output::Paths> > paths;
            int subscription_id;

    };

    public:
        std::unique_ptr<TelemetrysubscribeRpc::Input> input;
        std::unique_ptr<TelemetrysubscribeRpc::Output> output;

};

class GettelemetrysubscriptionsRpc {
    public:
        GettelemetrysubscriptionsRpc();

    class Output {
        public:
            Output();

        class Subscription {
            public:
                Subscription();

            class Collectors {
                public:
                    Collectors();

                public:
                    std::string address;
                    std::string port;

            };

            class Paths {
                public:
                    Paths();

                public:
                    std::string path;
                    std::string filter;
                    int max_silent_interval;
                    int sample_frequency;
                    bool suppress_unchanged;

            };

            public:
                int subscription_id;
                std::vector< std::unique_ptr<GettelemetrysubscriptionsRpc::Output::Subscription::Collectors> > collectors;
                std::string export_dscp_marking;
                std::vector< std::unique_ptr<GettelemetrysubscriptionsRpc::Output::Subscription::Paths> > paths;

        };

        public:
            std::vector< std::unique_ptr<GettelemetrysubscriptionsRpc::Output::Subscription> > subscription;

    };

    public:
        std::unique_ptr<GettelemetrysubscriptionsRpc::Output> output;

};

class CanceltelemetrysubscriptionRpc {
    public:
        CanceltelemetrysubscriptionRpc();

    class Input {
        public:
            Input();

        public:
            int subscription_id;

    };

    public:
        std::unique_ptr<CanceltelemetrysubscriptionRpc::Input> input;

};

class GetconfigRpc {
    public:
        GetconfigRpc();

    class Input {
        public:
            Input();

        public:
            std::vector<std::string> path;
            int request_id;

    };

    class Output {
        public:
            Output();

        class Data {
            public:
                Data();

            public:
                std::string path;
                std::string values;

        };

        public:
            std::vector< std::unique_ptr<GetconfigRpc::Output::Data> > data;
            std::string message;
            int request_id;
            std::string response_code;

    };

    public:
        std::unique_ptr<GetconfigRpc::Input> input;
        std::unique_ptr<GetconfigRpc::Output> output;

};

class GetoperationalRpc {
    public:
        GetoperationalRpc();

    class Input {
        public:
            Input();

        public:
            bool oper_only;
            std::vector<std::string> path;
            int request_id;

    };

    class Output {
        public:
            Output();

        class Data {
            public:
                Data();

            public:
                std::string path;
                std::string values;

        };

        public:
            std::vector< std::unique_ptr<GetoperationalRpc::Output::Data> > data;
            std::string message;
            int request_id;
            std::string response_code;

    };

    public:
        std::unique_ptr<GetoperationalRpc::Input> input;
        std::unique_ptr<GetoperationalRpc::Output> output;

};


};
};
