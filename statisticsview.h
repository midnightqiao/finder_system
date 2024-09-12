#ifndef STATISTICSVIEW_H
#define STATISTICSVIEW_H

#include <QTableView>
#include <QSqlTableModel>

namespace Ui {
class StatisticsView;
}

class StatisticsView : public QTableView
{
    Q_OBJECT

public:
    explicit StatisticsView(QWidget *parent = nullptr);
    ~StatisticsView();
    void updateStatistic();

private:
    QSqlTableModel* model;
    Ui::StatisticsView *ui;
};

#endif // STATISTICSVIEW_H
