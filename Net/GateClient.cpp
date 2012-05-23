
void GateClient::GateClient()
{
	setKeys();//insert right info
  setClientInfo();
  
void GateClient::fetchIPAdresses(char *host)
{
connect(host);
}

void GateClient::onFileSrvIpAddressReply(uint32_t transId, const plString& addr)
{
std::cout<<"file server "<<addr;
}
void GateClient::onAuthSrvIpAddressReply(uint32_t transId, const plString& addr)
{
std::cout<<"auth server "<<addr;
}