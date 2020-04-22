#include <QMessageBox>

#include "category.h"
#include "ui_category.h"
category::category(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::category)
{
    ui->setupUi(this);
}

category::~category()
{
    delete ui;
}

void category::on_buttonBox_rejected()
{
    this ->reject();
}
void category::setInfoContent(QString a)
{
    this ->ui->Info->setText(a);
}
void category::setfather(MainWindow *t)
{
    father=t;
}

void category::add_s_accepted()
{
    big_category p = &father->market_first_node;
    char name[10];
    if(this ->ui ->category_name->text().toStdString().size()>0&&this ->ui ->category_name->text().toStdString().size()<11){
        strcpy(name,this ->ui ->category_2->text().toStdString().c_str());
        add_big_category(p,name);
        father ->CategoryTableSet(father ->getCategoryModel());
        QMessageBox::information(nullptr,"创建成功","商品种类创建成功");
    } else
    {
        QMessageBox::information(nullptr,"创建失败","请检查输入字符串数不大于10");

    }
}
void category::add_accept()
{
    this->add_s_accepted();
}
void category::update_accept(int num)
{
    this->update_s_accept(num);
}
void category::update_s_accept(int num)
{
    big_category p = &father ->market_first_node;
    auto name=find_category_byindex(p,num-1)->category_Name;
    auto name_c = this ->ui ->category_2->text();
    if(name_c.toStdWString().size()>0&&name_c.toStdWString().size()<10)
    {
        strcpy(name,name_c.toStdString().c_str());
        father ->CategoryTableSet(father ->getCategoryModel());
        QMessageBox::information(nullptr,"修改成功","商品种类修改成功");
    }
    else
    {
       QMessageBox::information(nullptr,"创建失败","请检查输入字符串数不大于10");

    }


}
