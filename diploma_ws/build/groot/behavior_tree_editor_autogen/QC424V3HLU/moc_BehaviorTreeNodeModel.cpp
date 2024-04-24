/****************************************************************************
** Meta object code from reading C++ file 'BehaviorTreeNodeModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/Groot/bt_editor/models/BehaviorTreeNodeModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BehaviorTreeNodeModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BehaviorTreeDataModel_t {
    QByteArrayData data[11];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BehaviorTreeDataModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BehaviorTreeDataModel_t qt_meta_stringdata_BehaviorTreeDataModel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "BehaviorTreeDataModel"
QT_MOC_LITERAL(1, 22, 16), // "parameterUpdated"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8), // "QWidget*"
QT_MOC_LITERAL(4, 49, 19), // "instanceNameChanged"
QT_MOC_LITERAL(5, 69, 22), // "portValueDoubleChicked"
QT_MOC_LITERAL(6, 92, 10), // "QLineEdit*"
QT_MOC_LITERAL(7, 103, 10), // "value_port"
QT_MOC_LITERAL(8, 114, 14), // "updateNodeSize"
QT_MOC_LITERAL(9, 129, 20), // "onHighlightPortValue"
QT_MOC_LITERAL(10, 150, 5) // "value"

    },
    "BehaviorTreeDataModel\0parameterUpdated\0"
    "\0QWidget*\0instanceNameChanged\0"
    "portValueDoubleChicked\0QLineEdit*\0"
    "value_port\0updateNodeSize\0"
    "onHighlightPortValue\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BehaviorTreeDataModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       4,    0,   44,    2, 0x06 /* Public */,
       5,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   48,    2, 0x0a /* Public */,
       9,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void BehaviorTreeDataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BehaviorTreeDataModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->parameterUpdated((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 1: _t->instanceNameChanged(); break;
        case 2: _t->portValueDoubleChicked((*reinterpret_cast< QLineEdit*(*)>(_a[1]))); break;
        case 3: _t->updateNodeSize(); break;
        case 4: _t->onHighlightPortValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLineEdit* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BehaviorTreeDataModel::*)(QString , QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BehaviorTreeDataModel::parameterUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BehaviorTreeDataModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BehaviorTreeDataModel::instanceNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BehaviorTreeDataModel::*)(QLineEdit * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BehaviorTreeDataModel::portValueDoubleChicked)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BehaviorTreeDataModel::staticMetaObject = { {
    QMetaObject::SuperData::link<NodeDataModel::staticMetaObject>(),
    qt_meta_stringdata_BehaviorTreeDataModel.data,
    qt_meta_data_BehaviorTreeDataModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BehaviorTreeDataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BehaviorTreeDataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BehaviorTreeDataModel.stringdata0))
        return static_cast<void*>(this);
    return NodeDataModel::qt_metacast(_clname);
}

int BehaviorTreeDataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NodeDataModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void BehaviorTreeDataModel::parameterUpdated(QString _t1, QWidget * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BehaviorTreeDataModel::instanceNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BehaviorTreeDataModel::portValueDoubleChicked(QLineEdit * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_GrootLineEdit_t {
    QByteArrayData data[4];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GrootLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GrootLineEdit_t qt_meta_stringdata_GrootLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 13), // "GrootLineEdit"
QT_MOC_LITERAL(1, 14, 13), // "doubleClicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9) // "lostFocus"

    },
    "GrootLineEdit\0doubleClicked\0\0lostFocus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GrootLineEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GrootLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GrootLineEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->doubleClicked(); break;
        case 1: _t->lostFocus(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GrootLineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GrootLineEdit::doubleClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GrootLineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GrootLineEdit::lostFocus)) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject GrootLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_GrootLineEdit.data,
    qt_meta_data_GrootLineEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GrootLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GrootLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GrootLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int GrootLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GrootLineEdit::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GrootLineEdit::lostFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
