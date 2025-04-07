/********************************************************************************
** Form generated from reading UI file 'formconverterpower.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCONVERTERPOWER_H
#define UI_FORMCONVERTERPOWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormConverterPower
{
public:

    void setupUi(QWidget *FormConverterPower)
    {
        if (FormConverterPower->objectName().isEmpty())
            FormConverterPower->setObjectName(QString::fromUtf8("FormConverterPower"));
        FormConverterPower->resize(400, 300);

        retranslateUi(FormConverterPower);

        QMetaObject::connectSlotsByName(FormConverterPower);
    } // setupUi

    void retranslateUi(QWidget *FormConverterPower)
    {
        FormConverterPower->setWindowTitle(QCoreApplication::translate("FormConverterPower", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormConverterPower: public Ui_FormConverterPower {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCONVERTERPOWER_H
