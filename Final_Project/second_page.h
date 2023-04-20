#ifndef SECOND_PAGE_H
#define SECOND_PAGE_H

#include <QDialog>

#include<QDebug>

#include "doctor_mainwindow.h"

#include<QSqlDatabase>
#include<QtSql>
#include<QMessageBox>
#include<QString>
#include<QDebug>


namespace Ui {
class second_page;
}

class second_page : public QDialog
{
    Q_OBJECT

public:
    explicit second_page(QWidget *parent = nullptr);
    void setLabel(QString str);
    ~second_page();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tableView_activated(const QModelIndex &index);




private:
    Ui::second_page *ui;
    //doctor_mainwindow *docm;
};

#endif // SECOND_PAGE_H
