/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionLoadRemote;
    QAction *actionClear;
    QAction *actionEditor_mode;
    QAction *actionMonitor_mode;
    QAction *actionReplay_mode;
    QAction *actionReportIssue;
    QAction *actionAbout;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QToolButton *toolButtonConnect;
    QToolButton *toolButtonLoadFile;
    QToolButton *toolButtonLoadRemote;
    QToolButton *toolButtonSaveFile;
    QSpacerItem *verticalSpacer_2;
    QToolButton *toolButtonCenterView;
    QToolButton *toolButtonLayout;
    QToolButton *toolButtonReorder;
    QToolButton *toolButtonSaveSvg;
    QFrame *semaphoreFrame;
    QHBoxLayout *topLayout;
    QLabel *labelSemaphore;
    QSplitter *splitter;
    QFrame *leftFrame;
    QVBoxLayout *verticalLayout_2;
    QWidget *layoutWidget;
    QVBoxLayout *centralLayout;
    QTabWidget *tabWidget;
    QMenuBar *menubar;
    QMenu *menuLoad;
    QMenu *menuMode;
    QMenu *menuSwitch_To;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(814, 788);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setIconSize(QSize(60, 60));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionLoadRemote = new QAction(MainWindow);
        actionLoadRemote->setObjectName(QString::fromUtf8("actionLoadRemote"));
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        actionEditor_mode = new QAction(MainWindow);
        actionEditor_mode->setObjectName(QString::fromUtf8("actionEditor_mode"));
        actionMonitor_mode = new QAction(MainWindow);
        actionMonitor_mode->setObjectName(QString::fromUtf8("actionMonitor_mode"));
        actionReplay_mode = new QAction(MainWindow);
        actionReplay_mode->setObjectName(QString::fromUtf8("actionReplay_mode"));
        actionReportIssue = new QAction(MainWindow);
        actionReportIssue->setObjectName(QString::fromUtf8("actionReportIssue"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(80, 0));
        frame->setMaximumSize(QSize(80, 16777215));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 70, 70);\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolButtonConnect = new QToolButton(frame);
        toolButtonConnect->setObjectName(QString::fromUtf8("toolButtonConnect"));
        toolButtonConnect->setMinimumSize(QSize(80, 70));
        toolButtonConnect->setMaximumSize(QSize(80, 70));
        QFont font;
        font.setPointSize(9);
        toolButtonConnect->setFont(font);
        toolButtonConnect->setFocusPolicy(Qt::NoFocus);
        toolButtonConnect->setAutoFillBackground(false);
        toolButtonConnect->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    color:white;\n"
"}\n"
"QToolButton:hover{\n"
"   background-color: rgb(110, 110, 110);\n"
"}\n"
"QToolButton:pressed{\n"
"  background-color: rgb(50, 150, 0)\n"
"}\n"
"QToolButton:disabled{\n"
"  color:gray;\n"
"  background-color: rgb(50, 50, 50)\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/svg/connect.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonConnect->setIcon(icon);
        toolButtonConnect->setIconSize(QSize(34, 34));
        toolButtonConnect->setCheckable(false);
        toolButtonConnect->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButtonConnect->setAutoRaise(true);

        verticalLayout->addWidget(toolButtonConnect);

        toolButtonLoadFile = new QToolButton(frame);
        toolButtonLoadFile->setObjectName(QString::fromUtf8("toolButtonLoadFile"));
        toolButtonLoadFile->setMinimumSize(QSize(80, 70));
        toolButtonLoadFile->setMaximumSize(QSize(80, 70));
        toolButtonLoadFile->setFont(font);
        toolButtonLoadFile->setFocusPolicy(Qt::NoFocus);
        toolButtonLoadFile->setAutoFillBackground(false);
        toolButtonLoadFile->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    color:white;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"   background-color: rgb(110, 110, 110);\n"
"}\n"
"\n"
"QToolButton:pressed{\n"
"  background-color: rgb(50, 150, 0)\n"
"}\n"
"\n"
"QToolButton:disabled{\n"
"  color:gray;\n"
"  background-color: rgb(50, 50, 50)\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/svg/folder.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonLoadFile->setIcon(icon1);
        toolButtonLoadFile->setIconSize(QSize(34, 34));
        toolButtonLoadFile->setCheckable(false);
        toolButtonLoadFile->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButtonLoadFile->setAutoRaise(true);

        verticalLayout->addWidget(toolButtonLoadFile);

        toolButtonLoadRemote = new QToolButton(frame);
        toolButtonLoadRemote->setObjectName(QString::fromUtf8("toolButtonLoadRemote"));
        toolButtonLoadRemote->setEnabled(false);
        toolButtonLoadRemote->setMinimumSize(QSize(80, 70));
        toolButtonLoadRemote->setMaximumSize(QSize(80, 70));
        toolButtonLoadRemote->setFont(font);
        toolButtonLoadRemote->setFocusPolicy(Qt::NoFocus);
        toolButtonLoadRemote->setAutoFillBackground(false);
        toolButtonLoadRemote->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    color:white;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"   background-color: rgb(110, 110, 110);\n"
"}\n"
"\n"
"QToolButton:pressed{\n"
"  background-color: rgb(50, 150, 0)\n"
"}\n"
"\n"
"QToolButton:disabled{\n"
"  color:gray;\n"
"  background-color: rgb(50, 50, 50)\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/svg/server_download.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonLoadRemote->setIcon(icon2);
        toolButtonLoadRemote->setIconSize(QSize(34, 34));
        toolButtonLoadRemote->setCheckable(false);
        toolButtonLoadRemote->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButtonLoadRemote->setAutoRaise(true);

        verticalLayout->addWidget(toolButtonLoadRemote);

        toolButtonSaveFile = new QToolButton(frame);
        toolButtonSaveFile->setObjectName(QString::fromUtf8("toolButtonSaveFile"));
        toolButtonSaveFile->setMinimumSize(QSize(80, 70));
        toolButtonSaveFile->setMaximumSize(QSize(80, 70));
        toolButtonSaveFile->setFont(font);
        toolButtonSaveFile->setFocusPolicy(Qt::NoFocus);
        toolButtonSaveFile->setAutoFillBackground(false);
        toolButtonSaveFile->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    color:white;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"   background-color: rgb(110, 110, 110);\n"
"}\n"
"\n"
"QToolButton:pressed{\n"
"  background-color: rgb(50, 150, 0)\n"
"}\n"
"\n"
"QToolButton:disabled{\n"
"  color:gray;\n"
"  background-color: rgb(50, 50, 50)\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/svg/save_white.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonSaveFile->setIcon(icon3);
        toolButtonSaveFile->setIconSize(QSize(34, 34));
        toolButtonSaveFile->setCheckable(false);
        toolButtonSaveFile->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButtonSaveFile->setAutoRaise(true);

        verticalLayout->addWidget(toolButtonSaveFile);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        toolButtonCenterView = new QToolButton(frame);
        toolButtonCenterView->setObjectName(QString::fromUtf8("toolButtonCenterView"));
        toolButtonCenterView->setMinimumSize(QSize(80, 70));
        toolButtonCenterView->setMaximumSize(QSize(80, 70));
        toolButtonCenterView->setFont(font);
        toolButtonCenterView->setFocusPolicy(Qt::NoFocus);
        toolButtonCenterView->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    color:white;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"   background-color: rgb(110, 110, 110);\n"
"}\n"
"\n"
"QToolButton:pressed{\n"
"  background-color: rgb(50, 150, 0)\n"
"}\n"
"\n"
"QToolButton:disabled{\n"
"  color:gray;\n"
"  background-color: rgb(50, 50, 50)\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/svg/zoom_home.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonCenterView->setIcon(icon4);
        toolButtonCenterView->setIconSize(QSize(32, 32));
        toolButtonCenterView->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButtonCenterView->setAutoRaise(true);

        verticalLayout->addWidget(toolButtonCenterView);

        toolButtonLayout = new QToolButton(frame);
        toolButtonLayout->setObjectName(QString::fromUtf8("toolButtonLayout"));
        toolButtonLayout->setMinimumSize(QSize(80, 70));
        toolButtonLayout->setMaximumSize(QSize(80, 70));
        toolButtonLayout->setBaseSize(QSize(80, 65));
        toolButtonLayout->setFont(font);
        toolButtonLayout->setFocusPolicy(Qt::NoFocus);
        toolButtonLayout->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    color:white;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"   background-color: rgb(110, 110, 110);\n"
"}\n"
"\n"
"QToolButton:pressed{\n"
"  background-color: rgb(50, 150, 0)\n"
"}\n"
"\n"
"QToolButton:disabled{\n"
"  color:gray;\n"
"  background-color: rgb(50, 50, 50)\n"
"}\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/BT-horizontal.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonLayout->setIcon(icon5);
        toolButtonLayout->setIconSize(QSize(34, 34));
        toolButtonLayout->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButtonLayout->setAutoRaise(true);

        verticalLayout->addWidget(toolButtonLayout);

        toolButtonReorder = new QToolButton(frame);
        toolButtonReorder->setObjectName(QString::fromUtf8("toolButtonReorder"));
        toolButtonReorder->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(80);
        sizePolicy.setVerticalStretch(70);
        sizePolicy.setHeightForWidth(toolButtonReorder->sizePolicy().hasHeightForWidth());
        toolButtonReorder->setSizePolicy(sizePolicy);
        toolButtonReorder->setMinimumSize(QSize(80, 70));
        toolButtonReorder->setFont(font);
        toolButtonReorder->setFocusPolicy(Qt::NoFocus);
        toolButtonReorder->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    color:white;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"   background-color: rgb(110, 110, 110);\n"
"}\n"
"\n"
"QToolButton:pressed{\n"
"  background-color: rgb(50, 150, 0)\n"
"}\n"
"\n"
"QToolButton:disabled{\n"
"  color:gray;\n"
"  background-color: rgb(50, 50, 50)\n"
"}\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/svg/magic-wand.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonReorder->setIcon(icon6);
        toolButtonReorder->setIconSize(QSize(32, 32));
        toolButtonReorder->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButtonReorder->setAutoRaise(true);

        verticalLayout->addWidget(toolButtonReorder);

        toolButtonSaveSvg = new QToolButton(frame);
        toolButtonSaveSvg->setObjectName(QString::fromUtf8("toolButtonSaveSvg"));
        toolButtonSaveSvg->setEnabled(false);
        sizePolicy.setHeightForWidth(toolButtonSaveSvg->sizePolicy().hasHeightForWidth());
        toolButtonSaveSvg->setSizePolicy(sizePolicy);
        toolButtonSaveSvg->setMinimumSize(QSize(80, 70));
        toolButtonSaveSvg->setFont(font);
        toolButtonSaveSvg->setFocusPolicy(Qt::NoFocus);
        toolButtonSaveSvg->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    color:white;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"   background-color: rgb(110, 110, 110);\n"
"}\n"
"\n"
"QToolButton:pressed{\n"
"  background-color: rgb(50, 150, 0)\n"
"}\n"
"\n"
"QToolButton:disabled{\n"
"  color:gray;\n"
"  background-color: rgb(50, 50, 50)\n"
"}\n"
""));
        toolButtonSaveSvg->setIcon(icon3);
        toolButtonSaveSvg->setIconSize(QSize(32, 32));
        toolButtonSaveSvg->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButtonSaveSvg->setAutoRaise(true);

        verticalLayout->addWidget(toolButtonSaveSvg);

        semaphoreFrame = new QFrame(frame);
        semaphoreFrame->setObjectName(QString::fromUtf8("semaphoreFrame"));
        semaphoreFrame->setMinimumSize(QSize(90, 50));
        semaphoreFrame->setMaximumSize(QSize(90, 50));
        topLayout = new QHBoxLayout(semaphoreFrame);
        topLayout->setSpacing(0);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        topLayout->setContentsMargins(-1, 1, -1, 1);
        labelSemaphore = new QLabel(semaphoreFrame);
        labelSemaphore->setObjectName(QString::fromUtf8("labelSemaphore"));
        labelSemaphore->setMinimumSize(QSize(32, 32));
        labelSemaphore->setMaximumSize(QSize(30, 30));
        labelSemaphore->setPixmap(QPixmap(QString::fromUtf8(":/icons/red-circle.png")));
        labelSemaphore->setScaledContents(true);
        labelSemaphore->setAlignment(Qt::AlignCenter);

        topLayout->addWidget(labelSemaphore);


        verticalLayout->addWidget(semaphoreFrame);


        horizontalLayout->addWidget(frame);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setLineWidth(3);
        splitter->setMidLineWidth(1);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(3);
        leftFrame = new QFrame(splitter);
        leftFrame->setObjectName(QString::fromUtf8("leftFrame"));
        leftFrame->setMinimumSize(QSize(300, 0));
        leftFrame->setMaximumSize(QSize(500, 16777215));
        leftFrame->setFrameShadow(QFrame::Raised);
        leftFrame->setLineWidth(0);
        verticalLayout_2 = new QVBoxLayout(leftFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(4, 4, 4, 4);
        splitter->addWidget(leftFrame);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        centralLayout = new QVBoxLayout(layoutWidget);
        centralLayout->setObjectName(QString::fromUtf8("centralLayout"));
        centralLayout->setContentsMargins(4, 4, 4, 4);
        tabWidget = new QTabWidget(layoutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(300, 0));
        tabWidget->setBaseSize(QSize(500, 0));
        tabWidget->setFocusPolicy(Qt::NoFocus);
        tabWidget->setAcceptDrops(true);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        centralLayout->addWidget(tabWidget);

        splitter->addWidget(layoutWidget);

        horizontalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 814, 22));
        menuLoad = new QMenu(menubar);
        menuLoad->setObjectName(QString::fromUtf8("menuLoad"));
        menuMode = new QMenu(menubar);
        menuMode->setObjectName(QString::fromUtf8("menuMode"));
        menuSwitch_To = new QMenu(menuMode);
        menuSwitch_To->setObjectName(QString::fromUtf8("menuSwitch_To"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuLoad->menuAction());
        menubar->addAction(menuMode->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuLoad->addAction(actionClear);
        menuLoad->addAction(actionQuit);
        menuMode->addAction(menuSwitch_To->menuAction());
        menuSwitch_To->addAction(actionEditor_mode);
        menuSwitch_To->addAction(actionMonitor_mode);
        menuSwitch_To->addAction(actionReplay_mode);
        menuHelp->addAction(actionReportIssue);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Groot", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
#if QT_CONFIG(shortcut)
        actionLoad->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLoadRemote->setText(QCoreApplication::translate("MainWindow", "Load from remote server", nullptr));
        actionClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        actionEditor_mode->setText(QCoreApplication::translate("MainWindow", "Editor Mode", nullptr));
        actionMonitor_mode->setText(QCoreApplication::translate("MainWindow", "Real-time Monitor", nullptr));
        actionReplay_mode->setText(QCoreApplication::translate("MainWindow", "Log Replay", nullptr));
        actionReportIssue->setText(QCoreApplication::translate("MainWindow", "Report an Issue...", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        toolButtonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        toolButtonLoadFile->setText(QCoreApplication::translate("MainWindow", "Load Tree", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonLoadRemote->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        toolButtonLoadRemote->setText(QCoreApplication::translate("MainWindow", "From Server", nullptr));
        toolButtonSaveFile->setText(QCoreApplication::translate("MainWindow", "Save Tree", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonCenterView->setToolTip(QCoreApplication::translate("MainWindow", "Zoom and Center view", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonCenterView->setText(QCoreApplication::translate("MainWindow", "Auto-Zoom", nullptr));
        toolButtonLayout->setText(QCoreApplication::translate("MainWindow", "Layout H/V", nullptr));
        toolButtonReorder->setText(QCoreApplication::translate("MainWindow", "Reorder", nullptr));
        toolButtonSaveSvg->setText(QCoreApplication::translate("MainWindow", "Save svg", nullptr));
        labelSemaphore->setText(QString());
        menuLoad->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuMode->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuSwitch_To->setTitle(QCoreApplication::translate("MainWindow", "Switch Mode...", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
