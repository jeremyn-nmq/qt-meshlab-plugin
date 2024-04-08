/********************************************************************************
** Form generated from reading UI file 'about_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_DIALOG_H
#define UI_ABOUT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *labelVCGDescription;
    QSpacerItem *verticalSpacer;
    QLabel *labelMLLogo;
    QDialogButtonBox *buttonBox;
    QLabel *labelVCGLogo_4;
    QLabel *labelMLName;
    QLabel *labelVCGDescription_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(879, 571);
        gridLayout = new QGridLayout(AboutDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelVCGDescription = new QLabel(AboutDialog);
        labelVCGDescription->setObjectName(QString::fromUtf8("labelVCGDescription"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelVCGDescription->sizePolicy().hasHeightForWidth());
        labelVCGDescription->setSizePolicy(sizePolicy);
        labelVCGDescription->setOpenExternalLinks(true);

        gridLayout->addWidget(labelVCGDescription, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        labelMLLogo = new QLabel(AboutDialog);
        labelMLLogo->setObjectName(QString::fromUtf8("labelMLLogo"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelMLLogo->sizePolicy().hasHeightForWidth());
        labelMLLogo->setSizePolicy(sizePolicy1);
        labelMLLogo->setPixmap(QPixmap(QString::fromUtf8(":/images/meshlabLogo_256x256.png")));
        labelMLLogo->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelMLLogo, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 3, 1, 1);

        labelVCGLogo_4 = new QLabel(AboutDialog);
        labelVCGLogo_4->setObjectName(QString::fromUtf8("labelVCGLogo_4"));
        sizePolicy1.setHeightForWidth(labelVCGLogo_4->sizePolicy().hasHeightForWidth());
        labelVCGLogo_4->setSizePolicy(sizePolicy1);
        labelVCGLogo_4->setMinimumSize(QSize(186, 150));
        labelVCGLogo_4->setPixmap(QPixmap(QString::fromUtf8(":/images/logo.png")));
        labelVCGLogo_4->setScaledContents(false);

        gridLayout->addWidget(labelVCGLogo_4, 3, 1, 1, 1);

        labelMLName = new QLabel(AboutDialog);
        labelMLName->setObjectName(QString::fromUtf8("labelMLName"));
        labelMLName->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelMLName, 1, 0, 1, 1);

        labelVCGDescription_2 = new QLabel(AboutDialog);
        labelVCGDescription_2->setObjectName(QString::fromUtf8("labelVCGDescription_2"));
        labelVCGDescription_2->setWordWrap(true);
        labelVCGDescription_2->setOpenExternalLinks(true);

        gridLayout->addWidget(labelVCGDescription_2, 3, 3, 1, 1);

        label = new QLabel(AboutDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setMinimumSize(QSize(0, 300));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);
        label->setMargin(3);
        label->setOpenExternalLinks(true);

        gridLayout->addWidget(label, 0, 1, 3, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 2, 1, 1);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About MeshLab", nullptr));
        labelVCGDescription->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p>Copyright(C) 2005-2021</p><p>Paolo Cignoni<br/><a href=\"http://vcg.isti.cnr.it/%7Ecignoni\"><span style=\" text-decoration: underline; color:#007af4;\">http://vcg.isti.cnr.it/~cignoni</span></a></p><p>Visual Computing Lab<br/><a href=\"http://vcg.isti.cnr.it\"><span style=\" text-decoration: underline; color:#007af4;\">http://vcg.isti.cnr.it</span></a></p><p>ISTI - CNR<br/><a href=\"http://www.isti.cnr.it\"><span style=\" text-decoration: underline; color:#007af4;\">http://www.isti.cnr.it</span></a></p></body></html>", nullptr));
        labelMLLogo->setText(QString());
        labelVCGLogo_4->setText(QString());
        labelMLName->setText(QCoreApplication::translate("AboutDialog", "MESHLAB VERSION BUILT ON XXX", nullptr));
        labelVCGDescription_2->setText(QCoreApplication::translate("AboutDialog", "<p><strong>Contacts</strong><br />For detailed bug reports, meaningful feature requests and grounded technical issues please use the <a href=\"https://github.com/cnr-isti-vclab/meshlab/issues\">GitHub services</a>.<br />For any other high-level question about MeshLab (<em>no bugs or feature requests, please</em>) contact:<br />- Paolo Cignoni (<a href=\"mailto:p.cignoni@isti.cnr.it?subject=%5BMeshLab%5D%20Info%20request\">paolo.cignoni@isti.cnr.it</a>)<br />The complete list of contributors is available <a href=\"https://github.com/cnr-isti-vclab/meshlab/graphs/contributors\">here</a>.<br />Some of the contributors of MeshLab have received financial support from various projects, acknowledged <a href=\"http://vcg.isti.cnr.it/projects.php\">here</a>.</p>", nullptr));
        label->setText(QCoreApplication::translate("AboutDialog", "<p><strong>General Info:&nbsp;<a href=\"http://www.meshlab.net\">www.meshlab.net</a></strong></p>\n"
"<p>MeshLab is the most used open source system for processing and editing 3D triangular meshes. It provides a set of tools for editing, cleaning, healing, inspecting, rendering, texturing and converting meshes. It offers features for processing raw data produced by 3D digitization tools/devices and for preparing models for 3D printing. The system is heavily based on the <a href=\"http://www.vcglib.net\">VCG library</a>. <br />Source code is available on <a href=\"https://github.com/cnr-isti-vclab/meshlab\">GitHub </a>(protected by GPL).</p>\n"
"<p><strong>References</strong><br />Remember that the simplest way to show your appreciation of the MeshLab system is to cite it whenever you have used some of its functionality. Please check the <a href=\"http://www.meshlab.net/#references\">list of the many publications</a> related with MeshLab.</p>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_DIALOG_H
