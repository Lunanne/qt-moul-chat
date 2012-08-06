#include "Net\ServerCommunication.h"


int main()
{
    plResManager *prm;
    prm = new plResManager(PlasmaVer::pvMoul);
    ServerCommunication *sc = new ServerCommunication(prm);
    delete sc;
    return 0;
}