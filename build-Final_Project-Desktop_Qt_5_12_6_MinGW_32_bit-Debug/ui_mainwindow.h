/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLineEdit *login_username;
    QLabel *label;
    QFrame *line;
    QLabel *label_2;
    QLineEdit *login_password;
    QFrame *line_2;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QLineEdit *firstname_sign;
    QLineEdit *lastname_sign;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QDateEdit *bdate_sign;
    QLabel *label_6;
    QLineEdit *blood_group_sign;
    QLabel *label_7;
    QLineEdit *phone_sign;
    QLabel *label_8;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QLineEdit *password_sign;
    QFrame *line_7;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1350, 750);
        MainWindow->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"border:none;\n"
"border-radius:10px;\n"
"color:white;\n"
"background:#8b0000;\n"
"font-family: \"Roboto\",sans-serif;\n"
"\n"
"font-size:5px;\n"
"font-weight:lighter;\n"
"\n"
"border-top-right-radius: 6px;\n"
"border-bottom-right-radius: 30px;\n"
"\n"
" font-size: 15px;\n"
"\n"
" text-align: center;\n"
"\n"
" margin: 5px;\n"
" font-family: \"Roboto\",sans-serif;\n"
"}\n"
"\n"
"QGroupBox{\n"
"border:2px solid #8b0000;\n"
"border-radius:70px;\n"
"font-size: 15px;\n"
"color: white;\n"
"text-align: center;\n"
"font-weight: bold;\n"
"margin: 5px;\n"
"font-family: \"Roboto\",sans-serif;\n"
"}\n"
"\n"
"\n"
"QLabel{\n"
"    font-size: 13px;\n"
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
"font-size:15px;\n"
"font-weight: 200;\n"
"font-weight:bold;\n"
"    padding:20px 10px;\n"
""
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
"color:white;\n"
"background:#8b0000;\n"
"border:2px solid white;\n"
"border-radius:15px;\n"
"\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"	border-image: url(:/images/login3.jpeg);\n"
"	background-size:cover;\n"
"}"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(70, 140, 391, 461));
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"font-size:25px;\n"
"}"));
        login_username = new QLineEdit(groupBox);
        login_username->setObjectName(QString::fromUtf8("login_username"));
        login_username->setGeometry(QRect(70, 150, 221, 21));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 110, 141, 31));
        label->setStyleSheet(QString::fromUtf8("#label{\n"
"font-size:15px;\n"
"}\n"
""));
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(80, 170, 221, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 220, 171, 31));
        label_2->setStyleSheet(QString::fromUtf8("#label_2{\n"
"font-size:15px;\n"
"}\n"
"\n"
""));
        login_password = new QLineEdit(groupBox);
        login_password->setObjectName(QString::fromUtf8("login_password"));
        login_password->setGeometry(QRect(70, 260, 271, 20));
        login_password->setEchoMode(QLineEdit::Password);
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(80, 280, 221, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 350, 161, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8(""));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(850, 80, 431, 611));
        groupBox_2->setStyleSheet(QString::fromUtf8("#groupBox_2{\n"
"font-size:25px;\n"
"}"));
        firstname_sign = new QLineEdit(groupBox_2);
        firstname_sign->setObjectName(QString::fromUtf8("firstname_sign"));
        firstname_sign->setGeometry(QRect(80, 90, 251, 21));
        firstname_sign->setStyleSheet(QString::fromUtf8(""));
        lastname_sign = new QLineEdit(groupBox_2);
        lastname_sign->setObjectName(QString::fromUtf8("lastname_sign"));
        lastname_sign->setGeometry(QRect(80, 160, 231, 21));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 50, 181, 41));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 140, 111, 20));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 200, 121, 31));
        bdate_sign = new QDateEdit(groupBox_2);
        bdate_sign->setObjectName(QString::fromUtf8("bdate_sign"));
        bdate_sign->setGeometry(QRect(80, 240, 281, 41));
        bdate_sign->setStyleSheet(QString::fromUtf8("background:#F0F0F0;\n"
"color:#8b0000;"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 290, 121, 31));
        label_6->setStyleSheet(QString::fromUtf8(""));
        blood_group_sign = new QLineEdit(groupBox_2);
        blood_group_sign->setObjectName(QString::fromUtf8("blood_group_sign"));
        blood_group_sign->setGeometry(QRect(80, 320, 261, 20));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 360, 101, 31));
        phone_sign = new QLineEdit(groupBox_2);
        phone_sign->setObjectName(QString::fromUtf8("phone_sign"));
        phone_sign->setGeometry(QRect(70, 390, 291, 21));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(80, 440, 181, 21));
        line_3 = new QFrame(groupBox_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(80, 110, 281, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(groupBox_2);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(80, 180, 281, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(groupBox_2);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(80, 340, 271, 20));
        line_5->setStyleSheet(QString::fromUtf8(""));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(groupBox_2);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(80, 410, 271, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        password_sign = new QLineEdit(groupBox_2);
        password_sign->setObjectName(QString::fromUtf8("password_sign"));
        password_sign->setGeometry(QRect(70, 460, 331, 21));
        password_sign->setEchoMode(QLineEdit::Password);
        line_7 = new QFrame(groupBox_2);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(80, 480, 271, 16));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 520, 221, 41));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(610, 370, 111, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton{\n"
"color:#8b0000;\n"
"font-weight:bold;\n"
"font-size:13px;\n"
"background-color:transparent;\n"
"border:2px solid white;\n"
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
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "LogIn", nullptr));
        login_username->setPlaceholderText(QApplication::translate("MainWindow", "i.e. Jon", nullptr));
        label->setText(QApplication::translate("MainWindow", "Username", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Password", nullptr));
        login_password->setPlaceholderText(QApplication::translate("MainWindow", "*****", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "LOGIN", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Sign Up", nullptr));
        firstname_sign->setPlaceholderText(QApplication::translate("MainWindow", "e.g. Arpil", nullptr));
        lastname_sign->setPlaceholderText(QApplication::translate("MainWindow", "e.g. Barua", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "First Name (username)", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Last Name", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Birth Date", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Blood Group", nullptr));
        blood_group_sign->setPlaceholderText(QApplication::translate("MainWindow", "e.g. A+", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Phone No.", nullptr));
        phone_sign->setPlaceholderText(QApplication::translate("MainWindow", "+8801851-**133*", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Create Password", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Open Account", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "HOME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
