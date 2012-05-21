#include "ServerCommunication.h"   
#include <iostream> 
  
ServerCommunication :: ServerCommunication(plResManager * manager):pnAuthClient(manager)
		{
			char host[15] = "192.168.56.101";
			const unsigned char keyN[89] = {"+0jvZ2xHKbBgMOfZ9hw92Zd4cTSM0TEi+Ysqgt0vyVDEKz99WgVDzokVuHrViT7QcjQHsfRs+vn+sEIeN/Lpqw=="};
			const unsigned char keyX[89] = {"gDeGdFQpSUsrljI3Jom37trmKOZQVRWP7P41Bs+xaFDCi32iYdbD3yZxNnVxFoiBWirF45AgqPYGXu9CclwJ+Q=="};
			//set keys
			//client info?
			setKeys(keyX,keyN);
            connect(host);
			clientChallenge = rand();
			setClientInfo(906,50,1,plUuid("ea489821-6c35-4bd0-9dae-bb17c585e680"));
			sendPingRequest(rand());
			sendClientRegisterRequest();
			std::cout <<"sending request";
			
		}
   void ServerCommunication::onClientRegisterReply(uint32_t ServerChallenge)
   {
	   serverChallenge = ServerChallenge;
	   std::cout<<"got server challenge";
	   sendAcctLoginRequest(serverChallenge,clientChallenge,"test1","test1");
   }
   void ServerCommunication::onAcctLoginReply(uint32_t /*transId*/, ENetError result, const plUuid& acctUuid, uint32_t /*acctFlags*/, uint32_t /*billingType*/, const uint32_t* /*encryptionKey*/)
   {
    std::cout << "Got Login response: "<< + acctUuid.toString();
   }
	ServerCommunication :: ~ServerCommunication()
    {
		disconnect();
    }
