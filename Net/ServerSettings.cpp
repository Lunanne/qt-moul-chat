#include "ServerSettings.h"

#include <iostream>
const char* ServerSettings::settings_authIP;
void ServerSettings::Init()
{
    hsFileStream *stream = new hsFileStream(PlasmaVer::pvMoul);
    stream->open("server.ini",fmRead);
    plString input =  stream->readLine();
    if(input.find("Server.Auth.Host")==0) {
        plString split = input.afterFirst('"');
        ServerSettings::settings_authIP=split.beforeLast('"').cstr();
        std::cout<<split.beforeLast('"').cstr() << "\n";
        std::cout<<ServerSettings::settings_authIP << "\n";
    }
    stream->close();
    delete stream;
}