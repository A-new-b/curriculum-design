#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>

#include "big_category.h"
#include "supermarket.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    big_category_node market_first_node = *init_Supermarket();

    QStandardItemModel* getCategoryModel();
    QStandardItemModel* getItemsModel(const QModelIndex &index);//基于第一个model的位置显示第二个model的数据
    QStandardItemModel* getItemsModel(int);//重载

    void CategoryTableSet(QStandardItemModel*);
    void ItemsTableSet(QStandardItemModel*);

private slots:
    void on_category_create_clicked();

    void on_category_table_clicked(const QModelIndex &index);

    void on_category_update_clicked();

    void on_goods_in_clicked();

    void on_goods_out_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
