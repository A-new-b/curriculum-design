#include "goods_in.h"
#include "ui_goods_in.h"
#include "QValidator"
#include <QMessageBox>


goods_in::goods_in(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::goods_in)
{
    ui->setupUi(this);
    ui->count->setValidator(new QIntValidator(nullptr));//数目只能输入int
//    ui->unit->setValidator(new QIntValidator(nullptr));//单位只能输入int

    ui->purePrice->setValidator(new QDoubleValidator(nullptr));
    ui->salePrice->setValidator(new QDoubleValidator(nullptr));


}

goods_in::~goods_in()
{
    delete ui;
}

void goods_in::on_buttonBox_rejected()
{
    this ->reject();
}

void goods_in::setInfoContent(QString a)
{
    this ->ui->Info->setText(a);
}

void goods_in::setfather(MainWindow *t)
{
    father=t;
}

void goods_in::add_items_goods(int position)
{
    big_category p = &(father ->market_first_node);
    big_category category=find_category_byindex(p,position-1);
    int count = this ->ui ->count->text().toInt();
    QString unit_q = this ->ui ->unit ->text();
    char unit[15];
    strcpy(unit,unit_q.toStdString().c_str());
    double purePrice = this ->ui ->purePrice ->text().toDouble();
    double salePrice = this ->ui ->salePrice ->text().toDouble();
    QString name_q = this ->ui ->name ->text();
    char name[10];
    strcpy(name,name_q.toStdString().c_str());
    ElemType data =InitElemType(count,unit, purePrice,salePrice,category->category_Name,name);
    add_item(category->small_category,data);
    father ->ItemsTableSet(father->getItemsModel(position));
    QMessageBox::information(nullptr,"成功","入库成功");

}

