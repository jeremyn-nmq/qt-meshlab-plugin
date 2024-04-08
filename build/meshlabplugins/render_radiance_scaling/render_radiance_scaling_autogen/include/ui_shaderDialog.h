/********************************************************************************
** Form generated from reading UI file 'shaderDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHADERDIALOG_H
#define UI_SHADERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShaderDialogClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QComboBox *displayBox;
    QSlider *enSlider;
    QLabel *enLabel;
    QLabel *label;
    QCheckBox *enableCheckBox;
    QLabel *label_2;
    QCheckBox *invertCheckBox;
    QCheckBox *doubleSideCheckBox;
    QGridLayout *gridLayout_3;
    QLabel *litLabel1;
    QLabel *litLabel2;
    QCheckBox *litCheckBox;
    QPushButton *loadButton1;
    QPushButton *loadButton2;
    QLabel *litIcon1;
    QLabel *litIcon2;
    QHBoxLayout *horizontalLayout;
    QLabel *transitionTitle;
    QSlider *transitionSlider;
    QLabel *transitionLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ShaderDialogClass)
    {
        if (ShaderDialogClass->objectName().isEmpty())
            ShaderDialogClass->setObjectName(QString::fromUtf8("ShaderDialogClass"));
        ShaderDialogClass->resize(430, 530);
        verticalLayout_2 = new QVBoxLayout(ShaderDialogClass);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(ShaderDialogClass);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(2);
        displayBox = new QComboBox(groupBox);
        displayBox->addItem(QString());
        displayBox->addItem(QString());
        displayBox->addItem(QString());
        displayBox->addItem(QString());
        displayBox->setObjectName(QString::fromUtf8("displayBox"));

        gridLayout->addWidget(displayBox, 2, 1, 1, 1);

        enSlider = new QSlider(groupBox);
        enSlider->setObjectName(QString::fromUtf8("enSlider"));
        enSlider->setMaximum(100);
        enSlider->setValue(50);
        enSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(enSlider, 3, 1, 1, 1);

        enLabel = new QLabel(groupBox);
        enLabel->setObjectName(QString::fromUtf8("enLabel"));
        enLabel->setLayoutDirection(Qt::LeftToRight);
        enLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(enLabel, 3, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        enableCheckBox = new QCheckBox(groupBox);
        enableCheckBox->setObjectName(QString::fromUtf8("enableCheckBox"));
        enableCheckBox->setLayoutDirection(Qt::LeftToRight);
        enableCheckBox->setChecked(true);

        gridLayout->addWidget(enableCheckBox, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        invertCheckBox = new QCheckBox(groupBox);
        invertCheckBox->setObjectName(QString::fromUtf8("invertCheckBox"));

        gridLayout->addWidget(invertCheckBox, 0, 1, 1, 1);

        doubleSideCheckBox = new QCheckBox(groupBox);
        doubleSideCheckBox->setObjectName(QString::fromUtf8("doubleSideCheckBox"));

        gridLayout->addWidget(doubleSideCheckBox, 0, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout->addWidget(groupBox);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        litLabel1 = new QLabel(frame);
        litLabel1->setObjectName(QString::fromUtf8("litLabel1"));
        litLabel1->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_3->addWidget(litLabel1, 2, 0, 1, 1);

        litLabel2 = new QLabel(frame);
        litLabel2->setObjectName(QString::fromUtf8("litLabel2"));
        litLabel2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_3->addWidget(litLabel2, 2, 1, 1, 1);

        litCheckBox = new QCheckBox(frame);
        litCheckBox->setObjectName(QString::fromUtf8("litCheckBox"));
        litCheckBox->setLayoutDirection(Qt::LeftToRight);
        litCheckBox->setChecked(true);

        gridLayout_3->addWidget(litCheckBox, 0, 0, 1, 1);

        loadButton1 = new QPushButton(frame);
        loadButton1->setObjectName(QString::fromUtf8("loadButton1"));

        gridLayout_3->addWidget(loadButton1, 3, 0, 1, 1);

        loadButton2 = new QPushButton(frame);
        loadButton2->setObjectName(QString::fromUtf8("loadButton2"));

        gridLayout_3->addWidget(loadButton2, 3, 1, 1, 1);

        litIcon1 = new QLabel(frame);
        litIcon1->setObjectName(QString::fromUtf8("litIcon1"));
        litIcon1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(litIcon1, 1, 0, 1, 1);

        litIcon2 = new QLabel(frame);
        litIcon2->setObjectName(QString::fromUtf8("litIcon2"));
        litIcon2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(litIcon2, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        transitionTitle = new QLabel(frame);
        transitionTitle->setObjectName(QString::fromUtf8("transitionTitle"));

        horizontalLayout->addWidget(transitionTitle);

        transitionSlider = new QSlider(frame);
        transitionSlider->setObjectName(QString::fromUtf8("transitionSlider"));
        transitionSlider->setMaximum(100);
        transitionSlider->setValue(50);
        transitionSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(transitionSlider);

        transitionLabel = new QLabel(frame);
        transitionLabel->setObjectName(QString::fromUtf8("transitionLabel"));

        horizontalLayout->addWidget(transitionLabel);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addWidget(frame);


        retranslateUi(ShaderDialogClass);

        QMetaObject::connectSlotsByName(ShaderDialogClass);
    } // setupUi

    void retranslateUi(QWidget *ShaderDialogClass)
    {
        ShaderDialogClass->setWindowTitle(QCoreApplication::translate("ShaderDialogClass", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ShaderDialogClass", "Radiance Scaling parameters", nullptr));
        displayBox->setItemText(0, QCoreApplication::translate("ShaderDialogClass", "Lambertian Radiance Scaling", nullptr));
        displayBox->setItemText(1, QCoreApplication::translate("ShaderDialogClass", "Lit Sphere Radiance Scaling", nullptr));
        displayBox->setItemText(2, QCoreApplication::translate("ShaderDialogClass", "Colored Descriptor", nullptr));
        displayBox->setItemText(3, QCoreApplication::translate("ShaderDialogClass", "Grey Descriptor", nullptr));

        enLabel->setText(QCoreApplication::translate("ShaderDialogClass", "0.5", nullptr));
        label->setText(QCoreApplication::translate("ShaderDialogClass", "Display Mode:", nullptr));
        enableCheckBox->setText(QCoreApplication::translate("ShaderDialogClass", "Enable Radiance Scaling", nullptr));
        label_2->setText(QCoreApplication::translate("ShaderDialogClass", "Enhancement:", nullptr));
        invertCheckBox->setText(QCoreApplication::translate("ShaderDialogClass", "Invert Effect", nullptr));
        doubleSideCheckBox->setText(QCoreApplication::translate("ShaderDialogClass", "Double side", nullptr));
        litLabel1->setText(QCoreApplication::translate("ShaderDialogClass", "Convexities", nullptr));
        litLabel2->setText(QCoreApplication::translate("ShaderDialogClass", "Concavities", nullptr));
        litCheckBox->setText(QCoreApplication::translate("ShaderDialogClass", "Use 2 Lit Spheres", nullptr));
        loadButton1->setText(QCoreApplication::translate("ShaderDialogClass", "Load", nullptr));
        loadButton2->setText(QCoreApplication::translate("ShaderDialogClass", "Load", nullptr));
        litIcon1->setText(QString());
        litIcon2->setText(QString());
        transitionTitle->setText(QCoreApplication::translate("ShaderDialogClass", "Transition:", nullptr));
        transitionLabel->setText(QCoreApplication::translate("ShaderDialogClass", "0.5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShaderDialogClass: public Ui_ShaderDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHADERDIALOG_H
