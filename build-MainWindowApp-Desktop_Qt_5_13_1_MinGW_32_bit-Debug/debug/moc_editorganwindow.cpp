/****************************************************************************
** Meta object code from reading C++ file 'editorganwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MainWindowApp/editorganwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editorganwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_editorganwindow_t {
    QByteArrayData data[9];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_editorganwindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_editorganwindow_t qt_meta_stringdata_editorganwindow = {
    {
QT_MOC_LITERAL(0, 0, 15), // "editorganwindow"
QT_MOC_LITERAL(1, 16, 22), // "on_lineEdit_textEdited"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 4), // "arg1"
QT_MOC_LITERAL(4, 45, 16), // "append_toa_jfile"
QT_MOC_LITERAL(5, 62, 3), // "obj"
QT_MOC_LITERAL(6, 66, 3), // "doc"
QT_MOC_LITERAL(7, 70, 4), // "path"
QT_MOC_LITERAL(8, 75, 21) // "on_pushButton_clicked"

    },
    "editorganwindow\0on_lineEdit_textEdited\0"
    "\0arg1\0append_toa_jfile\0obj\0doc\0path\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_editorganwindow[] = {

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
       4,    3,   32,    2, 0x08 /* Private */,
       8,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QJsonObject, QMetaType::QJsonDocument, QMetaType::QString,    5,    6,    7,
    QMetaType::Void,

       0        // eod
};

void editorganwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<editorganwindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->append_toa_jfile((*reinterpret_cast< QJsonObject(*)>(_a[1])),(*reinterpret_cast< QJsonDocument(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject editorganwindow::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_editorganwindow.data,
    qt_meta_data_editorganwindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *editorganwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *editorganwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_editorganwindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int editorganwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
