/*  ----------------------------------------------------------------
 Copyright 2016 Cisco Systems

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
------------------------------------------------------------------*/

#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

#include <libssh2.h>
#include <unistd.h>


#include "ydk/providers.h"

using namespace std;



#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/time.h>


#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

#include <stdlib.h>

#include <unistd.h>

#include <sys/types.h>

#include <sys/select.h>


#ifndef INADDR_NONE
#define INADDR_NONE (in_addr_t)~0
#endif

//#ifndef HAVE_SNPRINTF
//# ifdef HAVE__SNPRINTF
//# define snprintf _snprintf
//# endif
//#endif

const char *keyfile1 = "/home/username/.ssh/id_rsa.pub";
const char *keyfile2 = "/home/username/.ssh/id_rsa";

enum {
    AUTH_NONE = 0,
    AUTH_PASSWORD,
    AUTH_PUBLICKEY
};

static int netconf_write(LIBSSH2_CHANNEL *channel, const char *buf, size_t len)
{
    int i;
    ssize_t wr = 0;

    do {
        i = libssh2_channel_write(channel, buf, len);
        if (i < 0) {
            fprintf(stderr, "libssh2_channel_write: %d\n", i);
            return -1;
        }
        wr += i;
    } while (i > 0 && wr < (ssize_t)len);

    return 0;
}

static int netconf_read_until(LIBSSH2_CHANNEL *channel, const char *endtag,
                              char *buf, size_t buflen)
{
    ssize_t len;
    size_t rd = 0;
    char *endreply = NULL, *specialsequence = NULL;

    memset(buf, 0, buflen);

    do {
        len = libssh2_channel_read(channel, buf + rd, buflen - rd);
        if (LIBSSH2_ERROR_EAGAIN == len)
            continue;
        else if (len < 0) {
            fprintf(stderr, "libssh2_channel_read: %d\n", (int)len);
            return -1;
        }
        rd += len;

        /* read more data until we see a rpc-reply closing tag followed by
         * the special sequence ]]>]]> */

        /* really, this MUST be replaced with proper XML parsing! */

        endreply = strstr(buf, endtag);
        if (endreply)
            specialsequence = strstr(endreply, "]]>]]>");

    } while (!specialsequence && rd < buflen);

    if (!specialsequence) {
        fprintf(stderr, "%s: ]]>]]> not found! read buffer too small?\n", __func__);
        return -1;
    }

    /* discard the special sequence so that only XML is returned */
    rd = specialsequence - buf;
    buf[rd] = 0;

    return rd;
}

int execute(const char *username, const char *password, const char *server_ip, const char *payload)
{
    int rc, i, auth = AUTH_NONE;
    struct sockaddr_in sin;
    const char *fingerprint;
    char *userauthlist;
    LIBSSH2_SESSION *session;
    LIBSSH2_CHANNEL *channel = NULL;
    char buf[1048576]; /* avoid any buffer reallocation for simplicity */
    ssize_t len;

#ifdef WIN32
    SOCKET sock = INVALID_SOCKET;
    WSADATA wsadata;
    int err;

    err = WSAStartup(MAKEWORD(2,0), &wsadata);
    if (err != 0) {
        fprintf(stderr, "WSAStartup failed with error: %d\n", err);
        return 1;
    }
#else
    int sock = -1;
#endif

    rc = libssh2_init (0);
    if (rc != 0) {
        fprintf (stderr, "libssh2 initialization failed (%d)\n", rc);
        return 1;
    }

    /* Connect to SSH server */
    sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
#ifdef WIN32
    if (sock == INVALID_SOCKET) {
        fprintf(stderr, "failed to open socket!\n");
        return -1;
    }
#else
    if (sock == -1) {
        perror("socket");
        return -1;
    }
#endif

    sin.sin_family = AF_INET;
    if (INADDR_NONE == (sin.sin_addr.s_addr = inet_addr(server_ip))) {
        fprintf(stderr, "inet_addr: Invalid IP address \"%s\"\n", server_ip);
        return -1;
    }
    sin.sin_port = htons(12022);
    if (connect(sock, (struct sockaddr*)(&sin),
                sizeof(struct sockaddr_in)) != 0) {
        fprintf(stderr, "Failed to connect to %s!\n", inet_ntoa(sin.sin_addr));
        return -1;
    }

    /* Create a session instance */
    session = libssh2_session_init();
    if(!session) {
        fprintf(stderr, "Could not initialize SSH session!\n");
        return -1;
    }

    /* ... start it up. This will trade welcome banners, exchange keys,
     * and setup crypto, compression, and MAC layers
     */
    rc = libssh2_session_handshake(session, sock);
    if(rc) {
        fprintf(stderr, "Error when starting up SSH session: %d\n", rc);
        return -1;
    }

    /* At this point we havn't yet authenticated.  The first thing to do
     * is check the hostkey's fingerprint against our known hosts Your app
     * may have it hard coded, may go to a file, may present it to the
     * user, that's your call
     */
    fingerprint = libssh2_hostkey_hash(session, LIBSSH2_HOSTKEY_HASH_SHA1);
    fprintf(stderr, "Fingerprint: ");
    for(i = 0; i < 20; i++)
        fprintf(stderr, "%02X ", (unsigned char)fingerprint[i]);
    fprintf(stderr, "\n");

	if (libssh2_userauth_password(session, username, password)) {
		fprintf(stderr, "Authentication by password failed.\n");
		goto shutdown;
	}

    /* open a channel */
    channel = libssh2_channel_open_session(session);
    if (!channel) {
        fprintf(stderr, "Could not open the channel!\n"
                "(Note that this can be a problem at the server!"
                " Please review the server logs.)\n");
        goto shutdown;
    }

    /* execute the subsystem on our channel */
    if (libssh2_channel_subsystem(channel, "netconf")) {
        fprintf(stderr, "Could not execute the \"netconf\" subsystem!\n"
                "(Note that this can be a problem at the server!"
                " Please review the server logs.)\n");
        goto shutdown;
    }

    /* NETCONF: https://tools.ietf.org/html/draft-ietf-netconf-ssh-06 */

    fprintf(stderr, "Sending NETCONF client <hello>\n");
    snprintf(buf, sizeof(buf),
      "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
      "<hello>"
      "<capabilities>"
      "<capability>urn:ietf:params:xml:ns:netconf:base:1.0</capability>"
      "</capabilities>"
      "</hello>\n"
      "]]>]]>\n%n", (int *)&len);
    if (-1 == netconf_write(channel, buf, len))
        goto shutdown;

    fprintf(stderr, "Reading NETCONF server <hello>\n");
    len = netconf_read_until(channel, "</hello>", buf, sizeof(buf));
    if (-1 == len)
        goto shutdown;

    fprintf(stderr, "Got %d bytes:\n----------------------\n%s", (int)len, buf);

    fprintf(stderr, "Sending NETCONF <rpc>\n");
    snprintf(buf, sizeof(buf),"%s\n]]>]]>\n", payload);
    if (-1 == netconf_write(channel, buf, len))
        goto shutdown;

    fprintf(stderr, "Reading NETCONF <rpc-reply>\n");
    len = netconf_read_until(channel, "</rpc-reply>", buf, sizeof(buf));
    fprintf(stderr, "Got %d bytes:\n----------------------\n%s", (int)len, buf);
    //if (-1 == len)
    goto shutdown;


shutdown:
    if (channel)
        libssh2_channel_free(channel);
    libssh2_session_disconnect(session, "Client disconnecting normally");
    libssh2_session_free(session);

#ifdef WIN32
    closesocket(sock);
#else
    close(sock);
#endif

    libssh2_exit();

    return 0;
}

namespace ydk {
NetconfServiceProvider::NetconfServiceProvider(std::initializer_list<std::string> args)
{
	if(args.size()==0)
	{
		cout<<"- address - The address of the netconf server"
            "- port  - The port to use default is 830"
            "- username - The name of the user"
            "- password - The password to use"
            "- protocol - one of either ssh or tcp"
            "- timeout  - Default to 60"<<endl;
		return;
	}

	std::vector<std::string> argsv;
	argsv.insert(argsv.end(), args.begin(), args.end());


	username = argsv[2];
	address = argsv[0];
	port = argsv[1];
	password = argsv[3];
	protocol = argsv[4];
	timeout = argsv[5];
}

std::string NetconfServiceProvider::encode(Entity & entity)
{
	return "";
}

std::unique_ptr<Entity> NetconfServiceProvider::decode(std::string & payload)
{
	return nullptr;
}

bool NetconfServiceProvider::execute_payload(std::string & payload)
{
	char connect_command[500];

	ofstream myfile;
	myfile.open ("payload.xml");
	myfile << payload;
	myfile.close();

	snprintf(connect_command,sizeof(connect_command),
			"ssh %s@%s -p %s -s netconf < payload.xml > debug.log",
			username.c_str(),
			address.c_str(),
			port.c_str()
			);
	execute(address.c_str(),
			username.c_str(),
			port.c_str(),
			payload.c_str());

	int res=system(connect_command);
	cout << "Connected to device with command: "<< connect_command<<". Result: " << res << endl;
	cout << "Debug in debug.log"<<endl;
	return res==0;
}

}
