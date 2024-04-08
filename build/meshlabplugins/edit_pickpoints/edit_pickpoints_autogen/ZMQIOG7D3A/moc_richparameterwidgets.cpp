/****************************************************************************
** Meta object code from reading C++ file 'richparameterwidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../meshlab/rich_parameter_gui/richparameterwidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'richparameterwidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RichParameterWidget_t {
    QByteArrayData data[3];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RichParameterWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RichParameterWidget_t qt_meta_stringdata_RichParameterWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "RichParameterWidget"
QT_MOC_LITERAL(1, 20, 16), // "parameterChanged"
QT_MOC_LITERAL(2, 37, 0) // ""

    },
    "RichParameterWidget\0parameterChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RichParameterWidget[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void RichParameterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RichParameterWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->parameterChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RichParameterWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RichParameterWidget::parameterChanged)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject RichParameterWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_RichParameterWidget.data,
    qt_meta_data_RichParameterWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RichParameterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RichParameterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RichParameterWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RichParameterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void RichParameterWidget::parameterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_LineEditWidget_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LineEditWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LineEditWidget_t qt_meta_stringdata_LineEditWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "LineEditWidget"
QT_MOC_LITERAL(1, 15, 15), // "lineEditChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13) // "changeChecker"

    },
    "LineEditWidget\0lineEditChanged\0\0"
    "changeChecker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LineEditWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void LineEditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LineEditWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->lineEditChanged(); break;
        case 1: _t->changeChecker(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LineEditWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LineEditWidget::lineEditChanged)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LineEditWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<RichParameterWidget::staticMetaObject>(),
    qt_meta_stringdata_LineEditWidget.data,
    qt_meta_data_LineEditWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LineEditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LineEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LineEditWidget.stringdata0))
        return static_cast<void*>(this);
    return RichParameterWidget::qt_metacast(_clname);
}

int LineEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RichParameterWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void LineEditWidget::lineEditChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ColorWidget_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorWidget_t qt_meta_stringdata_ColorWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ColorWidget"
QT_MOC_LITERAL(1, 12, 18), // "dialogParamChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9) // "pickColor"

    },
    "ColorWidget\0dialogParamChanged\0\0"
    "pickColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ColorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dialogParamChanged(); break;
        case 1: _t->pickColor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorWidget::dialogParamChanged)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ColorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<RichParameterWidget::staticMetaObject>(),
    qt_meta_stringdata_ColorWidget.data,
    qt_meta_data_ColorWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorWidget.stringdata0))
        return static_cast<void*>(this);
    return RichParameterWidget::qt_metacast(_clname);
}

int ColorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RichParameterWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ColorWidget::dialogParamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_AbsPercWidget_t {
    QByteArrayData data[6];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbsPercWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbsPercWidget_t qt_meta_stringdata_AbsPercWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AbsPercWidget"
QT_MOC_LITERAL(1, 14, 18), // "dialogParamChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "on_absSB_valueChanged"
QT_MOC_LITERAL(4, 56, 4), // "newv"
QT_MOC_LITERAL(5, 61, 22) // "on_percSB_valueChanged"

    },
    "AbsPercWidget\0dialogParamChanged\0\0"
    "on_absSB_valueChanged\0newv\0"
    "on_percSB_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbsPercWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x0a /* Public */,
       5,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,

       0        // eod
};

void AbsPercWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbsPercWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dialogParamChanged(); break;
        case 1: _t->on_absSB_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->on_percSB_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbsPercWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbsPercWidget::dialogParamChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AbsPercWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<RichParameterWidget::staticMetaObject>(),
    qt_meta_stringdata_AbsPercWidget.data,
    qt_meta_data_AbsPercWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AbsPercWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbsPercWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbsPercWidget.stringdata0))
        return static_cast<void*>(this);
    return RichParameterWidget::qt_metacast(_clname);
}

int AbsPercWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RichParameterWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void AbsPercWidget::dialogParamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Point3fWidget_t {
    QByteArrayData data[14];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Point3fWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Point3fWidget_t qt_meta_stringdata_Point3fWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Point3fWidget"
QT_MOC_LITERAL(1, 14, 10), // "askViewDir"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "askViewPos"
QT_MOC_LITERAL(4, 37, 13), // "askSurfacePos"
QT_MOC_LITERAL(5, 51, 12), // "askCameraPos"
QT_MOC_LITERAL(6, 64, 15), // "askTrackballPos"
QT_MOC_LITERAL(7, 80, 8), // "getPoint"
QT_MOC_LITERAL(8, 89, 8), // "setValue"
QT_MOC_LITERAL(9, 98, 4), // "name"
QT_MOC_LITERAL(10, 103, 7), // "Point3m"
QT_MOC_LITERAL(11, 111, 3), // "val"
QT_MOC_LITERAL(12, 115, 12), // "setShotValue"
QT_MOC_LITERAL(13, 128, 5) // "Shotm"

    },
    "Point3fWidget\0askViewDir\0\0askViewPos\0"
    "askSurfacePos\0askCameraPos\0askTrackballPos\0"
    "getPoint\0setValue\0name\0Point3m\0val\0"
    "setShotValue\0Shotm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Point3fWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    1,   57,    2, 0x06 /* Public */,
       4,    1,   60,    2, 0x06 /* Public */,
       5,    1,   63,    2, 0x06 /* Public */,
       6,    1,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   69,    2, 0x0a /* Public */,
       8,    2,   70,    2, 0x0a /* Public */,
      12,    2,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10,    9,   11,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 13,    9,   11,

       0        // eod
};

void Point3fWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Point3fWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->askViewDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->askViewPos((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->askSurfacePos((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->askCameraPos((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->askTrackballPos((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->getPoint(); break;
        case 6: _t->setValue((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Point3m(*)>(_a[2]))); break;
        case 7: _t->setShotValue((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Shotm(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Point3fWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Point3fWidget::askViewDir)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Point3fWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Point3fWidget::askViewPos)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Point3fWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Point3fWidget::askSurfacePos)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Point3fWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Point3fWidget::askCameraPos)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Point3fWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Point3fWidget::askTrackballPos)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Point3fWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<RichParameterWidget::staticMetaObject>(),
    qt_meta_stringdata_Point3fWidget.data,
    qt_meta_data_Point3fWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Point3fWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Point3fWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Point3fWidget.stringdata0))
        return static_cast<void*>(this);
    return RichParameterWidget::qt_metacast(_clname);
}

int Point3fWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RichParameterWidget::qt_metacall(_c, _id, _a);
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
void Point3fWidget::askViewDir(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Point3fWidget::askViewPos(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Point3fWidget::askSurfacePos(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Point3fWidget::askCameraPos(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Point3fWidget::askTrackballPos(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_Matrix44fWidget_t {
    QByteArrayData data[11];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Matrix44fWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Matrix44fWidget_t qt_meta_stringdata_Matrix44fWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Matrix44fWidget"
QT_MOC_LITERAL(1, 16, 13), // "askMeshMatrix"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "setValue"
QT_MOC_LITERAL(4, 40, 4), // "name"
QT_MOC_LITERAL(5, 45, 9), // "Matrix44m"
QT_MOC_LITERAL(6, 55, 3), // "val"
QT_MOC_LITERAL(7, 59, 9), // "getMatrix"
QT_MOC_LITERAL(8, 69, 11), // "pasteMatrix"
QT_MOC_LITERAL(9, 81, 16), // "invalidateMatrix"
QT_MOC_LITERAL(10, 98, 1) // "s"

    },
    "Matrix44fWidget\0askMeshMatrix\0\0setValue\0"
    "name\0Matrix44m\0val\0getMatrix\0pasteMatrix\0"
    "invalidateMatrix\0s"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Matrix44fWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   42,    2, 0x0a /* Public */,
       7,    0,   47,    2, 0x0a /* Public */,
       8,    0,   48,    2, 0x0a /* Public */,
       9,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void Matrix44fWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Matrix44fWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->askMeshMatrix((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Matrix44m(*)>(_a[2]))); break;
        case 2: _t->getMatrix(); break;
        case 3: _t->pasteMatrix(); break;
        case 4: _t->invalidateMatrix((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Matrix44fWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Matrix44fWidget::askMeshMatrix)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Matrix44fWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<RichParameterWidget::staticMetaObject>(),
    qt_meta_stringdata_Matrix44fWidget.data,
    qt_meta_data_Matrix44fWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Matrix44fWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Matrix44fWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Matrix44fWidget.stringdata0))
        return static_cast<void*>(this);
    return RichParameterWidget::qt_metacast(_clname);
}

int Matrix44fWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RichParameterWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Matrix44fWidget::askMeshMatrix(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ShotfWidget_t {
    QByteArrayData data[10];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShotfWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShotfWidget_t qt_meta_stringdata_ShotfWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ShotfWidget"
QT_MOC_LITERAL(1, 12, 13), // "askRasterShot"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "askMeshShot"
QT_MOC_LITERAL(4, 39, 13), // "askViewerShot"
QT_MOC_LITERAL(5, 53, 7), // "getShot"
QT_MOC_LITERAL(6, 61, 12), // "setShotValue"
QT_MOC_LITERAL(7, 74, 4), // "name"
QT_MOC_LITERAL(8, 79, 5), // "Shotm"
QT_MOC_LITERAL(9, 85, 3) // "val"

    },
    "ShotfWidget\0askRasterShot\0\0askMeshShot\0"
    "askViewerShot\0getShot\0setShotValue\0"
    "name\0Shotm\0val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShotfWidget[] = {

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
       3,    1,   42,    2, 0x06 /* Public */,
       4,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   48,    2, 0x0a /* Public */,
       6,    2,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,    7,    9,

       0        // eod
};

void ShotfWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShotfWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->askRasterShot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->askMeshShot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->askViewerShot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->getShot(); break;
        case 4: _t->setShotValue((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Shotm(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShotfWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShotfWidget::askRasterShot)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ShotfWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShotfWidget::askMeshShot)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ShotfWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShotfWidget::askViewerShot)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ShotfWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<RichParameterWidget::staticMetaObject>(),
    qt_meta_stringdata_ShotfWidget.data,
    qt_meta_data_ShotfWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShotfWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShotfWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShotfWidget.stringdata0))
        return static_cast<void*>(this);
    return RichParameterWidget::qt_metacast(_clname);
}

int ShotfWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RichParameterWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ShotfWidget::askRasterShot(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ShotfWidget::askMeshShot(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ShotfWidget::askViewerShot(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_DynamicFloatWidget_t {
    QByteArrayData data[6];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DynamicFloatWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DynamicFloatWidget_t qt_meta_stringdata_DynamicFloatWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DynamicFloatWidget"
QT_MOC_LITERAL(1, 19, 18), // "dialogParamChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "setValue"
QT_MOC_LITERAL(4, 48, 4), // "newv"
QT_MOC_LITERAL(5, 53, 8) // "newValue"

    },
    "DynamicFloatWidget\0dialogParamChanged\0"
    "\0setValue\0newv\0newValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DynamicFloatWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a /* Public */,
       3,    0,   38,    2, 0x0a /* Public */,
       3,    1,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    5,

       0        // eod
};

void DynamicFloatWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DynamicFloatWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dialogParamChanged(); break;
        case 1: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setValue(); break;
        case 3: _t->setValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DynamicFloatWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DynamicFloatWidget::dialogParamChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DynamicFloatWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<RichParameterWidget::staticMetaObject>(),
    qt_meta_stringdata_DynamicFloatWidget.data,
    qt_meta_data_DynamicFloatWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DynamicFloatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DynamicFloatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DynamicFloatWidget.stringdata0))
        return static_cast<void*>(this);
    return RichParameterWidget::qt_metacast(_clname);
}

int DynamicFloatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RichParameterWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DynamicFloatWidget::dialogParamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ComboWidget_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComboWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComboWidget_t qt_meta_stringdata_ComboWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ComboWidget"
QT_MOC_LITERAL(1, 12, 18), // "dialogParamChanged"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "ComboWidget\0dialogParamChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComboWidget[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void ComboWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComboWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dialogParamChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComboWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComboWidget::dialogParamChanged)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ComboWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<RichParameterWidget::staticMetaObject>(),
    qt_meta_stringdata_ComboWidget.data,
    qt_meta_data_ComboWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ComboWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComboWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComboWidget.stringdata0))
        return static_cast<void*>(this);
    return RichParameterWidget::qt_metacast(_clname);
}

int ComboWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RichParameterWidget::qt_metacall(_c, _id, _a);
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
void ComboWidget::dialogParamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_EnumWidget_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EnumWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EnumWidget_t qt_meta_stringdata_EnumWidget = {
    {
QT_MOC_LITERAL(0, 0, 10) // "EnumWidget"

    },
    "EnumWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EnumWidget[] = {

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

void EnumWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject EnumWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<ComboWidget::staticMetaObject>(),
    qt_meta_stringdata_EnumWidget.data,
    qt_meta_data_EnumWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EnumWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EnumWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EnumWidget.stringdata0))
        return static_cast<void*>(this);
    return ComboWidget::qt_metacast(_clname);
}

int EnumWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComboWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IOFileWidget_t {
    QByteArrayData data[4];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IOFileWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IOFileWidget_t qt_meta_stringdata_IOFileWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "IOFileWidget"
QT_MOC_LITERAL(1, 13, 18), // "dialogParamChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10) // "selectFile"

    },
    "IOFileWidget\0dialogParamChanged\0\0"
    "selectFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IOFileWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void IOFileWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IOFileWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dialogParamChanged(); break;
        case 1: _t->selectFile(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IOFileWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IOFileWidget::dialogParamChanged)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject IOFileWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<RichParameterWidget::staticMetaObject>(),
    qt_meta_stringdata_IOFileWidget.data,
    qt_meta_data_IOFileWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IOFileWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IOFileWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IOFileWidget.stringdata0))
        return static_cast<void*>(this);
    return RichParameterWidget::qt_metacast(_clname);
}

int IOFileWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RichParameterWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void IOFileWidget::dialogParamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_SaveFileWidget_t {
    QByteArrayData data[3];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SaveFileWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SaveFileWidget_t qt_meta_stringdata_SaveFileWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SaveFileWidget"
QT_MOC_LITERAL(1, 15, 10), // "selectFile"
QT_MOC_LITERAL(2, 26, 0) // ""

    },
    "SaveFileWidget\0selectFile\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SaveFileWidget[] = {

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
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SaveFileWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SaveFileWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectFile(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SaveFileWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<IOFileWidget::staticMetaObject>(),
    qt_meta_stringdata_SaveFileWidget.data,
    qt_meta_data_SaveFileWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SaveFileWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SaveFileWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SaveFileWidget.stringdata0))
        return static_cast<void*>(this);
    return IOFileWidget::qt_metacast(_clname);
}

int SaveFileWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IOFileWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_OpenFileWidget_t {
    QByteArrayData data[3];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenFileWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenFileWidget_t qt_meta_stringdata_OpenFileWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OpenFileWidget"
QT_MOC_LITERAL(1, 15, 10), // "selectFile"
QT_MOC_LITERAL(2, 26, 0) // ""

    },
    "OpenFileWidget\0selectFile\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenFileWidget[] = {

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
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OpenFileWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpenFileWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectFile(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OpenFileWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<IOFileWidget::staticMetaObject>(),
    qt_meta_stringdata_OpenFileWidget.data,
    qt_meta_data_OpenFileWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenFileWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenFileWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenFileWidget.stringdata0))
        return static_cast<void*>(this);
    return IOFileWidget::qt_metacast(_clname);
}

int OpenFileWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IOFileWidget::qt_metacall(_c, _id, _a);
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
