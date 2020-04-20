#ifndef CATEGORY_H
#define CATEGORY_H

#include <QDialog>

namespace Ui {
class category;
}

class category : public QDialog
{
    Q_OBJECT

public:
    explicit category(QWidget *parent = nullptr);
    ~category();

private:
    Ui::category *ui;
};

#endif // CATEGORY_H
