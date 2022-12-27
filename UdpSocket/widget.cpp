#include "widget.h"
#include "ui_widget.h"
#include <QByteArray>

#if 0
#define SOURCE_PORT   8888
#define TARGET_PORT   8889
#else
#define SOURCE_PORT   8889
#define TARGET_PORT   8888
#endif

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    udpSocket = new QUdpSocket(this);

    ui->abortBtn->setEnabled(false);

    connect(udpSocket, SIGNAL(readyRead()), this, SLOT(on_readPendingDatagrams()));
    connect(udpSocket, SIGNAL(stateChanged(QAbstractSocket::SocketState)),
            this, SLOT(on_stateChanged(QAbstractSocket::SocketState)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_bindBtn_clicked()
{
    ui->bindBtn->setEnabled(false);
    ui->abortBtn->setEnabled(true);

    udpSocket->bind(SOURCE_PORT);
}

void Widget::on_abortBtn_clicked()
{
    udpSocket->abort();
    ui->bindBtn->setEnabled(true);
    ui->abortBtn->setEnabled(false);
}

void Widget::on_sendMsgBtn_clicked()
{
    ui->textBrowser->append("发送: " + ui->lineEdit->text());
    udpSocket->writeDatagram(ui->lineEdit->text().toUtf8(), QHostAddress("127.0.0.1"), TARGET_PORT);
}

void Widget::on_broadMsgBtn_clicked()
{
    ui->textBrowser->append("发送: " + ui->lineEdit->text());
    udpSocket->writeDatagram(ui->lineEdit->text().toUtf8(), QHostAddress::Broadcast, TARGET_PORT);
}

void Widget::on_readPendingDatagrams()
{
    QByteArray tmpByteArray;

    tmpByteArray.resize(udpSocket->pendingDatagramSize());
    QHostAddress ipaddr;
    quint16 port;

    while(udpSocket->hasPendingDatagrams())
    {
        udpSocket->readDatagram(tmpByteArray.data(), tmpByteArray.size(), &ipaddr, &port);
        ui->textBrowser->append("接收来自: " + QHostAddress(ipaddr.toIPv4Address()).toString() +
                                ": " + QString::number(port) + ", " + tmpByteArray);
    }
}

void Widget::on_stateChanged(QAbstractSocket::SocketState socketState)
{
    switch(socketState)
    {
    case QAbstractSocket::BoundState:
        ui->textBrowser->append(QString("socket状态: BoundState. Bind port:%1").arg(SOURCE_PORT));
        break;
    default:
        break;
    }
}
