/********************************************************************************
** Form generated from reading UI file 'second_page.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECOND_PAGE_H
#define UI_SECOND_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_second_page
{
public:
    QTableView *tableView;
    QTableView *tableView_2;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *at;
    QPushButton *pushButton_2;
    QLabel *label_2;

    void setupUi(QDialog *second_page)
    {
        if (second_page->objectName().isEmpty())
            second_page->setObjectName(QString::fromUtf8("second_page"));
        second_page->resize(1350, 750);
        second_page->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"\n"
"\n"
"QTableView{\n"
"border:2px solid #8b0000;\n"
"border-bottom-right-radius: 55px;  \n"
"background: transparent;\n"
"font-size: 12px;\n"
"color: black;\n"
"text-align: center;\n"
"font-weight: bold;\n"
"margin: 5px;\n"
"font-family: \"Roboto\",sans-serif;\n"
"}\n"
"\n"
"QListView{\n"
"border:2px solid #8b0000;\n"
"border-bottom-left-radius: 105px;  \n"
"border-top-left-radius: 105px;  \n"
"background: transparent;\n"
"font-size: 15px;\n"
"color: black;\n"
"text-align: center;\n"
"font-weight: bold;\n"
"margin: 5px;\n"
"font-family: \"Roboto\",sans-serif;\n"
"}\n"
"\n"
"\n"
"QLabel{\n"
"    font-size: 16px;\n"
"   color:#c70000;\n"
"    text-align: center;\n"
"    font-weight: 600;\n"
"    margin: 5px;\n"
"\n"
"    \n"
"    font-family: \"Roboto\",sans-serif;\n"
"}\n"
"\n"
"QLineEdit{\n"
"outline: none;\n"
"   border:none;\n"
"font-family: \"Roboto\",sans-serif;\n"
"color: black;\n"
"font-size:14px;\n"
"font-weight: 200;\n"
"font-weight:bold;\n"
"    padding:20px 10px;\n"
"    \n"
"    wi"
                        "dth: 20%;\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton{\n"
"color:black;\n"
"font-weight:bold;\n"
"font-size:13px;\n"
"background-color:transparent;\n"
"border:2px solid #8b0000;\n"
"border-radius:15px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background:#8b0000;\n"
"border:2px solid white;\n"
"border-radius:15px;\n"
"}\n"
""));
        tableView = new QTableView(second_page);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(60, 120, 701, 381));
        tableView_2 = new QTableView(second_page);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(910, 120, 381, 371));
        pushButton = new QPushButton(second_page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1180, 10, 101, 41));
        label = new QLabel(second_page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 20, 301, 71));
        label->setStyleSheet(QString::fromUtf8("font: 25px;"));
        at = new QLineEdit(second_page);
        at->setObjectName(QString::fromUtf8("at"));
        at->setGeometry(QRect(60, 540, 701, 101));
        at->setStyleSheet(QString::fromUtf8("#at{\n"
"border: 2px solid #8b0000;\n"
"}"));
        pushButton_2 = new QPushButton(second_page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 660, 141, 31));
        label_2 = new QLabel(second_page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 30, 141, 51));
        label_2->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(second_page);

        QMetaObject::connectSlotsByName(second_page);
    } // setupUi

    void retranslateUi(QDialog *second_page)
    {
        second_page->setWindowTitle(QCoreApplication::translate("second_page", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("second_page", "Sign Out", nullptr));
        label->setText(QCoreApplication::translate("second_page", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("second_page", "Attach", nullptr));
        label_2->setText(QCoreApplication::translate("second_page", "Hello, ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class second_page: public Ui_second_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECOND_PAGE_H
