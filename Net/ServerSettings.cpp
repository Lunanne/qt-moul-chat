#include "ServerSettings.h"

#include <iostream>
ServerSettings::ServerSettings()
{
    std::cout<<"Server settings \n";
    hsFileStream *stream = new hsFileStream(PlasmaVer::pvMoul);
    std::cout<<("stream open . File : \n");
    std::cout<<stream->open("server.ini",fmRead)<<"\n";
    
  //  while(!stream->eof())
  //  {
        plString input =  stream->readLine();
        if(input.find("Server.Auth.Host")==0) {
            plString split = input.afterFirst('"');
            split=split.beforeLast('"');
            settings_authIP = (new std::string(split.cstr()))->c_str();
            std::cout<<"Found Auth IP \n";
        }
        if(input.find("Server.Gate.Host")==0) {
            plString split = input.afterFirst('"');
            split=split.beforeLast('"');
            settings_gateIP =(new std::string(split.cstr()))->c_str();
            std::cout<<"Found Gate IP \n";
            
 //       }
  //  }
    
    
    stream->close();
    delete stream;
     
}
