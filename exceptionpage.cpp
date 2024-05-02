#include "exceptionpage.h"
#include "ui_exceptionpage.h"
#include <QDebug>
#include "singlesql.h"
#include <QMessageBox>

ExceptionPage::ExceptionPage(QWidget *parent, QString id,QString name) :
    QWidget(parent),id(id),name(name),
    ui(new Ui::ExceptionPage)
{
    ui->setupUi(this);
    qDebug()<<this->id;

    setWindowIcon(QIcon(":/res/pic/favicon.ico"));

    connect(ui->btn_quit,&QPushButton::clicked,this,&ExceptionPage::hide);
    connect(ui->btn_ok,&QPushButton::clicked,this,&ExceptionPage::updateRecord);
}

ExceptionPage::~ExceptionPage()
{
    delete ui;
}

void ExceptionPage::setAttribution(QString id,QString name)
{
    this->id = id;
    this->name = name;
    this->pos = SingleSql::getSql()->getPosByID(id);

    ui->lbl_itemName->setText(name);
    ui->lbl_pos->setText(this->pos);
}

void ExceptionPage::updateRecord()
{
    QString actualPos = ui->lE_pos->text();
    if(actualPos.isEmpty()){
        QMessageBox::warning(nullptr,"信息缺失","物品实际位置不能为空");
        return;
    }
    if(SingleSql::getSql()->recordByID(this->id,actualPos)){
        QMessageBox::information(this,"信息更改","异常位置已成功记录");
        SingleSql::getSql()->updateStatistics();
        ui->lE_pos->clear();
        this->hide();
    }
}
