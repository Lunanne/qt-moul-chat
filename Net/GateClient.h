#ifndef _GATE_CLIENT_H
#define _GATE_CLIENT_H

#include <gate/pnGateKeeperClient.h>

class GateClient: public pnGateKeeperClient
{
public :
	GateClient(char* keyN, char* keyX);
	void fetchIPAdresses(char *host);

private:
  virtual void onFileSrvIpAddressReply(uint32_t transId, const plString& addr);
  virtual void onAuthSrvIpAddressReply(uint32_t transId, const plString& addr);
};
#endif