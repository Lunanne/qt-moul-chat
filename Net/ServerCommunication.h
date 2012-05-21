#ifndef _SERVER_COMM_H
#define _SERVER_COMM_H
#endif


#include <auth/pnAuthClient.h>
#include <ResManager/plResManager.h>
class ServerCommunication : public pnAuthClient
{
public:
	ServerCommunication();
	ServerCommunication(plResManager *manager);//:pnAuthClient(manager,true,false);
	//void AuthConnect(const char* addr);
	 ~ServerCommunication();
	 

   virtual void onClientRegisterReply(uint32_t serverChallenge);
  // virtual void onServerAddr(uint32_t address, const plUuid& token);
   //virtual void onAcctPlayerInfo(uint32_t transId, uint32_t playerId, const plString& playerName, const plString& avatarModel, uint32_t explorer);
   virtual void onAcctLoginReply(uint32_t transId, ENetError result, const plUuid& acctUuid, uint32_t acctFlags, uint32_t billingType, const uint32_t* encryptionKey);
   //virtual void onAcctSetPlayerReply(uint32_t transId, ENetError result);
   //virtual void onAgeReply(uint32_t transId, ENetError result, uint32_t mcpId, const plUuid& ageInstanceId, uint32_t ageVaultId, uint32_t gameServerAddress);
   //virtual void onVaultInitAgeReply(uint32_t transId, ENetError result, uint32_t ageId, uint32_t ageInfoId);
   //virtual void onVaultNodeFetched(uint32_t transId, ENetError result, const pnVaultNode& node);
   //virtual void onVaultNodeRefsFetched(uint32_t transId, ENetError result, size_t count, const pnVaultNodeRef* refs);
	 
private: 
        uint32_t serverChallenge;
		uint32_t clientChallenge;
		
};