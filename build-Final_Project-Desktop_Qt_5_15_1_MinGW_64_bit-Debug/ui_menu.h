/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(1350, 750);
        Menu->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:black;\n"
"font-weight:bold;\n"
"font-size:13px;\n"
"background-color:transparent;\n"
"border:2px solid #8b0000;\n"
"border-radius:15px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background:#8b0000;\n"
"border:2px solid white;\n"
"border-radius:15px;\n"
"\n"
"}\n"
""));
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(500, 200, 391, 121));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 410, 391, 121));
        Menu->setCentralWidget(centralwidget);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Menu", nullptr));
        pushButton->setText(QCoreApplication::translate("Menu", "PATIENT", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Menu", "DOCTOR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
