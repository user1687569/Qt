#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QUdpSocket>

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
    void on_bindBtn_clicked();

    void on_abortBtn_clicked();

    void on_sendMsgBtn_clicked();

    void on_broadMsgBtn_clicked();

    void on_readPendingDatagrams();

    void on_stateChanged(QAbstractSocket::SocketState);

private:
    Ui::Widget *ui;
    QUdpSocket *udpSocket;
};

#endif // WIDGET_H
