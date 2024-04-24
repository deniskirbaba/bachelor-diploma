/****************************************************************************
** Meta object code from reading C++ file 'NodeDataModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Groot/QtNodeEditor/include/nodes/internal/NodeDataModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NodeDataModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtNodes__NodeDataModel_t {
    QByteArrayData data[9];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtNodes__NodeDataModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtNodes__NodeDataModel_t qt_meta_stringdata_QtNodes__NodeDataModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QtNodes::NodeDataModel"
QT_MOC_LITERAL(1, 23, 11), // "dataUpdated"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 9), // "PortIndex"
QT_MOC_LITERAL(4, 46, 5), // "index"
QT_MOC_LITERAL(5, 52, 15), // "dataInvalidated"
QT_MOC_LITERAL(6, 68, 16), // "computingStarted"
QT_MOC_LITERAL(7, 85, 17), // "computingFinished"
QT_MOC_LITERAL(8, 103, 25) // "embeddedWidgetSizeUpdated"

    },
    "QtNodes::NodeDataModel\0dataUpdated\0\0"
    "PortIndex\0index\0dataInvalidated\0"
    "computingStarted\0computingFinished\0"
    "embeddedWidgetSizeUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtNodes__NodeDataModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       6,    0,   45,    2, 0x06 /* Public */,
       7,    0,   46,    2, 0x06 /* Public */,
       8,    0,   47,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtNodes::NodeDataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NodeDataModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataUpdated((*reinterpret_cast< PortIndex(*)>(_a[1]))); break;
        case 1: _t->dataInvalidated((*reinterpret_cast< PortIndex(*)>(_a[1]))); break;
        case 2: _t->computingStarted(); break;
        case 3: _t->computingFinished(); break;
        case 4: _t->embeddedWidgetSizeUpdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NodeDataModel::*)(PortIndex );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeDataModel::dataUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NodeDataModel::*)(PortIndex );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeDataModel::dataInvalidated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NodeDataModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeDataModel::computingStarted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NodeDataModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeDataModel::computingFinished)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NodeDataModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeDataModel::embeddedWidgetSizeUpdated)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtNodes::NodeDataModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QtNodes__NodeDataModel.data,
    qt_meta_data_QtNodes__NodeDataModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtNodes::NodeDataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtNodes::NodeDataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtNodes__NodeDataModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Serializable"))
        return static_cast< Serializable*>(this);
    return QObject::qt_metacast(_clname);
}

int QtNodes::NodeDataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QtNodes::NodeDataModel::dataUpdated(PortIndex _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtNodes::NodeDataModel::dataInvalidated(PortIndex _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtNodes::NodeDataModel::computingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QtNodes::NodeDataModel::computingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QtNodes::NodeDataModel::embeddedWidgetSizeUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
