/********************************************************************************
** Form generated from reading UI file 'save_snapshot_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVE_SNAPSHOT_DIALOG_H
#define UI_SAVE_SNAPSHOT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SaveSnapShotDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hlayout1;
    QLabel *label;
    QLineEdit *outDirLineEdit;
    QPushButton *browseDir;
    QSpacerItem *spacerItem;
    QHBoxLayout *hlayout2;
    QLabel *label_2;
    QLineEdit *baseNameLineEdit;
    QLabel *label_3;
    QSpinBox *counterSpinBox;
    QSpacerItem *spacerItem1;
    QCheckBox *alllayersCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *tiledSaveCheckBox;
    QHBoxLayout *hlayout3;
    QSpacerItem *spacerItem2;
    QLabel *label_5;
    QComboBox *backgroundComboBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QSpinBox *resolutionSpinBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *addToRastersCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SaveSnapShotDialog)
    {
        if (SaveSnapShotDialog->objectName().isEmpty())
            SaveSnapShotDialog->setObjectName(QString::fromUtf8("SaveSnapShotDialog"));
        SaveSnapShotDialog->resize(726, 225);
        vboxLayout = new QVBoxLayout(SaveSnapShotDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hlayout1 = new QHBoxLayout();
        hlayout1->setSpacing(6);
        hlayout1->setObjectName(QString::fromUtf8("hlayout1"));
        label = new QLabel(SaveSnapShotDialog);
        label->setObjectName(QString::fromUtf8("label"));

        hlayout1->addWidget(label);

        outDirLineEdit = new QLineEdit(SaveSnapShotDialog);
        outDirLineEdit->setObjectName(QString::fromUtf8("outDirLineEdit"));
        outDirLineEdit->setReadOnly(true);

        hlayout1->addWidget(outDirLineEdit);

        browseDir = new QPushButton(SaveSnapShotDialog);
        browseDir->setObjectName(QString::fromUtf8("browseDir"));
        browseDir->setMinimumSize(QSize(20, 20));
        browseDir->setMaximumSize(QSize(20, 20));

        hlayout1->addWidget(browseDir);

        spacerItem = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlayout1->addItem(spacerItem);


        vboxLayout->addLayout(hlayout1);

        hlayout2 = new QHBoxLayout();
        hlayout2->setSpacing(6);
        hlayout2->setObjectName(QString::fromUtf8("hlayout2"));
        label_2 = new QLabel(SaveSnapShotDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hlayout2->addWidget(label_2);

        baseNameLineEdit = new QLineEdit(SaveSnapShotDialog);
        baseNameLineEdit->setObjectName(QString::fromUtf8("baseNameLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(baseNameLineEdit->sizePolicy().hasHeightForWidth());
        baseNameLineEdit->setSizePolicy(sizePolicy);
        baseNameLineEdit->setMinimumSize(QSize(200, 20));

        hlayout2->addWidget(baseNameLineEdit);

        label_3 = new QLabel(SaveSnapShotDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hlayout2->addWidget(label_3);

        counterSpinBox = new QSpinBox(SaveSnapShotDialog);
        counterSpinBox->setObjectName(QString::fromUtf8("counterSpinBox"));
        counterSpinBox->setMaximum(999);

        hlayout2->addWidget(counterSpinBox);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlayout2->addItem(spacerItem1);

        alllayersCheckBox = new QCheckBox(SaveSnapShotDialog);
        alllayersCheckBox->setObjectName(QString::fromUtf8("alllayersCheckBox"));

        hlayout2->addWidget(alllayersCheckBox);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlayout2->addItem(horizontalSpacer_3);

        tiledSaveCheckBox = new QCheckBox(SaveSnapShotDialog);
        tiledSaveCheckBox->setObjectName(QString::fromUtf8("tiledSaveCheckBox"));

        hlayout2->addWidget(tiledSaveCheckBox);


        vboxLayout->addLayout(hlayout2);

        hlayout3 = new QHBoxLayout();
        hlayout3->setSpacing(6);
        hlayout3->setObjectName(QString::fromUtf8("hlayout3"));
        spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlayout3->addItem(spacerItem2);

        label_5 = new QLabel(SaveSnapShotDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        hlayout3->addWidget(label_5);

        backgroundComboBox = new QComboBox(SaveSnapShotDialog);
        backgroundComboBox->addItem(QString());
        backgroundComboBox->addItem(QString());
        backgroundComboBox->addItem(QString());
        backgroundComboBox->addItem(QString());
        backgroundComboBox->setObjectName(QString::fromUtf8("backgroundComboBox"));

        hlayout3->addWidget(backgroundComboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlayout3->addItem(horizontalSpacer_2);

        label_4 = new QLabel(SaveSnapShotDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        hlayout3->addWidget(label_4);

        resolutionSpinBox = new QSpinBox(SaveSnapShotDialog);
        resolutionSpinBox->setObjectName(QString::fromUtf8("resolutionSpinBox"));
        resolutionSpinBox->setMinimum(1);

        hlayout3->addWidget(resolutionSpinBox);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlayout3->addItem(horizontalSpacer);

        addToRastersCheckBox = new QCheckBox(SaveSnapShotDialog);
        addToRastersCheckBox->setObjectName(QString::fromUtf8("addToRastersCheckBox"));

        hlayout3->addWidget(addToRastersCheckBox);


        vboxLayout->addLayout(hlayout3);

        buttonBox = new QDialogButtonBox(SaveSnapShotDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(SaveSnapShotDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SaveSnapShotDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SaveSnapShotDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SaveSnapShotDialog);
    } // setupUi

    void retranslateUi(QDialog *SaveSnapShotDialog)
    {
        SaveSnapShotDialog->setWindowTitle(QCoreApplication::translate("SaveSnapShotDialog", "Save Snapshot", nullptr));
        label->setText(QCoreApplication::translate("SaveSnapShotDialog", "Output folder  ", nullptr));
        browseDir->setText(QCoreApplication::translate("SaveSnapShotDialog", "...", nullptr));
        label_2->setText(QCoreApplication::translate("SaveSnapShotDialog", "Base name  ", nullptr));
        label_3->setText(QCoreApplication::translate("SaveSnapShotDialog", "Counter", nullptr));
        alllayersCheckBox->setText(QCoreApplication::translate("SaveSnapShotDialog", "Snap All Layers", nullptr));
#if QT_CONFIG(tooltip)
        tiledSaveCheckBox->setToolTip(QCoreApplication::translate("SaveSnapShotDialog", "If checked, save each image independently, allowing to later combine the saved images into a very very large image", nullptr));
#endif // QT_CONFIG(tooltip)
        tiledSaveCheckBox->setText(QCoreApplication::translate("SaveSnapShotDialog", "Tiled Save", nullptr));
        label_5->setText(QCoreApplication::translate("SaveSnapShotDialog", "Background", nullptr));
        backgroundComboBox->setItemText(0, QCoreApplication::translate("SaveSnapShotDialog", "MeshLab Gradient", nullptr));
        backgroundComboBox->setItemText(1, QCoreApplication::translate("SaveSnapShotDialog", "Alpha Transparent", nullptr));
        backgroundComboBox->setItemText(2, QCoreApplication::translate("SaveSnapShotDialog", "Solid White", nullptr));
        backgroundComboBox->setItemText(3, QCoreApplication::translate("SaveSnapShotDialog", "Solid Black", nullptr));

#if QT_CONFIG(tooltip)
        label_4->setToolTip(QCoreApplication::translate("SaveSnapShotDialog", "The resolution of the screenshot is the resolution of the current window multiplied by this number", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("SaveSnapShotDialog", "Screen Multiplier  ", nullptr));
#if QT_CONFIG(tooltip)
        resolutionSpinBox->setToolTip(QCoreApplication::translate("SaveSnapShotDialog", "The resolution of the screenshot is the resolution of the current window multiplied by this number", nullptr));
#endif // QT_CONFIG(tooltip)
        addToRastersCheckBox->setText(QCoreApplication::translate("SaveSnapShotDialog", "Add Snapshot as new Raster Layer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveSnapShotDialog: public Ui_SaveSnapShotDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVE_SNAPSHOT_DIALOG_H
