#ifndef _SERVER_SETTINGS_H
#define _SERVER_SETTINGS_H
#endif
#include <Stream/hsStream.h>

#define BUILD_NUMBER 912

class ServerSettings
{
public:
    ServerSettings();
    const char* settings_authIP;
    const char* settings_gateIP;
    const char* settings_fileIP;

   //const unsigned char settings_gateKeyN[88];
   //const unsigned char settings_gateKeyX[88];

   //const unsigned char settings_authKeyN[88];
   //const unsigned char settings_authKeyX[88];

   //const unsigned char settings_gameKeyN[88];
   //const unsigned char settings_gameKeyX[88];

    

};