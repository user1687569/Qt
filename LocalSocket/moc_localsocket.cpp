/****************************************************************************
** Meta object code from reading C++ file 'localsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "localsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'localsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LocalSocket_t {
    QByteArrayData data[7];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocalSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocalSocket_t qt_meta_stringdata_LocalSocket = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LocalSocket"
QT_MOC_LITERAL(1, 12, 19), // "socketConnectedSlot"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 22), // "socketDisconnectedSlot"
QT_MOC_LITERAL(4, 56, 15), // "socketErrorSlot"
QT_MOC_LITERAL(5, 72, 30), // "QLocalSocket::LocalSocketError"
QT_MOC_LITERAL(6, 103, 5) // "error"

    },
    "LocalSocket\0socketConnectedSlot\0\0"
    "socketDisconnectedSlot\0socketErrorSlot\0"
    "QLocalSocket::LocalSocketError\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocalSocket[] = {

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
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void LocalSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LocalSocket *_t = static_cast<LocalSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->socketConnectedSlot(); break;
        case 1: _t->socketDisconnectedSlot(); break;
        case 2: _t->socketErrorSlot((*reinterpret_cast< QLocalSocket::LocalSocketError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LocalSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LocalSocket.data,
      qt_meta_data_LocalSocket,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LocalSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocalSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LocalSocket.stringdata0))
        return static_cast<void*>(const_cast< LocalSocket*>(this));
    return QObject::qt_metacast(_clname);
}

int LocalSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
