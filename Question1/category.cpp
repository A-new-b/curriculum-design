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
