#include "widget.h"
#include "ui_widget.h"
#include <QHostAddress>
#include <QList>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    tcpServer = new QTcpServer(this);
    this->setWindowTitle("服务端");

    connect(tcpServer, SIGNAL(newConnection()), this, SLOT(onNewConnection()));
    ui->stopListenBtn->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startListenBtn_clicked()
{
    //开始监听，绑定Ip地址和端口
    tcpServer->listen(QHostAddress("192.168.56.108"), 9999);
    ui->textBrowser->append("服务端: 监听的Ip地址和端口: 192.168.56.108:9999");
    ui->startListenBtn->setEnabled(false);
    ui->stopListenBtn->setEnabled(true);
}

void Widget::on_stopListenBtn_clicked()
{
    //停止监听
    tcpServer->close();
    ui->startListenBtn->setEnabled(true);
    ui->stopListenBtn->setEnabled(false);
}

void Widget::on_sendMsgBtn_clicked()
{
    QList <QTcpSocket *> socketList = tcpServer->findChildren<QTcpSocket *>();
    qDebug() << "tcpSocket 数量: " << socketList.count() << endl;

    if(socketList.count() == 0)
    {
        ui->textBrowser->append("当前没有客户端连接，请先与客户端连接!");
        return;
    }

    foreach(QTcpSocket *tmpTcpSocket, socketList)
    {
        //服务端向每个客户端发送消息
        tmpTcpSocket->write(ui->lineEdit->text().toUtf8());
    }
    ui->textBrowser->append("服务端: " + ui->lineEdit->text());
}

void Widget::onNewConnection()
{
    //与客户端连接
    QTcpSocket *tmpTcpSocket = tcpServer->nextPendingConnection();

    //客户端的Ip地址
    QString ipaddr = tmpTcpSocket->peerAddress().toString();
    quint16 port = tmpTcpSocket->peerPort();

    //打印客户端连接的Ip地址和端口
    ui->textBrowser->append("服务端: 客户端的Ip地址和端口: " + ipaddr + ": " + QString::number(port));

    connect(tmpTcpSocket, SIGNAL(readyRead()), this, SLOT(onReceiveMessages()));
    connect(tmpTcpSocket, SIGNAL(stateChanged(QAbstractSocket::SocketState)),
            this, SLOT(onStateChanged(QAbstractSocket::SocketState)));
}

void Widget::onReceiveMessages()
{
    QTcpSocket *tmpTcpSocket = (QTcpSocket *)sender();
    //接收消息
    ui->textBrowser->append("客户端: " + tmpTcpSocket->readAll());
}

void Widget::onStateChanged(QAbstractSocket::SocketState state)
{
    QTcpSocket *tmpTcpSocket = (QTcpSocket *)sender();

    switch(state)
    {
    case QAbstractSocket::UnconnectedState:
        ui->textBrowser->append("服务端: 客户端断开连接");
        tmpTcpSocket->deleteLater();
        break;
    case QAbstractSocket::ConnectedState:
        ui->textBrowser->append("服务端: 客户端已连接");
        break;
    default:
        break;
    }
}







