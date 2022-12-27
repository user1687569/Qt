#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("客户端");
    ui->disconnectBtn->setEnabled(false);

    tcpSocket = new QTcpSocket(this);
    connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(onReceiveMessages()));
    connect(tcpSocket, SIGNAL(stateChanged(QAbstractSocket::SocketState)),
            this, SLOT(onStateChanged(QAbstractSocket::SocketState)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_connectBtn_clicked()
{
    ui->textBrowser->append("客户端: 监听的Ip地址和端口: 192.168.56.108:9999");
    tcpSocket->connectToHost(QHostAddress("192.168.56.108"), 9999);
}

void Widget::on_disconnectBtn_clicked()
{
    tcpSocket->disconnectFromHost();
}

void Widget::on_sendMsgBtn_clicked()
{
    if(tcpSocket->state() == QAbstractSocket::ConnectedState)
    {
        tcpSocket->write(ui->lineEdit->text().toUtf8());
        ui->textBrowser->append("客户端: " + ui->lineEdit->text());
    }
    else
    {
        ui->textBrowser->append("请先与服务端连接!");
    }
}

void Widget::onReceiveMessages()
{
    //接收消息
    ui->textBrowser->append("服务端: " + tcpSocket->readAll());
}

void Widget::onStateChanged(QAbstractSocket::SocketState state)
{
    switch(state)
    {
    case QAbstractSocket::UnconnectedState:
        ui->textBrowser->append("客户端: 与服务端断开连接");
        ui->connectBtn->setEnabled(true);
        ui->disconnectBtn->setEnabled(false);
        break;
    case QAbstractSocket::ConnectedState:
        ui->textBrowser->append("客户端: 已连接服务端");
        ui->connectBtn->setEnabled(false);
        ui->disconnectBtn->setEnabled(true);
        break;
    default:
        break;
    }
}

