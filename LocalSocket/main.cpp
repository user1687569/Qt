#include <QCoreApplication>
#include <QLocalServer>
#include <QLocalSocket>
#include <QString>
#include <QDebug>
#include "localsocket.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    LocalSocket localSocket;
    localSocket.ConnectToServer("LocalServer");
    localSocket.sendMessage("Hello Server, I am from Local Client.");

    return a.exec();
}

