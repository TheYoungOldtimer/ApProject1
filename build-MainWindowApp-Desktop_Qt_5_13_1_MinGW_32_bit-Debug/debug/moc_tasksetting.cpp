/****************************************************************************
** Meta object code from reading C++ file 'tasksetting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MainWindowApp/tasksetting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tasksetting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tasksetting_t {
    QByteArrayData data[10];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tasksetting_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tasksetting_t qt_meta_stringdata_tasksetting = {
    {
QT_MOC_LITERAL(0, 0, 11), // "tasksetting"
QT_MOC_LITERAL(1, 12, 22), // "on_lineEdit_textEdited"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "arg1"
QT_MOC_LITERAL(4, 41, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 63, 11), // "add_to_file"
QT_MOC_LITERAL(6, 75, 3), // "obj"
QT_MOC_LITERAL(7, 79, 3), // "doc"
QT_MOC_LITERAL(8, 83, 4), // "path"
QT_MOC_LITERAL(9, 88, 10) // "lockBotton"

    },
    "tasksetting\0on_lineEdit_textEdited\0\0"
    "arg1\0on_pushButton_clicked\0add_to_file\0"
    "obj\0doc\0path\0lockBotton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tasksetting[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    0,   37,    2, 0x08 /* Private */,
       5,    3,   38,    2, 0x08 /* Private */,
       9,    0,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject, QMetaType::QJsonDocument, QMetaType::QString,    6,    7,    8,
    QMetaType::Void,

       0        // eod
};

void tasksetting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<tasksetting *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_clicked(); break;

        case 3: _t->lockBotton(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tasksetting::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_tasksetting.data,
    qt_meta_data_tasksetting,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tasksetting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tasksetting::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tasksetting.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int tasksetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
