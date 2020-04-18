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
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLineEdit *searchContent;
    QPushButton *search;
    QPushButton *stat;
    QPushButton *random;
    QHBoxLayout *horizontalLayout;
    QTableView *firstTableView;
    QTableView *SecondTableView;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QPushButton *importFrom;
    QPushButton *create;
    QPushButton *in;
    QVBoxLayout *verticalLayout_2;
    QPushButton *exportTo;
    QPushButton *change;
    QPushButton *out;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(830, 610);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_2->addWidget(radioButton_2);

        searchContent = new QLineEdit(centralwidget);
        searchContent->setObjectName(QString::fromUtf8("searchContent"));

        horizontalLayout_2->addWidget(searchContent);

        search = new QPushButton(centralwidget);
        search->setObjectName(QString::fromUtf8("search"));

        horizontalLayout_2->addWidget(search);

        stat = new QPushButton(centralwidget);
        stat->setObjectName(QString::fromUtf8("stat"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stat->sizePolicy().hasHeightForWidth());
        stat->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(stat);

        random = new QPushButton(centralwidget);
        random->setObjectName(QString::fromUtf8("random"));

        horizontalLayout_2->addWidget(random);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 8);
        horizontalLayout_2->setStretch(3, 2);
        horizontalLayout_2->setStretch(4, 2);
        horizontalLayout_2->setStretch(5, 2);

        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        firstTableView = new QTableView(centralwidget);
        firstTableView->setObjectName(QString::fromUtf8("firstTableView"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        firstTableView->setFont(font);

        horizontalLayout->addWidget(firstTableView);

        SecondTableView = new QTableView(centralwidget);
        SecondTableView->setObjectName(QString::fromUtf8("SecondTableView"));

        horizontalLayout->addWidget(SecondTableView);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        importFrom = new QPushButton(centralwidget);
        importFrom->setObjectName(QString::fromUtf8("importFrom"));
        sizePolicy.setHeightForWidth(importFrom->sizePolicy().hasHeightForWidth());
        importFrom->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(importFrom);

        create = new QPushButton(centralwidget);
        create->setObjectName(QString::fromUtf8("create"));

        verticalLayout->addWidget(create);

        in = new QPushButton(centralwidget);
        in->setObjectName(QString::fromUtf8("in"));

        verticalLayout->addWidget(in);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        exportTo = new QPushButton(centralwidget);
        exportTo->setObjectName(QString::fromUtf8("exportTo"));

        verticalLayout_2->addWidget(exportTo);

        change = new QPushButton(centralwidget);
        change->setObjectName(QString::fromUtf8("change"));

        verticalLayout_2->addWidget(change);

        out = new QPushButton(centralwidget);
        out->setObjectName(QString::fromUtf8("out"));

        verticalLayout_2->addWidget(out);


        horizontalLayout_3->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 5);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 830, 23));
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
        radioButton->setText(QCoreApplication::translate("MainWindow", "\345\220\215\347\247\260", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\347\261\273\345\210\253", nullptr));
        search->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        stat->setText(QCoreApplication::translate("MainWindow", "\347\273\237\350\256\241", nullptr));
        random->setText(QCoreApplication::translate("MainWindow", "\351\232\217\346\234\272\346\225\260\346\215\256", nullptr));
        importFrom->setText(QCoreApplication::translate("MainWindow", "\344\273\216\346\226\207\344\273\266\345\257\274\345\205\245", nullptr));
        create->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\345\225\206\345\223\201", nullptr));
        in->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\205\245\345\272\223", nullptr));
        exportTo->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\345\210\260\346\226\207\344\273\266", nullptr));
        change->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\345\225\206\345\223\201", nullptr));
        out->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\207\272\345\272\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
