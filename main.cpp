#include "mainwindow.h"

#include <QApplication>
#include "loginpage.h"
#include <QFile>
#include <singlesql.h>
#include <QMessageBox>
#include "registerpage.h"
#include "exceptionpage.h"
#include "tcpconnect.h"

void loginPageInit();
void sqlConnectInit();

//从远程库拉到本地库

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    sqlConnectInit();
    loginPageInit();

    MainWindow w;

    TcpConnect tcp;



    return a.exec();
}






void loginPageInit()
{
    QFile file(":/res/qss/style-1.qss");/*QSS文件所在的路径*/
    file.open(QFile::ReadOnly);
    QTextStream filetext(&file);
    QString stylesheet = filetext.readAll();
    qApp->setStyleSheet(stylesheet);
    file.close();
}

void sqlConnectInit()
{
    if(SingleSql::getSql()->connect2Sql()){
        qDebug()<<"连接成功"<<endl;
    }else{
        qDebug()<<"连接失败:"<<SingleSql::getSql()->returnError();
        QMessageBox::warning(nullptr,"数据库连接错误",SingleSql::getSql()->returnError());
    }
}
