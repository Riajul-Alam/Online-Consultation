/********************************************************************************
** Form generated from reading UI file 'doctor_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTOR_MAINWINDOW_H
#define UI_DOCTOR_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_doctor_mainwindow
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *userlog;
    QFrame *line;
    QLineEdit *passlog;
    QFrame *line_2;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *fn;
    QLineEdit *ln;
    QLineEdit *dr;
    QLineEdit *sp;
    QLineEdit *pn;
    QLineEdit *em;
    QLineEdit *pass;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *doctor_mainwindow)
    {
        if (doctor_mainwindow->objectName().isEmpty())
            doctor_mainwindow->setObjectName(QString::fromUtf8("doctor_mainwindow"));
        doctor_mainwindow->resize(1350, 750);
        doctor_mainwindow->setStyleSheet(QString::fromUtf8("doctor_mainwindow{\n"
"	border-image: url(:/images/doctor_main.jpeg);\n"
"	background-size:cover;\n"
"}\n"
"\n"
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
"border-bottom-right-radius: 80px;\n"
"border-bottom-left-radius: 80px;\n"
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
"border:2px;\n"
"border-radius:10px;\n"
"\n"
"\n"
"    font-size: 22px;\n"
"   color:rgb(255, 0, 110);\n"
"    text-align: center;\n"
"    font-weight: bold;\n"
"    margin: 5px;\n"
"  font-family: \"Roboto\",sans-serif;\n"
"background: #EBECF0;\n"
"\n"
"border-top-left-radius: 120px;\n"
"border-top-right-radius: 120px;\n"
"\n"
"border-bottom-right-radius: 30px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"QLabel{\n"
"    font-size: 16px"
                        ";\n"
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
"color: black;\n"
"font-size:14px;\n"
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
"color:white;\n"
"font-weight:bold;\n"
"font-size:13px;\n"
"background-color:transparent;\n"
"border:2px solid #8b0000;\n"
"border-radius:15px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:#8b0000;\n"
"background: white;\n"
"border:2px solid #8b0000;\n"
"border-radius:15px;\n"
"\n"
"}\n"
""));
        groupBox = new QGroupBox(doctor_mainwindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(100, 100, 351, 431));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 120, 121, 41));
        userlog = new QLineEdit(groupBox);
        userlog->setObjectName(QString::fromUtf8("userlog"));
        userlog->setGeometry(QRect(50, 140, 261, 71));
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(60, 200, 231, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        passlog = new QLineEdit(groupBox);
        passlog->setObjectName(QString::fromUtf8("passlog"));
        passlog->setGeometry(QRect(50, 290, 241, 61));
        passlog->setContextMenuPolicy(Qt::NoContextMenu);
        passlog->setEchoMode(QLineEdit::Password);
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(60, 340, 231, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 260, 111, 41));
        groupBox_2 = new QGroupBox(doctor_mainwindow);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(810, 40, 441, 601));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 90, 121, 41));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 160, 101, 51));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 240, 151, 41));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 360, 121, 41));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 490, 151, 51));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(50, 300, 101, 41));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(50, 430, 91, 31));
        fn = new QLineEdit(groupBox_2);
        fn->setObjectName(QString::fromUtf8("fn"));
        fn->setGeometry(QRect(50, 110, 311, 71));
        ln = new QLineEdit(groupBox_2);
        ln->setObjectName(QString::fromUtf8("ln"));
        ln->setGeometry(QRect(50, 190, 301, 61));
        dr = new QLineEdit(groupBox_2);
        dr->setObjectName(QString::fromUtf8("dr"));
        dr->setGeometry(QRect(50, 260, 291, 61));
        sp = new QLineEdit(groupBox_2);
        sp->setObjectName(QString::fromUtf8("sp"));
        sp->setGeometry(QRect(50, 320, 291, 61));
        pn = new QLineEdit(groupBox_2);
        pn->setObjectName(QString::fromUtf8("pn"));
        pn->setGeometry(QRect(50, 380, 291, 61));
        em = new QLineEdit(groupBox_2);
        em->setObjectName(QString::fromUtf8("em"));
        em->setGeometry(QRect(50, 440, 321, 71));
        pass = new QLineEdit(groupBox_2);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setGeometry(QRect(50, 530, 321, 51));
        pass->setEchoMode(QLineEdit::Password);
        line_3 = new QFrame(groupBox_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(50, 150, 281, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(groupBox_2);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(50, 226, 281, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(groupBox_2);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(60, 300, 271, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(groupBox_2);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(60, 360, 271, 20));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(groupBox_2);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(60, 485, 281, 31));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(groupBox_2);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(60, 426, 271, 20));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(groupBox_2);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(60, 560, 281, 21));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(doctor_mainwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(910, 650, 231, 51));
        pushButton_2 = new QPushButton(doctor_mainwindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 550, 141, 51));
        pushButton_3 = new QPushButton(doctor_mainwindow);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(580, 10, 101, 31));

        retranslateUi(doctor_mainwindow);

        QMetaObject::connectSlotsByName(doctor_mainwindow);
    } // setupUi

    void retranslateUi(QDialog *doctor_mainwindow)
    {
        doctor_mainwindow->setWindowTitle(QCoreApplication::translate("doctor_mainwindow", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("doctor_mainwindow", "LogIn", nullptr));
        label->setText(QCoreApplication::translate("doctor_mainwindow", "Username ", nullptr));
        userlog->setPlaceholderText(QCoreApplication::translate("doctor_mainwindow", "e.g. Riajul", nullptr));
        passlog->setPlaceholderText(QCoreApplication::translate("doctor_mainwindow", "* * * * * * * * * ", nullptr));
        label_2->setText(QCoreApplication::translate("doctor_mainwindow", "Password", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("doctor_mainwindow", "Sign Up", nullptr));
        label_3->setText(QCoreApplication::translate("doctor_mainwindow", "First Name", nullptr));
        label_4->setText(QCoreApplication::translate("doctor_mainwindow", "Last Name", nullptr));
        label_5->setText(QCoreApplication::translate("doctor_mainwindow", "Doc Registration", nullptr));
        label_6->setText(QCoreApplication::translate("doctor_mainwindow", "Phone", nullptr));
        label_7->setText(QCoreApplication::translate("doctor_mainwindow", "Password", nullptr));
        label_8->setText(QCoreApplication::translate("doctor_mainwindow", "Speciality", nullptr));
        label_9->setText(QCoreApplication::translate("doctor_mainwindow", "Email", nullptr));
        fn->setPlaceholderText(QCoreApplication::translate("doctor_mainwindow", "Md. Injamamul", nullptr));
        ln->setPlaceholderText(QCoreApplication::translate("doctor_mainwindow", "Haque", nullptr));
        dr->setPlaceholderText(QCoreApplication::translate("doctor_mainwindow", "e.g. 145563258", nullptr));
        sp->setPlaceholderText(QCoreApplication::translate("doctor_mainwindow", "e.g. neurologist", nullptr));
        pn->setPlaceholderText(QCoreApplication::translate("doctor_mainwindow", "+88 015* * * * * * * *", nullptr));
        em->setPlaceholderText(QCoreApplication::translate("doctor_mainwindow", "e.g. emonbhai@gmail.com", nullptr));
        pass->setPlaceholderText(QCoreApplication::translate("doctor_mainwindow", "* * * * * *  * *", nullptr));
        pushButton->setText(QCoreApplication::translate("doctor_mainwindow", "Create Account", nullptr));
        pushButton_2->setText(QCoreApplication::translate("doctor_mainwindow", "Sign In", nullptr));
        pushButton_3->setText(QCoreApplication::translate("doctor_mainwindow", "HOME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doctor_mainwindow: public Ui_doctor_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTOR_MAINWINDOW_H
