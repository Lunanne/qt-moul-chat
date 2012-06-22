#include <Stream/hsStream.h>

struct SrvSettings
{
	
};
class ServerSettings
{
	public:
		static void Init();
		static const char* settings_authIP;
		static const char* settings_gateIP;
		static const char* settings_fileIP;

		static const unsigned char settings_gateKeyN[512];
		static const unsigned char settings_gateKeyX[512];

		static const unsigned char settings_authKeyN[512];
		static const unsigned char settings_authKeyX[512];

		static const unsigned char settings_gameKeyN[512];
		static const unsigned char settings_gameKeyX[512];
};