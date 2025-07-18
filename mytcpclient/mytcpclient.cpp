#include "mytcpclient.h"

MyTcpClient::MyTcpClient(QObject *parent)
    : QObject{parent}, socket(new QTcpSocket(this))
{
    connect(socket, &QTcpSocket::connected, this, &MyTcpClient::onConnected);
    connect(socket, &QTcpSocket::readyRead, this, &MyTcpClient::onReadyRead);

    socket->connectToHost("127.0.0.1", 1234);
}

void MyTcpClient::onConnected() {
    qDebug() << "Connected to server.";
    socket->write("hi server");
}

void MyTcpClient::onReadyRead() {
    QByteArray response = socket->readAll();
    qDebug() << "Server response:" << response;

    socket->disconnectFromHost();
}
