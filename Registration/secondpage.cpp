#include "secondpage.h"
#include "ui_secondpage.h"

Secondpage::Secondpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Secondpage)
{
    ui->setupUi(this);

    MainWindow conn;
    on_pushButton_clicked();
}

Secondpage::~Secondpage()
{
    delete ui;
}


void Secondpage::on_pushButton_clicked()
{
    MainWindow conn;

    QSqlQueryModel * modal = new QSqlQueryModel();
    conn.connopen();
    QSqlQuery* qry=new QSqlQuery(conn.db);
    qry->prepare("SELECT * FROM patient_login");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    conn.connclose();

    QSqlQueryModel * modaal = new QSqlQueryModel();
    conn.connopen();
    QSqlQuery* qryy=new QSqlQuery(conn.db);
    qryy->prepare("SELECT first_name FROM patient_login");
    qryy->exec();
    modaal->setQuery(*qryy);
    ui->comboBox->setModel(modaal);

    conn.connclose();
    //qDebug<<(modal->rowCount());

}
