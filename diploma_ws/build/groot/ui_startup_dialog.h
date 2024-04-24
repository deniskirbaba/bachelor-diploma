/********************************************************************************
** Form generated from reading UI file 'startup_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTUP_DIALOG_H
#define UI_STARTUP_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StartupDialog
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonClose;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButtonEditor;
    QToolButton *toolButtonMonitor;
    QToolButton *toolButtonReplay;
    QToolButton *toolButtonStart;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelDescription;

    void setupUi(QDialog *StartupDialog)
    {
        if (StartupDialog->objectName().isEmpty())
            StartupDialog->setObjectName(QString::fromUtf8("StartupDialog"));
        StartupDialog->resize(600, 398);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StartupDialog->sizePolicy().hasHeightForWidth());
        StartupDialog->setSizePolicy(sizePolicy);
        StartupDialog->setStyleSheet(QString::fromUtf8("background-color: #1c2b36;"));
        StartupDialog->setSizeGripEnabled(false);
        StartupDialog->setModal(false);
        verticalLayout = new QVBoxLayout(StartupDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonClose = new QPushButton(StartupDialog);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/close_x.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonClose->setIcon(icon);
        pushButtonClose->setIconSize(QSize(24, 24));
        pushButtonClose->setAutoDefault(false);
        pushButtonClose->setFlat(true);

        verticalLayout->addWidget(pushButtonClose, 0, Qt::AlignRight);

        frame = new QFrame(StartupDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(600, 200));
        frame->setMaximumSize(QSize(600, 200));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(0);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        verticalLayout->addWidget(frame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer = new QSpacerItem(120, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButtonEditor = new QToolButton(StartupDialog);
        toolButtonEditor->setObjectName(QString::fromUtf8("toolButtonEditor"));
        toolButtonEditor->setMinimumSize(QSize(100, 100));
        toolButtonEditor->setMaximumSize(QSize(100, 100));
        toolButtonEditor->setFocusPolicy(Qt::NoFocus);
        toolButtonEditor->setAutoFillBackground(false);
        toolButtonEditor->setStyleSheet(QString::fromUtf8("color:white;\n"
"border: 2px solid #9cff71; \n"
"border-radius: 10px;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/BT-edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonEditor->setIcon(icon1);
        toolButtonEditor->setIconSize(QSize(70, 70));
        toolButtonEditor->setCheckable(false);
        toolButtonEditor->setChecked(false);
        toolButtonEditor->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButtonEditor->setAutoRaise(true);

        horizontalLayout->addWidget(toolButtonEditor);

        toolButtonMonitor = new QToolButton(StartupDialog);
        toolButtonMonitor->setObjectName(QString::fromUtf8("toolButtonMonitor"));
        toolButtonMonitor->setMinimumSize(QSize(100, 100));
        toolButtonMonitor->setMaximumSize(QSize(100, 100));
        toolButtonMonitor->setFocusPolicy(Qt::NoFocus);
        toolButtonMonitor->setAutoFillBackground(false);
        toolButtonMonitor->setStyleSheet(QString::fromUtf8("color:white;\n"
"border: 2px solid #9cff71; \n"
"border-radius: 10px;\n"
"\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/BT-monitor.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonMonitor->setIcon(icon2);
        toolButtonMonitor->setIconSize(QSize(70, 70));
        toolButtonMonitor->setCheckable(false);
        toolButtonMonitor->setChecked(false);
        toolButtonMonitor->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButtonMonitor->setAutoRaise(true);

        horizontalLayout->addWidget(toolButtonMonitor);

        toolButtonReplay = new QToolButton(StartupDialog);
        toolButtonReplay->setObjectName(QString::fromUtf8("toolButtonReplay"));
        toolButtonReplay->setMinimumSize(QSize(100, 100));
        toolButtonReplay->setMaximumSize(QSize(100, 100));
        toolButtonReplay->setFocusPolicy(Qt::NoFocus);
        toolButtonReplay->setAutoFillBackground(false);
        toolButtonReplay->setStyleSheet(QString::fromUtf8("color:white;\n"
"border: 2px solid  #9cff71; \n"
"border-radius: 10px;\n"
"\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/BT-log.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonReplay->setIcon(icon3);
        toolButtonReplay->setIconSize(QSize(70, 70));
        toolButtonReplay->setCheckable(false);
        toolButtonReplay->setChecked(false);
        toolButtonReplay->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButtonReplay->setAutoRaise(true);

        horizontalLayout->addWidget(toolButtonReplay);

        toolButtonStart = new QToolButton(StartupDialog);
        toolButtonStart->setObjectName(QString::fromUtf8("toolButtonStart"));
        toolButtonStart->setMinimumSize(QSize(100, 100));
        QFont font;
        font.setPointSize(18);
        toolButtonStart->setFont(font);
        toolButtonStart->setFocusPolicy(Qt::NoFocus);
        toolButtonStart->setStyleSheet(QString::fromUtf8("color:  #9cff71"));
        toolButtonStart->setIconSize(QSize(66, 66));
        toolButtonStart->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButtonStart->setAutoRaise(true);
        toolButtonStart->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(toolButtonStart);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        labelDescription = new QLabel(StartupDialog);
        labelDescription->setObjectName(QString::fromUtf8("labelDescription"));
        labelDescription->setMinimumSize(QSize(0, 50));
        labelDescription->setMaximumSize(QSize(16777215, 50));
        labelDescription->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);"));
        labelDescription->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelDescription);


        retranslateUi(StartupDialog);

        QMetaObject::connectSlotsByName(StartupDialog);
    } // setupUi

    void retranslateUi(QDialog *StartupDialog)
    {
        StartupDialog->setWindowTitle(QCoreApplication::translate("StartupDialog", "Dialog", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonClose->setToolTip(QCoreApplication::translate("StartupDialog", "<html><head/><body><p>Close</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonClose->setText(QString());
        toolButtonEditor->setText(QCoreApplication::translate("StartupDialog", "Editor", nullptr));
        toolButtonMonitor->setText(QCoreApplication::translate("StartupDialog", "Monitor", nullptr));
        toolButtonReplay->setText(QCoreApplication::translate("StartupDialog", "Log Replay", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonStart->setToolTip(QCoreApplication::translate("StartupDialog", "<html><head/><body><p><span style=\" font-size:10pt; color:#eeeeec;\">Launch the application</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonStart->setText(QCoreApplication::translate("StartupDialog", "START", nullptr));
        labelDescription->setText(QCoreApplication::translate("StartupDialog", "Placeholder text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartupDialog: public Ui_StartupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTUP_DIALOG_H
