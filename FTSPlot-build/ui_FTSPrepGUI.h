/********************************************************************************
** Form generated from reading UI file 'FTSPrepGUI.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FTSPREPGUI_H
#define UI_FTSPREPGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Pow2SpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_UIWidget
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    FTSPlot::Pow2SpinBox *ThinFactorBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *AddFileButton;
    QPushButton *RemoveFileButton;
    QPushButton *StartStopButton;
    QPushButton *ResumeButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QProgressBar *totalBar;
    QLabel *fileLabel;
    QProgressBar *FileBar;
    QLabel *reductionLevelLabel;
    QProgressBar *reductionBar;

    void setupUi(QWidget *UIWidget)
    {
        if (UIWidget->objectName().isEmpty())
            UIWidget->setObjectName(QString::fromUtf8("UIWidget"));
        UIWidget->resize(427, 456);
        gridLayout_2 = new QGridLayout(UIWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(UIWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        ThinFactorBox = new FTSPlot::Pow2SpinBox(UIWidget);
        ThinFactorBox->setObjectName(QString::fromUtf8("ThinFactorBox"));
        ThinFactorBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ThinFactorBox->setMinimum(2);
        ThinFactorBox->setMaximum(1073741824);
        ThinFactorBox->setValue(64);

        horizontalLayout_3->addWidget(ThinFactorBox);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(UIWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout->addWidget(listWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        AddFileButton = new QPushButton(UIWidget);
        AddFileButton->setObjectName(QString::fromUtf8("AddFileButton"));

        verticalLayout->addWidget(AddFileButton);

        RemoveFileButton = new QPushButton(UIWidget);
        RemoveFileButton->setObjectName(QString::fromUtf8("RemoveFileButton"));

        verticalLayout->addWidget(RemoveFileButton);

        StartStopButton = new QPushButton(UIWidget);
        StartStopButton->setObjectName(QString::fromUtf8("StartStopButton"));

        verticalLayout->addWidget(StartStopButton);

        ResumeButton = new QPushButton(UIWidget);
        ResumeButton->setObjectName(QString::fromUtf8("ResumeButton"));

        verticalLayout->addWidget(ResumeButton);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        groupBox = new QGroupBox(UIWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        totalBar = new QProgressBar(groupBox);
        totalBar->setObjectName(QString::fromUtf8("totalBar"));
        totalBar->setValue(24);

        verticalLayout_3->addWidget(totalBar);

        fileLabel = new QLabel(groupBox);
        fileLabel->setObjectName(QString::fromUtf8("fileLabel"));

        verticalLayout_3->addWidget(fileLabel);

        FileBar = new QProgressBar(groupBox);
        FileBar->setObjectName(QString::fromUtf8("FileBar"));
        FileBar->setValue(24);

        verticalLayout_3->addWidget(FileBar);

        reductionLevelLabel = new QLabel(groupBox);
        reductionLevelLabel->setObjectName(QString::fromUtf8("reductionLevelLabel"));

        verticalLayout_3->addWidget(reductionLevelLabel);

        reductionBar = new QProgressBar(groupBox);
        reductionBar->setObjectName(QString::fromUtf8("reductionBar"));
        reductionBar->setValue(24);

        verticalLayout_3->addWidget(reductionBar);


        verticalLayout_2->addWidget(groupBox);


        verticalLayout_4->addLayout(verticalLayout_2);


        gridLayout_2->addLayout(verticalLayout_4, 0, 0, 1, 1);


        retranslateUi(UIWidget);

        QMetaObject::connectSlotsByName(UIWidget);
    } // setupUi

    void retranslateUi(QWidget *UIWidget)
    {
        UIWidget->setWindowTitle(QApplication::translate("UIWidget", "FTSPrep", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("UIWidget", "Reduction Factor", 0, QApplication::UnicodeUTF8));
        AddFileButton->setText(QApplication::translate("UIWidget", "Add File", 0, QApplication::UnicodeUTF8));
        RemoveFileButton->setText(QApplication::translate("UIWidget", "Remove File", 0, QApplication::UnicodeUTF8));
        StartStopButton->setText(QApplication::translate("UIWidget", "Start", 0, QApplication::UnicodeUTF8));
        ResumeButton->setText(QApplication::translate("UIWidget", "Resume", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("UIWidget", "Progress", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UIWidget", "Total:", 0, QApplication::UnicodeUTF8));
        fileLabel->setText(QApplication::translate("UIWidget", "File:", 0, QApplication::UnicodeUTF8));
        reductionLevelLabel->setText(QApplication::translate("UIWidget", "Reductionlevel:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UIWidget: public Ui_UIWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FTSPREPGUI_H
