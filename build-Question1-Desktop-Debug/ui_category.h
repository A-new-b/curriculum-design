/********************************************************************************
** Form generated from reading UI file 'category.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORY_H
#define UI_CATEGORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_category
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *Info;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *category_name;
    QLineEdit *category_2;

    void setupUi(QDialog *category)
    {
        if (category->objectName().isEmpty())
            category->setObjectName(QString::fromUtf8("category"));
        category->resize(400, 300);
        buttonBox = new QDialogButtonBox(category);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(40, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Info = new QLabel(category);
        Info->setObjectName(QString::fromUtf8("Info"));
        Info->setGeometry(QRect(40, 17, 301, 31));
        formLayoutWidget = new QWidget(category);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(39, 60, 321, 171));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        category_name = new QLabel(formLayoutWidget);
        category_name->setObjectName(QString::fromUtf8("category_name"));

        formLayout->setWidget(0, QFormLayout::LabelRole, category_name);

        category_2 = new QLineEdit(formLayoutWidget);
        category_2->setObjectName(QString::fromUtf8("category_2"));

        formLayout->setWidget(0, QFormLayout::FieldRole, category_2);


        retranslateUi(category);
        QObject::connect(buttonBox, SIGNAL(accepted()), category, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), category, SLOT(reject()));

        QMetaObject::connectSlotsByName(category);
    } // setupUi

    void retranslateUi(QDialog *category)
    {
        category->setWindowTitle(QCoreApplication::translate("category", "Dialog", nullptr));
        Info->setText(QCoreApplication::translate("category", "TextLabel", nullptr));
        category_name->setText(QCoreApplication::translate("category", "\347\247\215\347\261\273\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class category: public Ui_category {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORY_H
