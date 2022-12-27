#include "localserver.h"

LocalServer::LocalServer(QObject *parent) : QObject(parent)
{
    m_server = new QLocalServer(this);
    QObject::connect(m_server, SIGNAL(newConnection()),
                     this, SLOT(onNewConnectionSlot()));
}


LocalServer::~LocalServer()
{
    m_server->close();
    delete  m_server;
}


void LocalServer::RunServer()
{
    qDebug() << "Run Server OK";

    QLocalServer::removeServer("ServerName");
    bool ok = m_server->listen("LocalServer");
    if(!ok){
        ;
    }
}


void LocalServer::onNewConnectionSlot()
{
    qDebug() << "New Connection";
    QLocalSocket* socket = m_server->nextPendingConnection();
    QObject::connect(socket, SIGNAL(readyRead()), this, SLOT(readyReadSlot()));
    QObject::connect(socket, SIGNAL(disconnected()), socket, SLOT(deleteLater()));
}


void LocalServer::readyReadSlot()
{
    QLocalSocket* socket = static_cast<QLocalSocket *>(sender());
    if(socket)
    {
        QTextStream stream(socket);
        qDebug() << "Read data from client: " << stream.readAll();

        QString response = "Hello Client";
        socket->write(response.toUtf8());
        socket->flush();
    }
}
