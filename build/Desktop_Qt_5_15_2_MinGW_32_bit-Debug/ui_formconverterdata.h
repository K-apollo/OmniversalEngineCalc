/********************************************************************************
** Form generated from reading UI file 'formconverterdata.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCONVERTERDATA_H
#define UI_FORMCONVERTERDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormConverterData
{
public:

    void setupUi(QWidget *FormConverterData)
    {
        if (FormConverterData->objectName().isEmpty())
            FormConverterData->setObjectName(QString::fromUtf8("FormConverterData"));
        FormConverterData->resize(400, 300);

        retranslateUi(FormConverterData);

        QMetaObject::connectSlotsByName(FormConverterData);
    } // setupUi

    void retranslateUi(QWidget *FormConverterData)
    {
        FormConverterData->setWindowTitle(QCoreApplication::translate("FormConverterData", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormConverterData: public Ui_FormConverterData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCONVERTERDATA_H
