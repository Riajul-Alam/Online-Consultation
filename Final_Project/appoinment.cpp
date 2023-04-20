#include "appoinment.h"
#include "ui_appoinment.h"


QString s1;
void appoinment::setLabel1(QString str)
{
    s1=str;

}

QString s2;
void appoinment::setLabel2(QString strr)
{
   s2=strr;
   //ui->c2->setText(s2);

}

int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0;
QString status="[Booked]";

void appoinment::on_pushButton_2_clicked()
{
     MainWindow conn;
     if(!conn.connopen()){
           qDebug()<<"Failed to Open";
           return;
     }
     conn.connopen();
     QSqlQuery qry;
     QString time;

    if(ui->m1->isChecked()){
        QMessageBox::information(0,"Fixed","You're appointed for 9'0 clock morning ");

       // MainWindow conn;

       // if(!conn.connopen()){
         //     qDebug()<<"Failed to Open";
        //      return;
        //}
        //conn.connopen();

        //QSqlQuery qry;
        //QString time;

        time="9am";
        qry.prepare("INSERT INTO patient_appointment(patient_name,ap_time,doctor_name) values('"+s1+"','"+time+"','"+s2+"')");
        if(qry.exec()){
           //QMessageBox::information(this,"Attached","Your valuable details attached succesfully.");
           conn.connclose();
        }
         else{
           //QMessageBox::information(this,"Not Inserted","Failed");
        }

        ui->at->setText(status);
        a=1;
    }


    if(ui->m2->isChecked()){
        QMessageBox::information(0,"Fixed","You're appointed for 10'0 clock morning ");

        time="10am";
        qry.prepare("INSERT INTO patient_appointment(patient_name,ap_time,doctor_name) values('"+s1+"','"+time+"','"+s2+"')");
        if(qry.exec()){
           //QMessageBox::information(this,"Attached","Your valuable details attached succesfully.");
           conn.connclose();
        }
         else{
           //QMessageBox::information(this,"Not Inserted","Failed");
        }
        ui->at1->setText(status);
        b=1;

    }
    if(ui->m3->isChecked()){
        QMessageBox::information(0,"Fixed","You're appointed for 11'0 clock morning ");

        time="11am";
        qry.prepare("INSERT INTO patient_appointment(patient_name,ap_time,doctor_name) values('"+s1+"','"+time+"','"+s2+"')");
        if(qry.exec()){
           //QMessageBox::information(this,"Attached","Your valuable details attached succesfully.");
           conn.connclose();
        }
         else{
           //QMessageBox::information(this,"Not Inserted","Failed");
        }
        ui->at3->setText(status);
        c=1;
    }
    if(ui->m4->isChecked()){
        QMessageBox::information(0,"Fixed","You're appointed for 12'0 clock noon ");
        time="12pm";
        qry.prepare("INSERT INTO patient_appointment(patient_name,ap_time,doctor_name) values('"+s1+"','"+time+"','"+s2+"')");
        if(qry.exec()){
           //QMessageBox::information(this,"Attached","Your valuable details attached succesfully.");
           conn.connclose();
        }
         else{
           //QMessageBox::information(this,"Not Inserted","Failed");
        }

        ui->at4->setText(status);
        d=1;
    }
    if(ui->n1->isChecked()){
        QMessageBox::information(0,"Fixed","You're appointed for 3'0 clock noon ");
        time="3pm";
        qry.prepare("INSERT INTO patient_appointment(patient_name,ap_time,doctor_name) values('"+s1+"','"+time+"','"+s2+"')");
        if(qry.exec()){
           //QMessageBox::information(this,"Attached","Your valuable details attached succesfully.");
           conn.connclose();
        }
         else{
           //QMessageBox::information(this,"Not Inserted","Failed");
        }
        ui->at5->setText(status);
        e=1;
    }
    if(ui->n2->isChecked()){
        QMessageBox::information(0,"Fixed","You're appointed for 4'0 clock afternoon ");
        time="4pm";
        qry.prepare("INSERT INTO patient_appointment(patient_name,ap_time,doctor_name) values('"+s1+"','"+time+"','"+s2+"')");
        if(qry.exec()){
           //QMessageBox::information(this,"Attached","Your valuable details attached succesfully.");
           conn.connclose();
        }
         else{
           //QMessageBox::information(this,"Not Inserted","Failed");
        }
        ui->at6->setText(status);
        f=1;
    }
    if(ui->n3->isChecked()){
        QMessageBox::information(0,"Fixed","You're appointed for 5'0 clock afternoon ");
        time="5pm";
        qry.prepare("INSERT INTO patient_appointment(patient_name,ap_time,doctor_name) values('"+s1+"','"+time+"','"+s2+"')");
        if(qry.exec()){
           //QMessageBox::information(this,"Attached","Your valuable details attached succesfully.");
           conn.connclose();
        }
         else{
           //QMessageBox::information(this,"Not Inserted","Failed");
        }
        ui->at7->setText(status);
        g=1;
    }
    if(ui->n4->isChecked()){
        QMessageBox::information(0,"Fixed","You're appointed for 7'0 clock afternoon ");
        time="7pm";
        qry.prepare("INSERT INTO patient_appointment(patient_name,ap_time,doctor_name) values('"+s1+"','"+time+"','"+s2+"')");
        if(qry.exec()){
           //QMessageBox::information(this,"Attached","Your valuable details attached succesfully.");
           conn.connclose();
        }
         else{
           //QMessageBox::information(this,"Not Inserted","Failed");
        }
        ui->at8->setText(status);
        h=1;
    }
    if(ui->r1->isChecked()){
        QMessageBox::information(0,"Fixed","You're appointed for 8'0 clock night ");
        time="8pm";
        qry.prepare("INSERT INTO patient_appointment(patient_name,ap_time,doctor_name) values('"+s1+"','"+time+"','"+s2+"')");
        if(qry.exec()){
           //QMessageBox::information(this,"Attached","Your valuable details attached succesfully.");
           conn.connclose();
        }
         else{
           //QMessageBox::information(this,"Not Inserted","Failed");
        }
        ui->at9->setText(status);
        i=1;
    }
    if(ui->r2->isChecked()){
        QMessageBox::information(0,"Fixed","You're appointed for 9'0 clock night ");
        time="9pm";
        qry.prepare("INSERT INTO patient_appointment(patient_name,ap_time,doctor_name) values('"+s1+"','"+time+"','"+s2+"')");
        if(qry.exec()){
           //QMessageBox::information(this,"Attached","Your valuable details attached succesfully.");
           conn.connclose();
        }
         else{
           //QMessageBox::information(this,"Not Inserted","Failed");
        }
        ui->at10->setText(status);
        j=1;
    }
    if(ui->r3->isChecked()){
        QMessageBox::information(0,"Fixed","You're appointed for 10'0 clock night ");
        time="10pm";
        qry.prepare("INSERT INTO patient_appointment(patient_name,ap_time,doctor_name) values('"+s1+"','"+time+"','"+s2+"')");
        if(qry.exec()){
           //QMessageBox::information(this,"Attached","Your valuable details attached succesfully.");
           conn.connclose();
        }
         else{
           //QMessageBox::information(this,"Not Inserted","Failed");
        }
        ui->at11->setText(status);
        k=1;
    }
    if(ui->r4->isChecked()){
        QMessageBox::information(0,"Fixed","You're appointed for 11'0 clock night ");
        time="11pm";
        qry.prepare("INSERT INTO patient_appointment(patient_name,ap_time,doctor_name) values('"+s1+"','"+time+"','"+s2+"')");
        if(qry.exec()){
           //QMessageBox::information(this,"Attached","Your valuable details attached succesfully.");
           conn.connclose();
        }
         else{
           //QMessageBox::information(this,"Not Inserted","Failed");
        }
        ui->at12->setText(status);
        l=1;
    }
}


appoinment::appoinment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::appoinment)
{
    ui->setupUi(this);
    //ui->c1->setText(s1);

    if(a==1){
        //ui->at->setText(status);
    }
    if(b==1){
       // ui->at1->setText(status);
    }
    if(c==1){
      //  ui->at3->setText(status);
    }
    if(d==1){
       // ui->at4->setText(status);
    }
    if(e==1){
       // ui->at5->setText(status);
    }
    if(f==1){
       // ui->at6->setText(status);
    }
    if(g==1){
       // ui->at7->setText(status);
    }
    if(h==1){
       // ui->at8->setText(status);
    }
    if(i==1){
       // ui->at9->setText(status);
    }
    if(j==1){
       // ui->at10->setText(status);
    }
    if(k==1){
       // ui->at11->setText(status);
    }
    if(l==1){
      //  ui->at12->setText(status);
    }

}

void appoinment::on_pushButton_clicked()
{
    this->hide();
    //secpg= new Secondpage();
    //secpg->show();

    Secondpage sp;
    sp.setModal(true);
    sp.exec();
}


appoinment::~appoinment()
{
    delete ui;
}









void appoinment::on_pushButton_3_clicked()
{

        //Here we also working for booked slot (from DB) ,when new user appoint

      MainWindow conn;
         QString appointTime="9am";
        if(!conn.connopen()){
            qDebug()<<"Failed to Open";
            return;
        }
        conn.connopen();
        QSqlQuery qry;
        qry.prepare("select * from patient_appointment where ap_time='"+appointTime+"' and doctor_name='"+s2+"'");

        if(qry.exec()){

         int counter=0;
         while(qry.next()){
             counter++;
          }
         if(counter>0){
            ui->at->setText(status);
            conn.connclose();
         }
        }

        // 10 AM

       appointTime="10am";
       if(!conn.connopen()){
           qDebug()<<"Failed to Open";
           return;
       }
       conn.connopen();
       QSqlQuery qry2;
       qry2.prepare("select * from patient_appointment where ap_time='"+appointTime+"' and doctor_name='"+s2+"'");

       if(qry2.exec()){

        int counter=0;
        while(qry2.next()){
            counter++;
         }
        if(counter>0){
           ui->at1->setText(status);
           conn.connclose();
        }
       }

       // 11 AM

       appointTime="11am";
      if(!conn.connopen()){
          qDebug()<<"Failed to Open";
          return;
      }
      conn.connopen();
      QSqlQuery qry3;
      qry3.prepare("select * from patient_appointment where ap_time='"+appointTime+"' and doctor_name='"+s2+"'");

      if(qry3.exec()){

       int counter=0;
       while(qry3.next()){
           counter++;
        }
       if(counter>0){
          ui->at3->setText(status);
          conn.connclose();
       }
      }
      // 12 AM

       appointTime="12am";
       if(!conn.connopen()){
         qDebug()<<"Failed to Open";
         return;
       }
       conn.connopen();
       QSqlQuery qry4;
       qry4.prepare("select * from patient_appointment where ap_time='"+appointTime+"' and doctor_name='"+s2+"'");

        if(qry4.exec()){

      int counter=0;
      while(qry4.next()){
          counter++;
       }
      if(counter>0){
         ui->at4->setText(status);
         conn.connclose();
      }
     }

     // 3 PM

       appointTime="3pm";
        if(!conn.connopen()){
        qDebug()<<"Failed to Open";
        return;
          }
           conn.connopen();
           QSqlQuery qry5;
           qry5.prepare("select * from patient_appointment where ap_time='"+appointTime+"' and doctor_name='"+s2+"'");

          if(qry5.exec()){

            int counter=0;
          while(qry5.next()){
             counter++;
             }
          if(counter>0){
           ui->at5->setText(status);
            conn.connclose();
        }
       }
          // 4 PM

         appointTime="4pm";
          if(!conn.connopen()){
         qDebug()<<"Failed to Open";
         return;
          }
         conn.connopen();
        QSqlQuery qry6;
        qry6.prepare("select * from patient_appointment where ap_time='"+appointTime+"' and doctor_name='"+s2+"'");

        if(qry6.exec()){

        int counter=0;
        while(qry6.next()){
        counter++;
        }
        if(counter>0){
        ui->at6->setText(status);
        conn.connclose();
         }
        }
      //5 PM

        appointTime="5pm";
    if(!conn.connopen()){
       qDebug()<<"Failed to Open";
       return;
    }
    conn.connopen();
    QSqlQuery qry7;
    qry7.prepare("select * from patient_appointment where ap_time='"+appointTime+"' and doctor_name='"+s2+"'");

    if(qry7.exec()){

    int counter=0;
    while(qry7.next()){
        counter++;
     }
    if(counter>0){
       ui->at7->setText(status);
       conn.connclose();
    }
    }


        // 7 PM

        appointTime="7pm";
    if(!conn.connopen()){
       qDebug()<<"Failed to Open";
       return;
    }
    conn.connopen();
    QSqlQuery qry8;
    qry8.prepare("select * from patient_appointment where ap_time='"+appointTime+"' and doctor_name='"+s2+"'");

    if(qry8.exec()){

    int counter=0;
    while(qry8.next()){
        counter++;
     }
    if(counter>0){
       ui->at8->setText(status);
       conn.connclose();
    }
    }


         // 8 PM

         appointTime="8pm";
    if(!conn.connopen()){
       qDebug()<<"Failed to Open";
       return;
    }
    conn.connopen();
    QSqlQuery qry9;
    qry9.prepare("select * from patient_appointment where ap_time='"+appointTime+"' and doctor_name='"+s2+"'");

    if(qry9.exec()){

    int counter=0;
    while(qry9.next()){
        counter++;
     }
    if(counter>0){
       ui->at9->setText(status);
       conn.connclose();
    }
    }

          // 9 PM

        appointTime="9pm";
    if(!conn.connopen()){
       qDebug()<<"Failed to Open";
       return;
    }
    conn.connopen();
    QSqlQuery qry10;
    qry10.prepare("select * from patient_appointment where ap_time='"+appointTime+"' and doctor_name='"+s2+"'");

    if(qry10.exec()){

    int counter=0;
    while(qry10.next()){
        counter++;
     }
    if(counter>0){
       ui->at10->setText(status);
       conn.connclose();
    }
    }


         // 10 PM


        appointTime="10pm";
    if(!conn.connopen()){
       qDebug()<<"Failed to Open";
       return;
    }
    conn.connopen();
    QSqlQuery qry11;
    qry11.prepare("select * from patient_appointment where ap_time='"+appointTime+"' and doctor_name='"+s2+"'");

    if(qry11.exec()){

    int counter=0;
    while(qry11.next()){
        counter++;
     }
    if(counter>0){
       ui->at11->setText(status);
       conn.connclose();
    }
    }



        // 11 PM

       appointTime="11pm";
    if(!conn.connopen()){
       qDebug()<<"Failed to Open";
       return;
    }
    conn.connopen();
    QSqlQuery qry12;
    qry12.prepare("select * from patient_appointment where ap_time='"+appointTime+"' and doctor_name='"+s2+"'");

    if(qry12.exec()){

    int counter=0;
    while(qry12.next()){
        counter++;
     }
    if(counter>0){
       ui->at12->setText(status);
       conn.connclose();
    }
    }



}
