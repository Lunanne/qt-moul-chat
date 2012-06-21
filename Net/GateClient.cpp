#include "GateClient.h"
#include <iostream>
GateClient::GateClient(const unsigned char* keyN,const unsigned char* keyX)
{
	setKeys(keyN,keyX,false);
  	setClientInfo(906,50,1,plUuid("ea489821-6c35-4bd0-9dae-bb17c585e680"));
}
void GateClient::fetchIPAdresses(char *host)
{
	connect(host);
	std::cout << sendFileSrvIpAddressRequest(1);
}

void GateClient::onFileSrvIpAddressReply(uint32_t transId, const plString& addr)
{
std::cout<<"file server "<<addr;
}
void GateClient::onAuthSrvIpAddressReply(uint32_t transId, const plString& addr)
{
std::cout<<"auth server "<<addr;
}