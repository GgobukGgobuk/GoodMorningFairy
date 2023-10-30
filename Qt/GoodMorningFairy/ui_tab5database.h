/********************************************************************************
** Form generated from reading UI file 'tab5database.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB5DATABASE_H
#define UI_TAB5DATABASE_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab5DataBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QDateTimeEdit *pDateTimeEditFrom;
    QDateTimeEdit *pDateTimeEditTo;
    QPushButton *pPBsearchDb;
    QPushButton *pPBdeleteDb;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Tab5DataBase)
    {
        if (Tab5DataBase->objectName().isEmpty())
            Tab5DataBase->setObjectName(QString::fromUtf8("Tab5DataBase"));
        Tab5DataBase->resize(565, 313);
        verticalLayout = new QVBoxLayout(Tab5DataBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pDateTimeEditFrom = new QDateTimeEdit(Tab5DataBase);
        pDateTimeEditFrom->setObjectName(QString::fromUtf8("pDateTimeEditFrom"));
        pDateTimeEditFrom->setDateTime(QDateTime(QDate(2023, 10, 5), QTime(0, 0, 0)));
        pDateTimeEditFrom->setDate(QDate(2023, 10, 5));
        pDateTimeEditFrom->setMinimumDateTime(QDateTime(QDate(1752, 9, 15), QTime(0, 0, 0)));

        horizontalLayout->addWidget(pDateTimeEditFrom);

        pDateTimeEditTo = new QDateTimeEdit(Tab5DataBase);
        pDateTimeEditTo->setObjectName(QString::fromUtf8("pDateTimeEditTo"));
        pDateTimeEditTo->setDateTime(QDateTime(QDate(2023, 12, 31), QTime(0, 0, 0)));
        pDateTimeEditTo->setDate(QDate(2023, 12, 31));

        horizontalLayout->addWidget(pDateTimeEditTo);

        pPBsearchDb = new QPushButton(Tab5DataBase);
        pPBsearchDb->setObjectName(QString::fromUtf8("pPBsearchDb"));

        horizontalLayout->addWidget(pPBsearchDb);

        pPBdeleteDb = new QPushButton(Tab5DataBase);
        pPBdeleteDb->setObjectName(QString::fromUtf8("pPBdeleteDb"));

        horizontalLayout->addWidget(pPBdeleteDb);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(Tab5DataBase);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(10);
        tableWidget->horizontalHeader()->setDefaultSectionSize(95);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setMinimumSectionSize(21);
        tableWidget->verticalHeader()->setDefaultSectionSize(21);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(Tab5DataBase);

        QMetaObject::connectSlotsByName(Tab5DataBase);
    } // setupUi

    void retranslateUi(QWidget *Tab5DataBase)
    {
        Tab5DataBase->setWindowTitle(QApplication::translate("Tab5DataBase", "Form", nullptr));
        pPBsearchDb->setText(QApplication::translate("Tab5DataBase", "\354\241\260\355\232\214", nullptr));
        pPBdeleteDb->setText(QApplication::translate("Tab5DataBase", "\354\202\255\354\240\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Tab5DataBase", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Tab5DataBase", "\353\202\240\354\247\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Tab5DataBase", "\354\241\260\353\217\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Tab5DataBase", "\354\230\250\353\217\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Tab5DataBase", "\354\212\265\353\217\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab5DataBase: public Ui_Tab5DataBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB5DATABASE_H
