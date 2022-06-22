/********************************************************************************
** Form generated from reading UI file 'FileOpenFailed.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEOPENFAILED_H
#define UI_FILEOPENFAILED_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FileOpenFailedDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QHBoxLayout *hboxLayout;
    QPushButton *okButton;

    void setupUi(QDialog *FileOpenFailedDialog)
    {
        if (FileOpenFailedDialog->objectName().isEmpty())
            FileOpenFailedDialog->setObjectName(QString::fromUtf8("FileOpenFailedDialog"));
        FileOpenFailedDialog->resize(237, 98);
        vboxLayout = new QVBoxLayout(FileOpenFailedDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label = new QLabel(FileOpenFailedDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(label);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        okButton = new QPushButton(FileOpenFailedDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(FileOpenFailedDialog);
        QObject::connect(okButton, SIGNAL(clicked()), FileOpenFailedDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(FileOpenFailedDialog);
    } // setupUi

    void retranslateUi(QDialog *FileOpenFailedDialog)
    {
        FileOpenFailedDialog->setWindowTitle(QApplication::translate("FileOpenFailedDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FileOpenFailedDialog", "Opening file failed", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("FileOpenFailedDialog", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FileOpenFailedDialog: public Ui_FileOpenFailedDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEOPENFAILED_H
