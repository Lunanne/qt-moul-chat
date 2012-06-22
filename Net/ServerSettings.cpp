#include "ServerSettings.h"

#include <iostream>
void ServerSettings::Init()
{
	hsFileStream *stream = new hsFileStream(PlasmaVer::pvMoul);
	stream->open("server.ini",fmRead);
	
	plString input =  stream->readLine();
	if(input.find("Server.Auth.Host")==0)
	{	
		plString split = input.afterFirst('"');
		settings_authIP = split.beforeLast('"');
	}
	stream->close();
	delete stream;
}