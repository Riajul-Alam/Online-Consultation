#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "consultation.h"
#include "secondpage.h"
#include "menu.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //if(connopen()){

    //QMessageBox::information(this,"connected","DATABASE successfully connected");
//}
//else{
    //QMessageBox::information(this,"not connected","DATABASE connection failed");

//}
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    QString username,password;
    username= ui->login_username->text();
    password= ui->login_password->text();



    if(!connopen()){
        qDebug()<<"Failed to Open";
        return;
    }

    connopen();
    QSqlQuery qry;
    qry.prepare("select * from patient_login where first_name='"+username+"' and password='"+password+"' ");

    if(qry.exec()){

        int counter=0;
        while(qry.next()){
            counter++;
        }
        if(counter>0){
            //QMessageBox::information(this,"SUCCESSFULL","Login Successfull");
            connclose();
            this->hide();
            QString take;
            take=username;
            Secondpage secpage;
            consultation cons;
            appoinment app;
            secpage.setLabel(take);
            cons.settLabel(take);
            app.setLabel1(take);
            secpage.setModal(true);
            secpage.exec();
            //cons.exec();

                }
        else{
               QMessageBox::information(this,"FAILED","Login Failed");
        }

}


    //Secondpage secD;

   // secD.exec();
}

void MainWindow::on_pushButton_clicked()
{
        QString username = ui->firstname_sign->text();
        QString lastname = ui->lastname_sign->text();
        QString bdate = ui->bdate_sign->text();
        QString bloodgroup = ui->blood_group_sign->text();
        QString phone = ui->phone_sign->text();
        QString password = ui->password_sign->text();

        if(!connopen()){
              qDebug()<<"Failed to Open";
              return;
        }
        connopen();

        QSqlQuery qry;
        if(username!="" and password!=""){
        qry.prepare("INSERT INTO patient_login(first_name,last_name,birth_date,blood_group,phone_no,password) values('"+username+"','"+lastname+"','"+bdate+"','"+bloodgroup+"','"+phone+"','"+password+"')");
        if(qry.exec()){
           QMessageBox::information(this,"Inserted","Account Open Successfully");
           connclose();
        }
         else{
           QMessageBox::information(this,"Not Inserted","Account Open Failed");
        }
        }
        else{
             QMessageBox::information(this,"Not Inserted","Please fill up the field");
        }

         //connopen();
         //QSqlQuery qryy;
        //qryy.prepare("INSERT INTO patient_consultation(first_name,last_name) values('"+username+"','"+lastname+"')");
        //if(qryy.exec()){
          // QMessageBox::information(this,"Inserted","Account Open Successfully");
          // connclose();
       // }
        // else{
          // QMessageBox::information(this,"Not Inserted","Account Open Failed");
        //}
}

void MainWindow::on_pushButton_3_clicked()
{
   this->hide();
   Menu mn;
   mn.show();
   //mn.exec();

}
