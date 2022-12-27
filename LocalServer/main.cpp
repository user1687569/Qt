#include <QCoreApplication>
#include <QString>
#include <QDebug>
#include "localserver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    LocalServer server;
    server.RunServer();

    return a.exec();
}
