#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "category.h"
#include "goods_in.h"
#include "goods_out.h"

#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //给第一个table设置只允许单行选中且无法编辑
    ui->category_table->verticalHeader()->hide();//隐藏行号
    ui->category_table->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->category_table->setSelectionMode ( QAbstractItemView::SingleSelection);
    ui->category_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //第二个同理
    ui->goods_table->verticalHeader()->hide();
    ui->goods_table->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->goods_table->setSelectionMode ( QAbstractItemView::SingleSelection);
    ui->goods_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_category_create_clicked()
{
    category create(this);
    create.setWindowTitle("创建种类");
    create.setfather(this);
    create.setInfoContent("你正在创建新商品:");
    auto result = create.exec();//模态形式显示对话框
    if (result==QDialog::Accepted){
        create.add_accept();
    }
}

QStandardItemModel* MainWindow::getCategoryModel()
{
    QStandardItemModel* model=new QStandardItemModel();
    QString label="编号,类型";
    QStringList labels=label.split(',');
    model->setHorizontalHeaderLabels(labels);//设置label
    int row_number =0;//行数
    big_category p = &market_first_node;
    while (p !=nullptr) {
        model->insertRow(row_number);
        model->setData(model->index(row_number, 0), row_number+1);
        model->setData(model->index(row_number, 1), p->category_Name);
        p = p->next_big_category;
        row_number++;
        }

    return model;
}

QStandardItemModel* MainWindow::getItemsModel(const QModelIndex &index){
    QStandardItemModel* model=new QStandardItemModel();
    QString label="数量,单位,进价,售价,商品名";
    QStringList labels=label.split(',');
    model->setHorizontalHeaderLabels(labels);
    auto num=index.model()->index(index.row(),0);
    int position=num.data().toInt();//获取当前行的编号
    big_category p = &market_first_node;
    p = find_category_byindex(p,position-1);//寻找商品
    int row_number =0;//行数
    LinkList g = p ->small_category;
    while (g!=nullptr) {
        model->insertRow(row_number);
//        model->setData(model->index(row_number, 0), row_number+1);
        model->setData(model->index(row_number, 0), g ->data.count);
        model->setData(model->index(row_number, 1), g->data.unit);
        model->setData(model->index(row_number, 2), g->data.purePrice);
        model->setData(model->index(row_number, 3), g->data.salePrice);
        model->setData(model->index(row_number, 4), g->data.name);
        g = g ->next;
        row_number++;
    }
    return model ;
}//基于第一个model的位置显示第二个model的数据

QStandardItemModel* MainWindow::getItemsModel(int position){//int 重载
    QStandardItemModel* model=new QStandardItemModel();
    QString label="数量,单位,进价,售价,商品名";
    QStringList labels=label.split(',');
    model->setHorizontalHeaderLabels(labels);
//    auto num=index.model()->index(index.row(),0);
//    int position=num.data().toInt();//获取当前行的编号
    big_category p = &market_first_node;
    p = find_category_byindex(p,position-1);//寻找商品
    int row_number =0;//行数
    LinkList g = p ->small_category;
    while (g!=nullptr) {
        model->insertRow(row_number);
//        model->setData(model->index(row_number, 0), row_number+1);
        model->setData(model->index(row_number, 0), g ->data.count);
        model->setData(model->index(row_number, 1), g->data.unit);
        model->setData(model->index(row_number, 2), g->data.purePrice);
        model->setData(model->index(row_number, 3), g->data.salePrice);
        model->setData(model->index(row_number, 4), g->data.name);
        g = g ->next;
        row_number++;
    }
    return model ;
}//基于第一个model的位置显示第二个model的数据


void MainWindow::on_category_table_clicked(const QModelIndex &index)
{
    ItemsTableSet(getItemsModel(index));
}

void MainWindow::CategoryTableSet (QStandardItemModel* t){
    this ->ui->category_table->clearSpans();
    this ->ui->category_table->setModel(t);
    this ->ui->category_table->setCurrentIndex(t->index(0,0));
    on_category_table_clicked(t->index(0,0));//默认选中第一行
}

void MainWindow::ItemsTableSet(QStandardItemModel* t){
    this ->ui->goods_table->clearSpans();
    this ->ui->goods_table->setModel(t);
    this ->ui->goods_table->setCurrentIndex(t->index(0,0));
}

void MainWindow::on_category_update_clicked()
{
    category change(this);
    change.setWindowTitle("修改种类");
    change.setfather(this);
    auto position=ui->category_table->currentIndex();
    QString name=position.model()->index(position.row(),1).data().toString();//获取选中行的种类名
    change.setInfoContent("你正在修改种类:"+name);
    auto result=change.exec();
    if (result==QDialog::Accepted){
        change.update_accept(position.model()->index(position.row(),0).data().toInt());//将选中行的编号作为参数
    }
}

void MainWindow::on_goods_in_clicked()
{
    goods_in new_in(this);
    new_in.setWindowTitle("商品入库");
    new_in.setfather(this);
    auto position=ui->category_table->currentIndex();
    QString name=position.model()->index(position.row(),1).data().toString();//获取选中行的种类名
    new_in.setInfoContent("你正在入库的商品种类为:"+name);
    auto result = new_in.exec();
    if (result==QDialog::Accepted){
        new_in.add_items_goods(position.model()->index(position.row(),0).data().toInt());//将选中行的编号作为参数
    }
}

void MainWindow::on_goods_out_clicked()
{
    goods_out new_out(this);
    new_out.setWindowTitle("商品出库");
    new_out.setfather(this);
    auto position_category=ui->category_table->currentIndex();
    QString name_category=position_category.model()->index(position_category.row(),1).data().toString();//获取选中行的种类名
    auto position_goods=ui->goods_table->currentIndex();
    QString name_goods=position_goods.model()->index(position_goods.row(),4).data().toString();//获取选中行的商品
    new_out.setInfoContent("你正在出库的商品种类为:"+name_category+"商品名称为:"+name_goods);
    auto result = new_out.exec();
    int g= position_goods.row();
    if (result==QDialog::Accepted){
        new_out.delete_items_goods(position_category.model()->index(position_category.row(),0).data().toInt(),g);//将选中行的编号作为参数
    }
}
