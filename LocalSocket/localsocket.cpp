#include "localsocket.h"

LocalSocket::LocalSocket(QObject *parent) : QObject(parent)
{
    m_socket = new QLocalSocket();
    QObject::connect(m_socket, SIGNAL(connected()), this, SLOT(socketConnectedSlot()));
    QObject::connect(m_socket, SIGNAL(disconnected()), this, SLOT(socketDisconnectedSlot()));
    QObject::connect(m_socket, SIGNAL(error(QLocalSocket::LocalSocketError)), this, SLOT(socketErrorSlot(QLocalSocket::LocalSocketError)));
}

LocalSocket::~LocalSocket()
{
    m_socket->disconnectFromServer();
    delete m_socket;
    m_socket = NULL;
}

void LocalSocket::ConnectToServer(const QString &strServerName)
{
    m_socket->connectToServer("LocalServer");
    if(m_socket->waitForConnected())
    {
        Q_UNUSED(strServerName)
    }
}

void LocalSocket::sendMessage(const QString &msg)
{
    m_socket->write(msg.toStdString().c_str());
    m_socket->flush();

    if(!m_socket->bytesAvailable())
        m_socket->waitForReadyRead();

    QTextStream stream(m_socket);
    QString respond = stream.readAll();
    qDebug() << "Read data from server: " << respond;
}

void LocalSocket::socketConnectedSlot()
{
    qDebug() << "connected";
}

void LocalSocket::socketDisconnectedSlot()
{
    qDebug() << "disconnected";
}

void LocalSocket::socketErrorSlot(QLocalSocket::LocalSocketError error)
{
    qWarning() << error;

}

