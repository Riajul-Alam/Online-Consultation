#include "menu.h"
#include "ui_menu.h"
#include "mainwindow.h"
#include "doctor_mainwindow.h"


Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}


void Menu::on_pushButton_clicked()
{



    s= new MainWindow();
    s->show();
    this->hide();
}

void Menu::on_pushButton_2_clicked()
{
     this->hide();
    doctor_mainwindow dop;
    dop.exec();
    //mainwin= new doctor_mainwindow();
    //mainwin->show();


}
