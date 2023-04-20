#include "secondpage.h"
#include "ui_secondpage.h"

#include "consultation.h"
//#include "appoinment.h"
#include "mainwindow.h"

QString sr;
void Secondpage::setLabel(QString str)
{
    sr=str;
    ui->welcome->setText(sr);

}


QString product;
QString value;
//void Secondpage::on_listView_activated(const QModelIndex &index)
//{
 //   product=ui->listView->model()->data(index).toString();

//}


void Secondpage::on_listView_clicked(const QModelIndex &index)
{
    product=ui->listView->model()->data(index).toString();
    //value=ui->listView->model()->data(index).toString();
}



void Secondpage::on_pushButton_2_clicked()
{
    if(product!=""){
    this->hide();
    consultation consult;
    consult.setttLabel(product);
    //consult.setModal(true);
    consult.exec();
    }
    else{
        QMessageBox::information(this,"Not Allowed","Please select a Doctor");
    }

}



Secondpage::Secondpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Secondpage)
{
    ui->setupUi(this);

    MainWindow conn;

    QSqlQueryModel * modal = new QSqlQueryModel();
    conn.connopen();
    QSqlQuery* qry=new QSqlQuery(conn.db);
    qry->prepare("SELECT firstname,lastname,speciality FROM doctor_login");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    conn.connclose();

    QSqlQueryModel * modaal = new QSqlQueryModel();
    conn.connopen();
    QSqlQuery* qryy=new QSqlQuery(conn.db);
    qryy->prepare("SELECT speciality FROM doctor_login");
    qryy->exec();
    modaal->setQuery(*qryy);
    ui->comboBox->setModel(modaal);

    conn.connclose();


      ui->welcome->setText(sr);
      //ui->label_3->setText(product);
      //qDebug<<(modal->rowCount());
}

Secondpage::~Secondpage()
{
    delete ui;
}



void Secondpage::on_pushButton_3_clicked()
{
    if(product!=""){
    this->hide();
    appoinment appoin;
    // appoin.setModal(true);
    appoin.setLabel2(product);
    appoin.exec();
    }
    else{
        QMessageBox::information(this,"Not Allowed","Please select a Doctor");
    }
}






void Secondpage::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QString name=ui->comboBox->currentText();

    MainWindow conn;

    if(!conn.connopen()){
        qDebug()<<"Failed to Open";
        return;
    }
    //QSqlQuery qry;
    QSqlQueryModel * modaal = new QSqlQueryModel();
    conn.connopen();
    QSqlQuery* qryy=new QSqlQuery(conn.db);
    qryy->prepare("SELECT firstname,lastname FROM doctor_login where speciality='"+name+"'");
    qryy->exec();
    modaal->setQuery(*qryy);
    ui->listView->setModel(modaal);

    conn.connclose();

    //qDebug<<(modal->rowCount());






   // conn.connopen();
    //QSqlQuery qry;
   // qry.prepare("select * from doctor_login where speciality='"+name+"'");

    //if(qry.exec()){

      //  while(qry.next())
        //{

       // }

           // conn.connclose();
        //}
       // else{
           //    QMessageBox::information(this,"FAILED","Sorry!");
        //}

}












void Secondpage::on_pushButton_clicked()
{
    this->hide();
    //MainWindow mn;
    //mn.exec();

    sg= new MainWindow();
    sg->show();
}

