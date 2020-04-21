#ifndef CATEGORY_H
#define CATEGORY_H

#include <QDialog>
//该视图用以渲染商品种类的导入
namespace Ui {
class category;
}

class category : public QDialog
{
    Q_OBJECT

public:
    explicit category(QWidget *parent = nullptr);
    ~category();
    void setInfoContent(QString);


private slots:
    void on_buttonBox_rejected();
private:
    Ui::category *ui;
};

#endif // CATEGORY_H
