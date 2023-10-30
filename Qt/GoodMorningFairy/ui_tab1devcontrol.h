/********************************************************************************
** Form generated from reading UI file 'tab1devcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB1DEVCONTROL_H
#define UI_TAB1DEVCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab1DevControl
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pPBtimerStart;
    QComboBox *pCBtimerValue;
    QPushButton *pPBappQuit;
    QHBoxLayout *horizontalLayout_2;
    QDial *pDialLed;
    QLCDNumber *pLcdNumberLed;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *pProgressBarLed;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *pGRkey;
    QCheckBox *pCBkey3;
    QCheckBox *pCBkey1;
    QCheckBox *pCBkey7;
    QCheckBox *pCBkey8;
    QCheckBox *pCBkey2;
    QCheckBox *pCBkey6;
    QCheckBox *pCBkey4;
    QCheckBox *pCBkey5;
    QLCDNumber *pLcdNumberKey;

    void setupUi(QWidget *Tab1DevControl)
    {
        if (Tab1DevControl->objectName().isEmpty())
            Tab1DevControl->setObjectName(QString::fromUtf8("Tab1DevControl"));
        Tab1DevControl->resize(471, 198);
        verticalLayout = new QVBoxLayout(Tab1DevControl);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pPBtimerStart = new QPushButton(Tab1DevControl);
        pPBtimerStart->setObjectName(QString::fromUtf8("pPBtimerStart"));
        pPBtimerStart->setCheckable(true);
        pPBtimerStart->setChecked(false);

        horizontalLayout->addWidget(pPBtimerStart);

        pCBtimerValue = new QComboBox(Tab1DevControl);
        pCBtimerValue->addItem(QString());
        pCBtimerValue->addItem(QString());
        pCBtimerValue->addItem(QString());
        pCBtimerValue->addItem(QString());
        pCBtimerValue->addItem(QString());
        pCBtimerValue->setObjectName(QString::fromUtf8("pCBtimerValue"));

        horizontalLayout->addWidget(pCBtimerValue);

        pPBappQuit = new QPushButton(Tab1DevControl);
        pPBappQuit->setObjectName(QString::fromUtf8("pPBappQuit"));

        horizontalLayout->addWidget(pPBappQuit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pDialLed = new QDial(Tab1DevControl);
        pDialLed->setObjectName(QString::fromUtf8("pDialLed"));
        pDialLed->setMaximum(255);
        pDialLed->setTracking(true);
        pDialLed->setWrapping(false);
        pDialLed->setNotchesVisible(true);

        horizontalLayout_2->addWidget(pDialLed);

        pLcdNumberLed = new QLCDNumber(Tab1DevControl);
        pLcdNumberLed->setObjectName(QString::fromUtf8("pLcdNumberLed"));
        pLcdNumberLed->setDigitCount(2);
        pLcdNumberLed->setMode(QLCDNumber::Hex);
        pLcdNumberLed->setSegmentStyle(QLCDNumber::Filled);

        horizontalLayout_2->addWidget(pLcdNumberLed);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pProgressBarLed = new QProgressBar(Tab1DevControl);
        pProgressBarLed->setObjectName(QString::fromUtf8("pProgressBarLed"));
        pProgressBarLed->setMaximum(100);
        pProgressBarLed->setValue(0);

        horizontalLayout_3->addWidget(pProgressBarLed);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pGRkey = new QGridLayout();
        pGRkey->setObjectName(QString::fromUtf8("pGRkey"));
        pCBkey3 = new QCheckBox(Tab1DevControl);
        pCBkey3->setObjectName(QString::fromUtf8("pCBkey3"));
        pCBkey3->setTristate(false);

        pGRkey->addWidget(pCBkey3, 2, 1, 1, 1);

        pCBkey1 = new QCheckBox(Tab1DevControl);
        pCBkey1->setObjectName(QString::fromUtf8("pCBkey1"));
        pCBkey1->setTristate(false);

        pGRkey->addWidget(pCBkey1, 2, 3, 1, 1);

        pCBkey7 = new QCheckBox(Tab1DevControl);
        pCBkey7->setObjectName(QString::fromUtf8("pCBkey7"));
        pCBkey7->setTristate(false);

        pGRkey->addWidget(pCBkey7, 0, 1, 1, 1);

        pCBkey8 = new QCheckBox(Tab1DevControl);
        pCBkey8->setObjectName(QString::fromUtf8("pCBkey8"));
        pCBkey8->setTristate(false);

        pGRkey->addWidget(pCBkey8, 0, 0, 1, 1);

        pCBkey2 = new QCheckBox(Tab1DevControl);
        pCBkey2->setObjectName(QString::fromUtf8("pCBkey2"));
        pCBkey2->setTristate(false);

        pGRkey->addWidget(pCBkey2, 2, 2, 1, 1);

        pCBkey6 = new QCheckBox(Tab1DevControl);
        pCBkey6->setObjectName(QString::fromUtf8("pCBkey6"));
        pCBkey6->setTristate(false);

        pGRkey->addWidget(pCBkey6, 0, 2, 1, 1);

        pCBkey4 = new QCheckBox(Tab1DevControl);
        pCBkey4->setObjectName(QString::fromUtf8("pCBkey4"));
        pCBkey4->setTristate(false);

        pGRkey->addWidget(pCBkey4, 2, 0, 1, 1);

        pCBkey5 = new QCheckBox(Tab1DevControl);
        pCBkey5->setObjectName(QString::fromUtf8("pCBkey5"));
        pCBkey5->setTristate(false);

        pGRkey->addWidget(pCBkey5, 0, 3, 1, 1);


        horizontalLayout_4->addLayout(pGRkey);

        pLcdNumberKey = new QLCDNumber(Tab1DevControl);
        pLcdNumberKey->setObjectName(QString::fromUtf8("pLcdNumberKey"));
        pLcdNumberKey->setDigitCount(2);
        pLcdNumberKey->setMode(QLCDNumber::Hex);

        horizontalLayout_4->addWidget(pLcdNumberKey);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 4);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 4);

        retranslateUi(Tab1DevControl);

        QMetaObject::connectSlotsByName(Tab1DevControl);
    } // setupUi

    void retranslateUi(QWidget *Tab1DevControl)
    {
        Tab1DevControl->setWindowTitle(QApplication::translate("Tab1DevControl", "Form", nullptr));
        pPBtimerStart->setText(QApplication::translate("Tab1DevControl", "TimerStart", nullptr));
        pCBtimerValue->setItemText(0, QApplication::translate("Tab1DevControl", "100", nullptr));
        pCBtimerValue->setItemText(1, QApplication::translate("Tab1DevControl", "200", nullptr));
        pCBtimerValue->setItemText(2, QApplication::translate("Tab1DevControl", "500", nullptr));
        pCBtimerValue->setItemText(3, QApplication::translate("Tab1DevControl", "1000", nullptr));
        pCBtimerValue->setItemText(4, QApplication::translate("Tab1DevControl", "2000", nullptr));

        pPBappQuit->setText(QApplication::translate("Tab1DevControl", "Quit", nullptr));
        pCBkey3->setText(QApplication::translate("Tab1DevControl", "3", nullptr));
        pCBkey1->setText(QApplication::translate("Tab1DevControl", "1", nullptr));
        pCBkey7->setText(QApplication::translate("Tab1DevControl", "7", nullptr));
        pCBkey8->setText(QApplication::translate("Tab1DevControl", "8", nullptr));
        pCBkey2->setText(QApplication::translate("Tab1DevControl", "2", nullptr));
        pCBkey6->setText(QApplication::translate("Tab1DevControl", "6", nullptr));
        pCBkey4->setText(QApplication::translate("Tab1DevControl", "4", nullptr));
        pCBkey5->setText(QApplication::translate("Tab1DevControl", "5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab1DevControl: public Ui_Tab1DevControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB1DEVCONTROL_H
