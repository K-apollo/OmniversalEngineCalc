/********************************************************************************
** Form generated from reading UI file 'formcalculatorstandard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCALCULATORSTANDARD_H
#define UI_FORMCALCULATORSTANDARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormCalculatorStandard
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *FormCalculatorStandard)
    {
        if (FormCalculatorStandard->objectName().isEmpty())
            FormCalculatorStandard->setObjectName(QString::fromUtf8("FormCalculatorStandard"));
        FormCalculatorStandard->resize(400, 300);
        gridLayout = new QGridLayout(FormCalculatorStandard);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(FormCalculatorStandard);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(FormCalculatorStandard);

        QMetaObject::connectSlotsByName(FormCalculatorStandard);
    } // setupUi

    void retranslateUi(QWidget *FormCalculatorStandard)
    {
        FormCalculatorStandard->setWindowTitle(QCoreApplication::translate("FormCalculatorStandard", "Form", nullptr));
        label->setText(QCoreApplication::translate("FormCalculatorStandard", "\355\221\234\354\244\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormCalculatorStandard: public Ui_FormCalculatorStandard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCALCULATORSTANDARD_H
