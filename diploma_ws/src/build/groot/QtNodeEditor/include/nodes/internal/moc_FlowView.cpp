/****************************************************************************
** Meta object code from reading C++ file 'FlowView.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Groot/QtNodeEditor/include/nodes/internal/FlowView.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FlowView.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtNodes__FlowView_t {
    QByteArrayData data[7];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtNodes__FlowView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtNodes__FlowView_t qt_meta_stringdata_QtNodes__FlowView = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QtNodes::FlowView"
QT_MOC_LITERAL(1, 18, 15), // "startNodeDelete"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "finishNodeDelete"
QT_MOC_LITERAL(4, 52, 7), // "scaleUp"
QT_MOC_LITERAL(5, 60, 9), // "scaleDown"
QT_MOC_LITERAL(6, 70, 19) // "deleteSelectedNodes"

    },
    "QtNodes::FlowView\0startNodeDelete\0\0"
    "finishNodeDelete\0scaleUp\0scaleDown\0"
    "deleteSelectedNodes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtNodes__FlowView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtNodes::FlowView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlowView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startNodeDelete(); break;
        case 1: _t->finishNodeDelete(); break;
        case 2: _t->scaleUp(); break;
        case 3: _t->scaleDown(); break;
        case 4: _t->deleteSelectedNodes(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FlowView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowView::startNodeDelete)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FlowView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowView::finishNodeDelete)) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject QtNodes::FlowView::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_QtNodes__FlowView.data,
    qt_meta_data_QtNodes__FlowView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtNodes::FlowView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtNodes::FlowView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtNodes__FlowView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int QtNodes::FlowView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
void QtNodes::FlowView::startNodeDelete()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtNodes::FlowView::finishNodeDelete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
