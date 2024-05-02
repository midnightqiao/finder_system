#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sqlconnect.h"
#include "singlesql.h"
#include "loginpage.h"
#include <QStringList>
#include <QDateTime>
#include <QToolButton>
#include <QGridLayout>
#include <QMessageBox>
#include <QAction>
#include <QTableView>
#include <QSqlQueryModel>

//不使用git add 添加到暂存区，直接git commit提交本地仓库，会把变动的直接提交

//当前使用的是other分支

//现在使用another分支进行修改

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow()),timer(this),runtime(0),addItemPage(this),tcp(new TcpConnect())
{
    ui->setupUi(this);

    setWindowIcon(QIcon(":/res/pic/favicon.ico"));

    loginPage.show();


    connect(&loginPage,&LoginPage::loginSuccessSignal,this,[=](){
        mainPageInit();
    });




}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::mainPageInit()
{
    setWindowTitle("老人寻物系统");
    setMinimumSize(1200,900);
    resize(1500,1100);

    ui->lbl_userName->setText(SingleSql::getSql()->searchUsernameByID(SingleSql::getSql()->IDNumber));

    ui->lbl_hardware->setText("硬件状态: 未连接");

    connect(tcp->server,&QTcpServer::newConnection,this,[=](){
//        if(tcp->socket == nullptr){
            tcp->socket = tcp->server->nextPendingConnection();
            ui->lbl_hardware->setText("硬件状态: 已连接");
            connect(tcp->socket,&QTcpSocket::readyRead,this,[=](){
                QString msg = tcp->socket->readAll();
                addItemPage.findOneID(msg);
                QMessageBox::information(this,"获得消息",msg);
            });
            connect(tcp->socket,&QTcpSocket::disconnected,this,[=](){
                tcp->socket = nullptr;
                ui->lbl_hardware->setText("硬件状态: 未连接");
            });
//        }


//        connect(tcp->socket,&QTcpSocket::stateChanged,this,[=](){
//            if(tcp->socket->state()==QTcpSocket::ConnectedState){

//            }else{
//                ui->lbl_hardware->setText("硬件状态: 未连接");
//            }
//        });
    });

    changeStackedPage();

    showItem();

    addItem();

    setTime();

    show();

    delItem();

    addPosition();

    delPosition();

    addPerson();

    personPageInit();

    delPerson();
}

void MainWindow::showItem()
{
    QWidget* w = new QWidget();
    QStringList items = SingleSql::getSql()->showItem();
    QGridLayout* layout = new QGridLayout();

    int i=0;
    int j=0;
    for(QStringList::ConstIterator itemIter=items.cbegin();itemIter!=items.cend();itemIter++)
    {

        QToolButton* toolbtn = new QToolButton(w);
        toolbtn->setPopupMode(QToolButton::InstantPopup);
        toolbtn->setFixedSize(200,200);
        toolbtn->setText(*itemIter);
        QAction* find = new QAction("查找");
        QAction* record= new QAction("记录");
        QAction* exception = new QAction("位置异常");
        QStringList list = toolbtn->text().split('#');
        QString name;
        QString id= toolbtn->text().split('#')[0];
        if(list.count()>=2){
            name = toolbtn->text().split('#')[1];
        }
        toolbtn->addAction(find);
        toolbtn->addAction(exception);
        toolbtn->addAction(record);
        connect(toolbtn,&QToolButton::triggered,this,[=](QAction* act){
            if(act==find){
                qDebug()<<"toolbtn:"<<toolbtn->text()<<"action:"<<"find";
                if(searchItem(name)){
//                    if(tcp->socket!=nullptr){
//                        QString text("A");
//                        if(id == "1"){
//                            text+="1000Z";
//                        }else if(id == "2"){
//                            text+="0100Z";
//                        }else if(id == "3"){
//                            text+="0010Z";
//                        }else if(id == "4"){
//                            text+="0001Z";
//                        }
//                        tcp->socket->write(text.toUtf8());
//                        qDebug()<<"tcp发送成功";
//                    }
                    addItemPage.setID(id);
                    addItemPage.setItemName(name);
                    addItemPage.setItemPos(SingleSql::getSql()->searchItem(name));

                    addItemPage.findOneID(QString());
                    addItemPage.show();
                }
            }else if(act==record){
                getRecord(name);
                qDebug()<<"toolbtn:"<<toolbtn->text()<<"action:"<<"record";
            }else if(act==exception){
                if(SingleSql::getSql()->getPosByID(id).isEmpty()){
                    QMessageBox::warning(this,"位置错误","该物品位置未在系统记录中");
                    return;
                }
                qDebug()<<"toolbtn:"<<toolbtn->text()<<"action:"<<"exception";
                exceptionDealing(id,name);
            }
        });

        QFont font;
        font.setPointSize(20);
        toolbtn->setFont(font);
        toolbtn->setText(*itemIter);
        layout->addWidget(toolbtn,i,j);
        j++;
        if(j==3){
            i+=1;
            j=0;
        }
    }
    for (i=0;i<layout->columnCount();i++) {
        layout->setColumnMinimumWidth(i,200);
    }
    for (i=0;i<layout->rowCount();i++) {
        layout->setRowMinimumHeight(i,200);
    }


    QWidget* old ;
    if((old=ui->scrollArea->takeWidget()) != nullptr)
    {
        delete old;
    }
    w->setLayout(layout);
    ui->scrollArea->setWidget(w);
//    if(ui->scrollAreaWidgetContents->layout() != nullptr)
//    {
//        delete ui->scrollAreaWidgetContents->layout();
//    }
//    ui->scrollAreaWidgetContents->setLayout(layout);
}

void MainWindow::addItem()
{
    connect(ui->btn_item_add,&QPushButton::clicked,this,[=](){

        if(ui->lE_item_add_id->text().isEmpty()||ui->lE_item_add_name->text().isEmpty()){
            QMessageBox::warning(this,"信息缺失","添加失败，物品信息不完整");
            return 0;
        }
        bool res = SingleSql::getSql()->addItem(ui->lE_item_add_id->text(),QString(),ui->lE_item_add_name->text());
        if(res == false)
        {
//            QMessageBox::warning(this,"新增物品","新增物品失败");
            QMessageBox::warning(this,"新增物品",QString("ID为 %1 的物品已被其他用户使用，请使用其他ID对应的设备").arg(ui->lE_item_add_id->text()));

            return 0;
        }
        QString name = ui->lE_item_add_name->text();
        QMessageBox::information(this,"新增物品",name.append("物品已添加到系统中"));
        ui->lE_item_add_id->clear();
        ui->lE_item_add_name->clear();
        showItem();
        return  0;
    });
}

void MainWindow::setTime()
{
    timer.setInterval(1000);
    timer.start();
    connect(&timer,&QTimer::timeout,this,[=](){
        runtime ++;
        QString text = "系统时间:";
        text += QDateTime::currentDateTime().toString();
        ui->lbl_time->setText(text);
        QString rtime = "运行时间:";
        QString s = QString::number(runtime%60);
        s += "s ";
        QString m = QString::number((runtime/60)%60);
        m += "min ";
        QString h = QString::number((runtime/3600)%24);
        h += "h ";
        QString d = QString::number((runtime/(3600*24)));
        d += "d ";
        if(runtime <60){
            rtime +=s;
        }else if(runtime <3600){
            rtime += m;
            rtime += s;
        }else if(runtime <3600*24){
            rtime +=h;
            rtime += m;
            rtime += s;
        }else{
            rtime += d;
            rtime +=h;
            rtime += m;
            rtime += s;
        }
        ui->lbl_runtime->setText(rtime);
    });
}

bool MainWindow::searchItem(QString itemName)
{
    QStringList pos = SingleSql::getSql()->searchItem(itemName);
    if(pos.isEmpty()){
        qDebug()<<"该物品暂未被放置";
        QMessageBox::information(this,itemName.append("物品位置"),"暂无该物品存放");
        return false;
    }else{
        QString text = "该物品被存放在：";
        for (QStringList::const_iterator iter=pos.cbegin();iter != pos.cend();iter++) {
            text += *iter;
            text += ",";
        }
        text += " 您可以去这些位置找找";
        qDebug()<<"该物品被存放在："<<pos<<" 您可以去这些位置找找";
        qDebug()<<"2"<<text;
        QMessageBox::information(this,itemName.append("物品位置"),text);
        return true;
    }
}

void MainWindow::getRecord(QString itemName)
{
    qDebug()<<"getRecord";
    QMainWindow* w = new QMainWindow(this);
    w->resize(1200,900);

    QString title = itemName;
    w->setWindowTitle(title.append("记录"));

    QTableView* view = new QTableView(this);

    QSqlQueryModel* model = new QSqlQueryModel(this);

    QString text = QString("select Tag.TagID,Tag.ItemName,record.SetStorage,record.ActualStorage,record.SearchDateTime,record.IsException from Tag,record where Tag.TagID = record.TagID and Tag.ItemName = '%1' and Tag.IDNumber= '%2' order by record.SearchDateTime desc;").arg(itemName).arg(SingleSql::getSql()->IDNumber);

    QSqlQuery q(text);

    model->setQuery(text);


    model->setHeaderData(0,Qt::Horizontal,"物品ID");
    model->setHeaderData(1,Qt::Horizontal,"物品名称");
    model->setHeaderData(2,Qt::Horizontal,"设置存放位置");
    model->setHeaderData(3,Qt::Horizontal,"实际存放位置");
    model->setHeaderData(4,Qt::Horizontal,"记录时间");
    model->setHeaderData(5,Qt::Horizontal,"异常情况");


    view->setModel(model);

    view->resizeColumnsToContents();

    w->setCentralWidget(view);

    w->show();

}

void MainWindow::delItem()
{

    connect(ui->btn_item_del,&QPushButton::clicked,this,[=](){
        if(ui->lE_item_del_id->text().isEmpty()){
            QMessageBox::warning(this,"信息缺失","删除失败，删除物品ID不能为空");
            return 0;
        }
        if(SingleSql::getSql()->searchItemByID(ui->lE_item_del_id->text())){
            qDebug()<<"已找到该id物品";
            if(SingleSql::getSql()->delItemByID(ui->lE_item_del_id->text())){
                QMessageBox::information(this,"信息更改",QString("删除成功，ID为%1的物品已从系统中移除").arg(ui->lE_item_del_id->text()));
                ui->lE_item_del_id->clear();
                showItem();
            }else{
                QMessageBox::warning(this,"操作失败",QString("删除失败，ID为%1的物品未删除").arg(ui->lE_item_del_id->text()));
            }

        }else{
            QMessageBox::warning(this,"物品情况",QString("系统中不存在ID为 %1 的物品").arg(ui->lE_item_del_id->text()));
        }
        return  0;
    });

}

void MainWindow::addPosition()
{
    connect(ui->btn_pos_set,&QPushButton::clicked,this,[=](){
        if(ui->lE_pos_add_id->text().isEmpty()||ui->lE_pos_add_pos->text().isEmpty()){
            QMessageBox::warning(this,"信息缺失","添加失败，物品ID和位置不能为空");
            return 0;
        }
        if(!SingleSql::getSql()->searchItemByID(ui->lE_pos_add_id->text())){
            QMessageBox::warning(this,"添加失败",QString("系统中不存在ID为 %1 的物品").arg(ui->lE_pos_add_id->text()));
            return 0;
        }
        if(SingleSql::getSql()->addPosition(ui->lE_pos_add_id->text(),ui->lE_pos_add_pos->text())){
            QMessageBox::information(this,"信息更改",QString("添加成功，ID为%1的物品在系统中的位置为%2").arg(ui->lE_pos_add_id->text()).arg(ui->lE_pos_add_pos->text()));
            ui->lE_pos_add_id->clear();
            ui->lE_pos_add_pos->clear();
        }
        return 0;
    });

}

void MainWindow::delPosition()
{
    connect(ui->btn_pos_clr,&QPushButton::clicked,this,[=](){
        QString id = ui->lE_pos_del_pos->text();
        if(id.isEmpty()){
            QMessageBox::warning(this,"信息缺失","删除失败，物品ID不能为空");
            return 0;
        }
        if(!SingleSql::getSql()->searchItemByID(id)){
            QMessageBox::warning(this,"删除失败",QString("系统中不存在ID为 %1 的物品").arg(id));
            return 0;
        }
        if(SingleSql::getSql()->delPosition(id)){
            QMessageBox::information(this,"信息更改",QString("ID为 %1 的物品位置已从系统移除").arg(id));
            showItem();
            return 0;
        }
        return 0;
    });

}

void MainWindow::addPerson()
{
    connect(ui->btn_per_add,&QPushButton::clicked,this,[=](){

        QString id = ui->lE_per_add_id->text();
        QString name = ui->lE_per_add_name->text();
        QString gender = (ui->rB_man->isChecked())?"男":"女";
        int age = ui->sB_age->value();
        QString memory = ui->lE_per_add_mem->text();

        if(name.isEmpty()||id.isEmpty()){
            QMessageBox::warning(this,"信息缺失","人员名字和id不能为空");
            return 0;
        }
        QString text("姓名:");
        text+=name;
        text+=" ID:";
        text+=id;
        text+=" 成功录入系统";
        if(SingleSql::getSql()->addPerson(name,id,gender,age,memory)){
            QMessageBox::information(this,"信息更改",text);
            personPageRefresh();
            return 0;
        }
        return 0;
    });

}

void MainWindow::personPageRefresh()
{
    ui->rB_man->setChecked(true);
    ui->sB_age->setValue(60);

    ui->lE_per_add_id->clear();
    ui->lE_per_add_mem->clear();
    ui->lE_per_add_name->clear();

}

void MainWindow::personPageInit()
{
    connect(ui->rB_man,&QRadioButton::clicked,this,[=](){
        ui->sB_age->setValue(60);
    });
    connect(ui->rB_woman,&QRadioButton::clicked,this,[=](){
        ui->sB_age->setValue(55);
    });
    ui->sB_age->setRange(0,150);
    personPageRefresh();

}

void MainWindow::delPerson()
{

    connect(ui->btn_per_del,&QPushButton::clicked,this,[=](){

        QString id = ui->lE_per_del_id->text();

        if(id.isEmpty()){
            QMessageBox::warning(this,"信息缺失","待删除id不能为空");
            return 0;
        }
        QString text("ID:");
        text += id;
        text+="的人员信息已从系统中移除";
        if(SingleSql::getSql()->delPersonByID(id)){
            QMessageBox::information(this,"信息更改",text);
            ui->lE_per_del_id->clear();
            return 0;
        }
        return 0;
    });
}

void MainWindow::exceptionDealing(QString id,QString name)
{
    exceptionPage.setAttribution(id,name);
    exceptionPage.show();
}

void MainWindow::changeStackedPage()
{


    ui->stackedWidget->setCurrentIndex(0);

    ui->tabWidget->setCurrentIndex(0);
    connect(ui->btn_welcom,&QPushButton::clicked,ui->stackedWidget,[=](){
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->btn_show,&QPushButton::clicked,ui->stackedWidget,[=](){
        ui->stackedWidget->setCurrentIndex(1);
    });
    connect(ui->btn_add,&QPushButton::clicked,ui->stackedWidget,[=](){
        ui->stackedWidget->setCurrentIndex(2);

    });
    connect(ui->btn_statistics,&QPushButton::clicked,ui->stackedWidget,[=](){

        ui->stackedWidget->setCurrentIndex(3);
        SingleSql::getSql()->updateStatistics();
        StatisticsView* view =qobject_cast<StatisticsView*>(ui->stackedWidget->currentWidget()) ;
        if(view != nullptr)
            view->updateStatistic();
        qDebug()<<" view数据更新";

    });

    connect(ui->tabWidget,&QTabWidget::currentChanged,this,[=](){
        if(ui->tabWidget->currentIndex()==3){
            PersonView* view = qobject_cast<PersonView*>(ui->tabWidget->currentWidget());
            if(view != nullptr){
                view->updatePerson();
            }
        }
    });

    if(SingleSql::getSql()->IDNumber!="111"){
        qDebug()<<SingleSql::getSql()->account;
        ui->tabWidget->removeTab(3);
        ui->tabWidget->removeTab(2);
    }

    exceptionPage.hide();

//    ui->lbl_time->setText(QDateTime::currentDateTime().toString());
}
