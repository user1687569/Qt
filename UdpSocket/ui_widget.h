/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QPushButton *bindBtn;
    QPushButton *abortBtn;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *sendMsgBtn;
    QPushButton *broadMsgBtn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(484, 362);
        horizontalLayout_3 = new QHBoxLayout(Widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        bindBtn = new QPushButton(Widget);
        bindBtn->setObjectName(QStringLiteral("bindBtn"));

        horizontalLayout->addWidget(bindBtn);

        abortBtn = new QPushButton(Widget);
        abortBtn->setObjectName(QStringLiteral("abortBtn"));

        horizontalLayout->addWidget(abortBtn);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        sendMsgBtn = new QPushButton(Widget);
        sendMsgBtn->setObjectName(QStringLiteral("sendMsgBtn"));

        horizontalLayout_2->addWidget(sendMsgBtn);

        broadMsgBtn = new QPushButton(Widget);
        broadMsgBtn->setObjectName(QStringLiteral("broadMsgBtn"));

        horizontalLayout_2->addWidget(broadMsgBtn);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        bindBtn->setText(QApplication::translate("Widget", "\347\273\221\345\256\232\347\253\257\345\217\243", Q_NULLPTR));
        abortBtn->setText(QApplication::translate("Widget", "\350\247\243\351\231\244\347\273\221\345\256\232", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("Widget", "\344\275\240\345\245\275!", Q_NULLPTR));
        sendMsgBtn->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\346\266\210\346\201\257", Q_NULLPTR));
        broadMsgBtn->setText(QApplication::translate("Widget", "\345\271\277\346\222\255\346\266\210\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
