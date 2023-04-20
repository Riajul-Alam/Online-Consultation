#include "second_page.h"
#include "ui_second_page.h"





QString hello;

second_page::second_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::second_page)
    {
    ui->setupUi(this);

}

second_page::~second_page()
{
    delete ui;
}


void second_page::setLabel(QString str)
{
    hello=str;
    ui->label->setText(hello);

    doctor_mainwindow conn;

    QSqlQueryModel * mo = new QSqlQueryModel();
    conn.connopen();
    QSqlQuery* qry=new QSqlQuery(conn.db);
    qry->prepare("SELECT  patient_id, first_name,disease,description,status FROM patient_consultation where doctor='"+hello+"' ");
    qry->exec();
    mo->setQuery(*qry);
    ui->tableView->setModel(mo);
    conn.connclose();

    conn.connopen();
    QSqlQueryModel * modaal = new QSqlQueryModel();
    QSqlQuery* qryy=new QSqlQuery(conn.db);
    qryy->prepare("SELECT patient_name,ap_time FROM patient_appointment where doctor_name='"+hello+"'");
    qryy->exec();
    modaal->setQuery(*qryy);
    ui->tableView_2->setModel(modaal);
    conn.connclose();

}

void second_page::on_pushButton_clicked()
{
    doctor_mainwindow dm;
    this->hide();
    dm.exec();
}

QString ind;
void second_page::on_tableView_activated(const QModelIndex &index)
{
    ind=ui->tableView->model()->data(index).toString();
}


void second_page::on_pushButton_2_clicked()
{
    QString diso = ui->at->text();

    doctor_mainwindow conn;

    if(!conn.connopen()){
          qDebug()<<"Failed to Open";
          return;
    }
    conn.connopen();

    QSqlQuery qryyyy;

    QString sts="Replied";
    qryyyy.prepare("update patient_consultation set feedback='"+diso+"',status='"+sts+"' where patient_id='"+ind+"'");
    if(qryyyy.exec()){
       QMessageBox::information(this,"Attached","Your valuable details attached succesfully.");

    }
     else{
       QMessageBox::information(this,"Not Inserted","Failed");
    }
     conn.connclose();
}



