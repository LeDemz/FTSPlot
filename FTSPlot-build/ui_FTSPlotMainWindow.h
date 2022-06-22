/********************************************************************************
** Form generated from reading UI file 'FTSPlotMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FTSPLOTMAINWINDOW_H
#define UI_FTSPLOTMAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "SimpleViewWidget.h"
#include "XScaleBar.h"
#include "YScaleBar.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    FTSPlot::YScaleBar *MyYScaleBar;
    FTSPlot::SimpleViewWidget *MySimpleViewWidget;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QPushButton *menuToggle;
    FTSPlot::XScaleBar *MyXScaleBar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(643, 599);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        MyYScaleBar = new FTSPlot::YScaleBar(centralwidget);
        MyYScaleBar->setObjectName(QString::fromUtf8("MyYScaleBar"));
        MyYScaleBar->setMaximumSize(QSize(100, 16777215));
        MyYScaleBar->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout->addWidget(MyYScaleBar);

        MySimpleViewWidget = new FTSPlot::SimpleViewWidget(centralwidget);
        MySimpleViewWidget->setObjectName(QString::fromUtf8("MySimpleViewWidget"));
        MySimpleViewWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout->addWidget(MySimpleViewWidget);


        verticalLayout->addLayout(horizontalLayout);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 30));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_2->setContentsMargins(0, -1, -1, -1);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(100, 30));
        widget_2->setStyleSheet(QString::fromUtf8(".QWidget {background-color: white; }"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(9, 1, 9, 1);
        menuToggle = new QPushButton(widget_2);
        menuToggle->setObjectName(QString::fromUtf8("menuToggle"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(menuToggle->sizePolicy().hasHeightForWidth());
        menuToggle->setSizePolicy(sizePolicy);
        menuToggle->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(menuToggle, 1, 0, 1, 1);


        horizontalLayout_2->addWidget(widget_2);

        MyXScaleBar = new FTSPlot::XScaleBar(widget);
        MyXScaleBar->setObjectName(QString::fromUtf8("MyXScaleBar"));
        MyXScaleBar->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(MyXScaleBar);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FTSPlot", 0, QApplication::UnicodeUTF8));
        menuToggle->setText(QApplication::translate("MainWindow", "Menu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FTSPLOTMAINWINDOW_H
