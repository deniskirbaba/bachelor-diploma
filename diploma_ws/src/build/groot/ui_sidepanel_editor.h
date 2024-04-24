/********************************************************************************
** Form generated from reading UI file 'sidepanel_editor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIDEPANEL_EDITOR_H
#define UI_SIDEPANEL_EDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SidepanelEditor
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QToolButton *buttonAddNode;
    QToolButton *buttonDownload;
    QToolButton *buttonUpload;
    QToolButton *buttonLock;
    QFrame *line;
    QLineEdit *lineEditFilter;
    QTreeWidget *paletteTreeWidget;
    QFrame *paramsFrame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableWidget *portsTableWidget;

    void setupUi(QFrame *SidepanelEditor)
    {
        if (SidepanelEditor->objectName().isEmpty())
            SidepanelEditor->setObjectName(QString::fromUtf8("SidepanelEditor"));
        SidepanelEditor->resize(300, 600);
        SidepanelEditor->setMinimumSize(QSize(300, 300));
        SidepanelEditor->setMaximumSize(QSize(16777215, 16777215));
        SidepanelEditor->setFrameShape(QFrame::NoFrame);
        SidepanelEditor->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(SidepanelEditor);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(SidepanelEditor);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(150, 0));
        label_2->setMaximumSize(QSize(200, 16777215));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonAddNode = new QToolButton(SidepanelEditor);
        buttonAddNode->setObjectName(QString::fromUtf8("buttonAddNode"));
        buttonAddNode->setMinimumSize(QSize(26, 26));
        buttonAddNode->setMaximumSize(QSize(26, 26));
        buttonAddNode->setFocusPolicy(Qt::NoFocus);
        buttonAddNode->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/svg/list_add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        buttonAddNode->setIcon(icon);
        buttonAddNode->setIconSize(QSize(19, 22));
        buttonAddNode->setAutoRaise(true);

        horizontalLayout->addWidget(buttonAddNode);

        buttonDownload = new QToolButton(SidepanelEditor);
        buttonDownload->setObjectName(QString::fromUtf8("buttonDownload"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonDownload->sizePolicy().hasHeightForWidth());
        buttonDownload->setSizePolicy(sizePolicy);
        buttonDownload->setMinimumSize(QSize(26, 26));
        buttonDownload->setMaximumSize(QSize(26, 26));
        buttonDownload->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/svg/download.svg"), QSize(), QIcon::Normal, QIcon::Off);
        buttonDownload->setIcon(icon1);
        buttonDownload->setIconSize(QSize(20, 20));
        buttonDownload->setAutoRaise(true);

        horizontalLayout->addWidget(buttonDownload);

        buttonUpload = new QToolButton(SidepanelEditor);
        buttonUpload->setObjectName(QString::fromUtf8("buttonUpload"));
        buttonUpload->setEnabled(true);
        sizePolicy.setHeightForWidth(buttonUpload->sizePolicy().hasHeightForWidth());
        buttonUpload->setSizePolicy(sizePolicy);
        buttonUpload->setMinimumSize(QSize(26, 26));
        buttonUpload->setMaximumSize(QSize(26, 26));
        buttonUpload->setBaseSize(QSize(0, 0));
        buttonUpload->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/svg/upload.svg"), QSize(), QIcon::Normal, QIcon::Off);
        buttonUpload->setIcon(icon2);
        buttonUpload->setIconSize(QSize(20, 20));
        buttonUpload->setAutoRaise(true);

        horizontalLayout->addWidget(buttonUpload);

        buttonLock = new QToolButton(SidepanelEditor);
        buttonLock->setObjectName(QString::fromUtf8("buttonLock"));
        buttonLock->setMinimumSize(QSize(26, 26));
        buttonLock->setMaximumSize(QSize(26, 26));
        buttonLock->setFocusPolicy(Qt::NoFocus);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/svg/lock.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/icons/svg/lock.svg"), QSize(), QIcon::Active, QIcon::On);
        buttonLock->setIcon(icon3);
        buttonLock->setIconSize(QSize(22, 22));
        buttonLock->setCheckable(true);
        buttonLock->setAutoRaise(true);

        horizontalLayout->addWidget(buttonLock);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(SidepanelEditor);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        lineEditFilter = new QLineEdit(SidepanelEditor);
        lineEditFilter->setObjectName(QString::fromUtf8("lineEditFilter"));
        lineEditFilter->setMaximumSize(QSize(16777215, 16777215));
        lineEditFilter->setDragEnabled(false);
        lineEditFilter->setClearButtonEnabled(true);

        verticalLayout->addWidget(lineEditFilter);

        paletteTreeWidget = new QTreeWidget(SidepanelEditor);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        paletteTreeWidget->setHeaderItem(__qtreewidgetitem);
        paletteTreeWidget->setObjectName(QString::fromUtf8("paletteTreeWidget"));
        paletteTreeWidget->setMaximumSize(QSize(16777215, 16777215));
        paletteTreeWidget->setBaseSize(QSize(300, 0));
        paletteTreeWidget->setDragEnabled(true);
        paletteTreeWidget->setDragDropMode(QAbstractItemView::DragOnly);
        paletteTreeWidget->setDefaultDropAction(Qt::CopyAction);
        paletteTreeWidget->setIndentation(30);
        paletteTreeWidget->setSortingEnabled(false);
        paletteTreeWidget->setAnimated(true);
        paletteTreeWidget->header()->setVisible(false);

        verticalLayout->addWidget(paletteTreeWidget);

        paramsFrame = new QFrame(SidepanelEditor);
        paramsFrame->setObjectName(QString::fromUtf8("paramsFrame"));
        paramsFrame->setEnabled(true);
        paramsFrame->setMinimumSize(QSize(0, 100));
        paramsFrame->setFrameShape(QFrame::NoFrame);
        paramsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(paramsFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(paramsFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 25));
        label->setMaximumSize(QSize(16777215, 25));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        verticalLayout_2->addWidget(label);

        portsTableWidget = new QTableWidget(paramsFrame);
        if (portsTableWidget->columnCount() < 3)
            portsTableWidget->setColumnCount(3);
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font2);
        portsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font2);
        portsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font2);
        portsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        portsTableWidget->setObjectName(QString::fromUtf8("portsTableWidget"));
        portsTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        portsTableWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        portsTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        portsTableWidget->setColumnCount(3);
        portsTableWidget->horizontalHeader()->setMinimumSectionSize(80);
        portsTableWidget->horizontalHeader()->setDefaultSectionSize(80);
        portsTableWidget->horizontalHeader()->setStretchLastSection(true);
        portsTableWidget->verticalHeader()->setVisible(false);
        portsTableWidget->verticalHeader()->setDefaultSectionSize(30);
        portsTableWidget->verticalHeader()->setStretchLastSection(false);

        verticalLayout_2->addWidget(portsTableWidget);


        verticalLayout->addWidget(paramsFrame);

        verticalLayout->setStretch(3, 1);

        retranslateUi(SidepanelEditor);

        QMetaObject::connectSlotsByName(SidepanelEditor);
    } // setupUi

    void retranslateUi(QFrame *SidepanelEditor)
    {
        SidepanelEditor->setWindowTitle(QCoreApplication::translate("SidepanelEditor", "Frame", nullptr));
        label_2->setText(QCoreApplication::translate("SidepanelEditor", "TreeNode Palette", nullptr));
#if QT_CONFIG(tooltip)
        buttonAddNode->setToolTip(QCoreApplication::translate("SidepanelEditor", "<html><head/><body><p>Add Custom Node to Palette</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonAddNode->setText(QString());
#if QT_CONFIG(tooltip)
        buttonDownload->setToolTip(QCoreApplication::translate("SidepanelEditor", "<html><head/><body><p>Load palette from file</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonDownload->setText(QCoreApplication::translate("SidepanelEditor", "...", nullptr));
#if QT_CONFIG(tooltip)
        buttonUpload->setToolTip(QCoreApplication::translate("SidepanelEditor", "<html><head/><body><p>Save palette</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonUpload->setText(QCoreApplication::translate("SidepanelEditor", "...", nullptr));
#if QT_CONFIG(tooltip)
        buttonLock->setToolTip(QCoreApplication::translate("SidepanelEditor", "Lock/Unlock editing of custom nodes", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonLock->setText(QCoreApplication::translate("SidepanelEditor", "...", nullptr));
        lineEditFilter->setPlaceholderText(QCoreApplication::translate("SidepanelEditor", "Filter...", nullptr));
        label->setText(QCoreApplication::translate("SidepanelEditor", "Port Properties", nullptr));
        QTableWidgetItem *___qtablewidgetitem = portsTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SidepanelEditor", "Direction", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = portsTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SidepanelEditor", "Port ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = portsTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SidepanelEditor", "Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SidepanelEditor: public Ui_SidepanelEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIDEPANEL_EDITOR_H
