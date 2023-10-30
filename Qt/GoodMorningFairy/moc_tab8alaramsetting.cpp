/****************************************************************************
** Meta object code from reading C++ file 'tab8alaramsetting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tab8alaramsetting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab8alaramsetting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tab8AlaramSetting_t {
    QByteArrayData data[7];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tab8AlaramSetting_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tab8AlaramSetting_t qt_meta_stringdata_Tab8AlaramSetting = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Tab8AlaramSetting"
QT_MOC_LITERAL(1, 18, 19), // "connectToServerSlot"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 19), // "socketRecvpdateSlot"
QT_MOC_LITERAL(4, 59, 16), // "socketSendServer"
QT_MOC_LITERAL(5, 76, 17), // "slotConnectServer"
QT_MOC_LITERAL(6, 94, 18) // "slotClosedByServer"

    },
    "Tab8AlaramSetting\0connectToServerSlot\0"
    "\0socketRecvpdateSlot\0socketSendServer\0"
    "slotConnectServer\0slotClosedByServer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tab8AlaramSetting[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       3,    1,   42,    2, 0x08 /* Private */,
       4,    0,   45,    2, 0x08 /* Private */,
       5,    0,   46,    2, 0x08 /* Private */,
       6,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Tab8AlaramSetting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Tab8AlaramSetting *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectToServerSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->socketRecvpdateSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->socketSendServer(); break;
        case 3: _t->slotConnectServer(); break;
        case 4: _t->slotClosedByServer(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Tab8AlaramSetting::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Tab8AlaramSetting.data,
    qt_meta_data_Tab8AlaramSetting,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Tab8AlaramSetting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tab8AlaramSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tab8AlaramSetting.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Tab8AlaramSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
