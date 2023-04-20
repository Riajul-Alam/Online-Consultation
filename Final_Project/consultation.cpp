#include "consultation.h"
#include "ui_consultation.h"
#include "secondpage.h"
#include "mainwindow.h"




QString s;
void consultation::settLabel(QString str)
{
    s=str;

}

QString produ;
void consultation::setttLabel(QString strr)
{
   produ=strr;

   MainWindow conn;

   QSqlQueryModel * mo = new QSqlQueryModel();
   conn.connopen();
   QSqlQuery* qry=new QSqlQuery(conn.db);
   qry->prepare("SELECT first_name,disease,description,doctor,feedback FROM patient_consultation where first_name='"+s+"' ");
   qry->exec();
   mo->setQuery(*qry);
   ui->tableView->setModel(mo);
   conn.connclose();
}



consultation::consultation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::consultation)
{
    ui->setupUi(this);


}

consultation::~consultation()
{
    delete ui;
}

void consultation::on_pushButton_clicked()
{


   this->hide();

    Secondpage sp;
    sp.setModal(true);
    sp.exec();


    //secpg= new Secondpage();
    //secpg->show();

}







void consultation::on_pushButton_2_clicked()
{
    QString dis = ui->d1->text();
    QString des = ui->d2->text();


    MainWindow conn;

    if(!conn.connopen()){
          qDebug()<<"Failed to Open";
          return;
    }
    conn.connopen();

    QSqlQuery qry;

    qry.prepare("INSERT INTO patient_consultation(first_name,disease,description,doctor) values('"+s+"','"+dis+"','"+des+"','"+produ+"')");
    if(qry.exec()){
       QMessageBox::information(this,"Attached","Your valuable details attached succesfully.");
       conn.connclose();
    }
     else{
       QMessageBox::information(this,"Not Inserted","Failed");
    }
}



