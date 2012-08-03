#include "ServerCommunication.h"   

#include <iostream> 
  
ServerCommunication :: ServerCommunication(plResManager *prm)
{
	//ServerSettings::Init();
	authclnt = new AuthClient(prm);
	
	authclnt->Connect("192.168.56.101");
}
ServerCommunication :: ~ServerCommunication()
{
	delete authclnt;
}
