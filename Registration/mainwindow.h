#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include<QString>
#include<QDebug>
#include"secondpage.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
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

    void connclose(){
        db.close();
        db.removeDatabase(QSqlDatabase::defaultConnection);
      }


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
