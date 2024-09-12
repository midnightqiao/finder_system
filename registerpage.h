#ifndef REGISTERPAGE_H
#define REGISTERPAGE_H

#include <QWidget>

namespace Ui {
class RegisterPage;
}

class RegisterPage : public QWidget
{
    Q_OBJECT

public:
    explicit RegisterPage(QWidget *parent = nullptr);
    ~RegisterPage();

signals:
    void goLoginSignal();

private slots:
    void on_btn_forget_clicked();

    void on_btn_login_clicked();

private:
    Ui::RegisterPage *ui;
};

#endif // REGISTERPAGE_H
