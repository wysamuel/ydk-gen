#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace ietf_netconf {

class GetConfigRpc {
    public:
        GetConfigRpc();

    class Input {
        public:
            Input();

        class Source {
            public:
                Source();

            public:
                Empty candidate;
                Empty running;
                Empty startup;

        };

        public:
            std::unique_ptr<GetConfigRpc::Input::Source> source;
            std::string with_defaults;

    };

    class Output {
        public:
            Output();

        public:

    };

    public:
        std::unique_ptr<GetConfigRpc::Input> input;
        std::unique_ptr<GetConfigRpc::Output> output;

};

class EditConfigRpc {
    public:
        EditConfigRpc();

    class Input {
        public:
            Input();

        class Target {
            public:
                Target();

            public:
                Empty candidate;
                Empty running;

        };

        public:
            std::string default_operation;
            std::string error_option;
            std::unique_ptr<EditConfigRpc::Input::Target> target;
            std::string test_option;
            std::string url;

    };

    public:
        std::unique_ptr<EditConfigRpc::Input> input;

};

class CopyConfigRpc {
    public:
        CopyConfigRpc();

    class Input {
        public:
            Input();

        class Target {
            public:
                Target();

            public:
                Empty candidate;
                Empty running;
                Empty startup;
                std::string url;

        };

        class Source {
            public:
                Source();

            public:
                Empty candidate;
                Empty running;
                Empty startup;
                std::string url;

        };

        public:
            std::unique_ptr<CopyConfigRpc::Input::Source> source;
            std::unique_ptr<CopyConfigRpc::Input::Target> target;
            std::string with_defaults;

    };

    public:
        std::unique_ptr<CopyConfigRpc::Input> input;

};

class DeleteConfigRpc {
    public:
        DeleteConfigRpc();

    class Input {
        public:
            Input();

        class Target {
            public:
                Target();

            public:
                Empty startup;
                std::string url;

        };

        public:
            std::unique_ptr<DeleteConfigRpc::Input::Target> target;

    };

    public:
        std::unique_ptr<DeleteConfigRpc::Input> input;

};

class LockRpc {
    public:
        LockRpc();

    class Input {
        public:
            Input();

        class Target {
            public:
                Target();

            public:
                Empty candidate;
                Empty running;
                Empty startup;

        };

        public:
            std::unique_ptr<LockRpc::Input::Target> target;

    };

    public:
        std::unique_ptr<LockRpc::Input> input;

};

class UnlockRpc {
    public:
        UnlockRpc();

    class Input {
        public:
            Input();

        class Target {
            public:
                Target();

            public:
                Empty candidate;
                Empty running;
                Empty startup;

        };

        public:
            std::unique_ptr<UnlockRpc::Input::Target> target;

    };

    public:
        std::unique_ptr<UnlockRpc::Input> input;

};

class GetRpc {
    public:
        GetRpc();

    class Input {
        public:
            Input();

        public:
            std::string with_defaults;

    };

    class Output {
        public:
            Output();

        public:

    };

    public:
        std::unique_ptr<GetRpc::Input> input;
        std::unique_ptr<GetRpc::Output> output;

};

class CloseSessionRpc {
    public:
        CloseSessionRpc();

    public:

};

class KillSessionRpc {
    public:
        KillSessionRpc();

    class Input {
        public:
            Input();

        public:
            std::string session_id;

    };

    public:
        std::unique_ptr<KillSessionRpc::Input> input;

};

class CommitRpc {
    public:
        CommitRpc();

    class Input {
        public:
            Input();

        public:
            std::string confirm_timeout;
            Empty confirmed;
            std::string persist;
            std::string persist_id;

    };

    public:
        std::unique_ptr<CommitRpc::Input> input;

};

class DiscardChangesRpc {
    public:
        DiscardChangesRpc();

    public:

};

class CancelCommitRpc {
    public:
        CancelCommitRpc();

    class Input {
        public:
            Input();

        public:
            std::string persist_id;

    };

    public:
        std::unique_ptr<CancelCommitRpc::Input> input;

};

class ValidateRpc {
    public:
        ValidateRpc();

    class Input {
        public:
            Input();

        class Source {
            public:
                Source();

            public:
                Empty candidate;
                Empty running;
                Empty startup;
                std::string url;

        };

        public:
            std::unique_ptr<ValidateRpc::Input::Source> source;

    };

    public:
        std::unique_ptr<ValidateRpc::Input> input;

};


};
};
