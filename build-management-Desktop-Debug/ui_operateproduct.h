/********************************************************************************
** Form generated from reading UI file 'operateproduct.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATEPRODUCT_H
#define UI_OPERATEPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_operateProduct
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *Label;
    QLineEdit *name;
    QLabel *Label_2;
    QLineEdit *sort;
    QLabel *Label_3;
    QLineEdit *price;
    QLabel *Label_4;
    QLineEdit *expdate;
    QDialogButtonBox *buttonBox;
    QLabel *info;

    void setupUi(QDialog *operateProduct)
    {
        if (operateProduct->objectName().isEmpty())
            operateProduct->setObjectName(QString::fromUtf8("operateProduct"));
        operateProduct->resize(354, 210);
        gridLayout = new QGridLayout(operateProduct);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        Label = new QLabel(operateProduct);
        Label->setObjectName(QString::fromUtf8("Label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, Label);

        name = new QLineEdit(operateProduct);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, name);

        Label_2 = new QLabel(operateProduct);
        Label_2->setObjectName(QString::fromUtf8("Label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, Label_2);

        sort = new QLineEdit(operateProduct);
        sort->setObjectName(QString::fromUtf8("sort"));

        formLayout->setWidget(2, QFormLayout::FieldRole, sort);

        Label_3 = new QLabel(operateProduct);
        Label_3->setObjectName(QString::fromUtf8("Label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, Label_3);

        price = new QLineEdit(operateProduct);
        price->setObjectName(QString::fromUtf8("price"));

        formLayout->setWidget(3, QFormLayout::FieldRole, price);

        Label_4 = new QLabel(operateProduct);
        Label_4->setObjectName(QString::fromUtf8("Label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, Label_4);

        expdate = new QLineEdit(operateProduct);
        expdate->setObjectName(QString::fromUtf8("expdate"));

        formLayout->setWidget(4, QFormLayout::FieldRole, expdate);

        buttonBox = new QDialogButtonBox(operateProduct);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(5, QFormLayout::FieldRole, buttonBox);

        info = new QLabel(operateProduct);
        info->setObjectName(QString::fromUtf8("info"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, info);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        retranslateUi(operateProduct);
        QObject::connect(buttonBox, SIGNAL(accepted()), operateProduct, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), operateProduct, SLOT(reject()));

        QMetaObject::connectSlotsByName(operateProduct);
    } // setupUi

    void retranslateUi(QDialog *operateProduct)
    {
        operateProduct->setWindowTitle(QCoreApplication::translate("operateProduct", "Dialog", nullptr));
        Label->setText(QCoreApplication::translate("operateProduct", "\345\225\206\345\223\201\345\220\215:", nullptr));
        Label_2->setText(QCoreApplication::translate("operateProduct", "\347\261\273\345\210\253:", nullptr));
        Label_3->setText(QCoreApplication::translate("operateProduct", "\344\273\267\346\240\274:", nullptr));
        Label_4->setText(QCoreApplication::translate("operateProduct", "\344\277\235\350\264\250\346\234\237:", nullptr));
        info->setText(QCoreApplication::translate("operateProduct", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class operateProduct: public Ui_operateProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATEPRODUCT_H
