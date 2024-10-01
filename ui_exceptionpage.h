/********************************************************************************
** Form generated from reading UI file 'exceptionpage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCEPTIONPAGE_H
#define UI_EXCEPTIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExceptionPage
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *lbl_itemName;
    QLabel *label_3;
    QLabel *lbl_pos;
    QLabel *label_2;
    QLineEdit *lE_pos;
    QPushButton *btn_quit;
    QPushButton *btn_ok;

    void setupUi(QWidget *ExceptionPage)
    {
        if (ExceptionPage->objectName().isEmpty())
            ExceptionPage->setObjectName(QString::fromUtf8("ExceptionPage"));
        ExceptionPage->resize(637, 349);
        gridLayout = new QGridLayout(ExceptionPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(ExceptionPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lbl_itemName = new QLabel(widget);
        lbl_itemName->setObjectName(QString::fromUtf8("lbl_itemName"));
        lbl_itemName->setFont(font);

        horizontalLayout->addWidget(lbl_itemName);


        gridLayout->addWidget(widget, 0, 0, 1, 2);

        label_3 = new QLabel(ExceptionPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lbl_pos = new QLabel(ExceptionPage);
        lbl_pos->setObjectName(QString::fromUtf8("lbl_pos"));
        lbl_pos->setFont(font);

        gridLayout->addWidget(lbl_pos, 1, 1, 1, 1);

        label_2 = new QLabel(ExceptionPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lE_pos = new QLineEdit(ExceptionPage);
        lE_pos->setObjectName(QString::fromUtf8("lE_pos"));
        lE_pos->setFont(font);

        gridLayout->addWidget(lE_pos, 2, 1, 1, 1);

        btn_quit = new QPushButton(ExceptionPage);
        btn_quit->setObjectName(QString::fromUtf8("btn_quit"));
        btn_quit->setFont(font);

        gridLayout->addWidget(btn_quit, 3, 0, 1, 1);

        btn_ok = new QPushButton(ExceptionPage);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setFont(font);

        gridLayout->addWidget(btn_ok, 3, 1, 1, 1);


        retranslateUi(ExceptionPage);

        QMetaObject::connectSlotsByName(ExceptionPage);
    } // setupUi

    void retranslateUi(QWidget *ExceptionPage)
    {
        ExceptionPage->setWindowTitle(QCoreApplication::translate("ExceptionPage", "Form", nullptr));
        label->setText(QCoreApplication::translate("ExceptionPage", "\347\211\251\345\223\201\345\220\215\347\247\260", nullptr));
        lbl_itemName->setText(QCoreApplication::translate("ExceptionPage", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("ExceptionPage", "\344\277\235\345\255\230\344\275\215\347\275\256", nullptr));
        lbl_pos->setText(QCoreApplication::translate("ExceptionPage", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("ExceptionPage", "\345\256\236\351\231\205\344\275\215\347\275\256", nullptr));
        btn_quit->setText(QCoreApplication::translate("ExceptionPage", "\345\217\226\346\266\210", nullptr));
        btn_ok->setText(QCoreApplication::translate("ExceptionPage", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExceptionPage: public Ui_ExceptionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCEPTIONPAGE_H
