/********************************************************************************
** Form generated from reading UI file 'goods_out.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOODS_OUT_H
#define UI_GOODS_OUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_goods_out
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *goods_out)
    {
        if (goods_out->objectName().isEmpty())
            goods_out->setObjectName(QString::fromUtf8("goods_out"));
        goods_out->resize(400, 300);
        buttonBox = new QDialogButtonBox(goods_out);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(goods_out);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 27, 351, 21));
        label_2 = new QLabel(goods_out);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 58, 18));
        lineEdit = new QLineEdit(goods_out);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 80, 113, 21));

        retranslateUi(goods_out);
        QObject::connect(buttonBox, SIGNAL(accepted()), goods_out, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), goods_out, SLOT(reject()));

        QMetaObject::connectSlotsByName(goods_out);
    } // setupUi

    void retranslateUi(QDialog *goods_out)
    {
        goods_out->setWindowTitle(QCoreApplication::translate("goods_out", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("goods_out", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("goods_out", "\345\207\272\345\272\223\346\225\260\351\207\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class goods_out: public Ui_goods_out {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOODS_OUT_H
