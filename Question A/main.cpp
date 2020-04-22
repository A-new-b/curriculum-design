#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("超市库存管理系统");
    w.show();
//    w.FirstTableSet(w.getFirstModel());
    return a.exec();
}
