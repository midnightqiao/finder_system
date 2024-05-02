#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>
#include "registerpage.h"



namespace Ui {
class LoginPage;
}

class LoginPage : public QWidget
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = nullptr);
    ~LoginPage();

    RegisterPage registerPage;

private slots:
    void on_btn_login_clicked();

    void on_btn_forget_clicked();

signals:
    void loginSuccessSignal();

private:
    Ui::LoginPage *ui;
};

#endif // LOGINPAGE_H
