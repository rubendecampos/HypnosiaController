/****************************************************************************
** Meta object code from reading C++ file 'controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../HypnosiaController/Controller/controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Controller_t {
    QByteArrayData data[13];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Controller_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Controller_t qt_meta_stringdata_Controller = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Controller"
QT_MOC_LITERAL(1, 11, 22), // "onButtonCntDownClicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 20), // "onButtonAnim1Clicked"
QT_MOC_LITERAL(4, 56, 19), // "onButtonPlusClicked"
QT_MOC_LITERAL(5, 76, 20), // "onButtonMinusClicked"
QT_MOC_LITERAL(6, 97, 21), // "onButtonRstPosClicked"
QT_MOC_LITERAL(7, 119, 20), // "onBtnPlusProcClicked"
QT_MOC_LITERAL(8, 140, 21), // "onBtnMinusProcClicked"
QT_MOC_LITERAL(9, 162, 21), // "onBtnPlusClockClicked"
QT_MOC_LITERAL(10, 184, 22), // "onBtnMinusClockClicked"
QT_MOC_LITERAL(11, 207, 24), // "onBtnPlusWatchPtrClicked"
QT_MOC_LITERAL(12, 232, 25) // "onBtnMinusWatchPtrClicked"

    },
    "Controller\0onButtonCntDownClicked\0\0"
    "onButtonAnim1Clicked\0onButtonPlusClicked\0"
    "onButtonMinusClicked\0onButtonRstPosClicked\0"
    "onBtnPlusProcClicked\0onBtnMinusProcClicked\0"
    "onBtnPlusClockClicked\0onBtnMinusClockClicked\0"
    "onBtnPlusWatchPtrClicked\0"
    "onBtnMinusWatchPtrClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Controller[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void Controller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Controller *_t = static_cast<Controller *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onButtonCntDownClicked(); break;
        case 1: _t->onButtonAnim1Clicked(); break;
        case 2: _t->onButtonPlusClicked(); break;
        case 3: _t->onButtonMinusClicked(); break;
        case 4: _t->onButtonRstPosClicked(); break;
        case 5: _t->onBtnPlusProcClicked(); break;
        case 6: _t->onBtnMinusProcClicked(); break;
        case 7: _t->onBtnPlusClockClicked(); break;
        case 8: _t->onBtnMinusClockClicked(); break;
        case 9: _t->onBtnPlusWatchPtrClicked(); break;
        case 10: _t->onBtnMinusWatchPtrClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Controller::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Controller.data,
      qt_meta_data_Controller,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Controller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Controller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Controller.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "XFBehavior"))
        return static_cast< XFBehavior*>(this);
    return QObject::qt_metacast(_clname);
}

int Controller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
