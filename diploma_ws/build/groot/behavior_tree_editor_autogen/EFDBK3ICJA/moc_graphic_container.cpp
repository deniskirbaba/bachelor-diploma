/****************************************************************************
** Meta object code from reading C++ file 'graphic_container.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/Groot/bt_editor/graphic_container.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphic_container.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphicContainer_t {
    QByteArrayData data[28];
    char stringdata0[379];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphicContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphicContainer_t qt_meta_stringdata_GraphicContainer = {
    {
QT_MOC_LITERAL(0, 0, 16), // "GraphicContainer"
QT_MOC_LITERAL(1, 17, 11), // "addNewModel"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "NodeModel"
QT_MOC_LITERAL(4, 40, 9), // "new_model"
QT_MOC_LITERAL(5, 50, 14), // "undoableChange"
QT_MOC_LITERAL(6, 65, 20), // "requestSubTreeExpand"
QT_MOC_LITERAL(7, 86, 17), // "GraphicContainer&"
QT_MOC_LITERAL(8, 104, 9), // "container"
QT_MOC_LITERAL(9, 114, 14), // "QtNodes::Node&"
QT_MOC_LITERAL(10, 129, 4), // "node"
QT_MOC_LITERAL(11, 134, 20), // "requestSubTreeCreate"
QT_MOC_LITERAL(12, 155, 15), // "AbsBehaviorTree"
QT_MOC_LITERAL(13, 171, 4), // "tree"
QT_MOC_LITERAL(14, 176, 4), // "name"
QT_MOC_LITERAL(15, 181, 19), // "onNodeDoubleClicked"
QT_MOC_LITERAL(16, 201, 9), // "root_node"
QT_MOC_LITERAL(17, 211, 24), // "onPortValueDoubleClicked"
QT_MOC_LITERAL(18, 236, 10), // "QLineEdit*"
QT_MOC_LITERAL(19, 247, 10), // "edit_value"
QT_MOC_LITERAL(20, 258, 13), // "onNodeCreated"
QT_MOC_LITERAL(21, 272, 17), // "onNodeContextMenu"
QT_MOC_LITERAL(22, 290, 3), // "pos"
QT_MOC_LITERAL(23, 294, 23), // "onConnectionContextMenu"
QT_MOC_LITERAL(24, 318, 20), // "QtNodes::Connection&"
QT_MOC_LITERAL(25, 339, 10), // "connection"
QT_MOC_LITERAL(26, 350, 13), // "onSmartRemove"
QT_MOC_LITERAL(27, 364, 14) // "QtNodes::Node*"

    },
    "GraphicContainer\0addNewModel\0\0NodeModel\0"
    "new_model\0undoableChange\0requestSubTreeExpand\0"
    "GraphicContainer&\0container\0QtNodes::Node&\0"
    "node\0requestSubTreeCreate\0AbsBehaviorTree\0"
    "tree\0name\0onNodeDoubleClicked\0root_node\0"
    "onPortValueDoubleClicked\0QLineEdit*\0"
    "edit_value\0onNodeCreated\0onNodeContextMenu\0"
    "pos\0onConnectionContextMenu\0"
    "QtNodes::Connection&\0connection\0"
    "onSmartRemove\0QtNodes::Node*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphicContainer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    2,   68,    2, 0x06 /* Public */,
      11,    2,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   78,    2, 0x0a /* Public */,
      17,    1,   81,    2, 0x0a /* Public */,
      20,    1,   84,    2, 0x0a /* Public */,
      21,    2,   87,    2, 0x0a /* Public */,
      23,    2,   92,    2, 0x0a /* Public */,
      26,    1,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString,   13,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QPointF,   10,   22,
    QMetaType::Void, 0x80000000 | 24, QMetaType::QPointF,   25,    2,
    QMetaType::Void, 0x80000000 | 27,   10,

       0        // eod
};

void GraphicContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphicContainer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addNewModel((*reinterpret_cast< const NodeModel(*)>(_a[1]))); break;
        case 1: _t->undoableChange(); break;
        case 2: _t->requestSubTreeExpand((*reinterpret_cast< GraphicContainer(*)>(_a[1])),(*reinterpret_cast< QtNodes::Node(*)>(_a[2]))); break;
        case 3: _t->requestSubTreeCreate((*reinterpret_cast< AbsBehaviorTree(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->onNodeDoubleClicked((*reinterpret_cast< QtNodes::Node(*)>(_a[1]))); break;
        case 5: _t->onPortValueDoubleClicked((*reinterpret_cast< QLineEdit*(*)>(_a[1]))); break;
        case 6: _t->onNodeCreated((*reinterpret_cast< QtNodes::Node(*)>(_a[1]))); break;
        case 7: _t->onNodeContextMenu((*reinterpret_cast< QtNodes::Node(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 8: _t->onConnectionContextMenu((*reinterpret_cast< QtNodes::Connection(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 9: _t->onSmartRemove((*reinterpret_cast< QtNodes::Node*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AbsBehaviorTree >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLineEdit* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtNodes::Node* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GraphicContainer::*)(const NodeModel & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphicContainer::addNewModel)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GraphicContainer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphicContainer::undoableChange)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GraphicContainer::*)(GraphicContainer & , QtNodes::Node & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphicContainer::requestSubTreeExpand)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GraphicContainer::*)(AbsBehaviorTree , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphicContainer::requestSubTreeCreate)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GraphicContainer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GraphicContainer.data,
    qt_meta_data_GraphicContainer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphicContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphicContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicContainer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GraphicContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void GraphicContainer::addNewModel(const NodeModel & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GraphicContainer::undoableChange()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GraphicContainer::requestSubTreeExpand(GraphicContainer & _t1, QtNodes::Node & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GraphicContainer::requestSubTreeCreate(AbsBehaviorTree _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
