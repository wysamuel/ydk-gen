#include "netconf_client.h"

extern "C" {
    ydk::NetconfClient* create_client(const char* username, const char* password, const char* hostname, int port, int verbosity)
    {
    	ydk::NetconfClient* client = new ydk::NetconfClient(username,password,hostname,port,verbosity);
    	return client;
    }

    int connect_to_server(ydk::NetconfClient* client)
    {
    	return client->connect();
    }

    const char* send_payload(ydk::NetconfClient* client, const char* payload)
    {
    	return client->execute_payload(payload).c_str();
    }

    int disconnect_from_server(ydk::NetconfClient* client)
    {
    	return client->close();
    }

    capabilities* get_server_capabilities(ydk::NetconfClient* client)
    {
    	capabilities* caps = new capabilities(client->get_capabilities());
    	return caps;
    }
}
