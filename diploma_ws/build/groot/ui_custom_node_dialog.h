/********************************************************************************
** Form generated from reading UI file 'custom_node_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOM_NODE_DIALOG_H
#define UI_CUSTOM_NODE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CustomNodeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_2;
    QComboBox *comboBox;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonRemove;
    QTableWidget *tableWidget;
    QLabel *labelWarning;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CustomNodeDialog)
    {
        if (CustomNodeDialog->objectName().isEmpty())
            CustomNodeDialog->setObjectName(QString::fromUtf8("CustomNodeDialog"));
        CustomNodeDialog->resize(570, 360);
        CustomNodeDialog->setMaximumSize(QSize(16777215, 400));
        CustomNodeDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 233, 233)"));
        verticalLayout = new QVBoxLayout(CustomNodeDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(CustomNodeDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: white;"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(CustomNodeDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(80, 0));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_2 = new QLabel(CustomNodeDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        comboBox = new QComboBox(CustomNodeDialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        line = new QFrame(CustomNodeDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonAdd = new QPushButton(CustomNodeDialog);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));

        horizontalLayout->addWidget(pushButtonAdd);

        pushButtonRemove = new QPushButton(CustomNodeDialog);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));
        pushButtonRemove->setEnabled(false);

        horizontalLayout->addWidget(pushButtonRemove);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(CustomNodeDialog);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: white;"));
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setColumnCount(4);
        tableWidget->horizontalHeader()->setMinimumSectionSize(100);
        tableWidget->horizontalHeader()->setDefaultSectionSize(100);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableWidget);

        labelWarning = new QLabel(CustomNodeDialog);
        labelWarning->setObjectName(QString::fromUtf8("labelWarning"));
        labelWarning->setStyleSheet(QString::fromUtf8("color: rgb(204, 0, 0);"));

        verticalLayout->addWidget(labelWarning);

        buttonBox = new QDialogButtonBox(CustomNodeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CustomNodeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CustomNodeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CustomNodeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CustomNodeDialog);
    } // setupUi

    void retranslateUi(QDialog *CustomNodeDialog)
    {
        CustomNodeDialog->setWindowTitle(QCoreApplication::translate("CustomNodeDialog", "Custom Node Editor", nullptr));
        label_3->setText(QCoreApplication::translate("CustomNodeDialog", "Type:", nullptr));
        label_2->setText(QCoreApplication::translate("CustomNodeDialog", "Name:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("CustomNodeDialog", "ActionNode", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("CustomNodeDialog", "ConditionNode", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("CustomNodeDialog", "ControlNode", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("CustomNodeDialog", "SubTree", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("CustomNodeDialog", "DecoratorNode", nullptr));

        pushButtonAdd->setText(QCoreApplication::translate("CustomNodeDialog", "Add port", nullptr));
        pushButtonRemove->setText(QCoreApplication::translate("CustomNodeDialog", "Remove", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CustomNodeDialog", "Port Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CustomNodeDialog", "Direction", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CustomNodeDialog", "Default value", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CustomNodeDialog", "Description", nullptr));
        labelWarning->setText(QCoreApplication::translate("CustomNodeDialog", "Warning...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomNodeDialog: public Ui_CustomNodeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOM_NODE_DIALOG_H
