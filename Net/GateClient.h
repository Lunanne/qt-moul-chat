#ifndef _GATE_CLIENT_H
#define _GATE_CLIENT_H

#include <gate/pnGateKeeperClient.h>

class GateClient: public pnGateKeeperClient
{
public :
    GateClient(const unsigned char* keyN, const unsigned char* keyX);
    void fetchIPAdresses(const char *host);

private:
    virtual void onFileSrvIpAddressReply(uint32_t transId, const plString& addr);
    virtual void onAuthSrvIpAddressReply(uint32_t transId, const plString& addr);
};
#endif