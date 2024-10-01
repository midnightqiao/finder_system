/********************************************************************************
** Form generated from reading UI file 'personview.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONVIEW_H
#define UI_PERSONVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_personView
{
public:

    void setupUi(QWidget *personView)
    {
        if (personView->objectName().isEmpty())
            personView->setObjectName(QString::fromUtf8("personView"));
        personView->resize(400, 300);

        retranslateUi(personView);

        QMetaObject::connectSlotsByName(personView);
    } // setupUi

    void retranslateUi(QWidget *personView)
    {
        personView->setWindowTitle(QCoreApplication::translate("personView", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class personView: public Ui_personView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONVIEW_H
