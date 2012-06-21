#include "ServerCommunication.h"   

#include <iostream> 
  
ServerCommunication :: ServerCommunication(plResManager *prm)
{
	ServerSettings::Init();
	//authclnt = new AuthClient(prm);
	//gateclnt = new GateClient(settings_gateKeyN,settings_gateKeyX);
	//gateclnt->fetchIPAdresses();
	//authclnt->Connect();
}
ServerCommunication :: ~ServerCommunication()
{
	//delete gateclnt;
	//delete authclnt;
}
