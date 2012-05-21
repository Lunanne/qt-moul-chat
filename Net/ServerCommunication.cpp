#include "ServerCommunication.h"   
#include <iostream> 
  
ServerCommunication :: ServerCommunication(plResManager *prm)
{
	authclnt = new AuthClient(prm);
	char host[15] = "192.168.56.101";
	authclnt->Connect(host);
}
ServerCommunication :: ~ServerCommunication()
{
		delete authclnt;
}
