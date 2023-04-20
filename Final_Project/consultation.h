#ifndef CONSULTATION_H
#define CONSULTATION_H

#include <QDialog>
#include "secondpage.h"


namespace Ui {
class consultation;
}

class consultation : public QDialog
{
    Q_OBJECT

public:
    explicit consultation(QWidget *parent = nullptr);
    void settLabel(QString str);
    void setttLabel(QString strr);
    ~consultation();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


private:
    Ui::consultation *ui;
   //Secondpage *secpg;
};

#endif // CONSULTATION_H
