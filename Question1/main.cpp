#include "mainwindow.h"

#include <QApplication>

<<<<<<< HEAD:Question1/BoyuGuan/main.cpp
using namespace std;


int main() {
	big_category category = init_Supermarket();
	new_Item(category, { 0, for_count, 11, 20, "sd","test" });
	input_item(category);
	LinkList p = search_Item(category, "fun");
	cout << p->data.purePrice;
	return 0;
}
=======
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
>>>>>>> upstream/master:Question1/main.cpp
