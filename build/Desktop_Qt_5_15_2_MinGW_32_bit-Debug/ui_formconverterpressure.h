/********************************************************************************
** Form generated from reading UI file 'formconverterpressure.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCONVERTERPRESSURE_H
#define UI_FORMCONVERTERPRESSURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormConverterPressure
{
public:

    void setupUi(QWidget *FormConverterPressure)
    {
        if (FormConverterPressure->objectName().isEmpty())
            FormConverterPressure->setObjectName(QString::fromUtf8("FormConverterPressure"));
        FormConverterPressure->resize(400, 300);

        retranslateUi(FormConverterPressure);

        QMetaObject::connectSlotsByName(FormConverterPressure);
    } // setupUi

    void retranslateUi(QWidget *FormConverterPressure)
    {
        FormConverterPressure->setWindowTitle(QCoreApplication::translate("FormConverterPressure", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormConverterPressure: public Ui_FormConverterPressure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCONVERTERPRESSURE_H
