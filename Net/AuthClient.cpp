#include "AuthClient.h"
#include <iostream>

AuthClient :: AuthClient(plResManager * manager):pnAuthClient(manager,true,false)
{
    //form server settings

    const unsigned char keyN[88] = {'+','0','j','v','Z','2','x','H','K','b','B','g','M','O','f','Z','9','h','w','9','2','Z','d','4','c','T','S','M','0','T','E','i','+','Y','s','q','g','t','0','v','y','V','D','E','K','z','9','9','W','g','V','D','z','o','k','V','u','H','r','V','i','T','7','Q','c','j','Q','H','s','f','R','s','+','v','n','+','s','E','I','e','N','/','L','p','q','w','=','='};
    const unsigned char keyX[88] = {'g','D','e','G','d','F','Q','p','S','U','s','r','l','j','I','3','J','o','m','3','7','t','r','m','K','O','Z','Q','V','R','W','P','7','P','4','1','B','s','+','x','a','F','D','C','i','3','2','i','Y','d','b','D','3','y','Z','x','N','n','V','x','F','o','i','B','W','i','r','F','4','5','A','g','q','P','Y','G','X','u','9','C','c','l','w','J','+','Q','=','='};		//set keys
    //client info?
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
