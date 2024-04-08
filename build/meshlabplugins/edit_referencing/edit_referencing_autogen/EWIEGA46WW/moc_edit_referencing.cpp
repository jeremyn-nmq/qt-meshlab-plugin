/****************************************************************************
** Meta object code from reading C++ file 'edit_referencing.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../meshlabplugins/edit_referencing/edit_referencing.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edit_referencing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EditReferencingPlugin_t {
    QByteArrayData data[22];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditReferencingPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditReferencingPlugin_t qt_meta_stringdata_EditReferencingPlugin = {
    {
QT_MOC_LITERAL(0, 0, 21), // "EditReferencingPlugin"
QT_MOC_LITERAL(1, 22, 13), // "askSurfacePos"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 20), // "receivedSurfacePoint"
QT_MOC_LITERAL(4, 58, 4), // "name"
QT_MOC_LITERAL(5, 63, 7), // "Point3m"
QT_MOC_LITERAL(6, 71, 6), // "pPoint"
QT_MOC_LITERAL(7, 78, 11), // "addNewPoint"
QT_MOC_LITERAL(8, 90, 18), // "deleteCurrentPoint"
QT_MOC_LITERAL(9, 109, 16), // "pickCurrentPoint"
QT_MOC_LITERAL(10, 126, 19), // "pickCurrentRefPoint"
QT_MOC_LITERAL(11, 146, 15), // "calculateMatrix"
QT_MOC_LITERAL(12, 162, 11), // "applyMatrix"
QT_MOC_LITERAL(13, 174, 12), // "loadFromFile"
QT_MOC_LITERAL(14, 187, 10), // "saveToFile"
QT_MOC_LITERAL(15, 198, 14), // "addNewDistance"
QT_MOC_LITERAL(16, 213, 21), // "deleteCurrentDistance"
QT_MOC_LITERAL(17, 235, 14), // "pickCurrDistPA"
QT_MOC_LITERAL(18, 250, 14), // "pickCurrDistPB"
QT_MOC_LITERAL(19, 265, 10), // "applyScale"
QT_MOC_LITERAL(20, 276, 13), // "loadDistances"
QT_MOC_LITERAL(21, 290, 13) // "exportScaling"

    },
    "EditReferencingPlugin\0askSurfacePos\0"
    "\0receivedSurfacePoint\0name\0Point3m\0"
    "pPoint\0addNewPoint\0deleteCurrentPoint\0"
    "pickCurrentPoint\0pickCurrentRefPoint\0"
    "calculateMatrix\0applyMatrix\0loadFromFile\0"
    "saveToFile\0addNewDistance\0"
    "deleteCurrentDistance\0pickCurrDistPA\0"
    "pickCurrDistPB\0applyScale\0loadDistances\0"
    "exportScaling"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditReferencingPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,  102,    2, 0x0a /* Public */,
       7,    0,  107,    2, 0x0a /* Public */,
       8,    0,  108,    2, 0x0a /* Public */,
       9,    0,  109,    2, 0x0a /* Public */,
      10,    0,  110,    2, 0x0a /* Public */,
      11,    0,  111,    2, 0x0a /* Public */,
      12,    0,  112,    2, 0x0a /* Public */,
      13,    0,  113,    2, 0x0a /* Public */,
      14,    0,  114,    2, 0x0a /* Public */,
      15,    0,  115,    2, 0x0a /* Public */,
      16,    0,  116,    2, 0x0a /* Public */,
      17,    0,  117,    2, 0x0a /* Public */,
      18,    0,  118,    2, 0x0a /* Public */,
      19,    0,  119,    2, 0x0a /* Public */,
      20,    0,  120,    2, 0x0a /* Public */,
      21,    0,  121,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void EditReferencingPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditReferencingPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->askSurfacePos((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->receivedSurfacePoint((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Point3m(*)>(_a[2]))); break;
        case 2: _t->addNewPoint(); break;
        case 3: _t->deleteCurrentPoint(); break;
        case 4: _t->pickCurrentPoint(); break;
        case 5: _t->pickCurrentRefPoint(); break;
        case 6: _t->calculateMatrix(); break;
        case 7: _t->applyMatrix(); break;
        case 8: _t->loadFromFile(); break;
        case 9: _t->saveToFile(); break;
        case 10: _t->addNewDistance(); break;
        case 11: _t->deleteCurrentDistance(); break;
        case 12: _t->pickCurrDistPA(); break;
        case 13: _t->pickCurrDistPB(); break;
        case 14: _t->applyScale(); break;
        case 15: _t->loadDistances(); break;
        case 16: _t->exportScaling(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditReferencingPlugin::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditReferencingPlugin::askSurfacePos)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EditReferencingPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EditReferencingPlugin.data,
    qt_meta_data_EditReferencingPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EditReferencingPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditReferencingPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditReferencingPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "EditTool"))
        return static_cast< EditTool*>(this);
    return QObject::qt_metacast(_clname);
}

int EditReferencingPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void EditReferencingPlugin::askSurfacePos(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
