/****************************************************************************
** Meta object code from reading C++ file 'MathGUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MathGUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MathGUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MathGUI_t {
    QByteArrayData data[8];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MathGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MathGUI_t qt_meta_stringdata_MathGUI = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MathGUI"
QT_MOC_LITERAL(1, 8, 32), // "on_polynomialRootsButton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 33), // "on_linearRegressionButton_cli..."
QT_MOC_LITERAL(4, 76, 28), // "on_pow2NumbersButton_clicked"
QT_MOC_LITERAL(5, 105, 28), // "on_moduloShiftButton_clicked"
QT_MOC_LITERAL(6, 134, 29), // "on_permutationsButton_clicked"
QT_MOC_LITERAL(7, 164, 26) // "on_subseriesButton_clicked"

    },
    "MathGUI\0on_polynomialRootsButton_clicked\0"
    "\0on_linearRegressionButton_clicked\0"
    "on_pow2NumbersButton_clicked\0"
    "on_moduloShiftButton_clicked\0"
    "on_permutationsButton_clicked\0"
    "on_subseriesButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MathGUI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MathGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MathGUI *_t = static_cast<MathGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_polynomialRootsButton_clicked(); break;
        case 1: _t->on_linearRegressionButton_clicked(); break;
        case 2: _t->on_pow2NumbersButton_clicked(); break;
        case 3: _t->on_moduloShiftButton_clicked(); break;
        case 4: _t->on_permutationsButton_clicked(); break;
        case 5: _t->on_subseriesButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MathGUI::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MathGUI.data,
    qt_meta_data_MathGUI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MathGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MathGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MathGUI.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MathGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
