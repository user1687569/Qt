#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QHostAddress>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    QTcpSocket *tcpSocket;

private slots:
    void on_connectBtn_clicked();

    void on_disconnectBtn_clicked();

    void on_sendMsgBtn_clicked();

    void onReceiveMessages();

    void onStateChanged(QAbstractSocket::SocketState);
};

#endif // WIDGET_H
