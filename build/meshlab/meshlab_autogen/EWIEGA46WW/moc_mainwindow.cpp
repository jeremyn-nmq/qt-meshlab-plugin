/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../meshlab/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[127];
    char stringdata0[1929];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 22), // "dispatchCustomSettings"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 17), // "RichParameterList"
QT_MOC_LITERAL(4, 53, 3), // "rps"
QT_MOC_LITERAL(5, 57, 14), // "filterExecuted"
QT_MOC_LITERAL(6, 72, 16), // "updateLayerTable"
QT_MOC_LITERAL(7, 89, 10), // "newProject"
QT_MOC_LITERAL(8, 100, 8), // "projName"
QT_MOC_LITERAL(9, 109, 11), // "saveProject"
QT_MOC_LITERAL(10, 121, 9), // "meshAdded"
QT_MOC_LITERAL(11, 131, 3), // "mid"
QT_MOC_LITERAL(12, 135, 11), // "meshRemoved"
QT_MOC_LITERAL(13, 147, 29), // "importMeshWithLayerManagement"
QT_MOC_LITERAL(14, 177, 8), // "fileName"
QT_MOC_LITERAL(15, 186, 12), // "importRaster"
QT_MOC_LITERAL(16, 199, 7), // "fileImg"
QT_MOC_LITERAL(17, 207, 11), // "openProject"
QT_MOC_LITERAL(18, 219, 13), // "appendProject"
QT_MOC_LITERAL(19, 233, 20), // "updateCustomSettings"
QT_MOC_LITERAL(20, 254, 17), // "updateLayerDialog"
QT_MOC_LITERAL(21, 272, 15), // "applyLastFilter"
QT_MOC_LITERAL(22, 288, 36), // "addRenderingDataIfNewlyGenera..."
QT_MOC_LITERAL(23, 325, 6), // "meshid"
QT_MOC_LITERAL(24, 332, 37), // "updateRenderingDataAccordingT..."
QT_MOC_LITERAL(25, 370, 25), // "QList<MLRenderingAction*>"
QT_MOC_LITERAL(26, 396, 4), // "acts"
QT_MOC_LITERAL(27, 401, 55), // "updateRenderingDataAccordingT..."
QT_MOC_LITERAL(28, 457, 18), // "MLRenderingAction*"
QT_MOC_LITERAL(29, 476, 3), // "act"
QT_MOC_LITERAL(30, 480, 26), // "QList<MLRenderingAction*>&"
QT_MOC_LITERAL(31, 507, 36), // "updateRenderingDataAccordingT..."
QT_MOC_LITERAL(32, 544, 54), // "updateRenderingDataAccordingT..."
QT_MOC_LITERAL(33, 599, 31), // "QList<MLRenderingGlobalAction*>"
QT_MOC_LITERAL(34, 631, 7), // "actlist"
QT_MOC_LITERAL(35, 639, 23), // "documentUpdateRequested"
QT_MOC_LITERAL(36, 663, 10), // "importMesh"
QT_MOC_LITERAL(37, 674, 7), // "endEdit"
QT_MOC_LITERAL(38, 682, 17), // "updateProgressBar"
QT_MOC_LITERAL(39, 700, 3), // "pos"
QT_MOC_LITERAL(40, 704, 4), // "text"
QT_MOC_LITERAL(41, 709, 13), // "updateTexture"
QT_MOC_LITERAL(42, 723, 20), // "closeCurrentDocument"
QT_MOC_LITERAL(43, 744, 6), // "reload"
QT_MOC_LITERAL(44, 751, 13), // "reloadAllMesh"
QT_MOC_LITERAL(45, 765, 14), // "openRecentMesh"
QT_MOC_LITERAL(46, 780, 14), // "openRecentProj"
QT_MOC_LITERAL(47, 795, 6), // "saveAs"
QT_MOC_LITERAL(48, 802, 25), // "saveAllPossibleAttributes"
QT_MOC_LITERAL(49, 828, 4), // "save"
QT_MOC_LITERAL(50, 833, 12), // "saveSnapshot"
QT_MOC_LITERAL(51, 846, 19), // "changeFileExtension"
QT_MOC_LITERAL(52, 866, 13), // "applyEditMode"
QT_MOC_LITERAL(53, 880, 15), // "suspendEditMode"
QT_MOC_LITERAL(54, 896, 11), // "startFilter"
QT_MOC_LITERAL(55, 908, 15), // "runFilterScript"
QT_MOC_LITERAL(56, 924, 16), // "showFilterScript"
QT_MOC_LITERAL(57, 941, 11), // "showTooltip"
QT_MOC_LITERAL(58, 953, 8), // "QAction*"
QT_MOC_LITERAL(59, 962, 15), // "applyRenderMode"
QT_MOC_LITERAL(60, 978, 17), // "applyDecorateMode"
QT_MOC_LITERAL(61, 996, 24), // "extractVertFragFileNames"
QT_MOC_LITERAL(62, 1021, 26), // "std::pair<QString,QString>"
QT_MOC_LITERAL(63, 1048, 11), // "QDomElement"
QT_MOC_LITERAL(64, 1060, 4), // "root"
QT_MOC_LITERAL(65, 1065, 10), // "addShaders"
QT_MOC_LITERAL(66, 1076, 18), // "switchOffDecorator"
QT_MOC_LITERAL(67, 1095, 10), // "fullScreen"
QT_MOC_LITERAL(68, 1106, 15), // "showToolbarFile"
QT_MOC_LITERAL(69, 1122, 12), // "showInfoPane"
QT_MOC_LITERAL(70, 1135, 13), // "showTrackBall"
QT_MOC_LITERAL(71, 1149, 14), // "resetTrackBall"
QT_MOC_LITERAL(72, 1164, 12), // "showLayerDlg"
QT_MOC_LITERAL(73, 1177, 7), // "visible"
QT_MOC_LITERAL(74, 1185, 10), // "showRaster"
QT_MOC_LITERAL(75, 1196, 16), // "updateWindowMenu"
QT_MOC_LITERAL(76, 1213, 11), // "updateMenus"
QT_MOC_LITERAL(77, 1225, 20), // "updateSubFiltersMenu"
QT_MOC_LITERAL(78, 1246, 17), // "createmenuenabled"
QT_MOC_LITERAL(79, 1264, 12), // "validmeshdoc"
QT_MOC_LITERAL(80, 1277, 15), // "updateMenuItems"
QT_MOC_LITERAL(81, 1293, 6), // "QMenu*"
QT_MOC_LITERAL(82, 1300, 4), // "menu"
QT_MOC_LITERAL(83, 1305, 7), // "enabled"
QT_MOC_LITERAL(84, 1313, 15), // "updateStdDialog"
QT_MOC_LITERAL(85, 1329, 38), // "enableDocumentSensibleActions..."
QT_MOC_LITERAL(86, 1368, 6), // "enable"
QT_MOC_LITERAL(87, 1375, 8), // "setSplit"
QT_MOC_LITERAL(88, 1384, 2), // "qa"
QT_MOC_LITERAL(89, 1387, 10), // "setUnsplit"
QT_MOC_LITERAL(90, 1398, 11), // "linkViewers"
QT_MOC_LITERAL(91, 1410, 8), // "viewFrom"
QT_MOC_LITERAL(92, 1419, 11), // "toggleOrtho"
QT_MOC_LITERAL(93, 1431, 13), // "trackballStep"
QT_MOC_LITERAL(94, 1445, 16), // "readViewFromFile"
QT_MOC_LITERAL(95, 1462, 14), // "saveViewToFile"
QT_MOC_LITERAL(96, 1477, 23), // "viewFromCurrentMeshShot"
QT_MOC_LITERAL(97, 1501, 25), // "viewFromCurrentRasterShot"
QT_MOC_LITERAL(98, 1527, 19), // "copyViewToClipBoard"
QT_MOC_LITERAL(99, 1547, 22), // "pasteViewFromClipboard"
QT_MOC_LITERAL(100, 1570, 15), // "splitFromHandle"
QT_MOC_LITERAL(101, 1586, 17), // "unsplitFromHandle"
QT_MOC_LITERAL(102, 1604, 12), // "setCustomize"
QT_MOC_LITERAL(103, 1617, 5), // "about"
QT_MOC_LITERAL(104, 1623, 12), // "aboutPlugins"
QT_MOC_LITERAL(105, 1636, 10), // "helpOnline"
QT_MOC_LITERAL(106, 1647, 12), // "helpOnscreen"
QT_MOC_LITERAL(107, 1660, 9), // "submitBug"
QT_MOC_LITERAL(108, 1670, 11), // "sendUsAMail"
QT_MOC_LITERAL(109, 1682, 15), // "checkForUpdates"
QT_MOC_LITERAL(110, 1698, 11), // "verboseFlag"
QT_MOC_LITERAL(111, 1710, 9), // "dropEvent"
QT_MOC_LITERAL(112, 1720, 11), // "QDropEvent*"
QT_MOC_LITERAL(113, 1732, 5), // "event"
QT_MOC_LITERAL(114, 1738, 14), // "dragEnterEvent"
QT_MOC_LITERAL(115, 1753, 16), // "QDragEnterEvent*"
QT_MOC_LITERAL(116, 1770, 14), // "connectionDone"
QT_MOC_LITERAL(117, 1785, 14), // "QNetworkReply*"
QT_MOC_LITERAL(118, 1800, 5), // "reply"
QT_MOC_LITERAL(119, 1806, 22), // "wrapSetActiveSubWindow"
QT_MOC_LITERAL(120, 1829, 8), // "QWidget*"
QT_MOC_LITERAL(121, 1838, 6), // "window"
QT_MOC_LITERAL(122, 1845, 22), // "switchCurrentContainer"
QT_MOC_LITERAL(123, 1868, 14), // "QMdiSubWindow*"
QT_MOC_LITERAL(124, 1883, 19), // "updateFilterToolBar"
QT_MOC_LITERAL(125, 1903, 15), // "updateGPUMemBar"
QT_MOC_LITERAL(126, 1919, 9) // "updateLog"

    },
    "MainWindow\0dispatchCustomSettings\0\0"
    "RichParameterList\0rps\0filterExecuted\0"
    "updateLayerTable\0newProject\0projName\0"
    "saveProject\0meshAdded\0mid\0meshRemoved\0"
    "importMeshWithLayerManagement\0fileName\0"
    "importRaster\0fileImg\0openProject\0"
    "appendProject\0updateCustomSettings\0"
    "updateLayerDialog\0applyLastFilter\0"
    "addRenderingDataIfNewlyGeneratedMesh\0"
    "meshid\0updateRenderingDataAccordingToActions\0"
    "QList<MLRenderingAction*>\0acts\0"
    "updateRenderingDataAccordingToActionsToAllVisibleLayers\0"
    "MLRenderingAction*\0act\0"
    "QList<MLRenderingAction*>&\0"
    "updateRenderingDataAccordingToAction\0"
    "updateRenderingDataAccordingToActionToAllVisibleLayers\0"
    "QList<MLRenderingGlobalAction*>\0actlist\0"
    "documentUpdateRequested\0importMesh\0"
    "endEdit\0updateProgressBar\0pos\0text\0"
    "updateTexture\0closeCurrentDocument\0"
    "reload\0reloadAllMesh\0openRecentMesh\0"
    "openRecentProj\0saveAs\0saveAllPossibleAttributes\0"
    "save\0saveSnapshot\0changeFileExtension\0"
    "applyEditMode\0suspendEditMode\0startFilter\0"
    "runFilterScript\0showFilterScript\0"
    "showTooltip\0QAction*\0applyRenderMode\0"
    "applyDecorateMode\0extractVertFragFileNames\0"
    "std::pair<QString,QString>\0QDomElement\0"
    "root\0addShaders\0switchOffDecorator\0"
    "fullScreen\0showToolbarFile\0showInfoPane\0"
    "showTrackBall\0resetTrackBall\0showLayerDlg\0"
    "visible\0showRaster\0updateWindowMenu\0"
    "updateMenus\0updateSubFiltersMenu\0"
    "createmenuenabled\0validmeshdoc\0"
    "updateMenuItems\0QMenu*\0menu\0enabled\0"
    "updateStdDialog\0enableDocumentSensibleActionsContainer\0"
    "enable\0setSplit\0qa\0setUnsplit\0linkViewers\0"
    "viewFrom\0toggleOrtho\0trackballStep\0"
    "readViewFromFile\0saveViewToFile\0"
    "viewFromCurrentMeshShot\0"
    "viewFromCurrentRasterShot\0copyViewToClipBoard\0"
    "pasteViewFromClipboard\0splitFromHandle\0"
    "unsplitFromHandle\0setCustomize\0about\0"
    "aboutPlugins\0helpOnline\0helpOnscreen\0"
    "submitBug\0sendUsAMail\0checkForUpdates\0"
    "verboseFlag\0dropEvent\0QDropEvent*\0"
    "event\0dragEnterEvent\0QDragEnterEvent*\0"
    "connectionDone\0QNetworkReply*\0reply\0"
    "wrapSetActiveSubWindow\0QWidget*\0window\0"
    "switchCurrentContainer\0QMdiSubWindow*\0"
    "updateFilterToolBar\0updateGPUMemBar\0"
    "updateLog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     100,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  514,    2, 0x06 /* Public */,
       5,    0,  517,    2, 0x06 /* Public */,
       6,    0,  518,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  519,    2, 0x08 /* Private */,
       7,    0,  522,    2, 0x28 /* Private | MethodCloned */,
       9,    0,  523,    2, 0x08 /* Private */,
      10,    1,  524,    2, 0x08 /* Private */,
      12,    1,  527,    2, 0x08 /* Private */,
      13,    1,  530,    2, 0x0a /* Public */,
      13,    0,  533,    2, 0x2a /* Public | MethodCloned */,
      15,    1,  534,    2, 0x0a /* Public */,
      15,    0,  537,    2, 0x2a /* Public | MethodCloned */,
      17,    1,  538,    2, 0x0a /* Public */,
      17,    0,  541,    2, 0x2a /* Public | MethodCloned */,
      18,    1,  542,    2, 0x0a /* Public */,
      18,    0,  545,    2, 0x2a /* Public | MethodCloned */,
      19,    0,  546,    2, 0x0a /* Public */,
      20,    0,  547,    2, 0x0a /* Public */,
      21,    0,  548,    2, 0x0a /* Public */,
      22,    1,  549,    2, 0x0a /* Public */,
      24,    2,  552,    2, 0x0a /* Public */,
      27,    1,  557,    2, 0x0a /* Public */,
      24,    3,  560,    2, 0x0a /* Public */,
      31,    2,  567,    2, 0x0a /* Public */,
      32,    1,  572,    2, 0x0a /* Public */,
      31,    3,  575,    2, 0x0a /* Public */,
      24,    1,  582,    2, 0x0a /* Public */,
      35,    0,  585,    2, 0x08 /* Private */,
      36,    1,  586,    2, 0x08 /* Private */,
      36,    0,  589,    2, 0x28 /* Private | MethodCloned */,
      37,    0,  590,    2, 0x08 /* Private */,
      38,    2,  591,    2, 0x08 /* Private */,
      41,    1,  596,    2, 0x08 /* Private */,
      42,    0,  599,    2, 0x08 /* Private */,
      43,    0,  600,    2, 0x08 /* Private */,
      44,    0,  601,    2, 0x08 /* Private */,
      45,    0,  602,    2, 0x08 /* Private */,
      46,    0,  603,    2, 0x08 /* Private */,
      47,    2,  604,    2, 0x08 /* Private */,
      47,    1,  609,    2, 0x28 /* Private | MethodCloned */,
      47,    0,  612,    2, 0x28 /* Private | MethodCloned */,
      49,    1,  613,    2, 0x08 /* Private */,
      49,    0,  616,    2, 0x28 /* Private | MethodCloned */,
      50,    0,  617,    2, 0x08 /* Private */,
      51,    1,  618,    2, 0x08 /* Private */,
      52,    0,  621,    2, 0x08 /* Private */,
      53,    0,  622,    2, 0x08 /* Private */,
      54,    0,  623,    2, 0x08 /* Private */,
      55,    0,  624,    2, 0x08 /* Private */,
      56,    0,  625,    2, 0x08 /* Private */,
      57,    1,  626,    2, 0x08 /* Private */,
      59,    0,  629,    2, 0x08 /* Private */,
      60,    0,  630,    2, 0x08 /* Private */,
      61,    1,  631,    2, 0x08 /* Private */,
      65,    0,  634,    2, 0x08 /* Private */,
      66,    1,  635,    2, 0x08 /* Private */,
      67,    0,  638,    2, 0x08 /* Private */,
      68,    0,  639,    2, 0x08 /* Private */,
      69,    0,  640,    2, 0x08 /* Private */,
      70,    0,  641,    2, 0x08 /* Private */,
      71,    0,  642,    2, 0x08 /* Private */,
      72,    1,  643,    2, 0x08 /* Private */,
      74,    0,  646,    2, 0x08 /* Private */,
      75,    0,  647,    2, 0x08 /* Private */,
      76,    0,  648,    2, 0x08 /* Private */,
      77,    2,  649,    2, 0x08 /* Private */,
      80,    2,  654,    2, 0x08 /* Private */,
      84,    0,  659,    2, 0x08 /* Private */,
      85,    1,  660,    2, 0x08 /* Private */,
      87,    1,  663,    2, 0x08 /* Private */,
      89,    0,  666,    2, 0x08 /* Private */,
      90,    0,  667,    2, 0x08 /* Private */,
      91,    1,  668,    2, 0x08 /* Private */,
      92,    0,  671,    2, 0x08 /* Private */,
      93,    1,  672,    2, 0x08 /* Private */,
      94,    0,  675,    2, 0x08 /* Private */,
      95,    0,  676,    2, 0x08 /* Private */,
      96,    0,  677,    2, 0x08 /* Private */,
      97,    0,  678,    2, 0x08 /* Private */,
      98,    0,  679,    2, 0x08 /* Private */,
      99,    0,  680,    2, 0x08 /* Private */,
     100,    1,  681,    2, 0x08 /* Private */,
     101,    1,  684,    2, 0x08 /* Private */,
     102,    0,  687,    2, 0x08 /* Private */,
     103,    0,  688,    2, 0x08 /* Private */,
     104,    0,  689,    2, 0x08 /* Private */,
     105,    0,  690,    2, 0x08 /* Private */,
     106,    0,  691,    2, 0x08 /* Private */,
     107,    0,  692,    2, 0x08 /* Private */,
     108,    0,  693,    2, 0x08 /* Private */,
     109,    1,  694,    2, 0x08 /* Private */,
     109,    0,  697,    2, 0x28 /* Private | MethodCloned */,
     111,    1,  698,    2, 0x08 /* Private */,
     114,    1,  701,    2, 0x08 /* Private */,
     116,    1,  704,    2, 0x08 /* Private */,
     119,    1,  707,    2, 0x08 /* Private */,
     122,    1,  710,    2, 0x08 /* Private */,
     124,    0,  713,    2, 0x08 /* Private */,
     125,    4,  714,    2, 0x08 /* Private */,
     126,    0,  723,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Bool, QMetaType::QString,   14,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,   16,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,   14,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,   14,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 25,   23,   26,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 28, 0x80000000 | 30,   23,   29,   26,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 28,   23,   29,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 28, QMetaType::Bool,   23,   29,    2,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   14,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   39,   40,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   14,   48,
    QMetaType::Bool, QMetaType::QString,   14,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Bool,   48,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 58,    2,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 62, 0x80000000 | 63,   64,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 58,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   78,   79,
    QMetaType::Void, 0x80000000 | 81, QMetaType::Bool,   82,   83,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   86,
    QMetaType::Void, 0x80000000 | 58,   88,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 58,   88,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 58,   88,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 58,   88,
    QMetaType::Void, 0x80000000 | 58,   88,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 112,  113,
    QMetaType::Void, 0x80000000 | 115,    2,
    QMetaType::Void, 0x80000000 | 117,  118,
    QMetaType::Void, 0x80000000 | 120,  121,
    QMetaType::Void, 0x80000000 | 123,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dispatchCustomSettings((*reinterpret_cast< const RichParameterList(*)>(_a[1]))); break;
        case 1: _t->filterExecuted(); break;
        case 2: _t->updateLayerTable(); break;
        case 3: _t->newProject((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->newProject(); break;
        case 5: _t->saveProject(); break;
        case 6: _t->meshAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->meshRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: { bool _r = _t->importMeshWithLayerManagement((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->importMeshWithLayerManagement();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->importRaster((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->importRaster();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->openProject((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->openProject();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->appendProject((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->appendProject();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->updateCustomSettings(); break;
        case 17: _t->updateLayerDialog(); break;
        case 18: _t->applyLastFilter(); break;
        case 19: { bool _r = _t->addRenderingDataIfNewlyGeneratedMesh((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->updateRenderingDataAccordingToActions((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<MLRenderingAction*>(*)>(_a[2]))); break;
        case 21: _t->updateRenderingDataAccordingToActionsToAllVisibleLayers((*reinterpret_cast< const QList<MLRenderingAction*>(*)>(_a[1]))); break;
        case 22: _t->updateRenderingDataAccordingToActions((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< MLRenderingAction*(*)>(_a[2])),(*reinterpret_cast< QList<MLRenderingAction*>(*)>(_a[3]))); break;
        case 23: _t->updateRenderingDataAccordingToAction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< MLRenderingAction*(*)>(_a[2]))); break;
        case 24: _t->updateRenderingDataAccordingToActionToAllVisibleLayers((*reinterpret_cast< MLRenderingAction*(*)>(_a[1]))); break;
        case 25: _t->updateRenderingDataAccordingToAction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< MLRenderingAction*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 26: _t->updateRenderingDataAccordingToActions((*reinterpret_cast< QList<MLRenderingGlobalAction*>(*)>(_a[1]))); break;
        case 27: _t->documentUpdateRequested(); break;
        case 28: { bool _r = _t->importMesh((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->importMesh();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->endEdit(); break;
        case 31: _t->updateProgressBar((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 32: _t->updateTexture((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->closeCurrentDocument(); break;
        case 34: _t->reload(); break;
        case 35: _t->reloadAllMesh(); break;
        case 36: _t->openRecentMesh(); break;
        case 37: _t->openRecentProj(); break;
        case 38: { bool _r = _t->saveAs((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 39: { bool _r = _t->saveAs((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 40: { bool _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 41: { bool _r = _t->save((*reinterpret_cast< const bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 42: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 43: { bool _r = _t->saveSnapshot();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 44: _t->changeFileExtension((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 45: _t->applyEditMode(); break;
        case 46: _t->suspendEditMode(); break;
        case 47: _t->startFilter(); break;
        case 48: _t->runFilterScript(); break;
        case 49: _t->showFilterScript(); break;
        case 50: _t->showTooltip((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 51: _t->applyRenderMode(); break;
        case 52: _t->applyDecorateMode(); break;
        case 53: { std::pair<QString,QString> _r = _t->extractVertFragFileNames((*reinterpret_cast< const QDomElement(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::pair<QString,QString>*>(_a[0]) = std::move(_r); }  break;
        case 54: _t->addShaders(); break;
        case 55: _t->switchOffDecorator((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 56: _t->fullScreen(); break;
        case 57: _t->showToolbarFile(); break;
        case 58: _t->showInfoPane(); break;
        case 59: _t->showTrackBall(); break;
        case 60: _t->resetTrackBall(); break;
        case 61: _t->showLayerDlg((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: _t->showRaster(); break;
        case 63: _t->updateWindowMenu(); break;
        case 64: _t->updateMenus(); break;
        case 65: _t->updateSubFiltersMenu((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 66: _t->updateMenuItems((*reinterpret_cast< QMenu*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 67: _t->updateStdDialog(); break;
        case 68: _t->enableDocumentSensibleActionsContainer((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 69: _t->setSplit((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 70: _t->setUnsplit(); break;
        case 71: _t->linkViewers(); break;
        case 72: _t->viewFrom((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 73: _t->toggleOrtho(); break;
        case 74: _t->trackballStep((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 75: _t->readViewFromFile(); break;
        case 76: _t->saveViewToFile(); break;
        case 77: _t->viewFromCurrentMeshShot(); break;
        case 78: _t->viewFromCurrentRasterShot(); break;
        case 79: _t->copyViewToClipBoard(); break;
        case 80: _t->pasteViewFromClipboard(); break;
        case 81: _t->splitFromHandle((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 82: _t->unsplitFromHandle((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 83: _t->setCustomize(); break;
        case 84: _t->about(); break;
        case 85: _t->aboutPlugins(); break;
        case 86: _t->helpOnline(); break;
        case 87: _t->helpOnscreen(); break;
        case 88: _t->submitBug(); break;
        case 89: _t->sendUsAMail(); break;
        case 90: _t->checkForUpdates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 91: _t->checkForUpdates(); break;
        case 92: _t->dropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 93: _t->dragEnterEvent((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 94: _t->connectionDone((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 95: _t->wrapSetActiveSubWindow((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 96: _t->switchCurrentContainer((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 97: _t->updateFilterToolBar(); break;
        case 98: _t->updateGPUMemBar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 99: _t->updateLog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<MLRenderingAction*> >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<MLRenderingAction*> >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MLRenderingAction* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MLRenderingAction* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MLRenderingAction* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MLRenderingAction* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<MLRenderingGlobalAction*> >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMenu* >(); break;
            }
            break;
        case 69:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 72:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 74:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 81:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 82:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 95:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 96:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMdiSubWindow* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(const RichParameterList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::dispatchCustomSettings)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::filterExecuted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::updateLayerTable)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "MainWindowInterface"))
        return static_cast< MainWindowInterface*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 100)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 100;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 100)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 100;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::dispatchCustomSettings(const RichParameterList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::filterExecuted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::updateLayerTable()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_FileOpenEater_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileOpenEater_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileOpenEater_t qt_meta_stringdata_FileOpenEater = {
    {
QT_MOC_LITERAL(0, 0, 13) // "FileOpenEater"

    },
    "FileOpenEater"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileOpenEater[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void FileOpenEater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FileOpenEater::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FileOpenEater.data,
    qt_meta_data_FileOpenEater,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileOpenEater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileOpenEater::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileOpenEater.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileOpenEater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
