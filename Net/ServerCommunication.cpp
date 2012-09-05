#include "ServerCommunication.h"

#include <iostream>

ServerCommunication :: ServerCommunication(plResManager *prm)
{
    serverset = new ServerSettings();
    /*std::cout<< "Auth Server IP: " << serverset->settings_authIP<<"\n";
    std::cout<< "Gate Server IP: " << serverset->settings_gateIP<<"\n";
    std::cout<< "Auth Server Key N: " << serverset->settings_authKeyN<<"\n";
    std::cout<< "Auth Server Key X: " << serverset->settings_authKeyX<<"\n";
    authclnt = new AuthClient(serverset->settings_authKeyN, serverset->settings_authKeyX,prm);

    authclnt->Connect(serverset->settings_authIP);
     */
}
ServerCommunication :: ~ServerCommunication()
{
    //delete authclnt;
   delete serverset;
}
