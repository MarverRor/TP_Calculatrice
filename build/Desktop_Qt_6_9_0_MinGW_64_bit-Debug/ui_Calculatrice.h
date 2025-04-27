/********************************************************************************
** Form generated from reading UI file 'Calculatrice.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATRICE_H
#define UI_CALCULATRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculatrice
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_M;
    QPushButton *ButtonClearAffich;
    QPushButton *ButtonClear;
    QPushButton *ButtonBack;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *ButtonMemClear;
    QPushButton *ButtonMemRead;
    QPushButton *ButtonMemSet;
    QPushButton *ButtonMemPlus;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *PushButton7;
    QPushButton *PushButton4;
    QPushButton *PushButton1;
    QPushButton *PushButton0;
    QVBoxLayout *verticalLayout_2;
    QPushButton *PushButton8;
    QPushButton *PushButton5;
    QPushButton *PushButton2;
    QPushButton *ButtonSigne;
    QVBoxLayout *verticalLayout_3;
    QPushButton *PushButton9;
    QPushButton *PushButton6;
    QPushButton *PushButton3;
    QPushButton *ButtonVirgule;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButtonDiv;
    QPushButton *pushButtonMulti;
    QPushButton *pushButtonMoins;
    QPushButton *pushButtonPlus;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButtonSqrt;
    QPushButton *pushButtonInv;
    QPushButton *pushButtonPower2;
    QPushButton *ButtonEgale;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculatrice)
    {
        if (Calculatrice->objectName().isEmpty())
            Calculatrice->setObjectName("Calculatrice");
        Calculatrice->resize(360, 260);
        Calculatrice->setMaximumSize(QSize(360, 260));
        centralwidget = new QWidget(Calculatrice);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMaximumSize(QSize(360, 260));
        verticalLayoutWidget_7 = new QWidget(centralwidget);
        verticalLayoutWidget_7->setObjectName("verticalLayoutWidget_7");
        verticalLayoutWidget_7->setGeometry(QRect(10, 60, 350, 154));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_M = new QPushButton(verticalLayoutWidget_7);
        pushButton_M->setObjectName("pushButton_M");
        pushButton_M->setMaximumSize(QSize(50, 20));

        horizontalLayout_4->addWidget(pushButton_M);

        ButtonClearAffich = new QPushButton(verticalLayoutWidget_7);
        ButtonClearAffich->setObjectName("ButtonClearAffich");
        ButtonClearAffich->setMaximumSize(QSize(105, 20));
        ButtonClearAffich->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));

        horizontalLayout_4->addWidget(ButtonClearAffich);

        ButtonClear = new QPushButton(verticalLayoutWidget_7);
        ButtonClear->setObjectName("ButtonClear");
        ButtonClear->setMaximumSize(QSize(105, 20));
        ButtonClear->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));

        horizontalLayout_4->addWidget(ButtonClear);

        ButtonBack = new QPushButton(verticalLayoutWidget_7);
        ButtonBack->setObjectName("ButtonBack");
        ButtonBack->setMaximumSize(QSize(105, 20));
        ButtonBack->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));

        horizontalLayout_4->addWidget(ButtonBack);


        verticalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        ButtonMemClear = new QPushButton(verticalLayoutWidget_7);
        ButtonMemClear->setObjectName("ButtonMemClear");
        ButtonMemClear->setMaximumSize(QSize(50, 50));
        ButtonMemClear->setStyleSheet(QString::fromUtf8("background-color: rgb(157, 157, 157);\n"
"color: rgb(255, 0, 0);"));

        verticalLayout_4->addWidget(ButtonMemClear);

        ButtonMemRead = new QPushButton(verticalLayoutWidget_7);
        ButtonMemRead->setObjectName("ButtonMemRead");
        ButtonMemRead->setMaximumSize(QSize(50, 50));
        ButtonMemRead->setStyleSheet(QString::fromUtf8("background-color: rgb(157, 157, 157);\n"
"color: rgb(255, 0, 0);"));

        verticalLayout_4->addWidget(ButtonMemRead);

        ButtonMemSet = new QPushButton(verticalLayoutWidget_7);
        ButtonMemSet->setObjectName("ButtonMemSet");
        ButtonMemSet->setMaximumSize(QSize(50, 50));
        ButtonMemSet->setStyleSheet(QString::fromUtf8("background-color: rgb(157, 157, 157);\n"
"color: rgb(255, 0, 0);"));

        verticalLayout_4->addWidget(ButtonMemSet);

        ButtonMemPlus = new QPushButton(verticalLayoutWidget_7);
        ButtonMemPlus->setObjectName("ButtonMemPlus");
        ButtonMemPlus->setMaximumSize(QSize(50, 50));
        ButtonMemPlus->setStyleSheet(QString::fromUtf8("background-color: rgb(157, 157, 157);\n"
"color: rgb(255, 0, 0);"));

        verticalLayout_4->addWidget(ButtonMemPlus);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        PushButton7 = new QPushButton(verticalLayoutWidget_7);
        PushButton7->setObjectName("PushButton7");
        PushButton7->setMaximumSize(QSize(50, 50));
        PushButton7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        verticalLayout->addWidget(PushButton7);

        PushButton4 = new QPushButton(verticalLayoutWidget_7);
        PushButton4->setObjectName("PushButton4");
        PushButton4->setMaximumSize(QSize(50, 50));
        PushButton4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        verticalLayout->addWidget(PushButton4);

        PushButton1 = new QPushButton(verticalLayoutWidget_7);
        PushButton1->setObjectName("PushButton1");
        PushButton1->setMaximumSize(QSize(50, 50));
        PushButton1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        verticalLayout->addWidget(PushButton1);

        PushButton0 = new QPushButton(verticalLayoutWidget_7);
        PushButton0->setObjectName("PushButton0");
        PushButton0->setMaximumSize(QSize(50, 50));
        PushButton0->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        verticalLayout->addWidget(PushButton0);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        PushButton8 = new QPushButton(verticalLayoutWidget_7);
        PushButton8->setObjectName("PushButton8");
        PushButton8->setMaximumSize(QSize(50, 50));
        PushButton8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        verticalLayout_2->addWidget(PushButton8);

        PushButton5 = new QPushButton(verticalLayoutWidget_7);
        PushButton5->setObjectName("PushButton5");
        PushButton5->setMaximumSize(QSize(50, 50));
        PushButton5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        verticalLayout_2->addWidget(PushButton5);

        PushButton2 = new QPushButton(verticalLayoutWidget_7);
        PushButton2->setObjectName("PushButton2");
        PushButton2->setMaximumSize(QSize(50, 50));
        PushButton2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        verticalLayout_2->addWidget(PushButton2);

        ButtonSigne = new QPushButton(verticalLayoutWidget_7);
        ButtonSigne->setObjectName("ButtonSigne");
        ButtonSigne->setMaximumSize(QSize(50, 50));
        ButtonSigne->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        verticalLayout_2->addWidget(ButtonSigne);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        PushButton9 = new QPushButton(verticalLayoutWidget_7);
        PushButton9->setObjectName("PushButton9");
        PushButton9->setMaximumSize(QSize(50, 50));
        PushButton9->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        verticalLayout_3->addWidget(PushButton9);

        PushButton6 = new QPushButton(verticalLayoutWidget_7);
        PushButton6->setObjectName("PushButton6");
        PushButton6->setMaximumSize(QSize(50, 50));
        PushButton6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        verticalLayout_3->addWidget(PushButton6);

        PushButton3 = new QPushButton(verticalLayoutWidget_7);
        PushButton3->setObjectName("PushButton3");
        PushButton3->setMaximumSize(QSize(50, 50));
        PushButton3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        verticalLayout_3->addWidget(PushButton3);

        ButtonVirgule = new QPushButton(verticalLayoutWidget_7);
        ButtonVirgule->setObjectName("ButtonVirgule");
        ButtonVirgule->setMaximumSize(QSize(50, 50));
        ButtonVirgule->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        verticalLayout_3->addWidget(ButtonVirgule);


        horizontalLayout->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        pushButtonDiv = new QPushButton(verticalLayoutWidget_7);
        pushButtonDiv->setObjectName("pushButtonDiv");
        pushButtonDiv->setMaximumSize(QSize(50, 50));
        pushButtonDiv->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221);"));

        verticalLayout_5->addWidget(pushButtonDiv);

        pushButtonMulti = new QPushButton(verticalLayoutWidget_7);
        pushButtonMulti->setObjectName("pushButtonMulti");
        pushButtonMulti->setMaximumSize(QSize(50, 50));
        pushButtonMulti->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221);"));

        verticalLayout_5->addWidget(pushButtonMulti);

        pushButtonMoins = new QPushButton(verticalLayoutWidget_7);
        pushButtonMoins->setObjectName("pushButtonMoins");
        pushButtonMoins->setMaximumSize(QSize(50, 50));
        pushButtonMoins->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221);"));

        verticalLayout_5->addWidget(pushButtonMoins);

        pushButtonPlus = new QPushButton(verticalLayoutWidget_7);
        pushButtonPlus->setObjectName("pushButtonPlus");
        pushButtonPlus->setMaximumSize(QSize(50, 50));
        pushButtonPlus->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221);"));

        verticalLayout_5->addWidget(pushButtonPlus);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        pushButtonSqrt = new QPushButton(verticalLayoutWidget_7);
        pushButtonSqrt->setObjectName("pushButtonSqrt");
        pushButtonSqrt->setMaximumSize(QSize(50, 50));
        pushButtonSqrt->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221);"));

        verticalLayout_6->addWidget(pushButtonSqrt);

        pushButtonInv = new QPushButton(verticalLayoutWidget_7);
        pushButtonInv->setObjectName("pushButtonInv");
        pushButtonInv->setMaximumSize(QSize(50, 50));
        pushButtonInv->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221);"));

        verticalLayout_6->addWidget(pushButtonInv);

        pushButtonPower2 = new QPushButton(verticalLayoutWidget_7);
        pushButtonPower2->setObjectName("pushButtonPower2");
        pushButtonPower2->setMaximumSize(QSize(50, 50));
        pushButtonPower2->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221);"));

        verticalLayout_6->addWidget(pushButtonPower2);

        ButtonEgale = new QPushButton(verticalLayoutWidget_7);
        ButtonEgale->setObjectName("ButtonEgale");
        ButtonEgale->setMaximumSize(QSize(50, 50));
        ButtonEgale->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221);"));

        verticalLayout_6->addWidget(ButtonEgale);


        horizontalLayout_2->addLayout(verticalLayout_6);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_7->addLayout(horizontalLayout_3);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(true);
        lineEdit->setGeometry(QRect(30, 10, 300, 24));
        lineEdit->setMaximumSize(QSize(300, 100));
        Calculatrice->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculatrice);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 360, 21));
        Calculatrice->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculatrice);
        statusbar->setObjectName("statusbar");
        Calculatrice->setStatusBar(statusbar);

        retranslateUi(Calculatrice);

        QMetaObject::connectSlotsByName(Calculatrice);
    } // setupUi

    void retranslateUi(QMainWindow *Calculatrice)
    {
        Calculatrice->setWindowTitle(QCoreApplication::translate("Calculatrice", "Calculatrice", nullptr));
        pushButton_M->setText(QCoreApplication::translate("Calculatrice", "M", nullptr));
        ButtonClearAffich->setText(QCoreApplication::translate("Calculatrice", "CE", nullptr));
        ButtonClear->setText(QCoreApplication::translate("Calculatrice", "C", nullptr));
        ButtonBack->setText(QCoreApplication::translate("Calculatrice", "Back", nullptr));
        ButtonMemClear->setText(QCoreApplication::translate("Calculatrice", "MC", nullptr));
        ButtonMemRead->setText(QCoreApplication::translate("Calculatrice", "MR", nullptr));
        ButtonMemSet->setText(QCoreApplication::translate("Calculatrice", "MS", nullptr));
        ButtonMemPlus->setText(QCoreApplication::translate("Calculatrice", "M+", nullptr));
        PushButton7->setText(QCoreApplication::translate("Calculatrice", "7", nullptr));
        PushButton4->setText(QCoreApplication::translate("Calculatrice", "4", nullptr));
        PushButton1->setText(QCoreApplication::translate("Calculatrice", "1", nullptr));
        PushButton0->setText(QCoreApplication::translate("Calculatrice", "0", nullptr));
        PushButton8->setText(QCoreApplication::translate("Calculatrice", "8", nullptr));
        PushButton5->setText(QCoreApplication::translate("Calculatrice", "5", nullptr));
        PushButton2->setText(QCoreApplication::translate("Calculatrice", "2", nullptr));
        ButtonSigne->setText(QCoreApplication::translate("Calculatrice", "SigneMoins", nullptr));
        PushButton9->setText(QCoreApplication::translate("Calculatrice", "9", nullptr));
        PushButton6->setText(QCoreApplication::translate("Calculatrice", "6", nullptr));
        PushButton3->setText(QCoreApplication::translate("Calculatrice", "3", nullptr));
        ButtonVirgule->setText(QCoreApplication::translate("Calculatrice", ",", nullptr));
        pushButtonDiv->setText(QCoreApplication::translate("Calculatrice", "/", nullptr));
        pushButtonMulti->setText(QCoreApplication::translate("Calculatrice", "x", nullptr));
        pushButtonMoins->setText(QCoreApplication::translate("Calculatrice", "-", nullptr));
        pushButtonPlus->setText(QCoreApplication::translate("Calculatrice", "+", nullptr));
        pushButtonSqrt->setText(QCoreApplication::translate("Calculatrice", "sqrt", nullptr));
        pushButtonInv->setText(QCoreApplication::translate("Calculatrice", "1/x", nullptr));
        pushButtonPower2->setText(QCoreApplication::translate("Calculatrice", "x\302\262", nullptr));
        ButtonEgale->setText(QCoreApplication::translate("Calculatrice", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculatrice: public Ui_Calculatrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICE_H
