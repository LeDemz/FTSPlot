/********************************************************************************
** Form generated from reading UI file 'EventEditorGUI.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTEDITORGUI_H
#define UI_EVENTEDITORGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EventEditorGUI
{
public:
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout;
    QPushButton *openEventListButton;
    QPushButton *importFlatFileButton;
    QPushButton *exportFlatFileButton;
    QFrame *line_4;
    QRadioButton *AddEventButton;
    QRadioButton *SelectEventButton;
    QRadioButton *DeleteEventButton;
    QFrame *line_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addEventatButton;
    QLineEdit *manualPosLine;
    QFrame *line;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *fineEdit;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *minusButton;
    QPushButton *deleteThisEventButton;
    QPushButton *plusButton;
    QFrame *line_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *previousEventButton;
    QPushButton *nextEventButton;
    QCheckBox *trackViewCheckBox;

    void setupUi(QWidget *EventEditorGUI)
    {
        if (EventEditorGUI->objectName().isEmpty())
            EventEditorGUI->setObjectName(QString::fromUtf8("EventEditorGUI"));
        EventEditorGUI->resize(470, 301);
        hboxLayout = new QHBoxLayout(EventEditorGUI);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        openEventListButton = new QPushButton(EventEditorGUI);
        openEventListButton->setObjectName(QString::fromUtf8("openEventListButton"));

        vboxLayout->addWidget(openEventListButton);

        importFlatFileButton = new QPushButton(EventEditorGUI);
        importFlatFileButton->setObjectName(QString::fromUtf8("importFlatFileButton"));
        importFlatFileButton->setEnabled(false);

        vboxLayout->addWidget(importFlatFileButton);

        exportFlatFileButton = new QPushButton(EventEditorGUI);
        exportFlatFileButton->setObjectName(QString::fromUtf8("exportFlatFileButton"));
        exportFlatFileButton->setEnabled(false);

        vboxLayout->addWidget(exportFlatFileButton);

        line_4 = new QFrame(EventEditorGUI);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line_4);

        AddEventButton = new QRadioButton(EventEditorGUI);
        AddEventButton->setObjectName(QString::fromUtf8("AddEventButton"));
        AddEventButton->setEnabled(false);

        vboxLayout->addWidget(AddEventButton);

        SelectEventButton = new QRadioButton(EventEditorGUI);
        SelectEventButton->setObjectName(QString::fromUtf8("SelectEventButton"));
        SelectEventButton->setEnabled(false);

        vboxLayout->addWidget(SelectEventButton);

        DeleteEventButton = new QRadioButton(EventEditorGUI);
        DeleteEventButton->setObjectName(QString::fromUtf8("DeleteEventButton"));
        DeleteEventButton->setEnabled(false);

        vboxLayout->addWidget(DeleteEventButton);


        hboxLayout->addLayout(vboxLayout);

        line_3 = new QFrame(EventEditorGUI);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        hboxLayout->addWidget(line_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(EventEditorGUI);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        addEventatButton = new QPushButton(groupBox_2);
        addEventatButton->setObjectName(QString::fromUtf8("addEventatButton"));
        addEventatButton->setEnabled(false);

        horizontalLayout_2->addWidget(addEventatButton);

        manualPosLine = new QLineEdit(groupBox_2);
        manualPosLine->setObjectName(QString::fromUtf8("manualPosLine"));
        manualPosLine->setEnabled(false);
        manualPosLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(manualPosLine);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(groupBox_2);

        line = new QFrame(EventEditorGUI);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        groupBox = new QGroupBox(EventEditorGUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        fineEdit = new QLineEdit(groupBox);
        fineEdit->setObjectName(QString::fromUtf8("fineEdit"));
        fineEdit->setEnabled(false);
        fineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        fineEdit->setReadOnly(false);

        verticalLayout_2->addWidget(fineEdit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        minusButton = new QPushButton(groupBox);
        minusButton->setObjectName(QString::fromUtf8("minusButton"));
        minusButton->setEnabled(false);

        horizontalLayout_4->addWidget(minusButton);

        deleteThisEventButton = new QPushButton(groupBox);
        deleteThisEventButton->setObjectName(QString::fromUtf8("deleteThisEventButton"));
        deleteThisEventButton->setEnabled(false);

        horizontalLayout_4->addWidget(deleteThisEventButton);

        plusButton = new QPushButton(groupBox);
        plusButton->setObjectName(QString::fromUtf8("plusButton"));
        plusButton->setEnabled(false);

        horizontalLayout_4->addWidget(plusButton);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(groupBox);

        line_2 = new QFrame(EventEditorGUI);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        groupBox_3 = new QGroupBox(EventEditorGUI);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        previousEventButton = new QPushButton(groupBox_3);
        previousEventButton->setObjectName(QString::fromUtf8("previousEventButton"));
        previousEventButton->setEnabled(false);

        horizontalLayout->addWidget(previousEventButton);

        nextEventButton = new QPushButton(groupBox_3);
        nextEventButton->setObjectName(QString::fromUtf8("nextEventButton"));
        nextEventButton->setEnabled(false);

        horizontalLayout->addWidget(nextEventButton);


        verticalLayout->addWidget(groupBox_3);

        trackViewCheckBox = new QCheckBox(EventEditorGUI);
        trackViewCheckBox->setObjectName(QString::fromUtf8("trackViewCheckBox"));
        trackViewCheckBox->setEnabled(false);

        verticalLayout->addWidget(trackViewCheckBox);


        hboxLayout->addLayout(verticalLayout);


        retranslateUi(EventEditorGUI);

        QMetaObject::connectSlotsByName(EventEditorGUI);
    } // setupUi

    void retranslateUi(QWidget *EventEditorGUI)
    {
        EventEditorGUI->setWindowTitle(QApplication::translate("EventEditorGUI", "Event Editor", 0, QApplication::UnicodeUTF8));
        openEventListButton->setText(QApplication::translate("EventEditorGUI", "Open EventList", 0, QApplication::UnicodeUTF8));
        importFlatFileButton->setText(QApplication::translate("EventEditorGUI", "Import Flat File", 0, QApplication::UnicodeUTF8));
        exportFlatFileButton->setText(QApplication::translate("EventEditorGUI", "Export Flat File", 0, QApplication::UnicodeUTF8));
        AddEventButton->setText(QApplication::translate("EventEditorGUI", "Add Event", 0, QApplication::UnicodeUTF8));
        SelectEventButton->setText(QApplication::translate("EventEditorGUI", "Select Event", 0, QApplication::UnicodeUTF8));
        DeleteEventButton->setText(QApplication::translate("EventEditorGUI", "Delete Event", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("EventEditorGUI", "Manual Editing", 0, QApplication::UnicodeUTF8));
        addEventatButton->setText(QApplication::translate("EventEditorGUI", "Add Event at", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("EventEditorGUI", "Finetuning", 0, QApplication::UnicodeUTF8));
        minusButton->setText(QApplication::translate("EventEditorGUI", "-", 0, QApplication::UnicodeUTF8));
        deleteThisEventButton->setText(QApplication::translate("EventEditorGUI", "Delete", 0, QApplication::UnicodeUTF8));
        plusButton->setText(QApplication::translate("EventEditorGUI", "+", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("EventEditorGUI", "Navigation", 0, QApplication::UnicodeUTF8));
        previousEventButton->setText(QApplication::translate("EventEditorGUI", "Previous Event", 0, QApplication::UnicodeUTF8));
        nextEventButton->setText(QApplication::translate("EventEditorGUI", "Next Event", 0, QApplication::UnicodeUTF8));
        trackViewCheckBox->setText(QApplication::translate("EventEditorGUI", "Track in View", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EventEditorGUI: public Ui_EventEditorGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTEDITORGUI_H
