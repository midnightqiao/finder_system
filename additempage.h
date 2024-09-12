#ifndef ADDITEMPAGE_H
#define ADDITEMPAGE_H

#include <QDialog>
#include <QString>
#include <QStringList>
namespace Ui {
class AddItemPage;
}

class AddItemPage : public QDialog
{
    Q_OBJECT

public:
    explicit AddItemPage(QWidget *parent = nullptr);
    ~AddItemPage();

    void findOneID(QString id);

    void setID(QString id);

    void setItemPos(QString pos);

    void setItemPos(QStringList pos);

    void setItemName(QString itemName);

    void setMessage(QString message);

private:
    Ui::AddItemPage *ui;

    QString id;
    QString findId;//正在刷卡的id
    QString itemName;
};

#endif // ADDITEMPAGE_H
