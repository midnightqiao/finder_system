#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <mysqlconnect.h>
#include <QDebug>
#include "loginpage.h"
#include <QTimer>
#include "exceptionpage.h"
#include "statisticsview.h"
#include "personview.h"
#include "additempage.h"
#include "tcpconnect.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    LoginPage loginPage;

    void changeStackedPage();

    void mainPageInit();

    void showItem();

    void addItem();

    void setTime();

    bool searchItem(QString itemName);

    void getRecord(QString itemName);

    void delItem();

    void addPosition();

    void delPosition();

    void addPerson();

    void personPageRefresh();

    void personPageInit();

    void delPerson();

    void exceptionDealing(QString id,QString name);




private:
    Ui::MainWindow *ui;
    QTimer timer;
    qlonglong runtime;
    ExceptionPage exceptionPage;
    AddItemPage addItemPage;
    TcpConnect* tcp;
};
#endif // MAINWINDOW_H
