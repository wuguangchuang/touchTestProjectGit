/****************************************************************************
** Meta object code from reading C++ file 'touchaging.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../touchtoolbar/include/touchaging.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'touchaging.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TouchAging_t {
    QByteArrayData data[6];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TouchAging_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TouchAging_t qt_meta_stringdata_TouchAging = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TouchAging"
QT_MOC_LITERAL(1, 11, 15), // "onAgingFinished"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "index"
QT_MOC_LITERAL(4, 34, 15), // "onStopAgingTest"
QT_MOC_LITERAL(5, 50, 16) // "onStartAgingTest"

    },
    "TouchAging\0onAgingFinished\0\0index\0"
    "onStopAgingTest\0onStartAgingTest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TouchAging[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    0,   32,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TouchAging::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TouchAging *_t = static_cast<TouchAging *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onAgingFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onStopAgingTest(); break;
        case 2: _t->onStartAgingTest(); break;
        default: ;
        }
    }
}

const QMetaObject TouchAging::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TouchAging.data,
      qt_meta_data_TouchAging,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TouchAging::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TouchAging::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TouchAging.stringdata0))
        return static_cast<void*>(const_cast< TouchAging*>(this));
    if (!strcmp(_clname, "TouchManager::HotplugListener"))
        return static_cast< TouchManager::HotplugListener*>(const_cast< TouchAging*>(this));
    return QObject::qt_metacast(_clname);
}

int TouchAging::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
