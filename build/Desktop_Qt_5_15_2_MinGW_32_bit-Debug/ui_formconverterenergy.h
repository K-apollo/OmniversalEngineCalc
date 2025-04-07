/********************************************************************************
** Form generated from reading UI file 'formconverterenergy.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCONVERTERENERGY_H
#define UI_FORMCONVERTERENERGY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormConverterEnergy
{
public:

    void setupUi(QWidget *FormConverterEnergy)
    {
        if (FormConverterEnergy->objectName().isEmpty())
            FormConverterEnergy->setObjectName(QString::fromUtf8("FormConverterEnergy"));
        FormConverterEnergy->resize(400, 300);

        retranslateUi(FormConverterEnergy);

        QMetaObject::connectSlotsByName(FormConverterEnergy);
    } // setupUi

    void retranslateUi(QWidget *FormConverterEnergy)
    {
        FormConverterEnergy->setWindowTitle(QCoreApplication::translate("FormConverterEnergy", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormConverterEnergy: public Ui_FormConverterEnergy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCONVERTERENERGY_H
