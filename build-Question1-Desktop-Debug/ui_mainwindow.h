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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLineEdit *searchContent;
    QPushButton *search;
    QPushButton *sum;
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
        layoutWidget->setGeometry(QRect(40, 70, 541, 118));
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

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(40, 200, 541, 36));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_2->addWidget(radioButton_2);

        searchContent = new QLineEdit(layoutWidget_2);
        searchContent->setObjectName(QString::fromUtf8("searchContent"));

        horizontalLayout_2->addWidget(searchContent);

        search = new QPushButton(layoutWidget_2);
        search->setObjectName(QString::fromUtf8("search"));

        horizontalLayout_2->addWidget(search);

        sum = new QPushButton(layoutWidget_2);
        sum->setObjectName(QString::fromUtf8("sum"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sum->sizePolicy().hasHeightForWidth());
        sum->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(sum);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 8);
        horizontalLayout_2->setStretch(3, 2);
        horizontalLayout_2->setStretch(4, 2);
        category_table = new QTableView(centralwidget);
        category_table->setObjectName(QString::fromUtf8("category_table"));
        category_table->setGeometry(QRect(40, 260, 256, 192));
        goods_table = new QTableView(centralwidget);
        goods_table->setObjectName(QString::fromUtf8("goods_table"));
        goods_table->setGeometry(QRect(330, 260, 256, 192));
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
        category_create->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\345\225\206\345\223\201", nullptr));
        goods_in->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\205\245\345\272\223", nullptr));
        category_update->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\345\225\206\345\223\201", nullptr));
        goods_out->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\207\272\345\272\223", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\345\220\215\347\247\260", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\347\261\273\345\210\253", nullptr));
        search->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        sum->setText(QCoreApplication::translate("MainWindow", "\347\273\237\350\256\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
