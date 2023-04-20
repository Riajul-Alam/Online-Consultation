#ifndef APPOINMENT_H
#define APPOINMENT_H

#include <QDialog>
#include "secondpage.h"

namespace Ui {
class appoinment;
}

class appoinment : public QDialog
{
    Q_OBJECT

public:
    explicit appoinment(QWidget *parent = nullptr);
    void setLabel1(QString str);
    void setLabel2(QString strr);

    ~appoinment();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::appoinment *ui;
    //Secondpage *secpg;
};

#endif // APPOINMENT_H
