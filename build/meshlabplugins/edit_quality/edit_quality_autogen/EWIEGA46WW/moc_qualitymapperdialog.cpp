/****************************************************************************
** Meta object code from reading C++ file 'qualitymapperdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../meshlabplugins/edit_quality/qualitymapperdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qualitymapperdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TFDoubleClickCatcher_t {
    QByteArrayData data[3];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TFDoubleClickCatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TFDoubleClickCatcher_t qt_meta_stringdata_TFDoubleClickCatcher = {
    {
QT_MOC_LITERAL(0, 0, 20), // "TFDoubleClickCatcher"
QT_MOC_LITERAL(1, 21, 15), // "TFdoubleClicked"
QT_MOC_LITERAL(2, 37, 0) // ""

    },
    "TFDoubleClickCatcher\0TFdoubleClicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TFDoubleClickCatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    2,

       0        // eod
};

void TFDoubleClickCatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TFDoubleClickCatcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->TFdoubleClicked((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TFDoubleClickCatcher::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TFDoubleClickCatcher::TFdoubleClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TFDoubleClickCatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TFDoubleClickCatcher.data,
    qt_meta_data_TFDoubleClickCatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TFDoubleClickCatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TFDoubleClickCatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TFDoubleClickCatcher.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return QObject::qt_metacast(_clname);
}

int TFDoubleClickCatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void TFDoubleClickCatcher::TFdoubleClicked(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QualityMapperDialog_t {
    QByteArrayData data[36];
    char stringdata0[765];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QualityMapperDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QualityMapperDialog_t qt_meta_stringdata_QualityMapperDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QualityMapperDialog"
QT_MOC_LITERAL(1, 20, 17), // "suspendEditToggle"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13), // "closingDialog"
QT_MOC_LITERAL(4, 53, 15), // "updateRequested"
QT_MOC_LITERAL(5, 69, 26), // "MLRenderingData::ATT_NAMES"
QT_MOC_LITERAL(6, 96, 36), // "on_midPercentageLine_editingF..."
QT_MOC_LITERAL(7, 133, 26), // "on_midSpinBox_valueChanged"
QT_MOC_LITERAL(8, 160, 32), // "on_brightnessSlider_valueChanged"
QT_MOC_LITERAL(9, 193, 32), // "on_brightessSpinBox_valueChanged"
QT_MOC_LITERAL(10, 226, 22), // "on_clampButton_clicked"
QT_MOC_LITERAL(11, 249, 24), // "on_ySpinBox_valueChanged"
QT_MOC_LITERAL(12, 274, 24), // "on_xSpinBox_valueChanged"
QT_MOC_LITERAL(13, 299, 24), // "on_previewButton_clicked"
QT_MOC_LITERAL(14, 324, 22), // "on_applyButton_clicked"
QT_MOC_LITERAL(15, 347, 22), // "on_resetButton_clicked"
QT_MOC_LITERAL(16, 370, 21), // "on_blueButton_toggled"
QT_MOC_LITERAL(17, 392, 7), // "checked"
QT_MOC_LITERAL(18, 400, 22), // "on_greenButton_toggled"
QT_MOC_LITERAL(19, 423, 20), // "on_redButton_toggled"
QT_MOC_LITERAL(20, 444, 36), // "on_presetComboBox_currentText..."
QT_MOC_LITERAL(21, 481, 21), // "on_flipButton_clicked"
QT_MOC_LITERAL(22, 503, 27), // "on_loadPresetButton_clicked"
QT_MOC_LITERAL(23, 531, 27), // "on_savePresetButton_clicked"
QT_MOC_LITERAL(24, 559, 16), // "meshColorPreview"
QT_MOC_LITERAL(25, 576, 17), // "on_EQHandle_moved"
QT_MOC_LITERAL(26, 594, 30), // "on_EqHandle_crossing_histogram"
QT_MOC_LITERAL(27, 625, 9), // "EqHandle*"
QT_MOC_LITERAL(28, 635, 17), // "on_TfHandle_moved"
QT_MOC_LITERAL(29, 653, 9), // "TFHandle*"
QT_MOC_LITERAL(30, 663, 6), // "sender"
QT_MOC_LITERAL(31, 670, 19), // "on_TfHandle_clicked"
QT_MOC_LITERAL(32, 690, 25), // "on_TfHandle_doubleClicked"
QT_MOC_LITERAL(33, 716, 24), // "on_TF_view_doubleClicked"
QT_MOC_LITERAL(34, 741, 3), // "pos"
QT_MOC_LITERAL(35, 745, 19) // "drawGammaCorrection"

    },
    "QualityMapperDialog\0suspendEditToggle\0"
    "\0closingDialog\0updateRequested\0"
    "MLRenderingData::ATT_NAMES\0"
    "on_midPercentageLine_editingFinished\0"
    "on_midSpinBox_valueChanged\0"
    "on_brightnessSlider_valueChanged\0"
    "on_brightessSpinBox_valueChanged\0"
    "on_clampButton_clicked\0on_ySpinBox_valueChanged\0"
    "on_xSpinBox_valueChanged\0"
    "on_previewButton_clicked\0"
    "on_applyButton_clicked\0on_resetButton_clicked\0"
    "on_blueButton_toggled\0checked\0"
    "on_greenButton_toggled\0on_redButton_toggled\0"
    "on_presetComboBox_currentTextChanged\0"
    "on_flipButton_clicked\0on_loadPresetButton_clicked\0"
    "on_savePresetButton_clicked\0"
    "meshColorPreview\0on_EQHandle_moved\0"
    "on_EqHandle_crossing_histogram\0EqHandle*\0"
    "on_TfHandle_moved\0TFHandle*\0sender\0"
    "on_TfHandle_clicked\0on_TfHandle_doubleClicked\0"
    "on_TF_view_doubleClicked\0pos\0"
    "drawGammaCorrection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QualityMapperDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  154,    2, 0x06 /* Public */,
       3,    0,  155,    2, 0x06 /* Public */,
       4,    2,  156,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  161,    2, 0x08 /* Private */,
       7,    1,  162,    2, 0x08 /* Private */,
       8,    1,  165,    2, 0x08 /* Private */,
       9,    1,  168,    2, 0x08 /* Private */,
      10,    0,  171,    2, 0x08 /* Private */,
      11,    1,  172,    2, 0x08 /* Private */,
      12,    1,  175,    2, 0x08 /* Private */,
      13,    0,  178,    2, 0x08 /* Private */,
      14,    0,  179,    2, 0x08 /* Private */,
      15,    0,  180,    2, 0x08 /* Private */,
      16,    1,  181,    2, 0x08 /* Private */,
      18,    1,  184,    2, 0x08 /* Private */,
      19,    1,  187,    2, 0x08 /* Private */,
      20,    1,  190,    2, 0x08 /* Private */,
      21,    0,  193,    2, 0x08 /* Private */,
      22,    0,  194,    2, 0x08 /* Private */,
      23,    0,  195,    2, 0x08 /* Private */,
      24,    0,  196,    2, 0x08 /* Private */,
      25,    0,  197,    2, 0x08 /* Private */,
      26,    2,  198,    2, 0x08 /* Private */,
      28,    1,  203,    2, 0x08 /* Private */,
      31,    1,  206,    2, 0x08 /* Private */,
      32,    1,  209,    2, 0x08 /* Private */,
      33,    1,  212,    2, 0x08 /* Private */,
      35,    0,  215,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27, QMetaType::Bool,    2,    2,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::QPointF,   34,
    QMetaType::Void,

       0        // eod
};

void QualityMapperDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QualityMapperDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->suspendEditToggle(); break;
        case 1: _t->closingDialog(); break;
        case 2: _t->updateRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< MLRenderingData::ATT_NAMES(*)>(_a[2]))); break;
        case 3: _t->on_midPercentageLine_editingFinished(); break;
        case 4: _t->on_midSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_brightnessSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_brightessSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->on_clampButton_clicked(); break;
        case 8: _t->on_ySpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->on_xSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->on_previewButton_clicked(); break;
        case 11: _t->on_applyButton_clicked(); break;
        case 12: _t->on_resetButton_clicked(); break;
        case 13: _t->on_blueButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_greenButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_redButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->on_presetComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->on_flipButton_clicked(); break;
        case 18: _t->on_loadPresetButton_clicked(); break;
        case 19: _t->on_savePresetButton_clicked(); break;
        case 20: _t->meshColorPreview(); break;
        case 21: _t->on_EQHandle_moved(); break;
        case 22: _t->on_EqHandle_crossing_histogram((*reinterpret_cast< EqHandle*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 23: _t->on_TfHandle_moved((*reinterpret_cast< TFHandle*(*)>(_a[1]))); break;
        case 24: _t->on_TfHandle_clicked((*reinterpret_cast< TFHandle*(*)>(_a[1]))); break;
        case 25: _t->on_TfHandle_doubleClicked((*reinterpret_cast< TFHandle*(*)>(_a[1]))); break;
        case 26: _t->on_TF_view_doubleClicked((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 27: _t->drawGammaCorrection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EqHandle* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TFHandle* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TFHandle* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TFHandle* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QualityMapperDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QualityMapperDialog::suspendEditToggle)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QualityMapperDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QualityMapperDialog::closingDialog)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QualityMapperDialog::*)(int , MLRenderingData::ATT_NAMES );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QualityMapperDialog::updateRequested)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QualityMapperDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_QualityMapperDialog.data,
    qt_meta_data_QualityMapperDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QualityMapperDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QualityMapperDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QualityMapperDialog.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int QualityMapperDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void QualityMapperDialog::suspendEditToggle()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QualityMapperDialog::closingDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QualityMapperDialog::updateRequested(int _t1, MLRenderingData::ATT_NAMES _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
