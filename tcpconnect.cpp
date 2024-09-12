#include "tcpconnect.h"
#include <QDebug>
#include <QMessageBox>

TcpConnect::TcpConnect(QObject *parent) : QObject(parent),server(new QTcpServer()),socket(nullptr)
{
    server->listen(QHostAddress::Any,8888);
//    connect(server,&QTcpServer::newConnection,this,[=](){
//        socket = server->nextPendingConnection();
////        connect(socket,&QTcpSocket::readyRead,this,[=](){
////           qDebug()<<"receive:"<<QString(socket->readAll());
////        });
//    });
}
