/********************************************************************************
** Form generated from reading UI file 'FTSPlotBenchMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FTSPLOTBENCHMAINWINDOW_H
#define UI_FTSPLOTBENCHMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_8;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *tsDataSetLine;
    QToolButton *tsDatasetFileButton;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *tsOutputLine;
    QToolButton *tsOutputButton;
    QPushButton *tsStartButton;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *EventDatasetLine;
    QToolButton *EventDatasetFileButton;
    QGroupBox *groupBox_8;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *EventOutputLine;
    QToolButton *EventOutputButton;
    QPushButton *EventStartButton;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_9;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *IntervalDatasetLine;
    QToolButton *IntervalDatasetFileButton;
    QGroupBox *groupBox_10;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *IntervalOutputLine;
    QToolButton *IntervalOutputButton;
    QPushButton *IntervalStartButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(744, 284);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_8 = new QHBoxLayout(centralwidget);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tsDataSetLine = new QLineEdit(groupBox_4);
        tsDataSetLine->setObjectName(QString::fromUtf8("tsDataSetLine"));

        horizontalLayout->addWidget(tsDataSetLine);

        tsDatasetFileButton = new QToolButton(groupBox_4);
        tsDatasetFileButton->setObjectName(QString::fromUtf8("tsDatasetFileButton"));

        horizontalLayout->addWidget(tsDatasetFileButton);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tsOutputLine = new QLineEdit(groupBox_5);
        tsOutputLine->setObjectName(QString::fromUtf8("tsOutputLine"));

        horizontalLayout_3->addWidget(tsOutputLine);

        tsOutputButton = new QToolButton(groupBox_5);
        tsOutputButton->setObjectName(QString::fromUtf8("tsOutputButton"));

        horizontalLayout_3->addWidget(tsOutputButton);


        verticalLayout->addWidget(groupBox_5);

        tsStartButton = new QPushButton(groupBox);
        tsStartButton->setObjectName(QString::fromUtf8("tsStartButton"));

        verticalLayout->addWidget(tsStartButton);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        horizontalLayout_8->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_6 = new QGroupBox(frame_2);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        verticalLayout_2 = new QVBoxLayout(groupBox_6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_7 = new QGroupBox(groupBox_6);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        EventDatasetLine = new QLineEdit(groupBox_7);
        EventDatasetLine->setObjectName(QString::fromUtf8("EventDatasetLine"));

        horizontalLayout_4->addWidget(EventDatasetLine);

        EventDatasetFileButton = new QToolButton(groupBox_7);
        EventDatasetFileButton->setObjectName(QString::fromUtf8("EventDatasetFileButton"));

        horizontalLayout_4->addWidget(EventDatasetFileButton);


        verticalLayout_2->addWidget(groupBox_7);

        groupBox_8 = new QGroupBox(groupBox_6);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_8);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        EventOutputLine = new QLineEdit(groupBox_8);
        EventOutputLine->setObjectName(QString::fromUtf8("EventOutputLine"));

        horizontalLayout_5->addWidget(EventOutputLine);

        EventOutputButton = new QToolButton(groupBox_8);
        EventOutputButton->setObjectName(QString::fromUtf8("EventOutputButton"));

        horizontalLayout_5->addWidget(EventOutputButton);


        verticalLayout_2->addWidget(groupBox_8);

        EventStartButton = new QPushButton(groupBox_6);
        EventStartButton->setObjectName(QString::fromUtf8("EventStartButton"));

        verticalLayout_2->addWidget(EventStartButton);


        gridLayout_3->addWidget(groupBox_6, 0, 0, 1, 1);


        horizontalLayout_8->addWidget(frame_2);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_2 = new QGroupBox(frame_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_9 = new QGroupBox(groupBox_2);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_9);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        IntervalDatasetLine = new QLineEdit(groupBox_9);
        IntervalDatasetLine->setObjectName(QString::fromUtf8("IntervalDatasetLine"));

        horizontalLayout_6->addWidget(IntervalDatasetLine);

        IntervalDatasetFileButton = new QToolButton(groupBox_9);
        IntervalDatasetFileButton->setObjectName(QString::fromUtf8("IntervalDatasetFileButton"));

        horizontalLayout_6->addWidget(IntervalDatasetFileButton);


        verticalLayout_3->addWidget(groupBox_9);

        groupBox_10 = new QGroupBox(groupBox_2);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        horizontalLayout_7 = new QHBoxLayout(groupBox_10);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        IntervalOutputLine = new QLineEdit(groupBox_10);
        IntervalOutputLine->setObjectName(QString::fromUtf8("IntervalOutputLine"));

        horizontalLayout_7->addWidget(IntervalOutputLine);

        IntervalOutputButton = new QToolButton(groupBox_10);
        IntervalOutputButton->setObjectName(QString::fromUtf8("IntervalOutputButton"));

        horizontalLayout_7->addWidget(IntervalOutputButton);


        verticalLayout_3->addWidget(groupBox_10);

        IntervalStartButton = new QPushButton(groupBox_2);
        IntervalStartButton->setObjectName(QString::fromUtf8("IntervalStartButton"));

        verticalLayout_3->addWidget(IntervalStartButton);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);


        horizontalLayout_8->addWidget(frame_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 744, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FTSPlotBench", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "TimeSeries Benchmark", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "TimeSeries Dataset", 0, QApplication::UnicodeUTF8));
        tsDatasetFileButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Output Logdirectory", 0, QApplication::UnicodeUTF8));
        tsOutputButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        tsStartButton->setText(QApplication::translate("MainWindow", "Start Benchmark", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "EventEditor Benchmark", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Event Dataset", 0, QApplication::UnicodeUTF8));
        EventDatasetFileButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Output Logdirectory", 0, QApplication::UnicodeUTF8));
        EventOutputButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        EventStartButton->setText(QApplication::translate("MainWindow", "Start Benchmark", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "IntervalEditor Benchmark", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Interval Dataset", 0, QApplication::UnicodeUTF8));
        IntervalDatasetFileButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "Output Logdirectory", 0, QApplication::UnicodeUTF8));
        IntervalOutputButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        IntervalStartButton->setText(QApplication::translate("MainWindow", "Start Benchmark", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FTSPLOTBENCHMAINWINDOW_H
