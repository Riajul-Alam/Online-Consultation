#include "menu.h"
#include "ui_menu.h"


menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::on_pushButton_clicked()
{

   // MainWindow mainw;
   // mainw.setModal(true);
   // mainw.exec();
   Main=new MainWindow(this);
   Main->show();
}
