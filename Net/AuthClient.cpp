#include "AuthClient.h"
#include <iostream>
*
AuthClient :: AuthClient(const unsigned char* keyN,const unsigned char* keyX,plResManager * manager):pnAuthClient(manager,true,false)
{
    //form server settings

    setKeys(keyX,keyN,false);

    clientChallenge = rand();
    setClientInfo(912,50,1,plUuid("ea489821-6c35-4bd0-9dae-bb17c585e680"));
    std::cout<<"Finished setting up authclient \n";
}
void AuthClient::Connect(const char *host)
{
    connect(host);
    std::cout<<"connected \n";
    sendPingRequest(clientChallenge);
    //sendClientRegisterRequest();
    std::cout <<"sending request \n";
}
void AuthClient::onPingReply(uint32_t transId, uint32_t pingTimeMs)
{
    std::cout<<"got ping reply";
}
void AuthClient::onClientRegisterReply(uint32_t ServerChallenge)
{
    serverChallenge = ServerChallenge;
    std::cout<<"got server challenge";
    sendAcctLoginRequest(serverChallenge,clientChallenge,"test1","test1");
}
void AuthClient::onAcctLoginReply(uint32_t /*transId*/, ENetError result, const plUuid& acctUuid, uint32_t /*acctFlags*/, uint32_t /*billingType*/, const uint32_t* /*encryptionKey*/)
{
    std::cout << "Got Login response: "<< + acctUuid.toString();
}
AuthClient :: ~AuthClient()
{
    disconnect();
}
