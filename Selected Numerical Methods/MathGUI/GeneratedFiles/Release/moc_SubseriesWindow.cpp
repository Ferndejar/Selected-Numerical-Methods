/****************************************************************************
** Meta object code from reading C++ file 'SubseriesWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SubseriesWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SubseriesWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SubseriesWindow_t {
    QByteArrayData data[13];
    char stringdata0[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubseriesWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubseriesWindow_t qt_meta_stringdata_SubseriesWindow = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SubseriesWindow"
QT_MOC_LITERAL(1, 16, 24), // "on_computeButton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 36), // "on_condCoincidentRadioButton_..."
QT_MOC_LITERAL(4, 79, 2), // "on"
QT_MOC_LITERAL(5, 82, 32), // "on_actionConditionally_triggered"
QT_MOC_LITERAL(6, 115, 25), // "on_actionGreedy_triggered"
QT_MOC_LITERAL(7, 141, 23), // "on_actionLazy_triggered"
QT_MOC_LITERAL(8, 165, 23), // "on_actionGaps_triggered"
QT_MOC_LITERAL(9, 189, 39), // "on_actionConditionallyExample..."
QT_MOC_LITERAL(10, 229, 32), // "on_actionGreedyExample_triggered"
QT_MOC_LITERAL(11, 262, 30), // "on_actionLazyExample_triggered"
QT_MOC_LITERAL(12, 293, 30) // "on_actionGapsExample_triggered"

    },
    "SubseriesWindow\0on_computeButton_clicked\0"
    "\0on_condCoincidentRadioButton_toggled\0"
    "on\0on_actionConditionally_triggered\0"
    "on_actionGreedy_triggered\0"
    "on_actionLazy_triggered\0on_actionGaps_triggered\0"
    "on_actionConditionallyExample_triggered\0"
    "on_actionGreedyExample_triggered\0"
    "on_actionLazyExample_triggered\0"
    "on_actionGapsExample_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubseriesWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    1,   65,    2, 0x0a /* Public */,
       5,    0,   68,    2, 0x0a /* Public */,
       6,    0,   69,    2, 0x0a /* Public */,
       7,    0,   70,    2, 0x0a /* Public */,
       8,    0,   71,    2, 0x0a /* Public */,
       9,    0,   72,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x0a /* Public */,
      11,    0,   74,    2, 0x0a /* Public */,
      12,    0,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
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

void SubseriesWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SubseriesWindow *_t = static_cast<SubseriesWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_computeButton_clicked(); break;
        case 1: _t->on_condCoincidentRadioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_actionConditionally_triggered(); break;
        case 3: _t->on_actionGreedy_triggered(); break;
        case 4: _t->on_actionLazy_triggered(); break;
        case 5: _t->on_actionGaps_triggered(); break;
        case 6: _t->on_actionConditionallyExample_triggered(); break;
        case 7: _t->on_actionGreedyExample_triggered(); break;
        case 8: _t->on_actionLazyExample_triggered(); break;
        case 9: _t->on_actionGapsExample_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SubseriesWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_SubseriesWindow.data,
    qt_meta_data_SubseriesWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SubseriesWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubseriesWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SubseriesWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SubseriesWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
