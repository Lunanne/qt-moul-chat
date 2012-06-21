#include "ServerSettings.h"

#include <iostream>
void ServerSettings::Init()
{
	hsFileStream *stream = new hsFileStream(PlasmaVer::pvMoul);
	stream->open("server.ini",fmRead);
	
	plString temp =  stream->readLine();
	if(temp.find("Server.Auth.Host")==0)
	{		
		std::cout<<temp;
	}
	stream->close();
}