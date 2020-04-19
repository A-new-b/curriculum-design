/********************************************************************************
** Form generated from reading UI file 'in.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IN_H
#define UI_IN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_in
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QDialogButtonBox *buttonBox;
    QLineEdit *birthdate;
    QLabel *Label_2;
    QLineEdit *amount;
    QLabel *Label;
    QLabel *info;

    void setupUi(QDialog *in)
    {
        if (in->objectName().isEmpty())
            in->setObjectName(QString::fromUtf8("in"));
        in->resize(400, 140);
        gridLayout = new QGridLayout(in);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        buttonBox = new QDialogButtonBox(in);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(4, QFormLayout::FieldRole, buttonBox);

        birthdate = new QLineEdit(in);
        birthdate->setObjectName(QString::fromUtf8("birthdate"));

        formLayout->setWidget(3, QFormLayout::FieldRole, birthdate);

        Label_2 = new QLabel(in);
        Label_2->setObjectName(QString::fromUtf8("Label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, Label_2);

        amount = new QLineEdit(in);
        amount->setObjectName(QString::fromUtf8("amount"));

        formLayout->setWidget(2, QFormLayout::FieldRole, amount);

        Label = new QLabel(in);
        Label->setObjectName(QString::fromUtf8("Label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, Label);

        info = new QLabel(in);
        info->setObjectName(QString::fromUtf8("info"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, info);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        retranslateUi(in);
        QObject::connect(buttonBox, SIGNAL(accepted()), in, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), in, SLOT(reject()));

        QMetaObject::connectSlotsByName(in);
    } // setupUi

    void retranslateUi(QDialog *in)
    {
        in->setWindowTitle(QCoreApplication::translate("in", "Dialog", nullptr));
        Label_2->setText(QCoreApplication::translate("in", "\347\224\237\344\272\247\346\227\245\346\234\237:", nullptr));
        Label->setText(QCoreApplication::translate("in", "\345\205\245\345\272\223\351\207\217:", nullptr));
        info->setText(QCoreApplication::translate("in", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class in: public Ui_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IN_H
