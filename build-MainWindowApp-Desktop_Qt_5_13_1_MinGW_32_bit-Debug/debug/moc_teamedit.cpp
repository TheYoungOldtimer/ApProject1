/****************************************************************************
** Meta object code from reading C++ file 'teamedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MainWindowApp/teamedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teamedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_teamedit_t {
    QByteArrayData data[9];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_teamedit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_teamedit_t qt_meta_stringdata_teamedit = {
    {
QT_MOC_LITERAL(0, 0, 8), // "teamedit"
QT_MOC_LITERAL(1, 9, 22), // "on_lineEdit_textEdited"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "arg1"
QT_MOC_LITERAL(4, 38, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 60, 16), // "append_toa_jfile"
QT_MOC_LITERAL(6, 77, 3), // "obj"
QT_MOC_LITERAL(7, 81, 3), // "doc"
QT_MOC_LITERAL(8, 85, 4) // "path"

    },
    "teamedit\0on_lineEdit_textEdited\0\0arg1\0"
    "on_pushButton_clicked\0append_toa_jfile\0"
    "obj\0doc\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_teamedit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    0,   32,    2, 0x08 /* Private */,
       5,    3,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject, QMetaType::QJsonDocument, QMetaType::QString,    6,    7,    8,

       0        // eod
};

void teamedit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<teamedit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->append_toa_jfile((*reinterpret_cast< QJsonObject(*)>(_a[1])),(*reinterpret_cast< QJsonDocument(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject teamedit::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_teamedit.data,
    qt_meta_data_teamedit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *teamedit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *teamedit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_teamedit.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int teamedit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
