#ifndef SECONDPAGE_H
#define SECONDPAGE_H

#include <QDialog>
#include <QDebug>
#include "mainwindow.h"
#include "consultation.h"
#include "appoinment.h"


namespace Ui {
class Secondpage;
}

class Secondpage : public QDialog
{
    Q_OBJECT

public:
    explicit Secondpage(QWidget *parent = nullptr);
       void setLabel(QString str);
    ~Secondpage();

private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();



    void on_comboBox_currentIndexChanged(const QString &arg1);


   // void on_listView_activated(const QModelIndex &index);

    void on_listView_clicked(const QModelIndex &index);

    void on_pushButton_clicked();



private:
    Ui::Secondpage *ui;
    QMainWindow *sg;
};

#endif // SECONDPAGE_H
