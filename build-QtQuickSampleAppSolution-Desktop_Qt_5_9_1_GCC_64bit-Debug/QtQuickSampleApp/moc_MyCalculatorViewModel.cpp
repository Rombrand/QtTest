/****************************************************************************
** Meta object code from reading C++ file 'MyCalculatorViewModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtQuickSampleApp/QtQuickSampleApp/MyCalculatorViewModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyCalculatorViewModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyCalculatorViewModel_t {
    QByteArrayData data[11];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyCalculatorViewModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyCalculatorViewModel_t qt_meta_stringdata_MyCalculatorViewModel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "MyCalculatorViewModel"
QT_MOC_LITERAL(1, 22, 16), // "userInputChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 15), // "myResultChanged"
QT_MOC_LITERAL(4, 56, 12), // "handleEquals"
QT_MOC_LITERAL(5, 69, 14), // "handleAddition"
QT_MOC_LITERAL(6, 84, 17), // "handleSubtraction"
QT_MOC_LITERAL(7, 102, 11), // "handelClear"
QT_MOC_LITERAL(8, 114, 9), // "userInput"
QT_MOC_LITERAL(9, 124, 8), // "myResult"
QT_MOC_LITERAL(10, 133, 9) // "operation"

    },
    "MyCalculatorViewModel\0userInputChanged\0"
    "\0myResultChanged\0handleEquals\0"
    "handleAddition\0handleSubtraction\0"
    "handelClear\0userInput\0myResult\0operation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyCalculatorViewModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x02 /* Public */,
       5,    0,   47,    2, 0x02 /* Public */,
       6,    0,   48,    2, 0x02 /* Public */,
       7,    0,   49,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00495103,
       9, QMetaType::Int, 0x00495103,
      10, QMetaType::Int, 0x00095001,

 // properties: notify_signal_id
       0,
       1,
       0,

       0        // eod
};

void MyCalculatorViewModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyCalculatorViewModel *_t = static_cast<MyCalculatorViewModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->userInputChanged(); break;
        case 1: _t->myResultChanged(); break;
        case 2: _t->handleEquals(); break;
        case 3: _t->handleAddition(); break;
        case 4: _t->handleSubtraction(); break;
        case 5: _t->handelClear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyCalculatorViewModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyCalculatorViewModel::userInputChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyCalculatorViewModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyCalculatorViewModel::myResultChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MyCalculatorViewModel *_t = static_cast<MyCalculatorViewModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getUserInput(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getMyResult(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getOperation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MyCalculatorViewModel *_t = static_cast<MyCalculatorViewModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUserInput(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setMyResult(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject MyCalculatorViewModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyCalculatorViewModel.data,
      qt_meta_data_MyCalculatorViewModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyCalculatorViewModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyCalculatorViewModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyCalculatorViewModel.stringdata0))
        return static_cast<void*>(const_cast< MyCalculatorViewModel*>(this));
    return QObject::qt_metacast(_clname);
}

int MyCalculatorViewModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MyCalculatorViewModel::userInputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MyCalculatorViewModel::myResultChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
