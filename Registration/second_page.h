#ifndef SECOND_PAGE_H
#define SECOND_PAGE_H

#include <QDialog>

namespace Ui {
class second_page;
}

class second_page : public QDialog
{
    Q_OBJECT

public:
    explicit second_page(QWidget *parent = nullptr);
    ~second_page();

private:
    Ui::second_page *ui;
};

#endif // SECOND_PAGE_H
