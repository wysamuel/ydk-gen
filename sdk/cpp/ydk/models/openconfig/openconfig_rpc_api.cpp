#include <memory>
#include <vector>
#include <string>
#include "ydk/models/openconfig_rpc_api/openconfig_rpc_api.h"

namespace ydk {
namespace openconfig_rpc_api {
ReplaceConfig_Identity::ReplaceConfig_Identity() {

}

XsdSchema_Identity::XsdSchema_Identity() {

}

OpenconfigRpcResponseTypes_Identity::OpenconfigRpcResponseTypes_Identity() {


}

OpenconfigDataEncodingTypes_Identity::OpenconfigDataEncodingTypes_Identity() {


}

YangSchema_Identity::YangSchema_Identity() {

}

EditConfigCommands_Identity::EditConfigCommands_Identity() {


}

EncodingXml_Identity::EncodingXml_Identity() {

}

OpenconfigSchemaFormatTypes_Identity::OpenconfigSchemaFormatTypes_Identity() {


}

JsonSchema_Identity::JsonSchema_Identity() {

}

OpenconfigSchemaModeTypes_Identity::OpenconfigSchemaModeTypes_Identity() {


}

FileMode_Identity::FileMode_Identity() {

}

DeleteConfig_Identity::DeleteConfig_Identity() {

}

EncodingJsonIetf_Identity::EncodingJsonIetf_Identity() {

}

EncodingProto3_Identity::EncodingProto3_Identity() {

}

UpdateConfig_Identity::UpdateConfig_Identity() {

}

UriMode_Identity::UriMode_Identity() {

}

GetmodelsRpc::Input::Input() {

}

GetmodelsRpc::Output::Schema::Schema() {

}

GetmodelsRpc::Output::Output() {

}

GetmodelsRpc::GetmodelsRpc() {
    input = std::make_unique<GetmodelsRpc::Input>();
    output = std::make_unique<GetmodelsRpc::Output>();

}

SetdataencodingRpc::Input::Input() {

}

SetdataencodingRpc::SetdataencodingRpc() {
    input = std::make_unique<SetdataencodingRpc::Input>();

}

GetdataencodingsRpc::Output::Output() {

}

GetdataencodingsRpc::GetdataencodingsRpc() {
    output = std::make_unique<GetdataencodingsRpc::Output>();

}

EditconfigRpc::Input::ConfigCommand::ConfigCommand() {

}

EditconfigRpc::Input::Input() {

}

EditconfigRpc::Output::Output() {

}

EditconfigRpc::EditconfigRpc() {
    input = std::make_unique<EditconfigRpc::Input>();
    output = std::make_unique<EditconfigRpc::Output>();

}

TelemetrysubscribeRpc::Input::Collectors::Collectors() {

}

TelemetrysubscribeRpc::Input::Paths::Paths() {

}

TelemetrysubscribeRpc::Input::Input() {

}

TelemetrysubscribeRpc::Output::Collectors::Collectors() {

}

TelemetrysubscribeRpc::Output::Paths::Paths() {

}

TelemetrysubscribeRpc::Output::Output() {

}

TelemetrysubscribeRpc::TelemetrysubscribeRpc() {
    input = std::make_unique<TelemetrysubscribeRpc::Input>();
    output = std::make_unique<TelemetrysubscribeRpc::Output>();

}

GettelemetrysubscriptionsRpc::Output::Subscription::Collectors::Collectors() {

}

GettelemetrysubscriptionsRpc::Output::Subscription::Paths::Paths() {

}

GettelemetrysubscriptionsRpc::Output::Subscription::Subscription() {

}

GettelemetrysubscriptionsRpc::Output::Output() {

}

GettelemetrysubscriptionsRpc::GettelemetrysubscriptionsRpc() {
    output = std::make_unique<GettelemetrysubscriptionsRpc::Output>();

}

CanceltelemetrysubscriptionRpc::Input::Input() {

}

CanceltelemetrysubscriptionRpc::CanceltelemetrysubscriptionRpc() {
    input = std::make_unique<CanceltelemetrysubscriptionRpc::Input>();

}

GetconfigRpc::Input::Input() {

}

GetconfigRpc::Output::Data::Data() {

}

GetconfigRpc::Output::Output() {

}

GetconfigRpc::GetconfigRpc() {
    input = std::make_unique<GetconfigRpc::Input>();
    output = std::make_unique<GetconfigRpc::Output>();

}

GetoperationalRpc::Input::Input() {

}

GetoperationalRpc::Output::Data::Data() {

}

GetoperationalRpc::Output::Output() {

}

GetoperationalRpc::GetoperationalRpc() {
    input = std::make_unique<GetoperationalRpc::Input>();
    output = std::make_unique<GetoperationalRpc::Output>();

}


};
};
