/****************************************************************************
** Meta object code from reading C++ file 'decorate_base.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../meshlabplugins/decorate_base/decorate_base.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'decorate_base.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DecorateBasePlugin_t {
    QByteArrayData data[7];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DecorateBasePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DecorateBasePlugin_t qt_meta_stringdata_DecorateBasePlugin = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DecorateBasePlugin"
QT_MOC_LITERAL(1, 19, 13), // "askViewerShot"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "setValue"
QT_MOC_LITERAL(4, 43, 4), // "name"
QT_MOC_LITERAL(5, 48, 10), // "vcg::Shotf"
QT_MOC_LITERAL(6, 59, 3) // "val"

    },
    "DecorateBasePlugin\0askViewerShot\0\0"
    "setValue\0name\0vcg::Shotf\0val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DecorateBasePlugin[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    4,    6,

       0        // eod
};

void DecorateBasePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DecorateBasePlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->askViewerShot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< vcg::Shotf(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DecorateBasePlugin::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DecorateBasePlugin::askViewerShot)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DecorateBasePlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DecorateBasePlugin.data,
    qt_meta_data_DecorateBasePlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DecorateBasePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DecorateBasePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DecorateBasePlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "DecoratePlugin"))
        return static_cast< DecoratePlugin*>(this);
    if (!strcmp(_clname, "vcg.meshlab.DecoratePlugin/1.0"))
        return static_cast< DecoratePlugin*>(this);
    return QObject::qt_metacast(_clname);
}

int DecorateBasePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void DecorateBasePlugin::askViewerShot(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x1e,  'v',  'c',  'g',  '.',  'm', 
    'e',  's',  'h',  'l',  'a',  'b',  '.',  'D', 
    'e',  'c',  'o',  'r',  'a',  't',  'e',  'P', 
    'l',  'u',  'g',  'i',  'n',  '/',  '1',  '.', 
    '0', 
    // "className"
    0x03,  0x72,  'D',  'e',  'c',  'o',  'r',  'a', 
    't',  'e',  'B',  'a',  's',  'e',  'P',  'l', 
    'u',  'g',  'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(DecorateBasePlugin, DecorateBasePlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
