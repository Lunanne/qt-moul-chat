#ifndef _SERVER_SETTINGS_H
#define _SERVER_SETTINGS_H

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

   unsigned char settings_authKeyN[64];
   unsigned char settings_authKeyX[64];

   //const unsigned char settings_gameKeyN[88];
   //const unsigned char settings_gameKeyX[88];
private:
    void reverseCopy(char* src, unsigned char* dst, int size) ;
    

};
#endif