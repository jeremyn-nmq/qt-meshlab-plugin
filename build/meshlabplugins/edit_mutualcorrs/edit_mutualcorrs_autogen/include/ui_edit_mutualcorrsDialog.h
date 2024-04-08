/********************************************************************************
** Form generated from reading UI file 'edit_mutualcorrsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_MUTUALCORRSDIALOG_H
#define UI_EDIT_MUTUALCORRSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edit_mutualcorrsDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *mutCorr;
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
    QHBoxLayout *horizontalLayout_5;
    QLabel *renderingLabel;
    QComboBox *renderingBox;
    QCheckBox *checkFocal;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelIter;
    QSpinBox *spinIter;
    QLabel *labelTolerance;
    QDoubleSpinBox *spinTolerance;
    QLabel *labelVar;
    QDoubleSpinBox *spinVariance;
    QLabel *labelBackg;
    QSpinBox *spinBackg;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSlider *mutcorrSlider;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *buttonApply;
    QWidget *tab;
    QLabel *label_3;

    void setupUi(QWidget *edit_mutualcorrsDialog)
    {
        if (edit_mutualcorrsDialog->objectName().isEmpty())
            edit_mutualcorrsDialog->setObjectName(QString::fromUtf8("edit_mutualcorrsDialog"));
        edit_mutualcorrsDialog->resize(614, 535);
        horizontalLayout_2 = new QHBoxLayout(edit_mutualcorrsDialog);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(9, 9, 9, 9);
        frame = new QFrame(edit_mutualcorrsDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 0));
        mutCorr = new QWidget();
        mutCorr->setObjectName(QString::fromUtf8("mutCorr"));
        verticalLayout = new QVBoxLayout(mutCorr);
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
        tableWidget = new QTableWidget(mutCorr);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
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
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setDefaultSectionSize(65);

        horizontalLayout_4->addWidget(tableWidget);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 5, 0, 5);
        addLine = new QPushButton(mutCorr);
        addLine->setObjectName(QString::fromUtf8("addLine"));
        addLine->setMinimumSize(QSize(100, 25));

        horizontalLayout->addWidget(addLine);

        delLine = new QPushButton(mutCorr);
        delLine->setObjectName(QString::fromUtf8("delLine"));
        delLine->setMinimumSize(QSize(100, 25));

        horizontalLayout->addWidget(delLine);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        loadFromFile = new QPushButton(mutCorr);
        loadFromFile->setObjectName(QString::fromUtf8("loadFromFile"));
        loadFromFile->setMinimumSize(QSize(100, 25));
        loadFromFile->setCheckable(false);
        loadFromFile->setFlat(false);

        gridLayout->addWidget(loadFromFile, 0, 0, 1, 1);

        exportToFile = new QPushButton(mutCorr);
        exportToFile->setObjectName(QString::fromUtf8("exportToFile"));
        exportToFile->setMinimumSize(QSize(100, 25));

        gridLayout->addWidget(exportToFile, 0, 1, 1, 1);

        pickCurrent = new QPushButton(mutCorr);
        pickCurrent->setObjectName(QString::fromUtf8("pickCurrent"));
        pickCurrent->setMinimumSize(QSize(100, 25));

        gridLayout->addWidget(pickCurrent, 1, 0, 1, 1);

        buttonPickRef = new QPushButton(mutCorr);
        buttonPickRef->setObjectName(QString::fromUtf8("buttonPickRef"));
        buttonPickRef->setMinimumSize(QSize(100, 25));

        gridLayout->addWidget(buttonPickRef, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(5, 5, 5, 5);
        renderingLabel = new QLabel(mutCorr);
        renderingLabel->setObjectName(QString::fromUtf8("renderingLabel"));

        horizontalLayout_5->addWidget(renderingLabel, 0, Qt::AlignRight);

        renderingBox = new QComboBox(mutCorr);
        renderingBox->addItem(QString());
        renderingBox->addItem(QString());
        renderingBox->addItem(QString());
        renderingBox->addItem(QString());
        renderingBox->addItem(QString());
        renderingBox->addItem(QString());
        renderingBox->setObjectName(QString::fromUtf8("renderingBox"));

        horizontalLayout_5->addWidget(renderingBox);

        checkFocal = new QCheckBox(mutCorr);
        checkFocal->setObjectName(QString::fromUtf8("checkFocal"));

        horizontalLayout_5->addWidget(checkFocal);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(5, 5, 5, 5);
        labelIter = new QLabel(mutCorr);
        labelIter->setObjectName(QString::fromUtf8("labelIter"));

        horizontalLayout_7->addWidget(labelIter);

        spinIter = new QSpinBox(mutCorr);
        spinIter->setObjectName(QString::fromUtf8("spinIter"));
        spinIter->setMinimum(10);
        spinIter->setMaximum(5000);
        spinIter->setSingleStep(10);
        spinIter->setValue(100);

        horizontalLayout_7->addWidget(spinIter);

        labelTolerance = new QLabel(mutCorr);
        labelTolerance->setObjectName(QString::fromUtf8("labelTolerance"));

        horizontalLayout_7->addWidget(labelTolerance);

        spinTolerance = new QDoubleSpinBox(mutCorr);
        spinTolerance->setObjectName(QString::fromUtf8("spinTolerance"));
        spinTolerance->setMinimum(0.000000000000000);
        spinTolerance->setMaximum(200.000000000000000);
        spinTolerance->setValue(0.100000000000000);

        horizontalLayout_7->addWidget(spinTolerance);

        labelVar = new QLabel(mutCorr);
        labelVar->setObjectName(QString::fromUtf8("labelVar"));

        horizontalLayout_7->addWidget(labelVar);

        spinVariance = new QDoubleSpinBox(mutCorr);
        spinVariance->setObjectName(QString::fromUtf8("spinVariance"));
        spinVariance->setDecimals(2);
        spinVariance->setMinimum(0.000000000000000);
        spinVariance->setMaximum(10.000000000000000);
        spinVariance->setSingleStep(0.100000000000000);
        spinVariance->setValue(2.000000000000000);

        horizontalLayout_7->addWidget(spinVariance);

        labelBackg = new QLabel(mutCorr);
        labelBackg->setObjectName(QString::fromUtf8("labelBackg"));

        horizontalLayout_7->addWidget(labelBackg);

        spinBackg = new QSpinBox(mutCorr);
        spinBackg->setObjectName(QString::fromUtf8("spinBackg"));
        spinBackg->setMinimum(1);
        spinBackg->setMaximum(10);
        spinBackg->setValue(2);

        horizontalLayout_7->addWidget(spinBackg);


        verticalLayout->addLayout(horizontalLayout_7);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 5, -1, 5);
        label = new QLabel(mutCorr);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 1, 1, 1);

        mutcorrSlider = new QSlider(mutCorr);
        mutcorrSlider->setObjectName(QString::fromUtf8("mutcorrSlider"));
        mutcorrSlider->setMaximum(100);
        mutcorrSlider->setSingleStep(10);
        mutcorrSlider->setValue(10);
        mutcorrSlider->setOrientation(Qt::Horizontal);
        mutcorrSlider->setTickPosition(QSlider::TicksBelow);
        mutcorrSlider->setTickInterval(5);

        gridLayout_2->addWidget(mutcorrSlider, 1, 2, 1, 1);

        label_2 = new QLabel(mutCorr);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 5, -1, 5);
        buttonApply = new QPushButton(mutCorr);
        buttonApply->setObjectName(QString::fromUtf8("buttonApply"));
        buttonApply->setEnabled(true);
        buttonApply->setMinimumSize(QSize(100, 25));

        verticalLayout_3->addWidget(buttonApply);


        verticalLayout->addLayout(verticalLayout_3);

        tabWidget->addTab(mutCorr, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 10, 541, 451));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        label_3->setFont(font);
        label_3->setWordWrap(true);
        tabWidget->addTab(tab, QString());

        verticalLayout_2->addWidget(tabWidget);


        horizontalLayout_2->addWidget(frame);


        retranslateUi(edit_mutualcorrsDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(edit_mutualcorrsDialog);
    } // setupUi

    void retranslateUi(QWidget *edit_mutualcorrsDialog)
    {
        edit_mutualcorrsDialog->setWindowTitle(QCoreApplication::translate("edit_mutualcorrsDialog", "Raster registration using mutual correspondences", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Active", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "X (3D)", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Y (3D)", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Z (3D)", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "X (2D)", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Y (2D)", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "error", nullptr));
        addLine->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Add New Point", nullptr));
        delLine->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Delete Current Point", nullptr));
        loadFromFile->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Load Correspondences From File", nullptr));
        exportToFile->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Export all Correspondences to file...", nullptr));
        pickCurrent->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Pick current point on Model", nullptr));
        buttonPickRef->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Pick current point on Image", nullptr));
        renderingLabel->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Rendering Mode  ", nullptr));
        renderingBox->setItemText(0, QCoreApplication::translate("edit_mutualcorrsDialog", "Combined", nullptr));
        renderingBox->setItemText(1, QCoreApplication::translate("edit_mutualcorrsDialog", "Normal Map", nullptr));
        renderingBox->setItemText(2, QCoreApplication::translate("edit_mutualcorrsDialog", "Color per Vertex", nullptr));
        renderingBox->setItemText(3, QCoreApplication::translate("edit_mutualcorrsDialog", "Specular", nullptr));
        renderingBox->setItemText(4, QCoreApplication::translate("edit_mutualcorrsDialog", "Silhouette", nullptr));
        renderingBox->setItemText(5, QCoreApplication::translate("edit_mutualcorrsDialog", "Specular Combined", nullptr));

        checkFocal->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Optimize Focal", nullptr));
        labelIter->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Num. of Iterations", nullptr));
        labelTolerance->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Tolerance", nullptr));
        labelVar->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Expected Variance", nullptr));
        labelBackg->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Background Weight ", nullptr));
        label->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Use Mutual Info ", nullptr));
        label_2->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Use Correspondences", nullptr));
        buttonApply->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "Apply Mutual Information Registration", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(mutCorr), QCoreApplication::translate("edit_mutualcorrsDialog", "Mutual Correspondences", nullptr));
        label_3->setText(QCoreApplication::translate("edit_mutualcorrsDialog", "<html><head/><body><p>This component gives the possibility to align a raster model on a model. <br/>It works as the previous mutual information filter, with the additional possibility to set and use correspondences to \342\200\234drive\342\200\235 the alignment. The main options are:</p><p><span style=\" font-weight:600;\">Rendering mode</span>: the rendering mode that will be used to calculate mutual information<br/><span style=\" font-weight:600;\">Optimize Focal</span>: optimize focal length in addition to camera extrinsics<br/><span style=\" font-weight:600;\">Num. of iterations</span>: number of iterations of the convergence method<br/><span style=\" font-weight:600;\">Tolerance</span>: tolerance in the change of value of Mutual Information. It influences the convergence<br/><span style=\" font-weight:600;\">Expected variance</span>: the amount of perturbation in camera parameters to reach the alignment<br/><span style=\" font-weight:600;\">Background weight</span>: weight of the pixels of the background "
                        "in the MI calculation. 2 means 50%, 3 means 33% and so on.<br/><span style=\" font-weight:600;\">Use MI / Use correspondences</span>: weight of MI and correspondences in the alignment phase. If the slider is all on the left, pure MI is used, if it\342\200\231s all on the right, only the correspondences are used. If no correspondences are available, pure MI is used. The default value of the slider is usually a good compromise between the two contributions.</p><p>To set up a correspondence, click on \342\200\234<span style=\" font-weight:600;\">Add new point</span>\342\200\235. The click on the point line in the table to select it. Then click on \342\200\234<span style=\" font-weight:600;\">Pick current point on model</span>\342\200\235 and double click on the 3D model to set the 3D point, then click on \342\200\234<span style=\" font-weight:600;\">Pick current point on image</span>\342\200\235 and double click on the image to set the 2D correspondence.<br/>The point can be removed or made \342\200\234<span styl"
                        "e=\" font-weight:600;\">inactive</span>\342\200\235 (double click on \342\200\234<span style=\" font-weight:600;\">active</span>\342\200\235 in the Table). In that case, the point won\342\200\231t be used when alignment is performed. The last column gives the current alignment error of the pixel (it\342\200\231s calculated at the end of any alignment iteration).</p><p>Please refer to these papers if you use this component:</p><p>M. Sottile, M. Dellepiane, P. Cignoni, R. Scopigno, <span style=\" font-style:italic;\">Mutual Correspondences: an hybrid method for image-to-geometry registration</span>, Eurographics Italian Chapter Conference 2010, page 81-88 - Nov 2010</p><p>M. Corsini, M. Dellepiane, F. Ponchio, R. Scopigno, <span style=\" font-style:italic;\">Image-to-Geometry Registration: a Mutual Information Method exploiting Illumination-related Geometric Properties</span>, Computer Graphics Forum, Volume 28, Number 7, page 1755-1764 - 2009</p><p><br/></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("edit_mutualcorrsDialog", "Help  and Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit_mutualcorrsDialog: public Ui_edit_mutualcorrsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_MUTUALCORRSDIALOG_H
