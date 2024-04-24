/****************************************************************************
** Meta object code from reading C++ file 'startup_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Groot/bt_editor/startup_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'startup_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StartupDialog_t {
    QByteArrayData data[8];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StartupDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StartupDialog_t qt_meta_stringdata_StartupDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "StartupDialog"
QT_MOC_LITERAL(1, 14, 27), // "on_toolButtonEditor_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 28), // "on_toolButtonMonitor_clicked"
QT_MOC_LITERAL(4, 72, 27), // "on_toolButtonReplay_clicked"
QT_MOC_LITERAL(5, 100, 17), // "updateCurrentMode"
QT_MOC_LITERAL(6, 118, 26), // "on_toolButtonStart_clicked"
QT_MOC_LITERAL(7, 145, 26) // "on_pushButtonClose_clicked"

    },
    "StartupDialog\0on_toolButtonEditor_clicked\0"
    "\0on_toolButtonMonitor_clicked\0"
    "on_toolButtonReplay_clicked\0"
    "updateCurrentMode\0on_toolButtonStart_clicked\0"
    "on_pushButtonClose_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StartupDialog[] = {

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
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StartupDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StartupDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_toolButtonEditor_clicked(); break;
        case 1: _t->on_toolButtonMonitor_clicked(); break;
        case 2: _t->on_toolButtonReplay_clicked(); break;
        case 3: _t->updateCurrentMode(); break;
        case 4: _t->on_toolButtonStart_clicked(); break;
        case 5: _t->on_pushButtonClose_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject StartupDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_StartupDialog.data,
    qt_meta_data_StartupDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StartupDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StartupDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StartupDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int StartupDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
