/********************************************************************************
** Form generated from reading UI file 'formconvertertemperature.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCONVERTERTEMPERATURE_H
#define UI_FORMCONVERTERTEMPERATURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormConverterTemperature
{
public:

    void setupUi(QWidget *FormConverterTemperature)
    {
        if (FormConverterTemperature->objectName().isEmpty())
            FormConverterTemperature->setObjectName(QString::fromUtf8("FormConverterTemperature"));
        FormConverterTemperature->resize(400, 300);

        retranslateUi(FormConverterTemperature);

        QMetaObject::connectSlotsByName(FormConverterTemperature);
    } // setupUi

    void retranslateUi(QWidget *FormConverterTemperature)
    {
        FormConverterTemperature->setWindowTitle(QCoreApplication::translate("FormConverterTemperature", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormConverterTemperature: public Ui_FormConverterTemperature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCONVERTERTEMPERATURE_H
