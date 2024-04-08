/********************************************************************************
** Form generated from reading UI file 'alignDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALIGNDIALOG_H
#define UI_ALIGNDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alignDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *alignTreeWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *glueHereButton;
    QPushButton *glueHereAllButton;
    QFrame *line_2;
    QPushButton *manualAlignButton;
    QPushButton *pointBasedAlignButton;
    QFrame *line_3;
    QPushButton *baseMeshButton;
    QPushButton *hideRevealButton;
    QFrame *line_4;
    QPushButton *icpButton;
    QVBoxLayout *verticalLayout;
    QPushButton *icpParamButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *icpParamDefMMButton;
    QPushButton *icpParamDefMButton;
    QFrame *line;
    QPushButton *meshTreeParamButton;
    QFrame *line_5;
    QPushButton *badArcButton;
    QPushButton *icpParamCurrentButton;
    QPushButton *recalcButton;
    QTextEdit *logTextEdit;

    void setupUi(QWidget *alignDialog)
    {
        if (alignDialog->objectName().isEmpty())
            alignDialog->setObjectName(QString::fromUtf8("alignDialog"));
        alignDialog->resize(461, 713);
        verticalLayout_3 = new QVBoxLayout(alignDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame = new QFrame(alignDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        alignTreeWidget = new QTreeWidget(frame);
        alignTreeWidget->setObjectName(QString::fromUtf8("alignTreeWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(alignTreeWidget->sizePolicy().hasHeightForWidth());
        alignTreeWidget->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        alignTreeWidget->setFont(font);
        alignTreeWidget->setSelectionMode(QAbstractItemView::NoSelection);
        alignTreeWidget->setColumnCount(4);

        verticalLayout_4->addWidget(alignTreeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        glueHereButton = new QPushButton(frame);
        glueHereButton->setObjectName(QString::fromUtf8("glueHereButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(glueHereButton->sizePolicy().hasHeightForWidth());
        glueHereButton->setSizePolicy(sizePolicy1);
        glueHereButton->setMinimumSize(QSize(100, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        glueHereButton->setFont(font1);

        verticalLayout_2->addWidget(glueHereButton);

        glueHereAllButton = new QPushButton(frame);
        glueHereAllButton->setObjectName(QString::fromUtf8("glueHereAllButton"));
        sizePolicy1.setHeightForWidth(glueHereAllButton->sizePolicy().hasHeightForWidth());
        glueHereAllButton->setSizePolicy(sizePolicy1);
        glueHereAllButton->setMinimumSize(QSize(100, 25));
        glueHereAllButton->setFont(font1);

        verticalLayout_2->addWidget(glueHereAllButton);

        line_2 = new QFrame(frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        manualAlignButton = new QPushButton(frame);
        manualAlignButton->setObjectName(QString::fromUtf8("manualAlignButton"));
        sizePolicy1.setHeightForWidth(manualAlignButton->sizePolicy().hasHeightForWidth());
        manualAlignButton->setSizePolicy(sizePolicy1);
        manualAlignButton->setMinimumSize(QSize(100, 25));
        manualAlignButton->setFont(font1);

        verticalLayout_2->addWidget(manualAlignButton);

        pointBasedAlignButton = new QPushButton(frame);
        pointBasedAlignButton->setObjectName(QString::fromUtf8("pointBasedAlignButton"));
        sizePolicy1.setHeightForWidth(pointBasedAlignButton->sizePolicy().hasHeightForWidth());
        pointBasedAlignButton->setSizePolicy(sizePolicy1);
        pointBasedAlignButton->setMinimumSize(QSize(100, 25));
        pointBasedAlignButton->setFont(font1);

        verticalLayout_2->addWidget(pointBasedAlignButton);

        line_3 = new QFrame(frame);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        baseMeshButton = new QPushButton(frame);
        baseMeshButton->setObjectName(QString::fromUtf8("baseMeshButton"));
        sizePolicy1.setHeightForWidth(baseMeshButton->sizePolicy().hasHeightForWidth());
        baseMeshButton->setSizePolicy(sizePolicy1);
        baseMeshButton->setMinimumSize(QSize(100, 25));
        baseMeshButton->setFont(font1);

        verticalLayout_2->addWidget(baseMeshButton);

        hideRevealButton = new QPushButton(frame);
        hideRevealButton->setObjectName(QString::fromUtf8("hideRevealButton"));
        sizePolicy1.setHeightForWidth(hideRevealButton->sizePolicy().hasHeightForWidth());
        hideRevealButton->setSizePolicy(sizePolicy1);
        hideRevealButton->setMinimumSize(QSize(100, 25));
        hideRevealButton->setFont(font1);

        verticalLayout_2->addWidget(hideRevealButton);

        line_4 = new QFrame(frame);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        icpButton = new QPushButton(frame);
        icpButton->setObjectName(QString::fromUtf8("icpButton"));
        icpButton->setMinimumSize(QSize(100, 25));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        icpButton->setFont(font2);

        verticalLayout_2->addWidget(icpButton);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        icpParamButton = new QPushButton(frame);
        icpParamButton->setObjectName(QString::fromUtf8("icpParamButton"));
        sizePolicy1.setHeightForWidth(icpParamButton->sizePolicy().hasHeightForWidth());
        icpParamButton->setSizePolicy(sizePolicy1);
        icpParamButton->setMinimumSize(QSize(100, 25));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(10);
        icpParamButton->setFont(font3);

        verticalLayout->addWidget(icpParamButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        icpParamDefMMButton = new QPushButton(frame);
        icpParamDefMMButton->setObjectName(QString::fromUtf8("icpParamDefMMButton"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(7);
        font4.setItalic(true);
        icpParamDefMMButton->setFont(font4);

        horizontalLayout_2->addWidget(icpParamDefMMButton);

        icpParamDefMButton = new QPushButton(frame);
        icpParamDefMButton->setObjectName(QString::fromUtf8("icpParamDefMButton"));
        icpParamDefMButton->setFont(font4);

        horizontalLayout_2->addWidget(icpParamDefMButton);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        meshTreeParamButton = new QPushButton(frame);
        meshTreeParamButton->setObjectName(QString::fromUtf8("meshTreeParamButton"));
        sizePolicy1.setHeightForWidth(meshTreeParamButton->sizePolicy().hasHeightForWidth());
        meshTreeParamButton->setSizePolicy(sizePolicy1);
        meshTreeParamButton->setMinimumSize(QSize(100, 25));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Arial"));
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setWeight(50);
        meshTreeParamButton->setFont(font5);

        verticalLayout->addWidget(meshTreeParamButton);

        line_5 = new QFrame(frame);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_5);

        badArcButton = new QPushButton(frame);
        badArcButton->setObjectName(QString::fromUtf8("badArcButton"));
        sizePolicy1.setHeightForWidth(badArcButton->sizePolicy().hasHeightForWidth());
        badArcButton->setSizePolicy(sizePolicy1);
        badArcButton->setMinimumSize(QSize(100, 25));
        badArcButton->setFont(font1);

        verticalLayout->addWidget(badArcButton);

        icpParamCurrentButton = new QPushButton(frame);
        icpParamCurrentButton->setObjectName(QString::fromUtf8("icpParamCurrentButton"));
        sizePolicy1.setHeightForWidth(icpParamCurrentButton->sizePolicy().hasHeightForWidth());
        icpParamCurrentButton->setSizePolicy(sizePolicy1);
        icpParamCurrentButton->setMinimumSize(QSize(100, 25));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Arial"));
        font6.setPointSize(8);
        icpParamCurrentButton->setFont(font6);

        verticalLayout->addWidget(icpParamCurrentButton);

        recalcButton = new QPushButton(frame);
        recalcButton->setObjectName(QString::fromUtf8("recalcButton"));
        sizePolicy1.setHeightForWidth(recalcButton->sizePolicy().hasHeightForWidth());
        recalcButton->setSizePolicy(sizePolicy1);
        recalcButton->setMinimumSize(QSize(100, 25));
        recalcButton->setFont(font6);

        verticalLayout->addWidget(recalcButton);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);

        logTextEdit = new QTextEdit(frame);
        logTextEdit->setObjectName(QString::fromUtf8("logTextEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(logTextEdit->sizePolicy().hasHeightForWidth());
        logTextEdit->setSizePolicy(sizePolicy2);
        QFont font7;
        font7.setFamily(QString::fromUtf8("Courier"));
        font7.setPointSize(9);
        logTextEdit->setFont(font7);
        logTextEdit->setReadOnly(true);

        verticalLayout_4->addWidget(logTextEdit);


        verticalLayout_3->addWidget(frame);


        retranslateUi(alignDialog);

        QMetaObject::connectSlotsByName(alignDialog);
    } // setupUi

    void retranslateUi(QWidget *alignDialog)
    {
        alignDialog->setWindowTitle(QCoreApplication::translate("alignDialog", "Align Tool", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = alignTreeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("alignDialog", "4", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("alignDialog", "3", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("alignDialog", "2", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("alignDialog", "1", nullptr));
        glueHereButton->setText(QCoreApplication::translate("alignDialog", "Glue Here Mesh", nullptr));
        glueHereAllButton->setText(QCoreApplication::translate("alignDialog", "Glue Here Visible Meshes", nullptr));
        manualAlignButton->setText(QCoreApplication::translate("alignDialog", "Manual Rough Glueing", nullptr));
        pointBasedAlignButton->setText(QCoreApplication::translate("alignDialog", "Point Based Glueing", nullptr));
#if QT_CONFIG(tooltip)
        baseMeshButton->setToolTip(QCoreApplication::translate("alignDialog", "When pressed it make the current mesh as base mesh, e.g. the one with a Identity as transformation.", nullptr));
#endif // QT_CONFIG(tooltip)
        baseMeshButton->setText(QCoreApplication::translate("alignDialog", "Set as Base Mesh", nullptr));
        hideRevealButton->setText(QCoreApplication::translate("alignDialog", "Hide/Reveal Unglued Mesh", nullptr));
        icpButton->setText(QCoreApplication::translate("alignDialog", "Process", nullptr));
        icpParamButton->setText(QCoreApplication::translate("alignDialog", "Edit Defaults ICP Parameters...", nullptr));
        icpParamDefMMButton->setText(QCoreApplication::translate("alignDialog", "Set ICP params for mm", nullptr));
        icpParamDefMButton->setText(QCoreApplication::translate("alignDialog", "Set ICP params for m", nullptr));
        meshTreeParamButton->setText(QCoreApplication::translate("alignDialog", "Arc Creation Parameters", nullptr));
        badArcButton->setText(QCoreApplication::translate("alignDialog", "Show Bad Arc", nullptr));
        icpParamCurrentButton->setText(QCoreApplication::translate("alignDialog", "ICP Params Current Arc ", nullptr));
        recalcButton->setText(QCoreApplication::translate("alignDialog", "Recalc Current Arc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class alignDialog: public Ui_alignDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALIGNDIALOG_H
