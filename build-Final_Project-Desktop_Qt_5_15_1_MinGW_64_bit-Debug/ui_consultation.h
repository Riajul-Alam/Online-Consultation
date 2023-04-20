/********************************************************************************
** Form generated from reading UI file 'consultation.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTATION_H
#define UI_CONSULTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_consultation
{
public:
    QPushButton *pushButton;
    QLineEdit *d1;
    QLabel *label;
    QFrame *line;
    QLabel *label_2;
    QLineEdit *d2;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QPushButton *pushButton_2;
    QTableView *tableView;

    void setupUi(QDialog *consultation)
    {
        if (consultation->objectName().isEmpty())
            consultation->setObjectName(QString::fromUtf8("consultation"));
        consultation->resize(1350, 750);
        consultation->setStyleSheet(QString::fromUtf8("\n"
"QDateEdit{\n"
"\n"
"border:none;\n"
"border-radius:10px;\n"
"color:white;\n"
"background:#8b0000;\n"
"font-family: \"Roboto\",sans-serif;\n"
"\n"
"font-size:5px;\n"
"font-weight:lighter;\n"
"\n"
"\n"
"\n"
"border-top-right-radius: 6px;\n"
"border-bottom-right-radius: 30px;\n"
"\n"
"\n"
"\n"
"    font-size: 15px;\n"
"\n"
"    text-align: center;\n"
"\n"
"    margin: 5px;\n"
"  font-family: \"Roboto\",sans-serif;\n"
"\n"
"}\n"
"\n"
"QGroupBox{\n"
"border:2px solid #8b0000;\n"
"border-radius:70px;\n"
"\n"
"\n"
"    font-size: 15px;\n"
"    color: white;\n"
"    text-align: center;\n"
"    font-weight: bold;\n"
"    margin: 5px;\n"
"  font-family: \"Roboto\",sans-serif;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"QLabel{\n"
"    font-size: 15px;\n"
"   color:#c70000;\n"
"    text-align: center;\n"
"    font-weight: 600;\n"
"    margin: 5px;\n"
"    \n"
"    font-family: \"Roboto\",sans-serif;\n"
"}\n"
"\n"
"QLineEdit{\n"
"outline: none;\n"
"   border:none;\n"
"font-family: \"Roboto\",sans-serif;\n"
"color: #1a1a1a;\n"
"fon"
                        "t-size:15px;\n"
"font-weight: 200;\n"
"font-weight:bold;\n"
"    padding:20px 10px;\n"
"    \n"
"    width: 20%;\n"
"    background: transparent;\n"
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
"QPushButton:hover{\n"
"color:white;\n"
"background:#8b0000;\n"
"border:2px solid white;\n"
"border-radius:15px;\n"
"\n"
"}\n"
""));
        pushButton = new QPushButton(consultation);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 20, 101, 31));
        d1 = new QLineEdit(consultation);
        d1->setObjectName(QString::fromUtf8("d1"));
        d1->setGeometry(QRect(220, 220, 571, 71));
        label = new QLabel(consultation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 240, 121, 41));
        line = new QFrame(consultation);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(180, 260, 571, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(consultation);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 360, 121, 41));
        d2 = new QLineEdit(consultation);
        d2->setObjectName(QString::fromUtf8("d2"));
        d2->setGeometry(QRect(210, 360, 621, 61));
        line_2 = new QFrame(consultation);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(180, 410, 571, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(consultation);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(170, 330, 20, 81));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(consultation);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(740, 330, 20, 81));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pushButton_2 = new QPushButton(consultation);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 450, 131, 41));
        tableView = new QTableView(consultation);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(830, 100, 481, 541));

        retranslateUi(consultation);

        QMetaObject::connectSlotsByName(consultation);
    } // setupUi

    void retranslateUi(QDialog *consultation)
    {
        consultation->setWindowTitle(QCoreApplication::translate("consultation", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("consultation", "BACK", nullptr));
        label->setText(QCoreApplication::translate("consultation", "Disease Type :", nullptr));
        label_2->setText(QCoreApplication::translate("consultation", "Description :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("consultation", "ATTACH", nullptr));
    } // retranslateUi

};

namespace Ui {
    class consultation: public Ui_consultation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTATION_H
