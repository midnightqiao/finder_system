#ifndef TCPCONNECT_H
#define TCPCONNECT_H

#include <QObject>
#include <QTcpSocket>
#include <QTcpServer>

class TcpConnect : public QObject
{
    Q_OBJECT
public:
    explicit TcpConnect(QObject *parent = nullptr);
    QTcpServer* server;
    QTcpSocket* socket;
signals:


};

#endif // TCPCONNECT_H
