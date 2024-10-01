/********************************************************************************
** Form generated from reading UI file 'statisticsview.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICSVIEW_H
#define UI_STATISTICSVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatisticsView
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *StatisticsView)
    {
        if (StatisticsView->objectName().isEmpty())
            StatisticsView->setObjectName(QString::fromUtf8("StatisticsView"));
        StatisticsView->resize(816, 417);
        pushButton = new QPushButton(StatisticsView);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(560, 0, 91, 61));
        pushButton_2 = new QPushButton(StatisticsView);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(560, 100, 91, 61));

        retranslateUi(StatisticsView);

        QMetaObject::connectSlotsByName(StatisticsView);
    } // setupUi

    void retranslateUi(QWidget *StatisticsView)
    {
        StatisticsView->setWindowTitle(QCoreApplication::translate("StatisticsView", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("StatisticsView", "\345\257\274\345\207\272Excel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("StatisticsView", "\346\233\264\346\226\260\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StatisticsView: public Ui_StatisticsView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICSVIEW_H
