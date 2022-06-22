/********************************************************************************
** Form generated from reading UI file 'IntervalEditorGUI.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERVALEDITORGUI_H
#define UI_INTERVALEDITORGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IntervalEditorGUI
{
public:
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QPushButton *openIntervalListButton;
    QPushButton *importButton;
    QPushButton *exportButton;
    QFrame *line;
    QRadioButton *addIntervalButton;
    QRadioButton *selectIntervalButton;
    QRadioButton *delIntervalButton;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lowerManualAdd;
    QLineEdit *higherManualAdd;
    QPushButton *manualAddButton;
    QFrame *line_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *lowerFineTuneLine;
    QHBoxLayout *horizontalLayout;
    QPushButton *lowerMinusButton;
    QPushButton *lowerPlusButton;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *higherFineTuneLine;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *higherMinusButton;
    QPushButton *higherPlusButton;
    QPushButton *manualDeleteButton;
    QFrame *line_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *previousButton;
    QPushButton *nextButton;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *trackBox;
    QCheckBox *fitScaleBox;

    void setupUi(QWidget *IntervalEditorGUI)
    {
        if (IntervalEditorGUI->objectName().isEmpty())
            IntervalEditorGUI->setObjectName(QString::fromUtf8("IntervalEditorGUI"));
        IntervalEditorGUI->resize(555, 379);
        gridLayout_3 = new QGridLayout(IntervalEditorGUI);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        openIntervalListButton = new QPushButton(IntervalEditorGUI);
        openIntervalListButton->setObjectName(QString::fromUtf8("openIntervalListButton"));

        verticalLayout_4->addWidget(openIntervalListButton);

        importButton = new QPushButton(IntervalEditorGUI);
        importButton->setObjectName(QString::fromUtf8("importButton"));

        verticalLayout_4->addWidget(importButton);

        exportButton = new QPushButton(IntervalEditorGUI);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));

        verticalLayout_4->addWidget(exportButton);

        line = new QFrame(IntervalEditorGUI);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        addIntervalButton = new QRadioButton(IntervalEditorGUI);
        addIntervalButton->setObjectName(QString::fromUtf8("addIntervalButton"));

        verticalLayout_4->addWidget(addIntervalButton);

        selectIntervalButton = new QRadioButton(IntervalEditorGUI);
        selectIntervalButton->setObjectName(QString::fromUtf8("selectIntervalButton"));

        verticalLayout_4->addWidget(selectIntervalButton);

        delIntervalButton = new QRadioButton(IntervalEditorGUI);
        delIntervalButton->setObjectName(QString::fromUtf8("delIntervalButton"));

        verticalLayout_4->addWidget(delIntervalButton);


        horizontalLayout_7->addLayout(verticalLayout_4);

        line_4 = new QFrame(IntervalEditorGUI);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_7->addWidget(line_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox = new QGroupBox(IntervalEditorGUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lowerManualAdd = new QLineEdit(groupBox);
        lowerManualAdd->setObjectName(QString::fromUtf8("lowerManualAdd"));
        lowerManualAdd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(lowerManualAdd);

        higherManualAdd = new QLineEdit(groupBox);
        higherManualAdd->setObjectName(QString::fromUtf8("higherManualAdd"));
        higherManualAdd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(higherManualAdd);


        verticalLayout_3->addLayout(horizontalLayout_4);

        manualAddButton = new QPushButton(groupBox);
        manualAddButton->setObjectName(QString::fromUtf8("manualAddButton"));

        verticalLayout_3->addWidget(manualAddButton);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox);

        line_2 = new QFrame(IntervalEditorGUI);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);

        groupBox_4 = new QGroupBox(IntervalEditorGUI);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lowerFineTuneLine = new QLineEdit(groupBox_4);
        lowerFineTuneLine->setObjectName(QString::fromUtf8("lowerFineTuneLine"));
        lowerFineTuneLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lowerFineTuneLine->setReadOnly(false);

        verticalLayout->addWidget(lowerFineTuneLine);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lowerMinusButton = new QPushButton(groupBox_4);
        lowerMinusButton->setObjectName(QString::fromUtf8("lowerMinusButton"));

        horizontalLayout->addWidget(lowerMinusButton);

        lowerPlusButton = new QPushButton(groupBox_4);
        lowerPlusButton->setObjectName(QString::fromUtf8("lowerPlusButton"));

        horizontalLayout->addWidget(lowerPlusButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        higherFineTuneLine = new QLineEdit(groupBox_4);
        higherFineTuneLine->setObjectName(QString::fromUtf8("higherFineTuneLine"));
        higherFineTuneLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        higherFineTuneLine->setReadOnly(false);

        verticalLayout_2->addWidget(higherFineTuneLine);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        higherMinusButton = new QPushButton(groupBox_4);
        higherMinusButton->setObjectName(QString::fromUtf8("higherMinusButton"));

        horizontalLayout_2->addWidget(higherMinusButton);

        higherPlusButton = new QPushButton(groupBox_4);
        higherPlusButton->setObjectName(QString::fromUtf8("higherPlusButton"));

        horizontalLayout_2->addWidget(higherPlusButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        manualDeleteButton = new QPushButton(groupBox_4);
        manualDeleteButton->setObjectName(QString::fromUtf8("manualDeleteButton"));

        gridLayout_4->addWidget(manualDeleteButton, 1, 1, 1, 1);


        verticalLayout_5->addWidget(groupBox_4);

        line_3 = new QFrame(IntervalEditorGUI);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_3);

        groupBox_3 = new QGroupBox(IntervalEditorGUI);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        previousButton = new QPushButton(groupBox_3);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));

        horizontalLayout_6->addWidget(previousButton);

        nextButton = new QPushButton(groupBox_3);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));

        horizontalLayout_6->addWidget(nextButton);


        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        trackBox = new QCheckBox(groupBox_3);
        trackBox->setObjectName(QString::fromUtf8("trackBox"));

        horizontalLayout_5->addWidget(trackBox);

        fitScaleBox = new QCheckBox(groupBox_3);
        fitScaleBox->setObjectName(QString::fromUtf8("fitScaleBox"));
        fitScaleBox->setEnabled(false);

        horizontalLayout_5->addWidget(fitScaleBox);


        verticalLayout_6->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_6, 0, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_3);


        horizontalLayout_7->addLayout(verticalLayout_5);


        gridLayout_3->addLayout(horizontalLayout_7, 0, 0, 1, 1);


        retranslateUi(IntervalEditorGUI);

        QMetaObject::connectSlotsByName(IntervalEditorGUI);
    } // setupUi

    void retranslateUi(QWidget *IntervalEditorGUI)
    {
        IntervalEditorGUI->setWindowTitle(QApplication::translate("IntervalEditorGUI", "IntervalEditor", 0, QApplication::UnicodeUTF8));
        openIntervalListButton->setText(QApplication::translate("IntervalEditorGUI", "Open IntervalList", 0, QApplication::UnicodeUTF8));
        importButton->setText(QApplication::translate("IntervalEditorGUI", "Import Flat File", 0, QApplication::UnicodeUTF8));
        exportButton->setText(QApplication::translate("IntervalEditorGUI", "Export Flat File", 0, QApplication::UnicodeUTF8));
        addIntervalButton->setText(QApplication::translate("IntervalEditorGUI", "Add Interval", 0, QApplication::UnicodeUTF8));
        selectIntervalButton->setText(QApplication::translate("IntervalEditorGUI", "Select Interval", 0, QApplication::UnicodeUTF8));
        delIntervalButton->setText(QApplication::translate("IntervalEditorGUI", "Delete Interval", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("IntervalEditorGUI", "GroupBox", 0, QApplication::UnicodeUTF8));
        manualAddButton->setText(QApplication::translate("IntervalEditorGUI", "Add Interval", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("IntervalEditorGUI", "Finetuning", 0, QApplication::UnicodeUTF8));
        lowerMinusButton->setText(QApplication::translate("IntervalEditorGUI", "-", 0, QApplication::UnicodeUTF8));
        lowerPlusButton->setText(QApplication::translate("IntervalEditorGUI", "+", 0, QApplication::UnicodeUTF8));
        higherMinusButton->setText(QApplication::translate("IntervalEditorGUI", "-", 0, QApplication::UnicodeUTF8));
        higherPlusButton->setText(QApplication::translate("IntervalEditorGUI", "+", 0, QApplication::UnicodeUTF8));
        manualDeleteButton->setText(QApplication::translate("IntervalEditorGUI", "Delete Current Interval", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("IntervalEditorGUI", "Navigation", 0, QApplication::UnicodeUTF8));
        previousButton->setText(QApplication::translate("IntervalEditorGUI", "Previous Interval", 0, QApplication::UnicodeUTF8));
        nextButton->setText(QApplication::translate("IntervalEditorGUI", "Next Interval", 0, QApplication::UnicodeUTF8));
        trackBox->setText(QApplication::translate("IntervalEditorGUI", "Track in Plot", 0, QApplication::UnicodeUTF8));
        fitScaleBox->setText(QApplication::translate("IntervalEditorGUI", "Fit Scale", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class IntervalEditorGUI: public Ui_IntervalEditorGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERVALEDITORGUI_H
