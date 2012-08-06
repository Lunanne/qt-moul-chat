#ifndef _SERVER_COMM_H
#define _SERVER_COMM_H
#endif
#include "AuthClient.h"
#include "GateClient.h"
#include "ServerSettings.h"
#include <ResManager/plResManager.h>
class ServerCommunication
{
public:
    ServerCommunication(plResManager *prm);
    //void AuthConnect();//const char* addr);
    ~ServerCommunication();
private:
    AuthClient *authclnt;
};