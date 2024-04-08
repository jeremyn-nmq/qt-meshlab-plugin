/****************************************************************************
** Meta object code from reading C++ file 'paintbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../meshlabplugins/edit_paint/paintbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paintbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Paintbox_t {
    QByteArrayData data[41];
    char stringdata0[792];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Paintbox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Paintbox_t qt_meta_stringdata_Paintbox = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Paintbox"
QT_MOC_LITERAL(1, 9, 4), // "undo"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 4), // "redo"
QT_MOC_LITERAL(4, 20, 10), // "typeChange"
QT_MOC_LITERAL(5, 31, 8), // "ToolType"
QT_MOC_LITERAL(6, 40, 1), // "t"
QT_MOC_LITERAL(7, 42, 19), // "brushSettingsChange"
QT_MOC_LITERAL(8, 62, 4), // "size"
QT_MOC_LITERAL(9, 67, 7), // "opacity"
QT_MOC_LITERAL(10, 75, 8), // "hardness"
QT_MOC_LITERAL(11, 84, 21), // "on_pen_button_toggled"
QT_MOC_LITERAL(12, 106, 7), // "checked"
QT_MOC_LITERAL(13, 114, 22), // "on_fill_button_toggled"
QT_MOC_LITERAL(14, 137, 26), // "on_gradient_button_toggled"
QT_MOC_LITERAL(15, 164, 24), // "on_smooth_button_toggled"
QT_MOC_LITERAL(16, 189, 23), // "on_clone_button_toggled"
QT_MOC_LITERAL(17, 213, 22), // "on_pick_button_toggled"
QT_MOC_LITERAL(18, 236, 27), // "on_mesh_pick_button_toggled"
QT_MOC_LITERAL(19, 264, 29), // "on_mesh_smooth_button_toggled"
QT_MOC_LITERAL(20, 294, 29), // "on_mesh_sculpt_button_toggled"
QT_MOC_LITERAL(21, 324, 26), // "on_mesh_add_button_toggled"
QT_MOC_LITERAL(22, 351, 24), // "on_perlin_button_toggled"
QT_MOC_LITERAL(23, 376, 22), // "on_undo_button_clicked"
QT_MOC_LITERAL(24, 399, 22), // "on_redo_button_clicked"
QT_MOC_LITERAL(25, 422, 25), // "on_default_colors_clicked"
QT_MOC_LITERAL(26, 448, 24), // "on_switch_colors_clicked"
QT_MOC_LITERAL(27, 473, 32), // "on_brush_box_currentIndexChanged"
QT_MOC_LITERAL(28, 506, 31), // "on_hardness_slider_valueChanged"
QT_MOC_LITERAL(29, 538, 27), // "on_size_slider_valueChanged"
QT_MOC_LITERAL(30, 566, 35), // "on_clone_source_load_button_c..."
QT_MOC_LITERAL(31, 602, 40), // "on_mesh_displacement_slider_v..."
QT_MOC_LITERAL(32, 643, 3), // "val"
QT_MOC_LITERAL(33, 647, 37), // "on_displacement_spin_box_valu..."
QT_MOC_LITERAL(34, 685, 28), // "on_noise_slider_valueChanged"
QT_MOC_LITERAL(35, 714, 25), // "on_noise_box_valueChanged"
QT_MOC_LITERAL(36, 740, 14), // "setPixmapDelta"
QT_MOC_LITERAL(37, 755, 1), // "x"
QT_MOC_LITERAL(38, 757, 1), // "y"
QT_MOC_LITERAL(39, 759, 15), // "movePixmapDelta"
QT_MOC_LITERAL(40, 775, 16) // "resetPixmapDelta"

    },
    "Paintbox\0undo\0\0redo\0typeChange\0ToolType\0"
    "t\0brushSettingsChange\0size\0opacity\0"
    "hardness\0on_pen_button_toggled\0checked\0"
    "on_fill_button_toggled\0"
    "on_gradient_button_toggled\0"
    "on_smooth_button_toggled\0"
    "on_clone_button_toggled\0on_pick_button_toggled\0"
    "on_mesh_pick_button_toggled\0"
    "on_mesh_smooth_button_toggled\0"
    "on_mesh_sculpt_button_toggled\0"
    "on_mesh_add_button_toggled\0"
    "on_perlin_button_toggled\0"
    "on_undo_button_clicked\0on_redo_button_clicked\0"
    "on_default_colors_clicked\0"
    "on_switch_colors_clicked\0"
    "on_brush_box_currentIndexChanged\0"
    "on_hardness_slider_valueChanged\0"
    "on_size_slider_valueChanged\0"
    "on_clone_source_load_button_clicked\0"
    "on_mesh_displacement_slider_valueChanged\0"
    "val\0on_displacement_spin_box_valueChanged\0"
    "on_noise_slider_valueChanged\0"
    "on_noise_box_valueChanged\0setPixmapDelta\0"
    "x\0y\0movePixmapDelta\0resetPixmapDelta"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Paintbox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  164,    2, 0x06 /* Public */,
       3,    0,  165,    2, 0x06 /* Public */,
       4,    1,  166,    2, 0x06 /* Public */,
       7,    3,  169,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  176,    2, 0x0a /* Public */,
      13,    1,  179,    2, 0x0a /* Public */,
      14,    1,  182,    2, 0x0a /* Public */,
      15,    1,  185,    2, 0x0a /* Public */,
      16,    1,  188,    2, 0x0a /* Public */,
      17,    1,  191,    2, 0x0a /* Public */,
      18,    1,  194,    2, 0x0a /* Public */,
      19,    1,  197,    2, 0x0a /* Public */,
      20,    1,  200,    2, 0x0a /* Public */,
      21,    1,  203,    2, 0x0a /* Public */,
      22,    1,  206,    2, 0x0a /* Public */,
      23,    0,  209,    2, 0x0a /* Public */,
      24,    0,  210,    2, 0x0a /* Public */,
      25,    0,  211,    2, 0x0a /* Public */,
      26,    0,  212,    2, 0x0a /* Public */,
      27,    1,  213,    2, 0x0a /* Public */,
      28,    1,  216,    2, 0x0a /* Public */,
      29,    1,  219,    2, 0x0a /* Public */,
      30,    0,  222,    2, 0x0a /* Public */,
      31,    1,  223,    2, 0x0a /* Public */,
      33,    1,  226,    2, 0x0a /* Public */,
      34,    1,  229,    2, 0x0a /* Public */,
      35,    1,  232,    2, 0x0a /* Public */,
      36,    2,  235,    2, 0x0a /* Public */,
      39,    2,  240,    2, 0x0a /* Public */,
      40,    0,  245,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void, QMetaType::Double,   32,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void, QMetaType::Double,   32,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   37,   38,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   37,   38,
    QMetaType::Void,

       0        // eod
};

void Paintbox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Paintbox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->undo(); break;
        case 1: _t->redo(); break;
        case 2: _t->typeChange((*reinterpret_cast< ToolType(*)>(_a[1]))); break;
        case 3: _t->brushSettingsChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->on_pen_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_fill_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_gradient_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_smooth_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_clone_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_pick_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_mesh_pick_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_mesh_smooth_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_mesh_sculpt_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_mesh_add_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_perlin_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_undo_button_clicked(); break;
        case 16: _t->on_redo_button_clicked(); break;
        case 17: _t->on_default_colors_clicked(); break;
        case 18: _t->on_switch_colors_clicked(); break;
        case 19: _t->on_brush_box_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->on_hardness_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->on_size_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->on_clone_source_load_button_clicked(); break;
        case 23: _t->on_mesh_displacement_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->on_displacement_spin_box_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 25: _t->on_noise_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->on_noise_box_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 27: _t->setPixmapDelta((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 28: _t->movePixmapDelta((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 29: _t->resetPixmapDelta(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Paintbox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Paintbox::undo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Paintbox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Paintbox::redo)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Paintbox::*)(ToolType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Paintbox::typeChange)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Paintbox::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Paintbox::brushSettingsChange)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Paintbox::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Paintbox.data,
    qt_meta_data_Paintbox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Paintbox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Paintbox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Paintbox.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Paintbox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void Paintbox::undo()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Paintbox::redo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Paintbox::typeChange(ToolType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Paintbox::brushSettingsChange(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
