#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_startListenBtn_clicked();
    void on_stopListenBtn_clicked();
    void on_sendMsgBtn_clicked();

private:
    Ui::Widget *ui;
    QTcpServer *tcpServer;

private slots:
    void onNewConnection();
    void onReceiveMessages();
    void onStateChanged(QAbstractSocket::SocketState state);

};

#endif // WIDGET_H
