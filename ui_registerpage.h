/********************************************************************************
** Form generated from reading UI file 'registerpage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERPAGE_H
#define UI_REGISTERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterPage
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame_login;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_login;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_user_name_2;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_24;
    QSpacerItem *horizontalSpacer_25;
    QFrame *frame_id;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_pwd_3;
    QLineEdit *lineE_id;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_20;
    QFrame *frame_user_name;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_21;
    QLabel *label_user_name;
    QLineEdit *lineE_user_name;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QFrame *frame_pwd;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_pwd;
    QLineEdit *lineE_pwd;
    QSpacerItem *horizontalSpacer_19;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *btn_forget;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *btn_login;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_8;

    void setupUi(QWidget *RegisterPage)
    {
        if (RegisterPage->objectName().isEmpty())
            RegisterPage->setObjectName(QString::fromUtf8("RegisterPage"));
        RegisterPage->resize(518, 618);
        gridLayout_2 = new QGridLayout(RegisterPage);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame_login = new QFrame(RegisterPage);
        frame_login->setObjectName(QString::fromUtf8("frame_login"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_login->sizePolicy().hasHeightForWidth());
        frame_login->setSizePolicy(sizePolicy);
        frame_login->setMinimumSize(QSize(500, 600));
        frame_login->setMaximumSize(QSize(500, 600));
        frame_login->setFrameShape(QFrame::StyledPanel);
        frame_login->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_login);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_4, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_login = new QLabel(frame_login);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(22);
        label_login->setFont(font);

        horizontalLayout->addWidget(label_login);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        frame_user_name_2 = new QFrame(frame_login);
        frame_user_name_2->setObjectName(QString::fromUtf8("frame_user_name_2"));
        frame_user_name_2->setFrameShape(QFrame::StyledPanel);
        frame_user_name_2->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_user_name_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalSpacer_24 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_24, 0, 0, 1, 1);

        horizontalSpacer_25 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_25, 0, 2, 1, 1);

        frame_id = new QFrame(frame_user_name_2);
        frame_id->setObjectName(QString::fromUtf8("frame_id"));
        frame_id->setFrameShape(QFrame::WinPanel);
        frame_id->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_id);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_16 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);

        label_pwd_3 = new QLabel(frame_id);
        label_pwd_3->setObjectName(QString::fromUtf8("label_pwd_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_pwd_3->sizePolicy().hasHeightForWidth());
        label_pwd_3->setSizePolicy(sizePolicy1);
        label_pwd_3->setMinimumSize(QSize(30, 30));
        label_pwd_3->setMaximumSize(QSize(30, 30));
        label_pwd_3->setStyleSheet(QString::fromUtf8("background-image: url(:/res/pic/user_name.png);"));

        horizontalLayout_8->addWidget(label_pwd_3);

        lineE_id = new QLineEdit(frame_id);
        lineE_id->setObjectName(QString::fromUtf8("lineE_id"));
        lineE_id->setEchoMode(QLineEdit::Password);
        lineE_id->setClearButtonEnabled(false);

        horizontalLayout_8->addWidget(lineE_id);


        gridLayout_3->addLayout(horizontalLayout_8, 0, 0, 1, 1);


        gridLayout_6->addWidget(frame_id, 0, 1, 1, 1);


        verticalLayout->addWidget(frame_user_name_2);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_20 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_20);

        frame_user_name = new QFrame(frame_login);
        frame_user_name->setObjectName(QString::fromUtf8("frame_user_name"));
        frame_user_name->setFrameShape(QFrame::StyledPanel);
        frame_user_name->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_user_name);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_21 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_21);

        label_user_name = new QLabel(frame_user_name);
        label_user_name->setObjectName(QString::fromUtf8("label_user_name"));
        sizePolicy1.setHeightForWidth(label_user_name->sizePolicy().hasHeightForWidth());
        label_user_name->setSizePolicy(sizePolicy1);
        label_user_name->setMinimumSize(QSize(30, 30));
        label_user_name->setMaximumSize(QSize(30, 30));
        label_user_name->setStyleSheet(QString::fromUtf8("border-image: url(:/res/pic/user_name.png);"));

        horizontalLayout_11->addWidget(label_user_name);

        lineE_user_name = new QLineEdit(frame_user_name);
        lineE_user_name->setObjectName(QString::fromUtf8("lineE_user_name"));

        horizontalLayout_11->addWidget(lineE_user_name);


        gridLayout_4->addLayout(horizontalLayout_11, 0, 0, 1, 1);


        horizontalLayout_10->addWidget(frame_user_name);

        horizontalSpacer_22 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_22);


        verticalLayout->addLayout(horizontalLayout_10);

        verticalSpacer_3 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        frame_pwd = new QFrame(frame_login);
        frame_pwd->setObjectName(QString::fromUtf8("frame_pwd"));
        frame_pwd->setFrameShape(QFrame::StyledPanel);
        frame_pwd->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_pwd);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_pwd = new QLabel(frame_pwd);
        label_pwd->setObjectName(QString::fromUtf8("label_pwd"));
        sizePolicy1.setHeightForWidth(label_pwd->sizePolicy().hasHeightForWidth());
        label_pwd->setSizePolicy(sizePolicy1);
        label_pwd->setMinimumSize(QSize(30, 30));
        label_pwd->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(label_pwd);

        lineE_pwd = new QLineEdit(frame_pwd);
        lineE_pwd->setObjectName(QString::fromUtf8("lineE_pwd"));
        lineE_pwd->setEchoMode(QLineEdit::Password);
        lineE_pwd->setClearButtonEnabled(false);

        horizontalLayout_3->addWidget(lineE_pwd);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_pwd);

        horizontalSpacer_19 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_19);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_11 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        btn_forget = new QPushButton(frame_login);
        btn_forget->setObjectName(QString::fromUtf8("btn_forget"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setUnderline(true);
        btn_forget->setFont(font1);

        horizontalLayout_5->addWidget(btn_forget);

        horizontalSpacer_12 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);

        btn_login = new QPushButton(frame_login);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        sizePolicy1.setHeightForWidth(btn_login->sizePolicy().hasHeightForWidth());
        btn_login->setSizePolicy(sizePolicy1);
        btn_login->setMinimumSize(QSize(320, 50));
        btn_login->setMaximumSize(QSize(320, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(12);
        btn_login->setFont(font2);

        horizontalLayout_6->addWidget(btn_login);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_10 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        horizontalSpacer_7 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        horizontalSpacer_8 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        horizontalSpacer_9 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_8 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);


        gridLayout_5->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame_login, 0, 0, 1, 1);


        retranslateUi(RegisterPage);

        QMetaObject::connectSlotsByName(RegisterPage);
    } // setupUi

    void retranslateUi(QWidget *RegisterPage)
    {
        RegisterPage->setWindowTitle(QCoreApplication::translate("RegisterPage", "Form", nullptr));
        label_login->setText(QCoreApplication::translate("RegisterPage", "\346\263\250\345\206\214", nullptr));
        label_pwd_3->setText(QString());
        lineE_id->setPlaceholderText(QCoreApplication::translate("RegisterPage", "\350\257\267\350\276\223\345\205\245\350\272\253\344\273\275ID", nullptr));
        label_user_name->setText(QString());
        lineE_user_name->setPlaceholderText(QCoreApplication::translate("RegisterPage", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", nullptr));
        label_pwd->setText(QString());
        lineE_pwd->setPlaceholderText(QCoreApplication::translate("RegisterPage", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        btn_forget->setText(QCoreApplication::translate("RegisterPage", "Go Login", nullptr));
        btn_login->setText(QCoreApplication::translate("RegisterPage", "REGISTER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterPage: public Ui_RegisterPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERPAGE_H
