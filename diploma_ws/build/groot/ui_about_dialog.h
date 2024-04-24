/********************************************************************************
** Form generated from reading UI file 'about_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_DIALOG_H
#define UI_ABOUT_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *text;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(618, 450);
        Dialog->setStyleSheet(QString::fromUtf8("background-color: #1c2b36;"));
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(24, 24));
        pushButton->setMaximumSize(QSize(24, 24));
        pushButton->setBaseSize(QSize(24, 24));
        pushButton->setLayoutDirection(Qt::RightToLeft);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/close_x.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(24, 24));
        pushButton->setFlat(true);

        verticalLayout->addWidget(pushButton);

        frame = new QFrame(Dialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(600, 200));
        frame->setMaximumSize(QSize(600, 200));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout->addWidget(frame);

        text = new QTextBrowser(Dialog);
        text->setObjectName(QString::fromUtf8("text"));
        text->setStyleSheet(QString::fromUtf8("color: white"));
        text->setFrameShape(QFrame::NoFrame);
        text->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(text);


        retranslateUi(Dialog);
        QObject::connect(pushButton, SIGNAL(pressed()), Dialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        pushButton->setText(QString());
        text->setHtml(QCoreApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Thanks for using Groot.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This project is one of the main components of <a href=\"https://eurecat.org/es/portfolio-items/mood2be/\"><span style=\" text-decoration: underline; color:#8ae234;\">MOOD2Be</span></a>, and it is developed at <a href=\"https://eurecat.org\"><span style=\" "
                        "text-decoration: underline; color:#8ae234;\">Eurecat</span></a> by Davide Faconti.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">MOOD2Be is one of the six <span style=\" font-weight:600;\">Integrated Technical Projects (ITPs)</span> selected from the <a href=\"https://robmosys.eu/itp/\"><span style=\" text-decoration: underline; color:#8ae234;\">RobMoSys first open call</span></a>. It received funding from the European Union\342\200\231s Horizon 2020 Research and Innovation Programme under the RobMoSys project.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_DIALOG_H
