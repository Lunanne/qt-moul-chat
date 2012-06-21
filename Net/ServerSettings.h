#include <Stream/hsStream.h>

static class ServerSettings
{
	public:
		static void Init();

		static char* settings_authIP;
		static char* settings_gateIP;
		static char* settings_fileIP;

		static unsigned char settings_gateKeyN[512];
		static unsigned char settings_gateKeyX[512];

		static unsigned char settings_authKeyN[512];
		static unsigned char settings_authKeyX[512];

		static unsigned char settings_gameKeyN[512];
		static unsigned char settings_gameKeyX[512];
};