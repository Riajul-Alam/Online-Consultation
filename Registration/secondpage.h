#ifndef SECONDPAGE_H
#define SECONDPAGE_H

#include <QDialog>
#include <QDebug>
#include "mainwindow.h"

namespace Ui {
class Secondpage;
}

class Secondpage : public QDialog
{
    Q_OBJECT

public:
    explicit Secondpage(QWidget *parent = nullptr);
    ~Secondpage();

private slots:

    void on_pushButton_clicked();

private:
    Ui::Secondpage *ui;
};

#endif // SECONDPAGE_H
