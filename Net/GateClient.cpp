#include "GateClient.h"
#include <iostream>
GateClient::GateClient()
{
	const unsigned char keyN[89] = {"+0jvZ2xHKbBgMOfZ9hw92Zd4cTSM0TEi+Ysqgt0vyVDEKz99WgVDzokVuHrViT7QcjQHsfRs+vn+sEIeN/Lpqw=="};
	const unsigned char keyX[89] = {"gDeGdFQpSUsrljI3Jom37trmKOZQVRWP7P41Bs+xaFDCi32iYdbD3yZxNnVxFoiBWirF45AgqPYGXu9CclwJ+Q=="};
			//set keys
			//client info?
	setKeys(keyX,keyN);
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