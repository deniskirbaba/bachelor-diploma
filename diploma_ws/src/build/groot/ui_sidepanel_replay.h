/********************************************************************************
** Form generated from reading UI file 'sidepanel_replay.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIDEPANEL_REPLAY_H
#define UI_SIDEPANEL_REPLAY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SidepanelReplay
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditFilter;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonPlay;
    QSlider *timeSlider;

    void setupUi(QFrame *SidepanelReplay)
    {
        if (SidepanelReplay->objectName().isEmpty())
            SidepanelReplay->setObjectName(QString::fromUtf8("SidepanelReplay"));
        SidepanelReplay->resize(400, 500);
        QFont font;
        font.setPointSize(9);
        SidepanelReplay->setFont(font);
        SidepanelReplay->setFrameShape(QFrame::NoFrame);
        SidepanelReplay->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(SidepanelReplay);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        lineEditFilter = new QLineEdit(SidepanelReplay);
        lineEditFilter->setObjectName(QString::fromUtf8("lineEditFilter"));
        lineEditFilter->setClearButtonEnabled(true);

        verticalLayout->addWidget(lineEditFilter);

        tableView = new QTableView(SidepanelReplay);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setFont(font);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionMode(QAbstractItemView::NoSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->horizontalHeader()->setMinimumSectionSize(60);
        tableView->horizontalHeader()->setDefaultSectionSize(60);
        tableView->horizontalHeader()->setStretchLastSection(false);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setMinimumSectionSize(20);
        tableView->verticalHeader()->setDefaultSectionSize(20);
        tableView->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox = new QSpinBox(SidepanelReplay);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setEnabled(false);
        spinBox->setFocusPolicy(Qt::ClickFocus);
        spinBox->setMaximum(0);

        horizontalLayout->addWidget(spinBox);

        label = new QLabel(SidepanelReplay);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonPlay = new QPushButton(SidepanelReplay);
        pushButtonPlay->setObjectName(QString::fromUtf8("pushButtonPlay"));
        pushButtonPlay->setEnabled(false);
        pushButtonPlay->setMaximumSize(QSize(36, 36));
        pushButtonPlay->setFocusPolicy(Qt::NoFocus);
        pushButtonPlay->setStyleSheet(QString::fromUtf8("QPushButton:checked{\n"
"    background-color: rgb(252, 175, 62)\n"
"}\n"
"\n"
"QPushButton:unchecked{\n"
"   background-color: rgba(0, 0, 0,0)\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPlay->setIcon(icon);
        pushButtonPlay->setIconSize(QSize(34, 34));
        pushButtonPlay->setCheckable(true);
        pushButtonPlay->setFlat(true);

        horizontalLayout->addWidget(pushButtonPlay);


        verticalLayout->addLayout(horizontalLayout);

        timeSlider = new QSlider(SidepanelReplay);
        timeSlider->setObjectName(QString::fromUtf8("timeSlider"));
        timeSlider->setEnabled(false);
        timeSlider->setFocusPolicy(Qt::ClickFocus);
        timeSlider->setMaximum(0);
        timeSlider->setPageStep(10);
        timeSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(timeSlider);


        retranslateUi(SidepanelReplay);

        QMetaObject::connectSlotsByName(SidepanelReplay);
    } // setupUi

    void retranslateUi(QFrame *SidepanelReplay)
    {
        SidepanelReplay->setWindowTitle(QCoreApplication::translate("SidepanelReplay", "Frame", nullptr));
        lineEditFilter->setPlaceholderText(QCoreApplication::translate("SidepanelReplay", "Filter by Node Name", nullptr));
        label->setText(QCoreApplication::translate("SidepanelReplay", "of 0", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonPlay->setToolTip(QCoreApplication::translate("SidepanelReplay", "Play the recorded log", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonPlay->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SidepanelReplay: public Ui_SidepanelReplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIDEPANEL_REPLAY_H
