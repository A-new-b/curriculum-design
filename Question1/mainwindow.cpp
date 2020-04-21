#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "category.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_category_create_clicked()
{
    category create(this);
    create.setWindowTitle("创建商品");
//    create.setFather(this);
    create.setInfoContent("你正在创建新商品:");
    create.exec();//模态形式显示对话框
//    if (result==QDialog::Accepted){
//        create.creat();
//    }
}
