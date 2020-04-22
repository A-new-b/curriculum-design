/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QPushButton *category_create;
    QPushButton *goods_in;
    QVBoxLayout *verticalLayout_2;
    QPushButton *category_update;
    QPushButton *goods_out;
    QTableView *category_table;
    QTableView *goods_table;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 70, 701, 118));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        category_create = new QPushButton(layoutWidget);
        category_create->setObjectName(QString::fromUtf8("category_create"));

        verticalLayout->addWidget(category_create);

        goods_in = new QPushButton(layoutWidget);
        goods_in->setObjectName(QString::fromUtf8("goods_in"));

        verticalLayout->addWidget(goods_in);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        category_update = new QPushButton(layoutWidget);
        category_update->setObjectName(QString::fromUtf8("category_update"));

        verticalLayout_2->addWidget(category_update);

        goods_out = new QPushButton(layoutWidget);
        goods_out->setObjectName(QString::fromUtf8("goods_out"));

        verticalLayout_2->addWidget(goods_out);


        horizontalLayout_3->addLayout(verticalLayout_2);

        category_table = new QTableView(centralwidget);
        category_table->setObjectName(QString::fromUtf8("category_table"));
        category_table->setGeometry(QRect(40, 210, 201, 192));
        goods_table = new QTableView(centralwidget);
        goods_table->setObjectName(QString::fromUtf8("goods_table"));
        goods_table->setGeometry(QRect(260, 210, 481, 192));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 30));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        category_create->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\347\247\215\347\261\273", nullptr));
        goods_in->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\205\245\345\272\223", nullptr));
        category_update->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\347\247\215\347\261\273", nullptr));
        goods_out->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\207\272\345\272\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
