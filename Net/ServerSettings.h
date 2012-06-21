#include <Stream/hsStream.h>

static class ServerSettings
{
	public:
		static void Init();

		static char* settings_authIP;
		static char* settings_gateIP;
		static char* settings_fileIP;

		static char* settings_gateKeyN;
		static char* settings_gateKeyX;

		static char* settings_authKeyN;
		static char* settings_authKeyX;

		static char* settings_gameKeyN;
		static char* settings_gameKeyX;
};