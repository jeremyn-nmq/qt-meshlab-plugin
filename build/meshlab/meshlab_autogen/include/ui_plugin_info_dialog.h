/********************************************************************************
** Form generated from reading UI file 'plugin_info_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGIN_INFO_DIALOG_H
#define UI_PLUGIN_INFO_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginInfoDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *loadPluginsPushButton;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *PluginInfoDialog)
    {
        if (PluginInfoDialog->objectName().isEmpty())
            PluginInfoDialog->setObjectName(QString::fromUtf8("PluginInfoDialog"));
        PluginInfoDialog->resize(773, 476);
        gridLayout = new QGridLayout(PluginInfoDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        loadPluginsPushButton = new QPushButton(PluginInfoDialog);
        loadPluginsPushButton->setObjectName(QString::fromUtf8("loadPluginsPushButton"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("folder-open")));
        loadPluginsPushButton->setIcon(icon);

        gridLayout->addWidget(loadPluginsPushButton, 2, 0, 1, 1);

        treeWidget = new QTreeWidget(PluginInfoDialog);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->header()->setCascadingSectionResizes(false);
        treeWidget->header()->setStretchLastSection(true);

        gridLayout->addWidget(treeWidget, 1, 0, 1, 2);

        buttonBox = new QDialogButtonBox(PluginInfoDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);

        label = new QLabel(PluginInfoDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);


        retranslateUi(PluginInfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PluginInfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PluginInfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PluginInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *PluginInfoDialog)
    {
        PluginInfoDialog->setWindowTitle(QCoreApplication::translate("PluginInfoDialog", "Plugin Information", nullptr));
        loadPluginsPushButton->setText(QCoreApplication::translate("PluginInfoDialog", "Load Plugins", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("PluginInfoDialog", "Uninstall", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("PluginInfoDialog", "File", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("PluginInfoDialog", "Vendor", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("PluginInfoDialog", "Type", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("PluginInfoDialog", "Enabled", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("PluginInfoDialog", "Plugins", nullptr));
        label->setText(QCoreApplication::translate("PluginInfoDialog", "Number of plugin loaded: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginInfoDialog: public Ui_PluginInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGIN_INFO_DIALOG_H
