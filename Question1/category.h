#ifndef CATEGORY_H
#define CATEGORY_H

#include <QDialog>
#include <mainwindow.h>
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
    void setfather(MainWindow*);
    void add_accept();
    void update_accept(int num);



private slots:
    void on_buttonBox_rejected();

private:
    Ui::category *ui;
    MainWindow* father;
    void add_s_accepted();
    void update_s_accept(int num);


};

#endif // CATEGORY_H
