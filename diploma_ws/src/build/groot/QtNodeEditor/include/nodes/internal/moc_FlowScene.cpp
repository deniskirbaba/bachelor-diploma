/****************************************************************************
** Meta object code from reading C++ file 'FlowScene.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Groot/QtNodeEditor/include/nodes/internal/FlowScene.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FlowScene.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtNodes__FlowScene_t {
    QByteArrayData data[21];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtNodes__FlowScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtNodes__FlowScene_t qt_meta_stringdata_QtNodes__FlowScene = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QtNodes::FlowScene"
QT_MOC_LITERAL(1, 19, 11), // "nodeCreated"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "Node&"
QT_MOC_LITERAL(4, 38, 1), // "n"
QT_MOC_LITERAL(5, 40, 11), // "nodeDeleted"
QT_MOC_LITERAL(6, 52, 17), // "connectionCreated"
QT_MOC_LITERAL(7, 70, 11), // "Connection&"
QT_MOC_LITERAL(8, 82, 1), // "c"
QT_MOC_LITERAL(9, 84, 17), // "connectionDeleted"
QT_MOC_LITERAL(10, 102, 21), // "connectionContextMenu"
QT_MOC_LITERAL(11, 124, 3), // "pos"
QT_MOC_LITERAL(12, 128, 9), // "nodeMoved"
QT_MOC_LITERAL(13, 138, 11), // "newLocation"
QT_MOC_LITERAL(14, 150, 17), // "nodeDoubleClicked"
QT_MOC_LITERAL(15, 168, 17), // "connectionHovered"
QT_MOC_LITERAL(16, 186, 9), // "screenPos"
QT_MOC_LITERAL(17, 196, 11), // "nodeHovered"
QT_MOC_LITERAL(18, 208, 19), // "connectionHoverLeft"
QT_MOC_LITERAL(19, 228, 13), // "nodeHoverLeft"
QT_MOC_LITERAL(20, 242, 15) // "nodeContextMenu"

    },
    "QtNodes::FlowScene\0nodeCreated\0\0Node&\0"
    "n\0nodeDeleted\0connectionCreated\0"
    "Connection&\0c\0connectionDeleted\0"
    "connectionContextMenu\0pos\0nodeMoved\0"
    "newLocation\0nodeDoubleClicked\0"
    "connectionHovered\0screenPos\0nodeHovered\0"
    "connectionHoverLeft\0nodeHoverLeft\0"
    "nodeContextMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtNodes__FlowScene[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       9,    1,   83,    2, 0x06 /* Public */,
      10,    2,   86,    2, 0x06 /* Public */,
      12,    2,   91,    2, 0x06 /* Public */,
      14,    1,   96,    2, 0x06 /* Public */,
      15,    2,   99,    2, 0x06 /* Public */,
      17,    2,  104,    2, 0x06 /* Public */,
      18,    1,  109,    2, 0x06 /* Public */,
      19,    1,  112,    2, 0x06 /* Public */,
      20,    2,  115,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QPointF,    4,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPointF,    4,   13,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QPoint,    8,   16,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPoint,    4,   16,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPointF,    4,   11,

       0        // eod
};

void QtNodes::FlowScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlowScene *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nodeCreated((*reinterpret_cast< Node(*)>(_a[1]))); break;
        case 1: _t->nodeDeleted((*reinterpret_cast< Node(*)>(_a[1]))); break;
        case 2: _t->connectionCreated((*reinterpret_cast< Connection(*)>(_a[1]))); break;
        case 3: _t->connectionDeleted((*reinterpret_cast< Connection(*)>(_a[1]))); break;
        case 4: _t->connectionContextMenu((*reinterpret_cast< Connection(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 5: _t->nodeMoved((*reinterpret_cast< Node(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 6: _t->nodeDoubleClicked((*reinterpret_cast< Node(*)>(_a[1]))); break;
        case 7: _t->connectionHovered((*reinterpret_cast< Connection(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 8: _t->nodeHovered((*reinterpret_cast< Node(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 9: _t->connectionHoverLeft((*reinterpret_cast< Connection(*)>(_a[1]))); break;
        case 10: _t->nodeHoverLeft((*reinterpret_cast< Node(*)>(_a[1]))); break;
        case 11: _t->nodeContextMenu((*reinterpret_cast< Node(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FlowScene::*)(Node & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowScene::nodeCreated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FlowScene::*)(Node & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowScene::nodeDeleted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FlowScene::*)(Connection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowScene::connectionCreated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FlowScene::*)(Connection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowScene::connectionDeleted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FlowScene::*)(Connection & , const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowScene::connectionContextMenu)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FlowScene::*)(Node & , const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowScene::nodeMoved)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FlowScene::*)(Node & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowScene::nodeDoubleClicked)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FlowScene::*)(Connection & , QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowScene::connectionHovered)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FlowScene::*)(Node & , QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowScene::nodeHovered)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FlowScene::*)(Connection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowScene::connectionHoverLeft)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FlowScene::*)(Node & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowScene::nodeHoverLeft)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (FlowScene::*)(Node & , const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowScene::nodeContextMenu)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtNodes::FlowScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_QtNodes__FlowScene.data,
    qt_meta_data_QtNodes__FlowScene,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtNodes::FlowScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtNodes::FlowScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtNodes__FlowScene.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int QtNodes::FlowScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QtNodes::FlowScene::nodeCreated(Node & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtNodes::FlowScene::nodeDeleted(Node & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtNodes::FlowScene::connectionCreated(Connection & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtNodes::FlowScene::connectionDeleted(Connection & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtNodes::FlowScene::connectionContextMenu(Connection & _t1, const QPointF & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtNodes::FlowScene::nodeMoved(Node & _t1, const QPointF & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtNodes::FlowScene::nodeDoubleClicked(Node & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QtNodes::FlowScene::connectionHovered(Connection & _t1, QPoint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QtNodes::FlowScene::nodeHovered(Node & _t1, QPoint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QtNodes::FlowScene::connectionHoverLeft(Connection & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QtNodes::FlowScene::nodeHoverLeft(Node & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QtNodes::FlowScene::nodeContextMenu(Node & _t1, const QPointF & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
