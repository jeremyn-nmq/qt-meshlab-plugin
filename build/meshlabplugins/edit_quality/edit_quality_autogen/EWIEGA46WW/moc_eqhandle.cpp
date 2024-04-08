/****************************************************************************
** Meta object code from reading C++ file 'eqhandle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../meshlabplugins/edit_quality/eqhandle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eqhandle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EqHandle_t {
    QByteArrayData data[10];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EqHandle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EqHandle_t qt_meta_stringdata_EqHandle = {
    {
QT_MOC_LITERAL(0, 0, 8), // "EqHandle"
QT_MOC_LITERAL(1, 9, 24), // "positionChangedToSpinBox"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "positionChanged"
QT_MOC_LITERAL(4, 51, 15), // "insideHistogram"
QT_MOC_LITERAL(5, 67, 9), // "EqHandle*"
QT_MOC_LITERAL(6, 77, 6), // "sender"
QT_MOC_LITERAL(7, 84, 13), // "moveMidHandle"
QT_MOC_LITERAL(8, 98, 25), // "setXBySpinBoxValueChanged"
QT_MOC_LITERAL(9, 124, 12) // "spinBoxValue"

    },
    "EqHandle\0positionChangedToSpinBox\0\0"
    "positionChanged\0insideHistogram\0"
    "EqHandle*\0sender\0moveMidHandle\0"
    "setXBySpinBoxValueChanged\0spinBoxValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EqHandle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    0,   42,    2, 0x06 /* Public */,
       4,    2,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   48,    2, 0x08 /* Private */,
       8,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    9,

       0        // eod
};

void EqHandle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EqHandle *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->positionChangedToSpinBox((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->positionChanged(); break;
        case 2: _t->insideHistogram((*reinterpret_cast< EqHandle*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->moveMidHandle(); break;
        case 4: _t->setXBySpinBoxValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EqHandle* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EqHandle::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EqHandle::positionChangedToSpinBox)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EqHandle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EqHandle::positionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EqHandle::*)(EqHandle * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EqHandle::insideHistogram)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EqHandle::staticMetaObject = { {
    QMetaObject::SuperData::link<Handle::staticMetaObject>(),
    qt_meta_stringdata_EqHandle.data,
    qt_meta_data_EqHandle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EqHandle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EqHandle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EqHandle.stringdata0))
        return static_cast<void*>(this);
    return Handle::qt_metacast(_clname);
}

int EqHandle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Handle::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void EqHandle::positionChangedToSpinBox(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EqHandle::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void EqHandle::insideHistogram(EqHandle * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
