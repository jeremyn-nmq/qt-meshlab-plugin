/****************************************************************************
** Meta object code from reading C++ file 'filter_script_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../meshlab/dialogs/filter_script_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filter_script_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FilterScriptDialog_t {
    QByteArrayData data[10];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FilterScriptDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FilterScriptDialog_t qt_meta_stringdata_FilterScriptDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FilterScriptDialog"
QT_MOC_LITERAL(1, 19, 27), // "on_saveScriptButton_clicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 27), // "on_openScriptButton_clicked"
QT_MOC_LITERAL(4, 76, 28), // "on_clearScriptButton_clicked"
QT_MOC_LITERAL(5, 105, 19), // "on_okButton_clicked"
QT_MOC_LITERAL(6, 125, 23), // "on_moveUpButton_clicked"
QT_MOC_LITERAL(7, 149, 25), // "on_moveDownButton_clicked"
QT_MOC_LITERAL(8, 175, 29), // "on_removeFilterButton_clicked"
QT_MOC_LITERAL(9, 205, 30) // "on_editParameterButton_clicked"

    },
    "FilterScriptDialog\0on_saveScriptButton_clicked\0"
    "\0on_openScriptButton_clicked\0"
    "on_clearScriptButton_clicked\0"
    "on_okButton_clicked\0on_moveUpButton_clicked\0"
    "on_moveDownButton_clicked\0"
    "on_removeFilterButton_clicked\0"
    "on_editParameterButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FilterScriptDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FilterScriptDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FilterScriptDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_saveScriptButton_clicked(); break;
        case 1: _t->on_openScriptButton_clicked(); break;
        case 2: _t->on_clearScriptButton_clicked(); break;
        case 3: _t->on_okButton_clicked(); break;
        case 4: _t->on_moveUpButton_clicked(); break;
        case 5: _t->on_moveDownButton_clicked(); break;
        case 6: _t->on_removeFilterButton_clicked(); break;
        case 7: _t->on_editParameterButton_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FilterScriptDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FilterScriptDialog.data,
    qt_meta_data_FilterScriptDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FilterScriptDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilterScriptDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FilterScriptDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FilterScriptDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
