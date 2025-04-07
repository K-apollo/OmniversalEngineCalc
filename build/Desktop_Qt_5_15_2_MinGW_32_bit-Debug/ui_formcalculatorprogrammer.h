/********************************************************************************
** Form generated from reading UI file 'formcalculatorprogrammer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCALCULATORPROGRAMMER_H
#define UI_FORMCALCULATORPROGRAMMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormCalculatorProgrammer
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *FormCalculatorProgrammer)
    {
        if (FormCalculatorProgrammer->objectName().isEmpty())
            FormCalculatorProgrammer->setObjectName(QString::fromUtf8("FormCalculatorProgrammer"));
        FormCalculatorProgrammer->resize(400, 300);
        gridLayout = new QGridLayout(FormCalculatorProgrammer);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(FormCalculatorProgrammer);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(FormCalculatorProgrammer);

        QMetaObject::connectSlotsByName(FormCalculatorProgrammer);
    } // setupUi

    void retranslateUi(QWidget *FormCalculatorProgrammer)
    {
        FormCalculatorProgrammer->setWindowTitle(QCoreApplication::translate("FormCalculatorProgrammer", "Form", nullptr));
        label->setText(QCoreApplication::translate("FormCalculatorProgrammer", "\355\224\204\353\241\234\352\267\270\353\236\230\353\250\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormCalculatorProgrammer: public Ui_FormCalculatorProgrammer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCALCULATORPROGRAMMER_H
