/****************************************************************************
** Meta object code from reading C++ file 'sidepanel_replay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Groot/bt_editor/sidepanel_replay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sidepanel_replay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SidepanelReplay_t {
    QByteArrayData data[27];
    char stringdata0[383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SidepanelReplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SidepanelReplay_t qt_meta_stringdata_SidepanelReplay = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SidepanelReplay"
QT_MOC_LITERAL(1, 16, 16), // "loadBehaviorTree"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "AbsBehaviorTree"
QT_MOC_LITERAL(4, 50, 4), // "tree"
QT_MOC_LITERAL(5, 55, 4), // "name"
QT_MOC_LITERAL(6, 60, 15), // "changeNodeStyle"
QT_MOC_LITERAL(7, 76, 7), // "bt_name"
QT_MOC_LITERAL(8, 84, 39), // "std::vector<std::pair<int,Nod..."
QT_MOC_LITERAL(9, 124, 11), // "node_status"
QT_MOC_LITERAL(10, 136, 11), // "addNewModel"
QT_MOC_LITERAL(11, 148, 9), // "NodeModel"
QT_MOC_LITERAL(12, 158, 9), // "new_model"
QT_MOC_LITERAL(13, 168, 10), // "on_LoadLog"
QT_MOC_LITERAL(14, 179, 25), // "on_pushButtonPlay_toggled"
QT_MOC_LITERAL(15, 205, 7), // "checked"
QT_MOC_LITERAL(16, 213, 23), // "on_spinBox_valueChanged"
QT_MOC_LITERAL(17, 237, 4), // "arg1"
QT_MOC_LITERAL(18, 242, 26), // "on_timeSlider_valueChanged"
QT_MOC_LITERAL(19, 269, 5), // "value"
QT_MOC_LITERAL(20, 275, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(21, 296, 11), // "QModelIndex"
QT_MOC_LITERAL(22, 308, 5), // "index"
QT_MOC_LITERAL(23, 314, 13), // "onTimerUpdate"
QT_MOC_LITERAL(24, 328, 12), // "onPlayUpdate"
QT_MOC_LITERAL(25, 341, 29), // "on_lineEditFilter_textChanged"
QT_MOC_LITERAL(26, 371, 11) // "filter_text"

    },
    "SidepanelReplay\0loadBehaviorTree\0\0"
    "AbsBehaviorTree\0tree\0name\0changeNodeStyle\0"
    "bt_name\0std::vector<std::pair<int,NodeStatus> >\0"
    "node_status\0addNewModel\0NodeModel\0"
    "new_model\0on_LoadLog\0on_pushButtonPlay_toggled\0"
    "checked\0on_spinBox_valueChanged\0arg1\0"
    "on_timeSlider_valueChanged\0value\0"
    "on_tableView_clicked\0QModelIndex\0index\0"
    "onTimerUpdate\0onPlayUpdate\0"
    "on_lineEditFilter_textChanged\0filter_text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SidepanelReplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       6,    2,   74,    2, 0x06 /* Public */,
      10,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   82,    2, 0x0a /* Public */,
      14,    1,   83,    2, 0x08 /* Private */,
      16,    1,   86,    2, 0x08 /* Private */,
      18,    1,   89,    2, 0x08 /* Private */,
      20,    1,   92,    2, 0x08 /* Private */,
      23,    0,   95,    2, 0x08 /* Private */,
      24,    0,   96,    2, 0x08 /* Private */,
      25,    1,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,    7,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,

       0        // eod
};

void SidepanelReplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SidepanelReplay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loadBehaviorTree((*reinterpret_cast< const AbsBehaviorTree(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->changeNodeStyle((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const std::vector<std::pair<int,NodeStatus> >(*)>(_a[2]))); break;
        case 2: _t->addNewModel((*reinterpret_cast< const NodeModel(*)>(_a[1]))); break;
        case 3: _t->on_LoadLog(); break;
        case 4: _t->on_pushButtonPlay_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_timeSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->onTimerUpdate(); break;
        case 9: _t->onPlayUpdate(); break;
        case 10: _t->on_lineEditFilter_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
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
            using _t = void (SidepanelReplay::*)(const AbsBehaviorTree & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SidepanelReplay::loadBehaviorTree)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SidepanelReplay::*)(const QString & , const std::vector<std::pair<int,NodeStatus>> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SidepanelReplay::changeNodeStyle)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SidepanelReplay::*)(const NodeModel & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SidepanelReplay::addNewModel)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SidepanelReplay::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_SidepanelReplay.data,
    qt_meta_data_SidepanelReplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SidepanelReplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SidepanelReplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SidepanelReplay.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int SidepanelReplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void SidepanelReplay::loadBehaviorTree(const AbsBehaviorTree & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SidepanelReplay::changeNodeStyle(const QString & _t1, const std::vector<std::pair<int,NodeStatus>> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SidepanelReplay::addNewModel(const NodeModel & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
