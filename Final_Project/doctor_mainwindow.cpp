#include "doctor_mainwindow.h"
#include "ui_doctor_mainwindow.h"
#include "menu.h"

doctor_mainwindow::doctor_mainwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::doctor_mainwindow)
{
    ui->setupUi(this);
}

doctor_mainwindow::~doctor_mainwindow()
{
    delete ui;
}

void doctor_mainwindow::on_pushButton_clicked()
{

    QString username = ui->fn->text();
    QString lastname = ui->ln->text();
    QString docreg = ui->dr->text();
    QString spec = ui->sp->text();
    QString phone = ui->pn->text();
    QString email = ui->em->text();
    QString password = ui->pass->text();

    if(!connopen()){
          qDebug()<<"Failed to Open";
          return;
    }
    connopen();

    QSqlQuery qry;

    if(username!="" and password!="" and spec!="")
    {
       qry.prepare("INSERT INTO doctor_login(firstname,lastname,reg_no,speciality,phone,email,password) values('"+username+"','"+lastname+"','"+docreg+"','"+spec+"','"+phone+"','"+email+"','"+password+"')");
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
    }


void doctor_mainwindow::on_pushButton_2_clicked()
{
    QString username,password;
    username= ui->userlog->text();
    password= ui->passlog->text();



    if(!connopen()){
        qDebug()<<"Failed to Open";
        return;
    }

    connopen();
    QSqlQuery qry;
    qry.prepare("select * from doctor_login where firstname='"+username+"' and password='"+password+"' ");

    if(qry.exec()){

        int counter=0;
        while(qry.next()){
            counter++;
        }
        if(counter>0){
            //QMessageBox::information(this,"SUCCESSFULL","Login Successfull");

            second_page spage;
            spage.setLabel(username);
            this->hide();
            spage.exec();
            connclose();
        }
        else{
               QMessageBox::information(this,"FAILED","Login Failed");
        }

}

}

void doctor_mainwindow::on_pushButton_3_clicked()
{
   //m= new Menu();
    //m->show();
}
