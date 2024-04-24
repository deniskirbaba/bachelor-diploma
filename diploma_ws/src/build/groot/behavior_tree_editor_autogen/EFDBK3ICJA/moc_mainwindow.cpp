/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Groot/bt_editor/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[61];
    char stringdata0[1044];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "updateGraphic"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "onAutoArrange"
QT_MOC_LITERAL(4, 40, 9), // "onSaveSvg"
QT_MOC_LITERAL(5, 50, 14), // "onSceneChanged"
QT_MOC_LITERAL(6, 65, 10), // "onPushUndo"
QT_MOC_LITERAL(7, 76, 13), // "onUndoInvoked"
QT_MOC_LITERAL(8, 90, 13), // "onRedoInvoked"
QT_MOC_LITERAL(9, 104, 18), // "onConnectionUpdate"
QT_MOC_LITERAL(10, 123, 9), // "connected"
QT_MOC_LITERAL(11, 133, 22), // "onRequestSubTreeExpand"
QT_MOC_LITERAL(12, 156, 17), // "GraphicContainer&"
QT_MOC_LITERAL(13, 174, 9), // "container"
QT_MOC_LITERAL(14, 184, 14), // "QtNodes::Node&"
QT_MOC_LITERAL(15, 199, 4), // "node"
QT_MOC_LITERAL(16, 204, 20), // "onAddToModelRegistry"
QT_MOC_LITERAL(17, 225, 9), // "NodeModel"
QT_MOC_LITERAL(18, 235, 5), // "model"
QT_MOC_LITERAL(19, 241, 16), // "onDestroySubTree"
QT_MOC_LITERAL(20, 258, 2), // "ID"
QT_MOC_LITERAL(21, 261, 22), // "onModelRemoveRequested"
QT_MOC_LITERAL(22, 284, 10), // "closeEvent"
QT_MOC_LITERAL(23, 295, 12), // "QCloseEvent*"
QT_MOC_LITERAL(24, 308, 5), // "event"
QT_MOC_LITERAL(25, 314, 23), // "on_actionLoad_triggered"
QT_MOC_LITERAL(26, 338, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(27, 362, 17), // "onSubtreeSelected"
QT_MOC_LITERAL(28, 380, 11), // "subtreeName"
QT_MOC_LITERAL(29, 392, 25), // "on_splitter_splitterMoved"
QT_MOC_LITERAL(30, 418, 3), // "pos"
QT_MOC_LITERAL(31, 422, 5), // "index"
QT_MOC_LITERAL(32, 428, 28), // "on_toolButtonReorder_pressed"
QT_MOC_LITERAL(33, 457, 28), // "on_toolButtonSaveSvg_pressed"
QT_MOC_LITERAL(34, 486, 31), // "on_toolButtonCenterView_pressed"
QT_MOC_LITERAL(35, 518, 23), // "onCreateAbsBehaviorTree"
QT_MOC_LITERAL(36, 542, 15), // "AbsBehaviorTree"
QT_MOC_LITERAL(37, 558, 4), // "tree"
QT_MOC_LITERAL(38, 563, 7), // "bt_name"
QT_MOC_LITERAL(39, 571, 14), // "secondary_tabs"
QT_MOC_LITERAL(40, 586, 19), // "onChangeNodesStatus"
QT_MOC_LITERAL(41, 606, 39), // "std::vector<std::pair<int,Nod..."
QT_MOC_LITERAL(42, 646, 11), // "node_status"
QT_MOC_LITERAL(43, 658, 27), // "on_toolButtonLayout_clicked"
QT_MOC_LITERAL(44, 686, 30), // "on_actionEditor_mode_triggered"
QT_MOC_LITERAL(45, 717, 31), // "on_actionMonitor_mode_triggered"
QT_MOC_LITERAL(46, 749, 30), // "on_actionReplay_mode_triggered"
QT_MOC_LITERAL(47, 780, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(48, 808, 22), // "onActionClearTriggered"
QT_MOC_LITERAL(49, 831, 10), // "create_new"
QT_MOC_LITERAL(50, 842, 24), // "on_actionClear_triggered"
QT_MOC_LITERAL(51, 867, 16), // "onTreeNodeEdited"
QT_MOC_LITERAL(52, 884, 7), // "prev_ID"
QT_MOC_LITERAL(53, 892, 6), // "new_ID"
QT_MOC_LITERAL(54, 899, 31), // "onTabCustomContextMenuRequested"
QT_MOC_LITERAL(55, 931, 20), // "onTabRenameRequested"
QT_MOC_LITERAL(56, 952, 9), // "tab_index"
QT_MOC_LITERAL(57, 962, 8), // "new_name"
QT_MOC_LITERAL(58, 971, 16), // "onTabSetMainTree"
QT_MOC_LITERAL(59, 988, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(60, 1013, 30) // "on_actionReportIssue_triggered"

    },
    "MainWindow\0updateGraphic\0\0onAutoArrange\0"
    "onSaveSvg\0onSceneChanged\0onPushUndo\0"
    "onUndoInvoked\0onRedoInvoked\0"
    "onConnectionUpdate\0connected\0"
    "onRequestSubTreeExpand\0GraphicContainer&\0"
    "container\0QtNodes::Node&\0node\0"
    "onAddToModelRegistry\0NodeModel\0model\0"
    "onDestroySubTree\0ID\0onModelRemoveRequested\0"
    "closeEvent\0QCloseEvent*\0event\0"
    "on_actionLoad_triggered\0on_actionSave_triggered\0"
    "onSubtreeSelected\0subtreeName\0"
    "on_splitter_splitterMoved\0pos\0index\0"
    "on_toolButtonReorder_pressed\0"
    "on_toolButtonSaveSvg_pressed\0"
    "on_toolButtonCenterView_pressed\0"
    "onCreateAbsBehaviorTree\0AbsBehaviorTree\0"
    "tree\0bt_name\0secondary_tabs\0"
    "onChangeNodesStatus\0"
    "std::vector<std::pair<int,NodeStatus> >\0"
    "node_status\0on_toolButtonLayout_clicked\0"
    "on_actionEditor_mode_triggered\0"
    "on_actionMonitor_mode_triggered\0"
    "on_actionReplay_mode_triggered\0"
    "on_tabWidget_currentChanged\0"
    "onActionClearTriggered\0create_new\0"
    "on_actionClear_triggered\0onTreeNodeEdited\0"
    "prev_ID\0new_ID\0onTabCustomContextMenuRequested\0"
    "onTabRenameRequested\0tab_index\0new_name\0"
    "onTabSetMainTree\0on_actionAbout_triggered\0"
    "on_actionReportIssue_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  209,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  210,    2, 0x0a /* Public */,
       4,    0,  211,    2, 0x0a /* Public */,
       5,    0,  212,    2, 0x0a /* Public */,
       6,    0,  213,    2, 0x0a /* Public */,
       7,    0,  214,    2, 0x0a /* Public */,
       8,    0,  215,    2, 0x0a /* Public */,
       9,    1,  216,    2, 0x0a /* Public */,
      11,    2,  219,    2, 0x0a /* Public */,
      16,    1,  224,    2, 0x0a /* Public */,
      19,    1,  227,    2, 0x0a /* Public */,
      21,    1,  230,    2, 0x0a /* Public */,
      22,    1,  233,    2, 0x0a /* Public */,
      25,    0,  236,    2, 0x0a /* Public */,
      26,    0,  237,    2, 0x0a /* Public */,
      27,    1,  238,    2, 0x0a /* Public */,
      29,    2,  241,    2, 0x0a /* Public */,
      29,    1,  246,    2, 0x2a /* Public | MethodCloned */,
      29,    0,  249,    2, 0x2a /* Public | MethodCloned */,
      32,    0,  250,    2, 0x0a /* Public */,
      33,    0,  251,    2, 0x0a /* Public */,
      34,    0,  252,    2, 0x0a /* Public */,
      35,    3,  253,    2, 0x0a /* Public */,
      35,    2,  260,    2, 0x2a /* Public | MethodCloned */,
      40,    2,  265,    2, 0x0a /* Public */,
      43,    0,  270,    2, 0x0a /* Public */,
      44,    0,  271,    2, 0x0a /* Public */,
      45,    0,  272,    2, 0x0a /* Public */,
      46,    0,  273,    2, 0x0a /* Public */,
      47,    1,  274,    2, 0x0a /* Public */,
      48,    1,  277,    2, 0x0a /* Public */,
      50,    0,  280,    2, 0x0a /* Public */,
      51,    2,  281,    2, 0x0a /* Public */,
      54,    1,  286,    2, 0x0a /* Public */,
      55,    2,  289,    2, 0x0a /* Public */,
      55,    1,  294,    2, 0x2a /* Public | MethodCloned */,
      58,    1,  297,    2, 0x0a /* Public */,
      59,    0,  300,    2, 0x08 /* Private */,
      60,    0,  301,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 14,   13,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   30,   31,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 36, QMetaType::QString, QMetaType::Bool,   37,   38,   39,
    QMetaType::Void, 0x80000000 | 36, QMetaType::QString,   37,   38,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 41,   38,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Bool,   49,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   52,   53,
    QMetaType::Void, QMetaType::QPoint,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   56,   57,
    QMetaType::Void, QMetaType::Int,   56,
    QMetaType::Void, QMetaType::Int,   56,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateGraphic(); break;
        case 1: _t->onAutoArrange(); break;
        case 2: _t->onSaveSvg(); break;
        case 3: _t->onSceneChanged(); break;
        case 4: _t->onPushUndo(); break;
        case 5: _t->onUndoInvoked(); break;
        case 6: _t->onRedoInvoked(); break;
        case 7: _t->onConnectionUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onRequestSubTreeExpand((*reinterpret_cast< GraphicContainer(*)>(_a[1])),(*reinterpret_cast< QtNodes::Node(*)>(_a[2]))); break;
        case 9: _t->onAddToModelRegistry((*reinterpret_cast< const NodeModel(*)>(_a[1]))); break;
        case 10: _t->onDestroySubTree((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->onModelRemoveRequested((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 13: _t->on_actionLoad_triggered(); break;
        case 14: _t->on_actionSave_triggered(); break;
        case 15: _t->onSubtreeSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->on_splitter_splitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->on_splitter_splitterMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_splitter_splitterMoved(); break;
        case 19: _t->on_toolButtonReorder_pressed(); break;
        case 20: _t->on_toolButtonSaveSvg_pressed(); break;
        case 21: _t->on_toolButtonCenterView_pressed(); break;
        case 22: _t->onCreateAbsBehaviorTree((*reinterpret_cast< const AbsBehaviorTree(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 23: _t->onCreateAbsBehaviorTree((*reinterpret_cast< const AbsBehaviorTree(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 24: _t->onChangeNodesStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const std::vector<std::pair<int,NodeStatus> >(*)>(_a[2]))); break;
        case 25: _t->on_toolButtonLayout_clicked(); break;
        case 26: _t->on_actionEditor_mode_triggered(); break;
        case 27: _t->on_actionMonitor_mode_triggered(); break;
        case 28: _t->on_actionReplay_mode_triggered(); break;
        case 29: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->onActionClearTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->on_actionClear_triggered(); break;
        case 32: _t->onTreeNodeEdited((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 33: _t->onTabCustomContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 34: _t->onTabRenameRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 35: _t->onTabRenameRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->onTabSetMainTree((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->on_actionAbout_triggered(); break;
        case 38: _t->on_actionReportIssue_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AbsBehaviorTree >(); break;
            }
            break;
        case 23:
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
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::updateGraphic)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::updateGraphic()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
