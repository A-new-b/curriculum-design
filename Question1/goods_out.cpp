#include "goods_out.h"
#include "ui_goods_out.h"

#include <QMessageBox>
#include "QValidator"

goods_out::goods_out(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::goods_out)
{
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QIntValidator(nullptr));//出库数只能输入int
}

goods_out::~goods_out()
{
    delete ui;
}

void goods_out::setInfoContent(QString a)
{
    this ->ui->label->setText(a);
}
void goods_out::setfather(MainWindow* t)
{
    father = t;
}
void goods_out::delete_items_goods(int c,int g){
    big_category p = &(father ->market_first_node);
    p = find_category_byindex(p,c-1);
    int amount = this ->ui ->lineEdit->text().toInt();
    LinkList L = find_LinkList_byindex(p,g);
//    L->data.count-=amount;
    if(L->data.count-amount<0)
    {
        QMessageBox::information(nullptr,"失败","出库超过库内商品数");
    }
    else{
        L->data.count-=amount;
        father ->ItemsTableSet(father->getItemsModel(c));
        QMessageBox::information(nullptr,"成功","成功出库");
    }

}

