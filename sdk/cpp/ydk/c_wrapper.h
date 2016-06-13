#ifndef _C_WRAPPER_H_
#define _C_WRAPPER_H_

namespace ydk{
class NetconfClient;
}

extern "C" {
    ydk::NetconfClient* create_client(const char* username, const char* password, const char* hostname, int port, int verbosity);
    int connect_to_server(ydk::NetconfClient* client);
    const char* send_payload(ydk::NetconfClient* client, const char* payload);
    int disconnect_from_server(ydk::NetconfClient* client);
    capabilities* get_server_capabilities(ydk::NetconfClient* client);
}

#endif /* _C_WRAPPER_H_ */
