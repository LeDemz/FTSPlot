/********************************************************************************
** Form generated from reading UI file 'MenuBox.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUBOX_H
#define UI_MENUBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "ResizingTableView.h"

QT_BEGIN_NAMESPACE

class Ui_MenuBox
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *AddTimeSeries;
    QPushButton *AddEventList;
    QPushButton *AddIntervalList;
    QPushButton *DeleteModule;
    QVBoxLayout *verticalLayout_2;
    FTSPlot::ResizingTableView *moduleList;
    QHBoxLayout *horizontalLayout;
    QPushButton *upButton;
    QPushButton *downButton;

    void setupUi(QWidget *MenuBox)
    {
        if (MenuBox->objectName().isEmpty())
            MenuBox->setObjectName(QString::fromUtf8("MenuBox"));
        MenuBox->resize(400, 249);
        gridLayout = new QGridLayout(MenuBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        AddTimeSeries = new QPushButton(MenuBox);
        AddTimeSeries->setObjectName(QString::fromUtf8("AddTimeSeries"));

        verticalLayout->addWidget(AddTimeSeries);

        AddEventList = new QPushButton(MenuBox);
        AddEventList->setObjectName(QString::fromUtf8("AddEventList"));

        verticalLayout->addWidget(AddEventList);

        AddIntervalList = new QPushButton(MenuBox);
        AddIntervalList->setObjectName(QString::fromUtf8("AddIntervalList"));

        verticalLayout->addWidget(AddIntervalList);

        DeleteModule = new QPushButton(MenuBox);
        DeleteModule->setObjectName(QString::fromUtf8("DeleteModule"));

        verticalLayout->addWidget(DeleteModule);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        moduleList = new FTSPlot::ResizingTableView(MenuBox);
        moduleList->setObjectName(QString::fromUtf8("moduleList"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(moduleList->sizePolicy().hasHeightForWidth());
        moduleList->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(moduleList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        upButton = new QPushButton(MenuBox);
        upButton->setObjectName(QString::fromUtf8("upButton"));

        horizontalLayout->addWidget(upButton);

        downButton = new QPushButton(MenuBox);
        downButton->setObjectName(QString::fromUtf8("downButton"));

        horizontalLayout->addWidget(downButton);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(MenuBox);

        QMetaObject::connectSlotsByName(MenuBox);
    } // setupUi

    void retranslateUi(QWidget *MenuBox)
    {
        MenuBox->setWindowTitle(QApplication::translate("MenuBox", "Modules", 0, QApplication::UnicodeUTF8));
        AddTimeSeries->setText(QApplication::translate("MenuBox", "Add TimeSeries", 0, QApplication::UnicodeUTF8));
        AddEventList->setText(QApplication::translate("MenuBox", "Add EventList", 0, QApplication::UnicodeUTF8));
        AddIntervalList->setText(QApplication::translate("MenuBox", "Add IntervalList", 0, QApplication::UnicodeUTF8));
        DeleteModule->setText(QApplication::translate("MenuBox", "Delete Module", 0, QApplication::UnicodeUTF8));
        upButton->setText(QApplication::translate("MenuBox", "Up", 0, QApplication::UnicodeUTF8));
        downButton->setText(QApplication::translate("MenuBox", "Down", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MenuBox: public Ui_MenuBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUBOX_H
