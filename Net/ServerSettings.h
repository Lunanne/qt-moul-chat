#ifndef _SERVER_SETTINGS_H
#define _SERVER_SETTINGS_H
#endif
#include <Stream/hsStream.h>

#define BUILD_NUMBER 912

class ServerSettings
{
	public:
		static void Init();
		static const char* settings_authIP;
		static const char* settings_gateIP;
		static const char* settings_fileIP;

		static const unsigned char settings_gateKeyN[88];
		static const unsigned char settings_gateKeyX[88];

		static const unsigned char settings_authKeyN[88];
		static const unsigned char settings_authKeyX[88];

		static const unsigned char settings_gameKeyN[88];
		static const unsigned char settings_gameKeyX[88];
		
};