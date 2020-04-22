#ifndef GOODS_IN_H
#define GOODS_IN_H

#include <QDialog>
#include <mainwindow.h>

namespace Ui {
class goods_in;
}

class goods_in : public QDialog
{
    Q_OBJECT

public:
    explicit goods_in(QWidget *parent = nullptr);
    ~goods_in();
    void setfather(MainWindow*);
    void setInfoContent(QString);
    void add_items_goods(int);

private slots:
    void on_buttonBox_rejected();

private:
    Ui::goods_in *ui;
    MainWindow* father;

};

#endif // GOODS_IN_H
