/****************************************************************************
** Meta object code from reading C++ file 'filter_sampling.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../meshlabplugins/filter_sampling/filter_sampling.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filter_sampling.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FilterDocSampling_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FilterDocSampling_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FilterDocSampling_t qt_meta_stringdata_FilterDocSampling = {
    {
QT_MOC_LITERAL(0, 0, 17) // "FilterDocSampling"

    },
    "FilterDocSampling"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FilterDocSampling[] = {

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

void FilterDocSampling::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FilterDocSampling::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FilterDocSampling.data,
    qt_meta_data_FilterDocSampling,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FilterDocSampling::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilterDocSampling::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FilterDocSampling.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FilterPlugin"))
        return static_cast< FilterPlugin*>(this);
    if (!strcmp(_clname, "vcg.meshlab.FilterPlugin/1.0"))
        return static_cast< FilterPlugin*>(this);
    return QObject::qt_metacast(_clname);
}

int FilterDocSampling::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0x02,  0x78,  0x1c,  'v',  'c',  'g',  '.',  'm', 
    'e',  's',  'h',  'l',  'a',  'b',  '.',  'F', 
    'i',  'l',  't',  'e',  'r',  'P',  'l',  'u', 
    'g',  'i',  'n',  '/',  '1',  '.',  '0', 
    // "className"
    0x03,  0x71,  'F',  'i',  'l',  't',  'e',  'r', 
    'D',  'o',  'c',  'S',  'a',  'm',  'p',  'l', 
    'i',  'n',  'g', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(FilterDocSampling, FilterDocSampling)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
