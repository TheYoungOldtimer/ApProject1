/****************************************************************************
** Meta object code from reading C++ file 'memberrolewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MainWindowApp/memberrolewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'memberrolewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_memberrolewindow_t {
    QByteArrayData data[10];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_memberrolewindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_memberrolewindow_t qt_meta_stringdata_memberrolewindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "memberrolewindow"
QT_MOC_LITERAL(1, 17, 22), // "on_lineEdit_textEdited"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "arg1"
QT_MOC_LITERAL(4, 46, 10), // "findmember"
QT_MOC_LITERAL(5, 57, 5), // "email"
QT_MOC_LITERAL(6, 63, 11), // "readdmember"
QT_MOC_LITERAL(7, 75, 3), // "obj"
QT_MOC_LITERAL(8, 79, 12), // "deletemember"
QT_MOC_LITERAL(9, 92, 21) // "on_pushButton_clicked"

    },
    "memberrolewindow\0on_lineEdit_textEdited\0"
    "\0arg1\0findmember\0email\0readdmember\0"
    "obj\0deletemember\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_memberrolewindow[] = {

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
       4,    1,   42,    2, 0x08 /* Private */,
       6,    1,   45,    2, 0x08 /* Private */,
       8,    1,   48,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QJsonObject,    7,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void memberrolewindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<memberrolewindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { bool _r = _t->findmember((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->readdmember((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 3: _t->deletemember((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject memberrolewindow::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_memberrolewindow.data,
    qt_meta_data_memberrolewindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *memberrolewindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *memberrolewindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_memberrolewindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int memberrolewindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
