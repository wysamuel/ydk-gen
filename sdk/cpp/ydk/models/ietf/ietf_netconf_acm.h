#include <memory>
#include <vector>
#include <string>
#include "ydk/utils/types.h"
#include "ydk/utils/make_unique.h"

namespace ydk {
namespace ietf_netconf_acm {

class Nacm {
    public:
        Nacm();

    class Groups {
        public:
            Groups();

        class Group {
            public:
                Group();

            public:
                std::string name;
                std::vector<std::string> user_name;

        };

        public:
            std::vector< std::unique_ptr<Nacm::Groups::Group> > group;

    };

    class RuleList {
        public:
            RuleList();

        class Rule {
            public:
                Rule();

            public:
                std::string name;
                std::string access_operations;
                std::string action;
                std::string comment;
                std::string module_name;
                std::string notification_name;
                std::string path;
                std::string rpc_name;

        };

        public:
            std::string name;
            std::vector<std::string> group;
            std::vector< std::unique_ptr<Nacm::RuleList::Rule> > rule;

    };

    public:
        int denied_data_writes;
        int denied_notifications;
        int denied_operations;
        bool enable_external_groups;
        bool enable_nacm;
        std::string exec_default;
        std::unique_ptr<Nacm::Groups> groups;
        std::string read_default;
        std::vector< std::unique_ptr<Nacm::RuleList> > rule_list;
        std::string write_default;

};


};
};
