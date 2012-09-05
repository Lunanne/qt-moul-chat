#include "ServerSettings.h"
#include <QByteArray>
#include <iostream>
#include <QString>
#include <QFile>
#include <QCoreApplication>
#include <QStringList>
#include <QDir>
enum ParseState { TEXT, COMMENT };

ServerSettings::ServerSettings()
{
    std::cout<<QDir(".").absoluteFilePath("server.ini").toStdString()<<"\n";
    /*
    ParseState state = TEXT;
    QFile file("/Users/annemarije/Documents/CodingProjects/qt-moul-chat/build/Debug/server.ini");
    file.open(QFile::ReadOnly);
    QString arg;
    QStringList* args = new QStringList();
    while(!file.atEnd()) {
        char c = *file.read(1).data();
        if(c == '\r')
            continue;
        switch(state) {
            case COMMENT:
                // ignores all characters until a line break
                if(c == '\n')
                    state = TEXT;
                break;
            case TEXT:
                if(c=='#')
                {
                state = COMMENT;
                break;
                }
                if(c == '"' || c == '\n') {
                    args->append(arg);
                    arg.clear();
                    state = TEXT;
                }else{
                    arg.append(c);
                }
        }
    }
    // when we hit the end of the file, clean up any final state
    if(arg.length() > 0)
        args->append(arg);
   
   */
}

void ServerSettings::reverseCopy(char* src, unsigned char* dst, int size) {
    for(int i = 0; i < size; i++) {
        dst[i] = src[size - i - 1];
    }
}
