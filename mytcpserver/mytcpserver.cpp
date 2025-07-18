#include "mytcpserver.h"
#include <QDebug>


mytcpserver::mytcpserver(QObject *parent)
    : QObject{parent},
    server(new QTcpServer(this))
{
    connect(server, &QTcpServer::newConnection, this, &mytcpserver::onNewConnection);

    if (server->listen(QHostAddress::Any, 1234)) {
        qDebug() << "Server listening on port 1234...";
    } else {
        qDebug() << "Server failed to start!";
    }
}

mytcpserver::~mytcpserver() {
    server->close();
}

void mytcpserver::onNewConnection() {
    clientSocket = server->nextPendingConnection();
    qDebug() << "New client connected.";

    connect(clientSocket, &QTcpSocket::readyRead, this, &mytcpserver::onReadyRead);
}

void mytcpserver::onReadyRead() {
    QByteArray data = clientSocket->readAll();
    qDebug() << "Received:" << data;

    QByteArray response = "peyamet resid: " + data;
    clientSocket->write(response);
}
