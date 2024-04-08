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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShaderDialogClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *uvTab;
    QWidget *varListLayer;
    QHBoxLayout *hboxLayout;
    QWidget *textureTab;
    QWidget *glTab;
    QWidget *vpTab;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *vpTextBrowser;
    QWidget *fpTab;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *fpTextBrowser;
    QHBoxLayout *bottomRowLayout;
    QSpacerItem *spacer;

    void setupUi(QWidget *ShaderDialogClass)
    {
        if (ShaderDialogClass->objectName().isEmpty())
            ShaderDialogClass->setObjectName(QString::fromUtf8("ShaderDialogClass"));
        ShaderDialogClass->resize(601, 541);
        verticalLayout_2 = new QVBoxLayout(ShaderDialogClass);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(ShaderDialogClass);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        uvTab = new QWidget();
        uvTab->setObjectName(QString::fromUtf8("uvTab"));
        varListLayer = new QWidget(uvTab);
        varListLayer->setObjectName(QString::fromUtf8("varListLayer"));
        varListLayer->setGeometry(QRect(10, 20, 171, 20));
        hboxLayout = new QHBoxLayout(varListLayer);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(uvTab, QString());
        textureTab = new QWidget();
        textureTab->setObjectName(QString::fromUtf8("textureTab"));
        tabWidget->addTab(textureTab, QString());
        glTab = new QWidget();
        glTab->setObjectName(QString::fromUtf8("glTab"));
        tabWidget->addTab(glTab, QString());
        vpTab = new QWidget();
        vpTab->setObjectName(QString::fromUtf8("vpTab"));
        horizontalLayout_2 = new QHBoxLayout(vpTab);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        vpTextBrowser = new QTextBrowser(vpTab);
        vpTextBrowser->setObjectName(QString::fromUtf8("vpTextBrowser"));

        horizontalLayout_2->addWidget(vpTextBrowser);

        tabWidget->addTab(vpTab, QString());
        fpTab = new QWidget();
        fpTab->setObjectName(QString::fromUtf8("fpTab"));
        horizontalLayout = new QHBoxLayout(fpTab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fpTextBrowser = new QTextBrowser(fpTab);
        fpTextBrowser->setObjectName(QString::fromUtf8("fpTextBrowser"));

        horizontalLayout->addWidget(fpTextBrowser);

        tabWidget->addTab(fpTab, QString());

        verticalLayout->addWidget(tabWidget);

        bottomRowLayout = new QHBoxLayout();
        bottomRowLayout->setObjectName(QString::fromUtf8("bottomRowLayout"));
        spacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        bottomRowLayout->addItem(spacer);


        verticalLayout->addLayout(bottomRowLayout);


        verticalLayout_2->addWidget(frame);


        retranslateUi(ShaderDialogClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ShaderDialogClass);
    } // setupUi

    void retranslateUi(QWidget *ShaderDialogClass)
    {
        ShaderDialogClass->setWindowTitle(QCoreApplication::translate("ShaderDialogClass", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(uvTab), QCoreApplication::translate("ShaderDialogClass", "Uniform Variables", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(textureTab), QCoreApplication::translate("ShaderDialogClass", "Textures", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(glTab), QCoreApplication::translate("ShaderDialogClass", "OpenGL Status", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(vpTab), QCoreApplication::translate("ShaderDialogClass", "Vertex Program", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(fpTab), QCoreApplication::translate("ShaderDialogClass", "Fragment Program", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShaderDialogClass: public Ui_ShaderDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHADERDIALOG_H
