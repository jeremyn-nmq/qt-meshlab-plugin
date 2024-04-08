/****************************************************************************
** Meta object code from reading C++ file 'pickpointsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../meshlabplugins/edit_pickpoints/pickpointsDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pickpointsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PickPointsDialog_t {
    QByteArrayData data[18];
    char stringdata0[323];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PickPointsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PickPointsDialog_t qt_meta_stringdata_PickPointsDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PickPointsDialog"
QT_MOC_LITERAL(1, 17, 12), // "redrawPoints"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 22), // "removeHighlightedPoint"
QT_MOC_LITERAL(4, 54, 22), // "renameHighlightedPoint"
QT_MOC_LITERAL(5, 77, 21), // "clearHighlightedPoint"
QT_MOC_LITERAL(6, 99, 14), // "togglePickMode"
QT_MOC_LITERAL(7, 114, 7), // "checked"
QT_MOC_LITERAL(8, 122, 14), // "toggleMoveMode"
QT_MOC_LITERAL(9, 137, 16), // "toggleSelectMode"
QT_MOC_LITERAL(10, 154, 16), // "savePointsToFile"
QT_MOC_LITERAL(11, 171, 27), // "askUserForFileAndLoadPoints"
QT_MOC_LITERAL(12, 199, 24), // "clearPointsButtonClicked"
QT_MOC_LITERAL(13, 224, 17), // "savePointTemplate"
QT_MOC_LITERAL(14, 242, 29), // "askUserForFileAndloadTemplate"
QT_MOC_LITERAL(15, 272, 26), // "clearTemplateButtonClicked"
QT_MOC_LITERAL(16, 299, 18), // "addPointToTemplate"
QT_MOC_LITERAL(17, 318, 4) // "undo"

    },
    "PickPointsDialog\0redrawPoints\0\0"
    "removeHighlightedPoint\0renameHighlightedPoint\0"
    "clearHighlightedPoint\0togglePickMode\0"
    "checked\0toggleMoveMode\0toggleSelectMode\0"
    "savePointsToFile\0askUserForFileAndLoadPoints\0"
    "clearPointsButtonClicked\0savePointTemplate\0"
    "askUserForFileAndloadTemplate\0"
    "clearTemplateButtonClicked\0"
    "addPointToTemplate\0undo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PickPointsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    1,   93,    2, 0x08 /* Private */,
       8,    1,   96,    2, 0x08 /* Private */,
       9,    1,   99,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
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

void PickPointsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PickPointsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->redrawPoints(); break;
        case 1: _t->removeHighlightedPoint(); break;
        case 2: _t->renameHighlightedPoint(); break;
        case 3: _t->clearHighlightedPoint(); break;
        case 4: _t->togglePickMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->toggleMoveMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->toggleSelectMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->savePointsToFile(); break;
        case 8: _t->askUserForFileAndLoadPoints(); break;
        case 9: _t->clearPointsButtonClicked(); break;
        case 10: _t->savePointTemplate(); break;
        case 11: _t->askUserForFileAndloadTemplate(); break;
        case 12: _t->clearTemplateButtonClicked(); break;
        case 13: _t->addPointToTemplate(); break;
        case 14: _t->undo(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PickPointsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_PickPointsDialog.data,
    qt_meta_data_PickPointsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PickPointsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PickPointsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PickPointsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int PickPointsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
struct qt_meta_stringdata_TreeCheckBox_t {
    QByteArrayData data[4];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TreeCheckBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TreeCheckBox_t qt_meta_stringdata_TreeCheckBox = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TreeCheckBox"
QT_MOC_LITERAL(1, 13, 13), // "toggleAndDraw"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7) // "checked"

    },
    "TreeCheckBox\0toggleAndDraw\0\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TreeCheckBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void TreeCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TreeCheckBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toggleAndDraw((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TreeCheckBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QCheckBox::staticMetaObject>(),
    qt_meta_stringdata_TreeCheckBox.data,
    qt_meta_data_TreeCheckBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TreeCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TreeCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TreeCheckBox.stringdata0))
        return static_cast<void*>(this);
    return QCheckBox::qt_metacast(_clname);
}

int TreeCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
