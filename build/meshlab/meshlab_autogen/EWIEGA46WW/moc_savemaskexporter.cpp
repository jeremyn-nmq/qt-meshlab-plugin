/****************************************************************************
** Meta object code from reading C++ file 'savemaskexporter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../meshlab/savemaskexporter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'savemaskexporter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SaveMaskExporterDialog_t {
    QByteArrayData data[9];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SaveMaskExporterDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SaveMaskExporterDialog_t qt_meta_stringdata_SaveMaskExporterDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "SaveMaskExporterDialog"
QT_MOC_LITERAL(1, 23, 26), // "on_check_help_stateChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 12), // "SlotOkButton"
QT_MOC_LITERAL(4, 64, 16), // "SlotCancelButton"
QT_MOC_LITERAL(5, 81, 17), // "SlotRenameTexture"
QT_MOC_LITERAL(6, 99, 24), // "SlotSelectionTextureName"
QT_MOC_LITERAL(7, 124, 23), // "SlotSelectionNoneButton"
QT_MOC_LITERAL(8, 148, 22) // "SlotSelectionAllButton"

    },
    "SaveMaskExporterDialog\0"
    "on_check_help_stateChanged\0\0SlotOkButton\0"
    "SlotCancelButton\0SlotRenameTexture\0"
    "SlotSelectionTextureName\0"
    "SlotSelectionNoneButton\0SlotSelectionAllButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SaveMaskExporterDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       3,    0,   52,    2, 0x0a /* Public */,
       4,    0,   53,    2, 0x0a /* Public */,
       5,    0,   54,    2, 0x0a /* Public */,
       6,    0,   55,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x0a /* Public */,
       8,    0,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SaveMaskExporterDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SaveMaskExporterDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_check_help_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SlotOkButton(); break;
        case 2: _t->SlotCancelButton(); break;
        case 3: _t->SlotRenameTexture(); break;
        case 4: _t->SlotSelectionTextureName(); break;
        case 5: _t->SlotSelectionNoneButton(); break;
        case 6: _t->SlotSelectionAllButton(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SaveMaskExporterDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SaveMaskExporterDialog.data,
    qt_meta_data_SaveMaskExporterDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SaveMaskExporterDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SaveMaskExporterDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SaveMaskExporterDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SaveMaskExporterDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
