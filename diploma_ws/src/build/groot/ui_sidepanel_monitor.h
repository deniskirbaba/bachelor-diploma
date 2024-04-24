/********************************************************************************
** Form generated from reading UI file 'sidepanel_monitor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIDEPANEL_MONITOR_H
#define UI_SIDEPANEL_MONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SidepanelMonitor
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_address;
    QLabel *label_publisher;
    QLineEdit *lineEdit_publisher;
    QLabel *label_2;
    QLineEdit *lineEdit_server;
    QLabel *labelCount;
    QSpacerItem *verticalSpacer;

    void setupUi(QFrame *SidepanelMonitor)
    {
        if (SidepanelMonitor->objectName().isEmpty())
            SidepanelMonitor->setObjectName(QString::fromUtf8("SidepanelMonitor"));
        SidepanelMonitor->resize(271, 516);
        verticalLayout = new QVBoxLayout(SidepanelMonitor);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(SidepanelMonitor);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_address = new QLineEdit(SidepanelMonitor);
        lineEdit_address->setObjectName(QString::fromUtf8("lineEdit_address"));
        lineEdit_address->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_address->setClearButtonEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_address);

        label_publisher = new QLabel(SidepanelMonitor);
        label_publisher->setObjectName(QString::fromUtf8("label_publisher"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_publisher);

        lineEdit_publisher = new QLineEdit(SidepanelMonitor);
        lineEdit_publisher->setObjectName(QString::fromUtf8("lineEdit_publisher"));
        lineEdit_publisher->setClearButtonEnabled(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_publisher);

        label_2 = new QLabel(SidepanelMonitor);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEdit_server = new QLineEdit(SidepanelMonitor);
        lineEdit_server->setObjectName(QString::fromUtf8("lineEdit_server"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_server);


        verticalLayout->addLayout(formLayout);

        labelCount = new QLabel(SidepanelMonitor);
        labelCount->setObjectName(QString::fromUtf8("labelCount"));

        verticalLayout->addWidget(labelCount);

        verticalSpacer = new QSpacerItem(20, 474, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(SidepanelMonitor);

        QMetaObject::connectSlotsByName(SidepanelMonitor);
    } // setupUi

    void retranslateUi(QFrame *SidepanelMonitor)
    {
        SidepanelMonitor->setWindowTitle(QCoreApplication::translate("SidepanelMonitor", "Frame", nullptr));
        label->setText(QCoreApplication::translate("SidepanelMonitor", "Server IP:", nullptr));
        lineEdit_address->setText(QString());
        lineEdit_address->setPlaceholderText(QCoreApplication::translate("SidepanelMonitor", "localhost", nullptr));
        label_publisher->setText(QCoreApplication::translate("SidepanelMonitor", "Publisher Port:", nullptr));
        lineEdit_publisher->setPlaceholderText(QCoreApplication::translate("SidepanelMonitor", "1666", nullptr));
        label_2->setText(QCoreApplication::translate("SidepanelMonitor", "Server Port:", nullptr));
        lineEdit_server->setText(QCoreApplication::translate("SidepanelMonitor", "1667", nullptr));
        labelCount->setText(QCoreApplication::translate("SidepanelMonitor", "Messages Received: 0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SidepanelMonitor: public Ui_SidepanelMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIDEPANEL_MONITOR_H
