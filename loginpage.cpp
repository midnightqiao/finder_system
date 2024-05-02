#include "loginpage.h"
#include "ui_loginpage.h"
#include "singlesql.h"
#include <QMessageBox>

LoginPage::LoginPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginPage)
{
    ui->setupUi(this);
    connect(&registerPage,&RegisterPage::goLoginSignal,this,&QWidget::show);

    setWindowIcon(QIcon(":/res/pic/favicon.ico"));

}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_btn_login_clicked()
{
    if(ui->lineE_user_name->text().isEmpty()||ui->lineE_pwd->text().isEmpty()){
        QMessageBox::warning(this,"信息缺失","请完整的填写账号、密码");
        return ;
    }
    if(SingleSql::getSql()->login(ui->lineE_user_name->text(),ui->lineE_pwd->text()))
    {
        emit loginSuccessSignal();
        close();
    }
    else
    {
        QMessageBox::warning(this,"登录失败","账号或密码错误");
    }
}

void LoginPage::on_btn_forget_clicked()
{
    registerPage.show();
    close();
}
