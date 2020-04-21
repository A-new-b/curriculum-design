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
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

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
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);


        retranslateUi(category);
        QObject::connect(buttonBox, SIGNAL(accepted()), category, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), category, SLOT(reject()));

        QMetaObject::connectSlotsByName(category);
    } // setupUi

    void retranslateUi(QDialog *category)
    {
        category->setWindowTitle(QCoreApplication::translate("category", "Dialog", nullptr));
        Info->setText(QCoreApplication::translate("category", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("category", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("category", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class category: public Ui_category {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORY_H
