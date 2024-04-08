/****************************************************************************
** Meta object code from reading C++ file 'decorate_raster_proj.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../meshlabplugins/decorate_raster_proj/decorate_raster_proj.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'decorate_raster_proj.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DecorateRasterProjPlugin_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DecorateRasterProjPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DecorateRasterProjPlugin_t qt_meta_stringdata_DecorateRasterProjPlugin = {
    {
QT_MOC_LITERAL(0, 0, 24) // "DecorateRasterProjPlugin"

    },
    "DecorateRasterProjPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DecorateRasterProjPlugin[] = {

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

void DecorateRasterProjPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject DecorateRasterProjPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DecorateRasterProjPlugin.data,
    qt_meta_data_DecorateRasterProjPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DecorateRasterProjPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DecorateRasterProjPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DecorateRasterProjPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "DecoratePlugin"))
        return static_cast< DecoratePlugin*>(this);
    if (!strcmp(_clname, "vcg.meshlab.DecoratePlugin/1.0"))
        return static_cast< DecoratePlugin*>(this);
    return QObject::qt_metacast(_clname);
}

int DecorateRasterProjPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
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
    0x03,  0x78,  0x18,  'D',  'e',  'c',  'o',  'r', 
    'a',  't',  'e',  'R',  'a',  's',  't',  'e', 
    'r',  'P',  'r',  'o',  'j',  'P',  'l',  'u', 
    'g',  'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(DecorateRasterProjPlugin, DecorateRasterProjPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
