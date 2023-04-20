#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include "mainwindow.h"
#include "doctor_mainwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Menu; }
QT_END_NAMESPACE

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Menu *ui;
    QMainWindow *s;
    //doctor_mainwindow *mainwin;
};
#endif // MENU_H
