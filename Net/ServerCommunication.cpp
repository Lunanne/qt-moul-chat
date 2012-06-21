#include "ServerCommunication.h"   

#include <iostream> 
  
ServerCommunication :: ServerCommunication(plResManager *prm)
{
	ServerSettings::Init();
	//authclnt = new AuthClient(prm);
	//char host[15] = "192.168.56.102";
	//gateclnt = new GateClient();
	//gateclnt->fetchIPAdresses(host);
	//authclnt->Connect(host);
}
ServerCommunication :: ~ServerCommunication()
{
	//delete gateclnt;
	//delete authclnt;
}
