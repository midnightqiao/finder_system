#include "registerpage.h"
#include "ui_registerpage.h"
#include "singlesql.h"
#include <QMessageBox>
RegisterPage::RegisterPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegisterPage)
{
    ui->setupUi(this);

}

RegisterPage::~RegisterPage()
{
    delete ui;
}

void RegisterPage::on_btn_forget_clicked()
{
    close();
    emit goLoginSignal();
}

void RegisterPage::on_btn_login_clicked()
{
    if(ui->lineE_id->text().isEmpty()||ui->lineE_user_name->text().isEmpty()||ui->lineE_pwd->text().isEmpty()){
        QMessageBox::warning(this,"信息缺失","注册失败,请完整的填写注册信息");
        return;
    }
    if(SingleSql::getSql()->mregister(ui->lineE_id->text(),ui->lineE_user_name->text(),ui->lineE_pwd->text())){
        QMessageBox::warning(this,"注册成功","注册成功,请记住您的账号密码");
    }else{
        QMessageBox::warning(nullptr,"注册失败","该用户未在系统中登记，不能注册账号\n请联系管理员,加入系统");
    }
}
