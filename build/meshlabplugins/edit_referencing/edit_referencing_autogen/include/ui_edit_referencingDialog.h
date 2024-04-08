/********************************************************************************
** Form generated from reading UI file 'edit_referencingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_REFERENCINGDIALOG_H
#define UI_EDIT_REFERENCINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edit_referencingDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *absRef;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addLine;
    QPushButton *delLine;
    QGridLayout *gridLayout;
    QPushButton *loadFromFile;
    QPushButton *exportToFile;
    QPushButton *pickCurrent;
    QPushButton *buttonPickRef;
    QGridLayout *gridLayout_2;
    QCheckBox *cbAllowScaling;
    QCheckBox *cbApplyToAll;
    QVBoxLayout *verticalLayout_3;
    QPushButton *buttonCalculate;
    QPushButton *buttonApply;
    QWidget *distRef;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QTableWidget *tableWidgetDist;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_scale;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *addDistance;
    QPushButton *delDistance;
    QGridLayout *gridLayout_3;
    QPushButton *bttLoadDistances;
    QPushButton *bttExportScaling;
    QPushButton *bttPickPointA;
    QPushButton *bttPickPointB;
    QGridLayout *gridLayout_4;
    QCheckBox *cbAllLayersScale;
    QVBoxLayout *verticalLayout_5;
    QPushButton *bttApplyScale;

    void setupUi(QWidget *edit_referencingDialog)
    {
        if (edit_referencingDialog->objectName().isEmpty())
            edit_referencingDialog->setObjectName(QString::fromUtf8("edit_referencingDialog"));
        edit_referencingDialog->resize(700, 500);
        verticalLayout_4 = new QVBoxLayout(edit_referencingDialog);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(9, 9, 9, 9);
        frame = new QFrame(edit_referencingDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 0));
        absRef = new QWidget();
        absRef->setObjectName(QString::fromUtf8("absRef"));
        verticalLayout = new QVBoxLayout(absRef);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 5, 2, 5);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 5, -1, 5);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 5, -1, 5);
        tableWidget = new QTableWidget(absRef);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setDefaultSectionSize(71);

        horizontalLayout_4->addWidget(tableWidget);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 5, 0, 5);
        addLine = new QPushButton(absRef);
        addLine->setObjectName(QString::fromUtf8("addLine"));
        addLine->setMinimumSize(QSize(100, 25));

        horizontalLayout->addWidget(addLine);

        delLine = new QPushButton(absRef);
        delLine->setObjectName(QString::fromUtf8("delLine"));
        delLine->setMinimumSize(QSize(100, 25));

        horizontalLayout->addWidget(delLine);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        loadFromFile = new QPushButton(absRef);
        loadFromFile->setObjectName(QString::fromUtf8("loadFromFile"));
        loadFromFile->setMinimumSize(QSize(100, 25));
        loadFromFile->setCheckable(false);
        loadFromFile->setFlat(false);

        gridLayout->addWidget(loadFromFile, 0, 0, 1, 1);

        exportToFile = new QPushButton(absRef);
        exportToFile->setObjectName(QString::fromUtf8("exportToFile"));
        exportToFile->setMinimumSize(QSize(100, 25));

        gridLayout->addWidget(exportToFile, 0, 1, 1, 1);

        pickCurrent = new QPushButton(absRef);
        pickCurrent->setObjectName(QString::fromUtf8("pickCurrent"));
        pickCurrent->setMinimumSize(QSize(100, 25));

        gridLayout->addWidget(pickCurrent, 1, 0, 1, 1);

        buttonPickRef = new QPushButton(absRef);
        buttonPickRef->setObjectName(QString::fromUtf8("buttonPickRef"));
        buttonPickRef->setMinimumSize(QSize(100, 25));

        gridLayout->addWidget(buttonPickRef, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 5, -1, 5);
        cbAllowScaling = new QCheckBox(absRef);
        cbAllowScaling->setObjectName(QString::fromUtf8("cbAllowScaling"));

        gridLayout_2->addWidget(cbAllowScaling, 0, 0, 1, 1);

        cbApplyToAll = new QCheckBox(absRef);
        cbApplyToAll->setObjectName(QString::fromUtf8("cbApplyToAll"));

        gridLayout_2->addWidget(cbApplyToAll, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 5, -1, 5);
        buttonCalculate = new QPushButton(absRef);
        buttonCalculate->setObjectName(QString::fromUtf8("buttonCalculate"));
        buttonCalculate->setMinimumSize(QSize(100, 25));

        verticalLayout_3->addWidget(buttonCalculate);

        buttonApply = new QPushButton(absRef);
        buttonApply->setObjectName(QString::fromUtf8("buttonApply"));
        buttonApply->setEnabled(false);
        buttonApply->setMinimumSize(QSize(100, 25));

        verticalLayout_3->addWidget(buttonApply);


        verticalLayout->addLayout(verticalLayout_3);

        tabWidget->addTab(absRef, QString());
        distRef = new QWidget();
        distRef->setObjectName(QString::fromUtf8("distRef"));
        verticalLayout_6 = new QVBoxLayout(distRef);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 5, -1, 5);

        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        tableWidgetDist = new QTableWidget(distRef);
        if (tableWidgetDist->columnCount() < 12)
            tableWidgetDist->setColumnCount(12);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetDist->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetDist->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetDist->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetDist->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetDist->setHorizontalHeaderItem(4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetDist->setHorizontalHeaderItem(5, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidgetDist->setHorizontalHeaderItem(6, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidgetDist->setHorizontalHeaderItem(7, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidgetDist->setHorizontalHeaderItem(8, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidgetDist->setHorizontalHeaderItem(9, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidgetDist->setHorizontalHeaderItem(10, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidgetDist->setHorizontalHeaderItem(11, __qtablewidgetitem20);
        tableWidgetDist->setObjectName(QString::fromUtf8("tableWidgetDist"));
        tableWidgetDist->horizontalHeader()->setDefaultSectionSize(53);

        horizontalLayout_5->addWidget(tableWidgetDist);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 5, 5, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        label = new QLabel(distRef);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout_7->addWidget(label);

        label_scale = new QLabel(distRef);
        label_scale->setObjectName(QString::fromUtf8("label_scale"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_scale->setFont(font1);

        horizontalLayout_7->addWidget(label_scale);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        addDistance = new QPushButton(distRef);
        addDistance->setObjectName(QString::fromUtf8("addDistance"));

        horizontalLayout_6->addWidget(addDistance);

        delDistance = new QPushButton(distRef);
        delDistance->setObjectName(QString::fromUtf8("delDistance"));

        horizontalLayout_6->addWidget(delDistance);


        verticalLayout_6->addLayout(horizontalLayout_6);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        bttLoadDistances = new QPushButton(distRef);
        bttLoadDistances->setObjectName(QString::fromUtf8("bttLoadDistances"));

        gridLayout_3->addWidget(bttLoadDistances, 0, 0, 1, 1);

        bttExportScaling = new QPushButton(distRef);
        bttExportScaling->setObjectName(QString::fromUtf8("bttExportScaling"));

        gridLayout_3->addWidget(bttExportScaling, 0, 1, 1, 1);

        bttPickPointA = new QPushButton(distRef);
        bttPickPointA->setObjectName(QString::fromUtf8("bttPickPointA"));

        gridLayout_3->addWidget(bttPickPointA, 1, 0, 1, 1);

        bttPickPointB = new QPushButton(distRef);
        bttPickPointB->setObjectName(QString::fromUtf8("bttPickPointB"));

        gridLayout_3->addWidget(bttPickPointB, 1, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, 0, -1, 0);
        cbAllLayersScale = new QCheckBox(distRef);
        cbAllLayersScale->setObjectName(QString::fromUtf8("cbAllLayersScale"));

        gridLayout_4->addWidget(cbAllLayersScale, 0, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        bttApplyScale = new QPushButton(distRef);
        bttApplyScale->setObjectName(QString::fromUtf8("bttApplyScale"));
        bttApplyScale->setEnabled(false);

        verticalLayout_5->addWidget(bttApplyScale);


        verticalLayout_6->addLayout(verticalLayout_5);

        tabWidget->addTab(distRef, QString());

        verticalLayout_2->addWidget(tabWidget);


        verticalLayout_4->addWidget(frame);


        retranslateUi(edit_referencingDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(edit_referencingDialog);
    } // setupUi

    void retranslateUi(QWidget *edit_referencingDialog)
    {
        edit_referencingDialog->setWindowTitle(QCoreApplication::translate("edit_referencingDialog", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("edit_referencingDialog", "Active", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("edit_referencingDialog", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("edit_referencingDialog", "X (mov)", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("edit_referencingDialog", "Y (mov)", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("edit_referencingDialog", "Z (mov)", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("edit_referencingDialog", "X (ref)", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("edit_referencingDialog", "Y (ref)", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("edit_referencingDialog", "Z (ref)", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("edit_referencingDialog", "error", nullptr));
        addLine->setText(QCoreApplication::translate("edit_referencingDialog", "Add New Point", nullptr));
        delLine->setText(QCoreApplication::translate("edit_referencingDialog", "Delete Current Point", nullptr));
        loadFromFile->setText(QCoreApplication::translate("edit_referencingDialog", "Load Reference Points From File", nullptr));
        exportToFile->setText(QCoreApplication::translate("edit_referencingDialog", "Export all Referencing Data to file...", nullptr));
        pickCurrent->setText(QCoreApplication::translate("edit_referencingDialog", "Pick current point on MOVING", nullptr));
        buttonPickRef->setText(QCoreApplication::translate("edit_referencingDialog", "Pick current point on REFERENCE", nullptr));
        cbAllowScaling->setText(QCoreApplication::translate("edit_referencingDialog", "Allow UNIFORM Scaling", nullptr));
        cbApplyToAll->setText(QCoreApplication::translate("edit_referencingDialog", "Apply to all visible layers", nullptr));
        buttonCalculate->setText(QCoreApplication::translate("edit_referencingDialog", "Calculate Rototranslation", nullptr));
        buttonApply->setText(QCoreApplication::translate("edit_referencingDialog", "Apply", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(absRef), QCoreApplication::translate("edit_referencingDialog", "Absolute Reference", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetDist->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("edit_referencingDialog", "Active", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetDist->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("edit_referencingDialog", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetDist->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("edit_referencingDialog", "X (a)", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetDist->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("edit_referencingDialog", "Y (a)", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetDist->horizontalHeaderItem(4);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("edit_referencingDialog", "Z (a)", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetDist->horizontalHeaderItem(5);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("edit_referencingDialog", "X (b)", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidgetDist->horizontalHeaderItem(6);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("edit_referencingDialog", "Y (b)", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidgetDist->horizontalHeaderItem(7);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("edit_referencingDialog", "Z (b)", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidgetDist->horizontalHeaderItem(8);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("edit_referencingDialog", "Curr. Dist.", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidgetDist->horizontalHeaderItem(9);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("edit_referencingDialog", "Targ. Dist.", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidgetDist->horizontalHeaderItem(10);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("edit_referencingDialog", "Scale", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidgetDist->horizontalHeaderItem(11);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("edit_referencingDialog", "Error", nullptr));
        label->setText(QCoreApplication::translate("edit_referencingDialog", "SCALE FACTOR :", nullptr));
        label_scale->setText(QCoreApplication::translate("edit_referencingDialog", "---", nullptr));
        addDistance->setText(QCoreApplication::translate("edit_referencingDialog", "Add New Distance", nullptr));
        delDistance->setText(QCoreApplication::translate("edit_referencingDialog", "Remove Current Distance", nullptr));
        bttLoadDistances->setText(QCoreApplication::translate("edit_referencingDialog", "Load Distances from File", nullptr));
        bttExportScaling->setText(QCoreApplication::translate("edit_referencingDialog", "Export Scaling Data", nullptr));
        bttPickPointA->setText(QCoreApplication::translate("edit_referencingDialog", "Pick Current Point A", nullptr));
        bttPickPointB->setText(QCoreApplication::translate("edit_referencingDialog", "Pick Current Point B", nullptr));
        cbAllLayersScale->setText(QCoreApplication::translate("edit_referencingDialog", "Apply to All Visible Layers", nullptr));
        bttApplyScale->setText(QCoreApplication::translate("edit_referencingDialog", "Apply", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(distRef), QCoreApplication::translate("edit_referencingDialog", "Scale Reference", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit_referencingDialog: public Ui_edit_referencingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_REFERENCINGDIALOG_H
