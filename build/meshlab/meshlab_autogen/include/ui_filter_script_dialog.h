/********************************************************************************
** Form generated from reading UI file 'filter_script_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTER_SCRIPT_DIALOG_H
#define UI_FILTER_SCRIPT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FilterScriptDialog
{
public:
    QGridLayout *gridLayout;
    QListWidget *scriptListWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *moveUpButton;
    QPushButton *moveDownButton;
    QPushButton *removeFilterButton;
    QPushButton *editParameterButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *hboxLayout;
    QPushButton *saveScriptButton;
    QPushButton *openScriptButton;
    QPushButton *clearScriptButton;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *FilterScriptDialog)
    {
        if (FilterScriptDialog->objectName().isEmpty())
            FilterScriptDialog->setObjectName(QString::fromUtf8("FilterScriptDialog"));
        FilterScriptDialog->resize(727, 404);
        gridLayout = new QGridLayout(FilterScriptDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scriptListWidget = new QListWidget(FilterScriptDialog);
        scriptListWidget->setObjectName(QString::fromUtf8("scriptListWidget"));

        gridLayout->addWidget(scriptListWidget, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        moveUpButton = new QPushButton(FilterScriptDialog);
        moveUpButton->setObjectName(QString::fromUtf8("moveUpButton"));

        verticalLayout->addWidget(moveUpButton);

        moveDownButton = new QPushButton(FilterScriptDialog);
        moveDownButton->setObjectName(QString::fromUtf8("moveDownButton"));

        verticalLayout->addWidget(moveDownButton);

        removeFilterButton = new QPushButton(FilterScriptDialog);
        removeFilterButton->setObjectName(QString::fromUtf8("removeFilterButton"));

        verticalLayout->addWidget(removeFilterButton);

        editParameterButton = new QPushButton(FilterScriptDialog);
        editParameterButton->setObjectName(QString::fromUtf8("editParameterButton"));

        verticalLayout->addWidget(editParameterButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        saveScriptButton = new QPushButton(FilterScriptDialog);
        saveScriptButton->setObjectName(QString::fromUtf8("saveScriptButton"));

        hboxLayout->addWidget(saveScriptButton);

        openScriptButton = new QPushButton(FilterScriptDialog);
        openScriptButton->setObjectName(QString::fromUtf8("openScriptButton"));

        hboxLayout->addWidget(openScriptButton);

        clearScriptButton = new QPushButton(FilterScriptDialog);
        clearScriptButton->setObjectName(QString::fromUtf8("clearScriptButton"));

        hboxLayout->addWidget(clearScriptButton);

        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(FilterScriptDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(FilterScriptDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);


        retranslateUi(FilterScriptDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), FilterScriptDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FilterScriptDialog);
    } // setupUi

    void retranslateUi(QDialog *FilterScriptDialog)
    {
        FilterScriptDialog->setWindowTitle(QCoreApplication::translate("FilterScriptDialog", "Dialog", nullptr));
        moveUpButton->setText(QCoreApplication::translate("FilterScriptDialog", "Move Up", nullptr));
        moveDownButton->setText(QCoreApplication::translate("FilterScriptDialog", "Move Down", nullptr));
        removeFilterButton->setText(QCoreApplication::translate("FilterScriptDialog", "Remove", nullptr));
        editParameterButton->setText(QCoreApplication::translate("FilterScriptDialog", "Edit Parameters", nullptr));
        saveScriptButton->setText(QCoreApplication::translate("FilterScriptDialog", "Save Script", nullptr));
        openScriptButton->setText(QCoreApplication::translate("FilterScriptDialog", "Open Script", nullptr));
        clearScriptButton->setText(QCoreApplication::translate("FilterScriptDialog", "Clear Script", nullptr));
        okButton->setText(QCoreApplication::translate("FilterScriptDialog", "Apply Script", nullptr));
        cancelButton->setText(QCoreApplication::translate("FilterScriptDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilterScriptDialog: public Ui_FilterScriptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTER_SCRIPT_DIALOG_H
