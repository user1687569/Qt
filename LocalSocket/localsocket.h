#ifndef LOCALSOCKET_H
#define LOCALSOCKET_H

#include <QObject>
#include <QLocalServer>
#include <QLocalSocket>
#include <QString>
#include <QDebug>

class LocalSocket : public QObject
{
    Q_OBJECT
public:
    explicit LocalSocket(QObject *parent = nullptr);
    ~LocalSocket();

    void ConnectToServer(const QString &strServerName);
    void sendMessage(const QString &msg);

private slots:
    void socketConnectedSlot();
    void socketDisconnectedSlot();
    void socketErrorSlot(QLocalSocket::LocalSocketError error);

private:
    QLocalSocket *m_socket;
};

#endif // LocalSocket_H
