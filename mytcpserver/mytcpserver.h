#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

class mytcpserver : public QObject
{
    Q_OBJECT
public:
    explicit mytcpserver(QObject *parent = nullptr);
    ~mytcpserver();

public slots:
    void onNewConnection();
    void onReadyRead();

private:
    QTcpServer* server;
    QTcpSocket* clientSocket;

signals:
};

#endif // MYTCPSERVER_H
