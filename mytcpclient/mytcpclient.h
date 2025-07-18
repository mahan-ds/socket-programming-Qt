#ifndef MYTCPCLIENT_H
#define MYTCPCLIENT_H

#include <QObject>
#include <QTcpSocket>


class MyTcpClient : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpClient(QObject *parent = nullptr);

public slots:
    void onConnected();
    void onReadyRead();

private:
    QTcpSocket* socket;

signals:
};

#endif // MYTCPCLIENT_H
