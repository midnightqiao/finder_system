/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

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

class Ui_LoginPage
{
public:
    QGridLayout *gridLayout_6;
    QFrame *frame_background;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_17;
    QFrame *frame1;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QFrame *frame_login;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_login;
    QSpacerItem *horizontalSpacer_2;
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
    QSpacerItem *verticalSpacer_4;
    QFrame *frame_pic;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QWidget *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        LoginPage->resize(1597, 900);
        LoginPage->setMinimumSize(QSize(798, 450));
        LoginPage->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        LoginPage->setFont(font);
        LoginPage->setStyleSheet(QString::fromUtf8(""));
        gridLayout_6 = new QGridLayout(LoginPage);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_background = new QFrame(LoginPage);
        frame_background->setObjectName(QString::fromUtf8("frame_background"));
        frame_background->setFrameShape(QFrame::Shape::StyledPanel);
        frame_background->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_3 = new QGridLayout(frame_background);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_9 = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_9);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_17);

        frame1 = new QFrame(frame_background);
        frame1->setObjectName(QString::fromUtf8("frame1"));
        frame1->setFrameShape(QFrame::Shape::StyledPanel);
        frame1->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_2 = new QGridLayout(frame1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        frame_login = new QFrame(frame1);
        frame_login->setObjectName(QString::fromUtf8("frame_login"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_login->sizePolicy().hasHeightForWidth());
        frame_login->setSizePolicy(sizePolicy);
        frame_login->setMinimumSize(QSize(500, 600));
        frame_login->setMaximumSize(QSize(500, 600));
        frame_login->setFrameShape(QFrame::Shape::StyledPanel);
        frame_login->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_5 = new QGridLayout(frame_login);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_login = new QLabel(frame_login);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(22);
        font1.setStyleStrategy(QFont::PreferAntialias);
        label_login->setFont(font1);

        horizontalLayout->addWidget(label_login);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_20 = new QSpacerItem(80, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_20);

        frame_user_name = new QFrame(frame_login);
        frame_user_name->setObjectName(QString::fromUtf8("frame_user_name"));
        frame_user_name->setFrameShape(QFrame::Shape::StyledPanel);
        frame_user_name->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_4 = new QGridLayout(frame_user_name);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_21 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_21);

        label_user_name = new QLabel(frame_user_name);
        label_user_name->setObjectName(QString::fromUtf8("label_user_name"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_user_name->sizePolicy().hasHeightForWidth());
        label_user_name->setSizePolicy(sizePolicy1);
        label_user_name->setMinimumSize(QSize(30, 30));
        label_user_name->setMaximumSize(QSize(30, 30));

        horizontalLayout_11->addWidget(label_user_name);

        lineE_user_name = new QLineEdit(frame_user_name);
        lineE_user_name->setObjectName(QString::fromUtf8("lineE_user_name"));
        QFont font2;
        font2.setPointSize(16);
        font2.setStyleStrategy(QFont::PreferAntialias);
        lineE_user_name->setFont(font2);

        horizontalLayout_11->addWidget(lineE_user_name);


        gridLayout_4->addLayout(horizontalLayout_11, 0, 0, 1, 1);


        horizontalLayout_10->addWidget(frame_user_name);

        horizontalSpacer_22 = new QSpacerItem(80, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_22);


        verticalLayout->addLayout(horizontalLayout_10);

        verticalSpacer_3 = new QSpacerItem(20, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(80, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        frame_pwd = new QFrame(frame_login);
        frame_pwd->setObjectName(QString::fromUtf8("frame_pwd"));
        frame_pwd->setFrameShape(QFrame::Shape::StyledPanel);
        frame_pwd->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(frame_pwd);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

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
        lineE_pwd->setFont(font2);
        lineE_pwd->setEchoMode(QLineEdit::EchoMode::Password);
        lineE_pwd->setClearButtonEnabled(false);

        horizontalLayout_3->addWidget(lineE_pwd);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_pwd);

        horizontalSpacer_19 = new QSpacerItem(80, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_19);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_11 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        btn_forget = new QPushButton(frame_login);
        btn_forget->setObjectName(QString::fromUtf8("btn_forget"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setUnderline(true);
        font3.setStyleStrategy(QFont::PreferAntialias);
        btn_forget->setFont(font3);

        horizontalLayout_5->addWidget(btn_forget);

        horizontalSpacer_12 = new QSpacerItem(80, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);

        btn_login = new QPushButton(frame_login);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        sizePolicy1.setHeightForWidth(btn_login->sizePolicy().hasHeightForWidth());
        btn_login->setSizePolicy(sizePolicy1);
        btn_login->setMinimumSize(QSize(320, 50));
        btn_login->setMaximumSize(QSize(320, 50));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(12);
        font4.setStyleStrategy(QFont::PreferAntialias);
        btn_login->setFont(font4);

        horizontalLayout_6->addWidget(btn_login);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
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

        verticalSpacer_8 = new QSpacerItem(20, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_8);


        gridLayout_5->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(verticalSpacer_4, 1, 0, 1, 1);


        horizontalLayout_8->addWidget(frame_login);

        frame_pic = new QFrame(frame1);
        frame_pic->setObjectName(QString::fromUtf8("frame_pic"));
        sizePolicy.setHeightForWidth(frame_pic->sizePolicy().hasHeightForWidth());
        frame_pic->setSizePolicy(sizePolicy);
        frame_pic->setMinimumSize(QSize(500, 600));
        frame_pic->setFrameShape(QFrame::Shape::StyledPanel);
        frame_pic->setFrameShadow(QFrame::Shadow::Raised);

        horizontalLayout_8->addWidget(frame_pic);


        gridLayout_2->addLayout(horizontalLayout_8, 0, 0, 1, 1);


        horizontalLayout_9->addWidget(frame1);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_18);


        verticalLayout_2->addLayout(horizontalLayout_9);

        verticalSpacer_10 = new QSpacerItem(20, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_10);


        gridLayout_3->addLayout(verticalLayout_2, 2, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_3);

        label = new QLabel(frame_background);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(true);
        font5.setStyleStrategy(QFont::PreferAntialias);
        label->setFont(font5);

        horizontalLayout_12->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_4);


        gridLayout_3->addLayout(horizontalLayout_12, 1, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(verticalSpacer_7, 0, 0, 1, 1);


        gridLayout_6->addWidget(frame_background, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_user_name->setBuddy(lineE_user_name);
        label_pwd->setBuddy(lineE_pwd);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(lineE_pwd, lineE_user_name);
        QWidget::setTabOrder(lineE_user_name, btn_login);
        QWidget::setTabOrder(btn_login, btn_forget);

        retranslateUi(LoginPage);
        QObject::connect(lineE_user_name, &QLineEdit::returnPressed, btn_login, qOverload<>(&QPushButton::hide));

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QWidget *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "Widget", nullptr));
        LoginPage->setProperty("success", QVariant(QCoreApplication::translate("LoginPage", "ok", nullptr)));
        label_login->setText(QCoreApplication::translate("LoginPage", "\347\231\273\345\275\225", nullptr));
        label_user_name->setText(QString());
        lineE_user_name->setPlaceholderText(QCoreApplication::translate("LoginPage", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", nullptr));
        label_pwd->setText(QString());
        lineE_pwd->setPlaceholderText(QCoreApplication::translate("LoginPage", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        btn_forget->setText(QCoreApplication::translate("LoginPage", "Not Account?", nullptr));
        btn_login->setText(QCoreApplication::translate("LoginPage", "LOGIN", nullptr));
        label->setText(QCoreApplication::translate("LoginPage", "\345\237\272\344\272\216stm32\345\215\225\347\211\207\346\234\272\347\232\204\350\200\201\344\272\272\345\257\273\347\211\251\347\263\273\347\273\237\350\256\276\350\256\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
