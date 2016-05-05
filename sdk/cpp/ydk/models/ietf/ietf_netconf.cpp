#include <memory>
#include <vector>
#include <string>
#include "ydk/models/ietf_netconf/ietf_netconf.h"

namespace ydk {
namespace ietf_netconf {
GetConfigRpc::Input::Source::Source() {

}

GetConfigRpc::Input::Input() {
    source = std::make_unique<GetConfigRpc::Input::Source>();

}

GetConfigRpc::Output::Output() {

}

GetConfigRpc::GetConfigRpc() {
    input = std::make_unique<GetConfigRpc::Input>();
    output = std::make_unique<GetConfigRpc::Output>();

}

EditConfigRpc::Input::Target::Target() {

}

EditConfigRpc::Input::Input() {
    target = std::make_unique<EditConfigRpc::Input::Target>();

}

EditConfigRpc::EditConfigRpc() {
    input = std::make_unique<EditConfigRpc::Input>();

}

CopyConfigRpc::Input::Target::Target() {

}

CopyConfigRpc::Input::Source::Source() {

}

CopyConfigRpc::Input::Input() {
    source = std::make_unique<CopyConfigRpc::Input::Source>();
    target = std::make_unique<CopyConfigRpc::Input::Target>();

}

CopyConfigRpc::CopyConfigRpc() {
    input = std::make_unique<CopyConfigRpc::Input>();

}

DeleteConfigRpc::Input::Target::Target() {

}

DeleteConfigRpc::Input::Input() {
    target = std::make_unique<DeleteConfigRpc::Input::Target>();

}

DeleteConfigRpc::DeleteConfigRpc() {
    input = std::make_unique<DeleteConfigRpc::Input>();

}

LockRpc::Input::Target::Target() {

}

LockRpc::Input::Input() {
    target = std::make_unique<LockRpc::Input::Target>();

}

LockRpc::LockRpc() {
    input = std::make_unique<LockRpc::Input>();

}

UnlockRpc::Input::Target::Target() {

}

UnlockRpc::Input::Input() {
    target = std::make_unique<UnlockRpc::Input::Target>();

}

UnlockRpc::UnlockRpc() {
    input = std::make_unique<UnlockRpc::Input>();

}

GetRpc::Input::Input() {

}

GetRpc::Output::Output() {

}

GetRpc::GetRpc() {
    input = std::make_unique<GetRpc::Input>();
    output = std::make_unique<GetRpc::Output>();

}

CloseSessionRpc::CloseSessionRpc() {

}

KillSessionRpc::Input::Input() {

}

KillSessionRpc::KillSessionRpc() {
    input = std::make_unique<KillSessionRpc::Input>();

}

CommitRpc::Input::Input() {

}

CommitRpc::CommitRpc() {
    input = std::make_unique<CommitRpc::Input>();

}

DiscardChangesRpc::DiscardChangesRpc() {

}

CancelCommitRpc::Input::Input() {

}

CancelCommitRpc::CancelCommitRpc() {
    input = std::make_unique<CancelCommitRpc::Input>();

}

ValidateRpc::Input::Source::Source() {

}

ValidateRpc::Input::Input() {
    source = std::make_unique<ValidateRpc::Input::Source>();

}

ValidateRpc::ValidateRpc() {
    input = std::make_unique<ValidateRpc::Input>();

}


};
};
