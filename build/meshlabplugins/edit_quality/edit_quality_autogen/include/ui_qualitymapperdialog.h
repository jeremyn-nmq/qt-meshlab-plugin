/********************************************************************************
** Form generated from reading UI file 'qualitymapperdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUALITYMAPPERDIALOG_H
#define UI_QUALITYMAPPERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QualityMapperDialogClass
{
public:
    QWidget *widget;
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QVBoxLayout *vboxLayout1;
    QGroupBox *transferFunctionGroupBox;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout2;
    QGraphicsView *transferFunctionView;
    QLabel *colorbandLabel;
    QVBoxLayout *vboxLayout3;
    QGroupBox *channelBox;
    QHBoxLayout *hboxLayout1;
    QRadioButton *redButton;
    QRadioButton *greenButton;
    QRadioButton *blueButton;
    QGroupBox *selectedPointBox;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout2;
    QLabel *xLabel;
    QDoubleSpinBox *xSpinBox;
    QLabel *yLabel;
    QDoubleSpinBox *ySpinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *xQualityLabel;
    QGroupBox *presetGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *presetComboBox;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *flipButton;
    QPushButton *loadPresetButton;
    QPushButton *savePresetButton;
    QGroupBox *equalizerGroupBox;
    QHBoxLayout *hboxLayout3;
    QVBoxLayout *vboxLayout5;
    QGraphicsView *equalizerGraphicsView;
    QHBoxLayout *hboxLayout4;
    QDoubleSpinBox *minSpinBox;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout6;
    QDoubleSpinBox *midSpinBox;
    QHBoxLayout *hboxLayout5;
    QLineEdit *midPercentageLine;
    QLabel *midPercentageLabel;
    QSpacerItem *spacerItem1;
    QDoubleSpinBox *maxSpinBox;
    QVBoxLayout *vboxLayout7;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout6;
    QLabel *gammaCorrectionLabel;
    QSpacerItem *spacerItem2;
    QGroupBox *groupBox_3;
    QHBoxLayout *hboxLayout7;
    QPushButton *clampButton;
    QSpinBox *clampHistogramSpinBox;
    QLabel *percentileLabel;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout8;
    QHBoxLayout *hboxLayout8;
    QLabel *label_2;
    QSlider *brightnessSlider;
    QLabel *label_3;
    QDoubleSpinBox *brightessSpinBox;
    QHBoxLayout *hboxLayout9;
    QPushButton *previewButton;
    QPushButton *resetButton;
    QSpacerItem *spacerItem3;

    void setupUi(QDockWidget *QualityMapperDialogClass)
    {
        if (QualityMapperDialogClass->objectName().isEmpty())
            QualityMapperDialogClass->setObjectName(QString::fromUtf8("QualityMapperDialogClass"));
        QualityMapperDialogClass->resize(644, 729);
        QFont font;
        font.setPointSize(10);
        QualityMapperDialogClass->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/qualitymapper.png"), QSize(), QIcon::Normal, QIcon::Off);
        QualityMapperDialogClass->setWindowIcon(icon);
        QualityMapperDialogClass->setAllowedAreas(Qt::NoDockWidgetArea);
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        vboxLayout = new QVBoxLayout(widget);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frame = new QFrame(widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frame);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        transferFunctionGroupBox = new QGroupBox(frame);
        transferFunctionGroupBox->setObjectName(QString::fromUtf8("transferFunctionGroupBox"));
        hboxLayout = new QHBoxLayout(transferFunctionGroupBox);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        transferFunctionView = new QGraphicsView(transferFunctionGroupBox);
        transferFunctionView->setObjectName(QString::fromUtf8("transferFunctionView"));
        transferFunctionView->setMinimumSize(QSize(350, 200));
        transferFunctionView->setMaximumSize(QSize(350, 200));
        transferFunctionView->setAutoFillBackground(true);
        transferFunctionView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        transferFunctionView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        transferFunctionView->setRenderHints(QPainter::Antialiasing);
        transferFunctionView->setCacheMode(QGraphicsView::CacheBackground);

        vboxLayout2->addWidget(transferFunctionView);

        colorbandLabel = new QLabel(transferFunctionGroupBox);
        colorbandLabel->setObjectName(QString::fromUtf8("colorbandLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(colorbandLabel->sizePolicy().hasHeightForWidth());
        colorbandLabel->setSizePolicy(sizePolicy);
        colorbandLabel->setMinimumSize(QSize(0, 20));
        colorbandLabel->setFrameShape(QFrame::Box);
        colorbandLabel->setFrameShadow(QFrame::Plain);
        colorbandLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/colorband.png")));
        colorbandLabel->setScaledContents(true);
        colorbandLabel->setAlignment(Qt::AlignCenter|Qt::AlignHCenter|Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        vboxLayout2->addWidget(colorbandLabel);


        hboxLayout->addLayout(vboxLayout2);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        channelBox = new QGroupBox(transferFunctionGroupBox);
        channelBox->setObjectName(QString::fromUtf8("channelBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(channelBox->sizePolicy().hasHeightForWidth());
        channelBox->setSizePolicy(sizePolicy1);
        hboxLayout1 = new QHBoxLayout(channelBox);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(11, 11, 11, 11);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        redButton = new QRadioButton(channelBox);
        redButton->setObjectName(QString::fromUtf8("redButton"));
        redButton->setChecked(true);

        hboxLayout1->addWidget(redButton);

        greenButton = new QRadioButton(channelBox);
        greenButton->setObjectName(QString::fromUtf8("greenButton"));

        hboxLayout1->addWidget(greenButton);

        blueButton = new QRadioButton(channelBox);
        blueButton->setObjectName(QString::fromUtf8("blueButton"));

        hboxLayout1->addWidget(blueButton);


        vboxLayout3->addWidget(channelBox);

        selectedPointBox = new QGroupBox(transferFunctionGroupBox);
        selectedPointBox->setObjectName(QString::fromUtf8("selectedPointBox"));
        sizePolicy1.setHeightForWidth(selectedPointBox->sizePolicy().hasHeightForWidth());
        selectedPointBox->setSizePolicy(sizePolicy1);
        vboxLayout4 = new QVBoxLayout(selectedPointBox);
        vboxLayout4->setSpacing(6);
        vboxLayout4->setContentsMargins(11, 11, 11, 11);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        xLabel = new QLabel(selectedPointBox);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        xLabel->setFont(font);
        xLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(xLabel);

        xSpinBox = new QDoubleSpinBox(selectedPointBox);
        xSpinBox->setObjectName(QString::fromUtf8("xSpinBox"));
        xSpinBox->setFont(font);
        xSpinBox->setAccelerated(true);
        xSpinBox->setMaximum(1.000000000000000);
        xSpinBox->setSingleStep(0.010000000000000);

        hboxLayout2->addWidget(xSpinBox);

        yLabel = new QLabel(selectedPointBox);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));
        yLabel->setFont(font);
        yLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(yLabel);

        ySpinBox = new QDoubleSpinBox(selectedPointBox);
        ySpinBox->setObjectName(QString::fromUtf8("ySpinBox"));
        ySpinBox->setFont(font);
        ySpinBox->setAccelerated(true);
        ySpinBox->setMaximum(1.000000000000000);
        ySpinBox->setSingleStep(0.010000000000000);

        hboxLayout2->addWidget(ySpinBox);


        vboxLayout4->addLayout(hboxLayout2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 5, -1, -1);
        label_4 = new QLabel(selectedPointBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_4);

        xQualityLabel = new QLabel(selectedPointBox);
        xQualityLabel->setObjectName(QString::fromUtf8("xQualityLabel"));

        horizontalLayout->addWidget(xQualityLabel);


        vboxLayout4->addLayout(horizontalLayout);


        vboxLayout3->addWidget(selectedPointBox);

        presetGroupBox = new QGroupBox(transferFunctionGroupBox);
        presetGroupBox->setObjectName(QString::fromUtf8("presetGroupBox"));
        sizePolicy1.setHeightForWidth(presetGroupBox->sizePolicy().hasHeightForWidth());
        presetGroupBox->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(presetGroupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        presetComboBox = new QComboBox(presetGroupBox);
        presetComboBox->setObjectName(QString::fromUtf8("presetComboBox"));
        presetComboBox->setEditable(true);

        horizontalLayout_4->addWidget(presetComboBox);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 5, -1, -1);
        flipButton = new QPushButton(presetGroupBox);
        flipButton->setObjectName(QString::fromUtf8("flipButton"));
        flipButton->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_5->addWidget(flipButton);

        loadPresetButton = new QPushButton(presetGroupBox);
        loadPresetButton->setObjectName(QString::fromUtf8("loadPresetButton"));
        loadPresetButton->setMaximumSize(QSize(30, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/opentf.png"), QSize(), QIcon::Normal, QIcon::Off);
        loadPresetButton->setIcon(icon1);

        horizontalLayout_5->addWidget(loadPresetButton);

        savePresetButton = new QPushButton(presetGroupBox);
        savePresetButton->setObjectName(QString::fromUtf8("savePresetButton"));
        savePresetButton->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_5->addWidget(savePresetButton);


        verticalLayout_2->addLayout(horizontalLayout_5);


        vboxLayout3->addWidget(presetGroupBox);


        hboxLayout->addLayout(vboxLayout3);


        vboxLayout1->addWidget(transferFunctionGroupBox);

        equalizerGroupBox = new QGroupBox(frame);
        equalizerGroupBox->setObjectName(QString::fromUtf8("equalizerGroupBox"));
        hboxLayout3 = new QHBoxLayout(equalizerGroupBox);
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(11, 11, 11, 11);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        vboxLayout5 = new QVBoxLayout();
        vboxLayout5->setSpacing(6);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        equalizerGraphicsView = new QGraphicsView(equalizerGroupBox);
        equalizerGraphicsView->setObjectName(QString::fromUtf8("equalizerGraphicsView"));
        equalizerGraphicsView->setMinimumSize(QSize(350, 200));
        equalizerGraphicsView->setMaximumSize(QSize(350, 200));
        equalizerGraphicsView->setAutoFillBackground(true);
        equalizerGraphicsView->setFrameShape(QFrame::StyledPanel);
        equalizerGraphicsView->setFrameShadow(QFrame::Sunken);
        equalizerGraphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        equalizerGraphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        equalizerGraphicsView->setRenderHints(QPainter::Antialiasing);
        equalizerGraphicsView->setDragMode(QGraphicsView::NoDrag);
        equalizerGraphicsView->setViewportUpdateMode(QGraphicsView::SmartViewportUpdate);

        vboxLayout5->addWidget(equalizerGraphicsView);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        minSpinBox = new QDoubleSpinBox(equalizerGroupBox);
        minSpinBox->setObjectName(QString::fromUtf8("minSpinBox"));
        minSpinBox->setFont(font);
        minSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        minSpinBox->setAccelerated(true);
        minSpinBox->setMinimum(-65536.000000000000000);
        minSpinBox->setMaximum(65535.000000000000000);

        hboxLayout4->addWidget(minSpinBox);

        spacerItem = new QSpacerItem(16, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem);

        vboxLayout6 = new QVBoxLayout();
        vboxLayout6->setSpacing(6);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        midSpinBox = new QDoubleSpinBox(equalizerGroupBox);
        midSpinBox->setObjectName(QString::fromUtf8("midSpinBox"));
        midSpinBox->setFont(font);
        midSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        midSpinBox->setAccelerated(true);
        midSpinBox->setMinimum(-65536.000000000000000);
        midSpinBox->setMaximum(65535.000000000000000);

        vboxLayout6->addWidget(midSpinBox);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        midPercentageLine = new QLineEdit(equalizerGroupBox);
        midPercentageLine->setObjectName(QString::fromUtf8("midPercentageLine"));
        midPercentageLine->setMaximumSize(QSize(50, 16777215));
        midPercentageLine->setFont(font);

        hboxLayout5->addWidget(midPercentageLine);

        midPercentageLabel = new QLabel(equalizerGroupBox);
        midPercentageLabel->setObjectName(QString::fromUtf8("midPercentageLabel"));

        hboxLayout5->addWidget(midPercentageLabel);


        vboxLayout6->addLayout(hboxLayout5);


        hboxLayout4->addLayout(vboxLayout6);

        spacerItem1 = new QSpacerItem(16, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem1);

        maxSpinBox = new QDoubleSpinBox(equalizerGroupBox);
        maxSpinBox->setObjectName(QString::fromUtf8("maxSpinBox"));
        maxSpinBox->setFont(font);
        maxSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        maxSpinBox->setAccelerated(true);
        maxSpinBox->setMinimum(-65536.000000000000000);
        maxSpinBox->setMaximum(65535.000000000000000);

        hboxLayout4->addWidget(maxSpinBox);


        vboxLayout5->addLayout(hboxLayout4);


        hboxLayout3->addLayout(vboxLayout5);

        vboxLayout7 = new QVBoxLayout();
        vboxLayout7->setSpacing(6);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        groupBox_2 = new QGroupBox(equalizerGroupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        hboxLayout6 = new QHBoxLayout(groupBox_2);
        hboxLayout6->setSpacing(6);
        hboxLayout6->setContentsMargins(11, 11, 11, 11);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        gammaCorrectionLabel = new QLabel(groupBox_2);
        gammaCorrectionLabel->setObjectName(QString::fromUtf8("gammaCorrectionLabel"));
        gammaCorrectionLabel->setMinimumSize(QSize(100, 100));
        gammaCorrectionLabel->setMaximumSize(QSize(100, 100));

        hboxLayout6->addWidget(gammaCorrectionLabel);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem2);


        vboxLayout7->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(equalizerGroupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        hboxLayout7 = new QHBoxLayout(groupBox_3);
        hboxLayout7->setSpacing(6);
        hboxLayout7->setContentsMargins(11, 11, 11, 11);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        clampButton = new QPushButton(groupBox_3);
        clampButton->setObjectName(QString::fromUtf8("clampButton"));

        hboxLayout7->addWidget(clampButton);

        clampHistogramSpinBox = new QSpinBox(groupBox_3);
        clampHistogramSpinBox->setObjectName(QString::fromUtf8("clampHistogramSpinBox"));
        clampHistogramSpinBox->setMaximum(49);

        hboxLayout7->addWidget(clampHistogramSpinBox);

        percentileLabel = new QLabel(groupBox_3);
        percentileLabel->setObjectName(QString::fromUtf8("percentileLabel"));

        hboxLayout7->addWidget(percentileLabel);


        vboxLayout7->addWidget(groupBox_3);

        groupBox = new QGroupBox(equalizerGroupBox);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout8 = new QVBoxLayout(groupBox);
        vboxLayout8->setSpacing(6);
        vboxLayout8->setContentsMargins(11, 11, 11, 11);
        vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setSpacing(6);
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(10, 16777215));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout8->addWidget(label_2);

        brightnessSlider = new QSlider(groupBox);
        brightnessSlider->setObjectName(QString::fromUtf8("brightnessSlider"));
        brightnessSlider->setMaximum(100);
        brightnessSlider->setSliderPosition(50);
        brightnessSlider->setOrientation(Qt::Horizontal);
        brightnessSlider->setTickPosition(QSlider::TicksAbove);
        brightnessSlider->setTickInterval(50);

        hboxLayout8->addWidget(brightnessSlider);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(10, 16777215));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout8->addWidget(label_3);


        vboxLayout8->addLayout(hboxLayout8);

        brightessSpinBox = new QDoubleSpinBox(groupBox);
        brightessSpinBox->setObjectName(QString::fromUtf8("brightessSpinBox"));
        brightessSpinBox->setFont(font);
        brightessSpinBox->setAccelerated(true);
        brightessSpinBox->setMaximum(2.000000000000000);
        brightessSpinBox->setSingleStep(0.010000000000000);
        brightessSpinBox->setValue(1.000000000000000);

        vboxLayout8->addWidget(brightessSpinBox);


        vboxLayout7->addWidget(groupBox);


        hboxLayout3->addLayout(vboxLayout7);


        vboxLayout1->addWidget(equalizerGroupBox);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setSpacing(6);
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        previewButton = new QPushButton(frame);
        previewButton->setObjectName(QString::fromUtf8("previewButton"));
        previewButton->setCheckable(true);

        hboxLayout9->addWidget(previewButton);

        resetButton = new QPushButton(frame);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        hboxLayout9->addWidget(resetButton);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout9->addItem(spacerItem3);


        vboxLayout1->addLayout(hboxLayout9);


        vboxLayout->addWidget(frame);

        QualityMapperDialogClass->setWidget(widget);

        retranslateUi(QualityMapperDialogClass);

        QMetaObject::connectSlotsByName(QualityMapperDialogClass);
    } // setupUi

    void retranslateUi(QDockWidget *QualityMapperDialogClass)
    {
        QualityMapperDialogClass->setWindowTitle(QCoreApplication::translate("QualityMapperDialogClass", "QualityMapperDialog", nullptr));
        transferFunctionGroupBox->setTitle(QCoreApplication::translate("QualityMapperDialogClass", "Transfer Function", nullptr));
#if QT_CONFIG(tooltip)
        colorbandLabel->setToolTip(QCoreApplication::translate("QualityMapperDialogClass", "Color band", nullptr));
#endif // QT_CONFIG(tooltip)
        colorbandLabel->setText(QString());
#if QT_CONFIG(tooltip)
        channelBox->setToolTip(QCoreApplication::translate("QualityMapperDialogClass", "Choose the foreground channel in the Transfer Function", nullptr));
#endif // QT_CONFIG(tooltip)
        channelBox->setTitle(QCoreApplication::translate("QualityMapperDialogClass", "Edit Channel", nullptr));
        redButton->setText(QCoreApplication::translate("QualityMapperDialogClass", "R", nullptr));
        greenButton->setText(QCoreApplication::translate("QualityMapperDialogClass", "G", nullptr));
        blueButton->setText(QCoreApplication::translate("QualityMapperDialogClass", "B", nullptr));
        selectedPointBox->setTitle(QCoreApplication::translate("QualityMapperDialogClass", "Selected Point", nullptr));
        xLabel->setText(QCoreApplication::translate("QualityMapperDialogClass", "x", nullptr));
        yLabel->setText(QCoreApplication::translate("QualityMapperDialogClass", "y", nullptr));
        label_4->setText(QCoreApplication::translate("QualityMapperDialogClass", "Quality:", nullptr));
        xQualityLabel->setText(QCoreApplication::translate("QualityMapperDialogClass", "0.0", nullptr));
        presetGroupBox->setTitle(QCoreApplication::translate("QualityMapperDialogClass", "Preset Ramps", nullptr));
#if QT_CONFIG(tooltip)
        presetComboBox->setToolTip(QCoreApplication::translate("QualityMapperDialogClass", "Transfer Functions list", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        flipButton->setToolTip(QCoreApplication::translate("QualityMapperDialogClass", "Flip Current Ramp Direction", nullptr));
#endif // QT_CONFIG(tooltip)
        flipButton->setText(QCoreApplication::translate("QualityMapperDialogClass", "Flip", nullptr));
#if QT_CONFIG(tooltip)
        loadPresetButton->setToolTip(QCoreApplication::translate("QualityMapperDialogClass", "click to load a Transfer Function file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        savePresetButton->setToolTip(QCoreApplication::translate("QualityMapperDialogClass", "Add/Save preset", nullptr));
#endif // QT_CONFIG(tooltip)
        savePresetButton->setText(QCoreApplication::translate("QualityMapperDialogClass", "+", nullptr));
        equalizerGroupBox->setTitle(QCoreApplication::translate("QualityMapperDialogClass", "Equalizer", nullptr));
        midPercentageLabel->setText(QCoreApplication::translate("QualityMapperDialogClass", "%", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QualityMapperDialogClass", "Gamma Correction", nullptr));
        gammaCorrectionLabel->setText(QCoreApplication::translate("QualityMapperDialogClass", "gama correction view", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QualityMapperDialogClass", "Clamp Histogram", nullptr));
        clampButton->setText(QCoreApplication::translate("QualityMapperDialogClass", "Clamp", nullptr));
        percentileLabel->setText(QCoreApplication::translate("QualityMapperDialogClass", "%", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QualityMapperDialogClass", "Brightness", nullptr));
        label_2->setText(QCoreApplication::translate("QualityMapperDialogClass", "0", nullptr));
        label_3->setText(QCoreApplication::translate("QualityMapperDialogClass", "2", nullptr));
        previewButton->setText(QCoreApplication::translate("QualityMapperDialogClass", "Apply", nullptr));
        resetButton->setText(QCoreApplication::translate("QualityMapperDialogClass", "Reset Histogram", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QualityMapperDialogClass: public Ui_QualityMapperDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUALITYMAPPERDIALOG_H
