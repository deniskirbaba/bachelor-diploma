/****************************************************************************
** Meta object code from reading C++ file 'sidepanel_monitor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/Groot/bt_editor/sidepanel_monitor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sidepanel_monitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SidepanelMonitor_t {
    QByteArrayData data[16];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SidepanelMonitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SidepanelMonitor_t qt_meta_stringdata_SidepanelMonitor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SidepanelMonitor"
QT_MOC_LITERAL(1, 17, 16), // "loadBehaviorTree"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "AbsBehaviorTree"
QT_MOC_LITERAL(4, 51, 4), // "tree"
QT_MOC_LITERAL(5, 56, 7), // "bt_name"
QT_MOC_LITERAL(6, 64, 16), // "connectionUpdate"
QT_MOC_LITERAL(7, 81, 9), // "connected"
QT_MOC_LITERAL(8, 91, 15), // "changeNodeStyle"
QT_MOC_LITERAL(9, 107, 39), // "std::vector<std::pair<int,Nod..."
QT_MOC_LITERAL(10, 147, 11), // "node_status"
QT_MOC_LITERAL(11, 159, 11), // "addNewModel"
QT_MOC_LITERAL(12, 171, 9), // "NodeModel"
QT_MOC_LITERAL(13, 181, 9), // "new_model"
QT_MOC_LITERAL(14, 191, 10), // "on_Connect"
QT_MOC_LITERAL(15, 202, 8) // "on_timer"

    },
    "SidepanelMonitor\0loadBehaviorTree\0\0"
    "AbsBehaviorTree\0tree\0bt_name\0"
    "connectionUpdate\0connected\0changeNodeStyle\0"
    "std::vector<std::pair<int,NodeStatus> >\0"
    "node_status\0addNewModel\0NodeModel\0"
    "new_model\0on_Connect\0on_timer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SidepanelMonitor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,
       8,    2,   52,    2, 0x06 /* Public */,
      11,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   60,    2, 0x0a /* Public */,
      15,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9,    5,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SidepanelMonitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SidepanelMonitor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loadBehaviorTree((*reinterpret_cast< const AbsBehaviorTree(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->connectionUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->changeNodeStyle((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const std::vector<std::pair<int,NodeStatus> >(*)>(_a[2]))); break;
        case 3: _t->addNewModel((*reinterpret_cast< const NodeModel(*)>(_a[1]))); break;
        case 4: _t->on_Connect(); break;
        case 5: _t->on_timer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AbsBehaviorTree >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SidepanelMonitor::*)(const AbsBehaviorTree & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SidepanelMonitor::loadBehaviorTree)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SidepanelMonitor::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SidepanelMonitor::connectionUpdate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SidepanelMonitor::*)(const QString & , const std::vector<std::pair<int,NodeStatus>> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SidepanelMonitor::changeNodeStyle)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SidepanelMonitor::*)(const NodeModel & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SidepanelMonitor::addNewModel)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SidepanelMonitor::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_SidepanelMonitor.data,
    qt_meta_data_SidepanelMonitor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SidepanelMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SidepanelMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SidepanelMonitor.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int SidepanelMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SidepanelMonitor::loadBehaviorTree(const AbsBehaviorTree & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SidepanelMonitor::connectionUpdate(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SidepanelMonitor::changeNodeStyle(const QString & _t1, const std::vector<std::pair<int,NodeStatus>> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SidepanelMonitor::addNewModel(const NodeModel & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
