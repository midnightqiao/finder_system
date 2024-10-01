/********************************************************************************
** Form generated from reading UI file 'additempage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEMPAGE_H
#define UI_ADDITEMPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddItemPage
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *lbl_pos;
    QLabel *lbl_message;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_cancel;
    QPushButton *btn_record;

    void setupUi(QWidget *AddItemPage)
    {
        if (AddItemPage->objectName().isEmpty())
            AddItemPage->setObjectName(QString::fromUtf8("AddItemPage"));
        AddItemPage->resize(476, 417);
        verticalLayout = new QVBoxLayout(AddItemPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(AddItemPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lbl_pos = new QLabel(widget);
        lbl_pos->setObjectName(QString::fromUtf8("lbl_pos"));
        lbl_pos->setFont(font);

        horizontalLayout->addWidget(lbl_pos);


        verticalLayout->addWidget(widget);

        lbl_message = new QLabel(AddItemPage);
        lbl_message->setObjectName(QString::fromUtf8("lbl_message"));
        QFont font1;
        font1.setPointSize(15);
        lbl_message->setFont(font1);

        verticalLayout->addWidget(lbl_message);

        widget_2 = new QWidget(AddItemPage);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_cancel = new QPushButton(widget_2);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setFont(font1);

        horizontalLayout_2->addWidget(btn_cancel);

        btn_record = new QPushButton(widget_2);
        btn_record->setObjectName(QString::fromUtf8("btn_record"));
        btn_record->setFont(font1);

        horizontalLayout_2->addWidget(btn_record);


        verticalLayout->addWidget(widget_2);

        QWidget::setTabOrder(btn_cancel, btn_record);

        retranslateUi(AddItemPage);

        QMetaObject::connectSlotsByName(AddItemPage);
    } // setupUi

    void retranslateUi(QWidget *AddItemPage)
    {
        AddItemPage->setWindowTitle(QCoreApplication::translate("AddItemPage", "Form", nullptr));
        label->setText(QCoreApplication::translate("AddItemPage", "\345\276\205\346\237\245\346\211\276\347\211\251\345\223\201\344\275\215\347\275\256:", nullptr));
        lbl_pos->setText(QCoreApplication::translate("AddItemPage", "TextLabel", nullptr));
        lbl_message->setText(QCoreApplication::translate("AddItemPage", "\350\257\267\345\210\267\345\215\241", nullptr));
        btn_cancel->setText(QCoreApplication::translate("AddItemPage", "\345\217\226\346\266\210", nullptr));
        btn_record->setText(QCoreApplication::translate("AddItemPage", "\347\231\273\350\256\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddItemPage: public Ui_AddItemPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMPAGE_H
