/********************************************************************************
** Form generated from reading UI file 'good_out.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOOD_OUT_H
#define UI_GOOD_OUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_good_out
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *all_out;
    QLabel *label;
    QLineEdit *out_num;
    QLabel *label_2;

    void setupUi(QDialog *good_out)
    {
        if (good_out->objectName().isEmpty())
            good_out->setObjectName(QString::fromUtf8("good_out"));
        good_out->resize(400, 300);
        buttonBox = new QDialogButtonBox(good_out);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        all_out = new QPushButton(good_out);
        all_out->setObjectName(QString::fromUtf8("all_out"));
        all_out->setGeometry(QRect(100, 240, 88, 34));
        label = new QLabel(good_out);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 58, 18));
        out_num = new QLineEdit(good_out);
        out_num->setObjectName(QString::fromUtf8("out_num"));
        out_num->setGeometry(QRect(110, 50, 113, 21));
        label_2 = new QLabel(good_out);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 50, 58, 21));

        retranslateUi(good_out);
        QObject::connect(buttonBox, SIGNAL(accepted()), good_out, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), good_out, SLOT(reject()));

        QMetaObject::connectSlotsByName(good_out);
    } // setupUi

    void retranslateUi(QDialog *good_out)
    {
        good_out->setWindowTitle(QCoreApplication::translate("good_out", "Dialog", nullptr));
        all_out->setText(QCoreApplication::translate("good_out", "\345\205\250\351\203\250\345\207\272\345\272\223", nullptr));
        label->setText(QCoreApplication::translate("good_out", "\345\225\206\345\223\201\345\207\272\345\272\223", nullptr));
        label_2->setText(QCoreApplication::translate("good_out", "\345\207\272\345\272\223\346\225\260\351\207\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class good_out: public Ui_good_out {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOD_OUT_H
