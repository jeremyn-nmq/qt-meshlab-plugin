/********************************************************************************
** Form generated from reading UI file 'congrats_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONGRATS_DIALOG_H
#define UI_CONGRATS_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_CongratsDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *emailButton;
    QPushButton *githubButton;
    QCheckBox *dontShowCheckBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *CongratsDialog)
    {
        if (CongratsDialog->objectName().isEmpty())
            CongratsDialog->setObjectName(QString::fromUtf8("CongratsDialog"));
        CongratsDialog->resize(758, 486);
        gridLayout = new QGridLayout(CongratsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        closeButton = new QPushButton(CongratsDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon);

        gridLayout->addWidget(closeButton, 2, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        emailButton = new QPushButton(CongratsDialog);
        emailButton->setObjectName(QString::fromUtf8("emailButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/email-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        emailButton->setIcon(icon1);

        gridLayout->addWidget(emailButton, 2, 4, 1, 1);

        githubButton = new QPushButton(CongratsDialog);
        githubButton->setObjectName(QString::fromUtf8("githubButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/github-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        githubButton->setIcon(icon2);

        gridLayout->addWidget(githubButton, 2, 5, 1, 1);

        dontShowCheckBox = new QCheckBox(CongratsDialog);
        dontShowCheckBox->setObjectName(QString::fromUtf8("dontShowCheckBox"));

        gridLayout->addWidget(dontShowCheckBox, 2, 0, 1, 1);

        textBrowser = new QTextBrowser(CongratsDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(textBrowser, 0, 0, 1, 6);


        retranslateUi(CongratsDialog);

        githubButton->setDefault(true);


        QMetaObject::connectSlotsByName(CongratsDialog);
    } // setupUi

    void retranslateUi(QDialog *CongratsDialog)
    {
        CongratsDialog->setWindowTitle(QCoreApplication::translate("CongratsDialog", "Congratulations!", nullptr));
        closeButton->setText(QCoreApplication::translate("CongratsDialog", "Close", nullptr));
        emailButton->setText(QCoreApplication::translate("CongratsDialog", "Send us an email", nullptr));
        githubButton->setText(QCoreApplication::translate("CongratsDialog", "Share on GitHub", nullptr));
        dontShowCheckBox->setText(QCoreApplication::translate("CongratsDialog", "Don't show this message again.", nullptr));
        textBrowser->setDocumentTitle(QCoreApplication::translate("CongratsDialog", "Congratulations", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("CongratsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><title>Congratulations</title><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Sans'; font-size:18pt;\">Congratulations! </span><br /><span style=\" font-family:'Lucida Sans';\"><br />You have successfully used MeshLab to open and process more than </span><span style=\" font-family:'Lucida Sans'; font-style:italic;\">one hundred meshes</span><span style=\" font-family:'Lucida Sans';\">!<br />We hope that this means that you have found MeshLab useful.<br /><br />Please consider to share your experience on GitHub, or to send a short email to the developers of Mes"
                        "hLab, describing how MeshLab fitted your needs. Attach some screenshots of your processed meshes and tell us your impression about MeshLab. <br /><br />MeshLab is developed on public funding and assessment of its impact on the whole community is necessary, so, </span><span style=\" font-family:'Lucida Sans'; font-style:italic;\">please</span><span style=\" font-family:'Lucida Sans';\">, spend a couple of minutes sharing your experience to us (or at least connect with the MeshLab FaceBook page).<br /><br />Thanks for using MeshLab<br /><br />Paolo Cignoni<br /><br /></span><a href=\"http://www.facebook.com/MeshLab\"><img src=\":images/facebook.gif\" /></a><span style=\" font-family:'Lucida Sans';\"> </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CongratsDialog: public Ui_CongratsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONGRATS_DIALOG_H
