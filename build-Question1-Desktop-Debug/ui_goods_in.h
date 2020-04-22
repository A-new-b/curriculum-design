/********************************************************************************
** Form generated from reading UI file 'goods_in.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOODS_IN_H
#define UI_GOODS_IN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_goods_in
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *Info;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *name;
    QLineEdit *purePrice;
    QLineEdit *salePrice;
    QLineEdit *count;
    QLineEdit *unit;

    void setupUi(QDialog *goods_in)
    {
        if (goods_in->objectName().isEmpty())
            goods_in->setObjectName(QString::fromUtf8("goods_in"));
        goods_in->resize(400, 300);
        buttonBox = new QDialogButtonBox(goods_in);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Info = new QLabel(goods_in);
        Info->setObjectName(QString::fromUtf8("Info"));
        Info->setGeometry(QRect(20, 17, 351, 31));
        label_2 = new QLabel(goods_in);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 50, 58, 18));
        label_3 = new QLabel(goods_in);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 80, 58, 18));
        label_4 = new QLabel(goods_in);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 110, 58, 18));
        label_5 = new QLabel(goods_in);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 140, 58, 18));
        label_6 = new QLabel(goods_in);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 170, 58, 18));
        name = new QLineEdit(goods_in);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(100, 50, 113, 21));
        purePrice = new QLineEdit(goods_in);
        purePrice->setObjectName(QString::fromUtf8("purePrice"));
        purePrice->setGeometry(QRect(100, 80, 113, 21));
        salePrice = new QLineEdit(goods_in);
        salePrice->setObjectName(QString::fromUtf8("salePrice"));
        salePrice->setGeometry(QRect(100, 110, 113, 21));
        count = new QLineEdit(goods_in);
        count->setObjectName(QString::fromUtf8("count"));
        count->setGeometry(QRect(100, 140, 113, 21));
        unit = new QLineEdit(goods_in);
        unit->setObjectName(QString::fromUtf8("unit"));
        unit->setGeometry(QRect(100, 170, 113, 21));

        retranslateUi(goods_in);
        QObject::connect(buttonBox, SIGNAL(accepted()), goods_in, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), goods_in, SLOT(reject()));

        QMetaObject::connectSlotsByName(goods_in);
    } // setupUi

    void retranslateUi(QDialog *goods_in)
    {
        goods_in->setWindowTitle(QCoreApplication::translate("goods_in", "Dialog", nullptr));
        Info->setText(QCoreApplication::translate("goods_in", "\345\225\206\345\223\201\345\205\245\345\272\223", nullptr));
        label_2->setText(QCoreApplication::translate("goods_in", "\345\225\206\345\223\201\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("goods_in", "\350\277\233\344\273\267", nullptr));
        label_4->setText(QCoreApplication::translate("goods_in", "\345\224\256\344\273\267", nullptr));
        label_5->setText(QCoreApplication::translate("goods_in", "\346\225\260\351\207\217", nullptr));
        label_6->setText(QCoreApplication::translate("goods_in", "\345\215\225\344\275\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class goods_in: public Ui_goods_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOODS_IN_H
