#ifndef GOODS_OUT_H
#define GOODS_OUT_H

#include <QDialog>
#include <mainwindow.h>

namespace Ui {
class goods_out;
}

class goods_out : public QDialog
{
    Q_OBJECT

public:
    explicit goods_out(QWidget *parent = nullptr);
    ~goods_out();
    void setfather(MainWindow*);
    void setInfoContent(QString);
    void delete_items_goods(int,int);

private:
    Ui::goods_out *ui;
    MainWindow* father;

};

#endif // GOODS_OUT_H
