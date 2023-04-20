/********************************************************************************
** Form generated from reading UI file 'secondpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDPAGE_H
#define UI_SECONDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Secondpage
{
public:
    QTableView *tableView;
    QListView *listView;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *welcome;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *Secondpage)
    {
        if (Secondpage->objectName().isEmpty())
            Secondpage->setObjectName(QString::fromUtf8("Secondpage"));
        Secondpage->resize(1350, 750);
        Secondpage->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"\n"
"\n"
"QTableView{\n"
"border:2px solid #8b0000;\n"
"border-bottom-right-radius: 155px;  \n"
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
        tableView = new QTableView(Secondpage);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(60, 170, 611, 461));
        listView = new QListView(Secondpage);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(730, 170, 471, 321));
        pushButton_2 = new QPushButton(Secondpage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(920, 520, 131, 41));
        pushButton_3 = new QPushButton(Secondpage);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1070, 520, 131, 41));
        welcome = new QLabel(Secondpage);
        welcome->setObjectName(QString::fromUtf8("welcome"));
        welcome->setGeometry(QRect(180, 30, 241, 61));
        welcome->setStyleSheet(QString::fromUtf8("#welcome{\n"
"    font-size: 50px;\n"
"   color:#1E5639;\n"
"    text-align: center;\n"
"    font-weight: 500;\n"
"    margin: 5px;\n"
"    \n"
"    font-family: Impact, Charcoal, sans-serif;\n"
"}"));
        label = new QLabel(Secondpage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 60, 111, 31));
        label->setStyleSheet(QString::fromUtf8("#label{\n"
"    font-size: 25px;\n"
"   color: #e10000 ;\n"
"    text-align: center;\n"
"    font-weight: 500;\n"
"    margin: 5px;\n"
"    \n"
"    font-family: \"Courier New\", Courier, monospace;\n"
"}"));
        label_2 = new QLabel(Secondpage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 90, 211, 31));
        label_2->setStyleSheet(QString::fromUtf8("#label_2{\n"
"    font-size: 16px;\n"
"   color: #e10000 ;\n"
"    text-align: center;\n"
"    font-weight: bold;\n"
"    margin: 5px;\n"
"    \n"
"    font-family: \"Courier New\", Courier, monospace;\n"
"}"));
        comboBox = new QComboBox(Secondpage);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(740, 90, 201, 51));
        comboBox->setStyleSheet(QString::fromUtf8("#comboBox{\n"
"background: white ;\n"
"border: 2px solid;\n"
"border-bottom-left-radius: 20px;\n"
"border-top-right-radius: 10px;\n"
"font-size: 15px;\n"
"font-family: \"Roboto\",sans-serif;\n"
"\n"
"}"));
        pushButton = new QPushButton(Secondpage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1230, 10, 101, 41));

        retranslateUi(Secondpage);

        QMetaObject::connectSlotsByName(Secondpage);
    } // setupUi

    void retranslateUi(QDialog *Secondpage)
    {
        Secondpage->setWindowTitle(QCoreApplication::translate("Secondpage", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Secondpage", "CONSULTATION", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Secondpage", "APPOINTMENT", nullptr));
        welcome->setText(QCoreApplication::translate("Secondpage", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("Secondpage", "Hello,", nullptr));
        label_2->setText(QCoreApplication::translate("Secondpage", "Boost your Bones...", nullptr));
        pushButton->setText(QCoreApplication::translate("Secondpage", "Sign Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Secondpage: public Ui_Secondpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDPAGE_H
