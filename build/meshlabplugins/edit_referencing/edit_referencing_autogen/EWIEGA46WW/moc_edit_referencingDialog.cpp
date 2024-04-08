/****************************************************************************
** Meta object code from reading C++ file 'edit_referencingDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../meshlabplugins/edit_referencing/edit_referencingDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edit_referencingDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_edit_referencingDialog_t {
    QByteArrayData data[19];
    char stringdata0[352];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_edit_referencingDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_edit_referencingDialog_t qt_meta_stringdata_edit_referencingDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "edit_referencingDialog"
QT_MOC_LITERAL(1, 23, 7), // "closing"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(4, 60, 5), // "index"
QT_MOC_LITERAL(5, 66, 26), // "on_tableWidget_itemChanged"
QT_MOC_LITERAL(6, 93, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(7, 111, 4), // "item"
QT_MOC_LITERAL(8, 116, 32), // "on_tableWidget_cellDoubleClicked"
QT_MOC_LITERAL(9, 149, 3), // "row"
QT_MOC_LITERAL(10, 153, 6), // "column"
QT_MOC_LITERAL(11, 160, 33), // "on_tableWidget_currentCellCha..."
QT_MOC_LITERAL(12, 194, 10), // "currentRow"
QT_MOC_LITERAL(13, 205, 13), // "currentColumn"
QT_MOC_LITERAL(14, 219, 11), // "previousRow"
QT_MOC_LITERAL(15, 231, 14), // "previousColumn"
QT_MOC_LITERAL(16, 246, 30), // "on_tableWidgetDist_itemChanged"
QT_MOC_LITERAL(17, 277, 36), // "on_tableWidgetDist_cellDouble..."
QT_MOC_LITERAL(18, 314, 37) // "on_tableWidgetDist_currentCel..."

    },
    "edit_referencingDialog\0closing\0\0"
    "on_tabWidget_currentChanged\0index\0"
    "on_tableWidget_itemChanged\0QTableWidgetItem*\0"
    "item\0on_tableWidget_cellDoubleClicked\0"
    "row\0column\0on_tableWidget_currentCellChanged\0"
    "currentRow\0currentColumn\0previousRow\0"
    "previousColumn\0on_tableWidgetDist_itemChanged\0"
    "on_tableWidgetDist_cellDoubleClicked\0"
    "on_tableWidgetDist_currentCellChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_edit_referencingDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       8,    2,   61,    2, 0x08 /* Private */,
      11,    4,   66,    2, 0x08 /* Private */,
      16,    1,   75,    2, 0x08 /* Private */,
      17,    2,   78,    2, 0x08 /* Private */,
      18,    4,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   12,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   12,   13,   14,   15,

       0        // eod
};

void edit_referencingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<edit_referencingDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_tableWidget_itemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->on_tableWidget_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_tableWidget_currentCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: _t->on_tableWidgetDist_itemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->on_tableWidgetDist_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->on_tableWidgetDist_currentCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (edit_referencingDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&edit_referencingDialog::closing)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject edit_referencingDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_edit_referencingDialog.data,
    qt_meta_data_edit_referencingDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *edit_referencingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edit_referencingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_edit_referencingDialog.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int edit_referencingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void edit_referencingDialog::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
