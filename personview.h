#ifndef PERSONVIEW_H
#define PERSONVIEW_H

#include <QTableView>
#include <QSqlTableModel>

namespace Ui {
class personView;
}

class PersonView : public QTableView
{
    Q_OBJECT

public:
    explicit PersonView(QWidget *parent = nullptr);
    ~PersonView();

    void updatePerson();


private:
    Ui::personView *ui;
    QSqlTableModel model;
};

#endif // PERSONVIEW_H
