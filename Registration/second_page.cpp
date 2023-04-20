#include "second_page.h"
#include "ui_second_page.h"

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
