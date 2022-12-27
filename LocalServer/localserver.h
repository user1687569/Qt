#ifndef LOCALSERVER_H
#define LOCALSERVER_H

#include <QObject>
#include <QLocalServer>
#include <QLocalSocket>

class LocalServer : public QObject
{
    Q_OBJECT
public:
    explicit LocalServer(QObject *parent = nullptr);
    ~LocalServer();

    void RunServer();

private slots:
    void onNewConnectionSlot();
    void readyReadSlot();

private:
    QLocalServer *m_server;
};

#endif // LOCALSERVER_H
