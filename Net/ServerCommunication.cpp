#include "ServerCommunication.h"

#include <iostream>

ServerCommunication :: ServerCommunication(plResManager *prm)
{
    serverset = new ServerSettings();
    std::cout<< "Auth Server IP: " <<serverset->settings_authIP<<"\n";
    std::cout<< "Gate Server IP: " <<serverset->settings_gateIP<<"\n";
    //authclnt = new AuthClient(prm);

    //authclnt->Connect("192.168.56.101");
}
ServerCommunication :: ~ServerCommunication()
{
    //delete authclnt;
   delete serverset;
}
