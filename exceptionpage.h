#ifndef EXCEPTIONPAGE_H
#define EXCEPTIONPAGE_H

#include <QWidget>

namespace Ui {
class ExceptionPage;
}

class ExceptionPage : public QWidget
{
    Q_OBJECT

public:
    explicit ExceptionPage(QWidget *parent = nullptr,QString id=QString(),QString name=QString());
    ~ExceptionPage();

    QString id;
    QString name;
    QString pos;

    void setAttribution(QString id,QString name);

    void updateRecord();

private:
    Ui::ExceptionPage *ui;
};

#endif // EXCEPTIONPAGE_H
