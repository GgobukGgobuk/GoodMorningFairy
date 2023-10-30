/********************************************************************************
** Form generated from reading UI file 'tab8alaramsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB8ALARAMSETTING_H
#define UI_TAB8ALARAMSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab8AlaramSetting
{
public:
    QTimeEdit *timeEdit;
    QPushButton *alaramEditButton;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *Tab8AlaramSetting)
    {
        if (Tab8AlaramSetting->objectName().isEmpty())
            Tab8AlaramSetting->setObjectName(QString::fromUtf8("Tab8AlaramSetting"));
        Tab8AlaramSetting->resize(164, 128);
        timeEdit = new QTimeEdit(Tab8AlaramSetting);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(0, 30, 161, 71));
        alaramEditButton = new QPushButton(Tab8AlaramSetting);
        alaramEditButton->setObjectName(QString::fromUtf8("alaramEditButton"));
        alaramEditButton->setGeometry(QRect(0, 100, 161, 21));
        textBrowser = new QTextBrowser(Tab8AlaramSetting);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 161, 31));
        textBrowser->setLayoutDirection(Qt::LeftToRight);

        retranslateUi(Tab8AlaramSetting);

        QMetaObject::connectSlotsByName(Tab8AlaramSetting);
    } // setupUi

    void retranslateUi(QWidget *Tab8AlaramSetting)
    {
        Tab8AlaramSetting->setWindowTitle(QApplication::translate("Tab8AlaramSetting", "Form", nullptr));
        alaramEditButton->setText(QApplication::translate("Tab8AlaramSetting", "Edit", nullptr));
        textBrowser->setPlaceholderText(QApplication::translate("Tab8AlaramSetting", "alaram ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab8AlaramSetting: public Ui_Tab8AlaramSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB8ALARAMSETTING_H
