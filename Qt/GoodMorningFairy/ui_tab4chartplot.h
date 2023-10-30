/********************************************************************************
** Form generated from reading UI file 'tab4chartplot.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB4CHARTPLOT_H
#define UI_TAB4CHARTPLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab4ChartPlot
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *pLExPosition;
    QLabel *label_2;
    QLineEdit *pLEyPosition;
    QPushButton *pPBAddButton;
    QPushButton *pPBClearButton;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *Tab4ChartPlot)
    {
        if (Tab4ChartPlot->objectName().isEmpty())
            Tab4ChartPlot->setObjectName(QString::fromUtf8("Tab4ChartPlot"));
        Tab4ChartPlot->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(Tab4ChartPlot);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Tab4ChartPlot);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        pLExPosition = new QLineEdit(Tab4ChartPlot);
        pLExPosition->setObjectName(QString::fromUtf8("pLExPosition"));

        horizontalLayout->addWidget(pLExPosition);

        label_2 = new QLabel(Tab4ChartPlot);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        pLEyPosition = new QLineEdit(Tab4ChartPlot);
        pLEyPosition->setObjectName(QString::fromUtf8("pLEyPosition"));

        horizontalLayout->addWidget(pLEyPosition);

        pPBAddButton = new QPushButton(Tab4ChartPlot);
        pPBAddButton->setObjectName(QString::fromUtf8("pPBAddButton"));

        horizontalLayout->addWidget(pPBAddButton);

        pPBClearButton = new QPushButton(Tab4ChartPlot);
        pPBClearButton->setObjectName(QString::fromUtf8("pPBClearButton"));

        horizontalLayout->addWidget(pPBClearButton);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 2);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 3);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 9);

        retranslateUi(Tab4ChartPlot);

        QMetaObject::connectSlotsByName(Tab4ChartPlot);
    } // setupUi

    void retranslateUi(QWidget *Tab4ChartPlot)
    {
        Tab4ChartPlot->setWindowTitle(QApplication::translate("Tab4ChartPlot", "Form", nullptr));
        label->setText(QApplication::translate("Tab4ChartPlot", "X", nullptr));
        label_2->setText(QApplication::translate("Tab4ChartPlot", "Y", nullptr));
        pPBAddButton->setText(QApplication::translate("Tab4ChartPlot", "Add", nullptr));
        pPBClearButton->setText(QApplication::translate("Tab4ChartPlot", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab4ChartPlot: public Ui_Tab4ChartPlot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB4CHARTPLOT_H
