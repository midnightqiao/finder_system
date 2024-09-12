#include "additempage.h"
#include "ui_additempage.h"
#include "tcpconnect.h"
#include "singlesql.h"
#include <QMessageBox>


AddItemPage::AddItemPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddItemPage)
{
    ui->setupUi(this);

    connect(ui->btn_cancel,&QPushButton::clicked,this,[=](){
        setMessage("请刷卡");
        this->close();
    });
    connect(ui->btn_record,&QPushButton::clicked,this,[=](){
        if(this->id ==this->findId){
            SingleSql::getSql()->record(itemName);
            QMessageBox::information(this,"登记成功","物品记录已登记");
            this->findId.clear();
            setMessage("请刷卡");
            this->hide();
        }else{
            QMessageBox::warning(this,"登记失败","该物品与所找物品不同");
            return;
        }
    });
}

AddItemPage::~AddItemPage()
{
    delete ui;
}

void AddItemPage::findOneID(QString id)
{

    this->findId = id;
    if(this->findId ==this->id){
        setMessage("已找到该物品");
    }else{
        setMessage("不是该物品，请刷对应的卡登记");
    }
}

void AddItemPage::setID(QString id)
{

    this->id = id;
    if(this->findId ==this->id){
        setMessage("已找到该物品");
    }else{
        setMessage("不是该物品，请刷对应的卡登记");
    }
}

void AddItemPage::setItemPos(QString pos)
{
    ui->lbl_pos->setText(pos);
}

void AddItemPage::setItemPos(QStringList pos)
{
    QString text;
    for (QStringList::iterator iter = pos.begin();iter!=pos.end();iter++) {
        text +=*iter;
        text +=' ';
    }
    ui->lbl_pos->setText(text);
}

void AddItemPage::setItemName(QString itemName)
{
    this->itemName = itemName;
}



void AddItemPage::setMessage(QString message)
{
    ui->lbl_message->setText(message);
}
