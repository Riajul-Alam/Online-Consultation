#ifndef DOCTOR_MAINWINDOW_H
#define DOCTOR_MAINWINDOW_H

#include <QDialog>
#include<QSqlDatabase>
#include<QtSql>
#include<QMessageBox>
#include<QString>
#include<QDebug>
#include "second_page.h"
#include "menu.h"

namespace Ui {
class doctor_mainwindow;
}

class doctor_mainwindow : public QDialog
{
    Q_OBJECT

public:
    explicit doctor_mainwindow(QWidget *parent = nullptr);


    QSqlDatabase db;
    bool connopen(){
        db=QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("E:/works DIRECTORY/project QT/PROJECT 2nd Semester/DB/patient_details.db");

        if(db.open()){
        qDebug()<<("DATABASE successfully connected");
        return true;
        }
    else{
        qDebug()<<("DATABASE connection failed");
        return false;
        }
    }

    void connclose()
    {
        db.close();
        db.removeDatabase(QSqlDatabase::defaultConnection);
    }



    ~doctor_mainwindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::doctor_mainwindow *ui;
    //second_page *spage;
     //Menu *m;

};

#endif // DOCTOR_MAINWINDOW_H
