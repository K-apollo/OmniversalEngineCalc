/********************************************************************************
** Form generated from reading UI file 'formconverterspeed.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCONVERTERSPEED_H
#define UI_FORMCONVERTERSPEED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormConverterSpeed
{
public:

    void setupUi(QWidget *FormConverterSpeed)
    {
        if (FormConverterSpeed->objectName().isEmpty())
            FormConverterSpeed->setObjectName(QString::fromUtf8("FormConverterSpeed"));
        FormConverterSpeed->resize(400, 300);

        retranslateUi(FormConverterSpeed);

        QMetaObject::connectSlotsByName(FormConverterSpeed);
    } // setupUi

    void retranslateUi(QWidget *FormConverterSpeed)
    {
        FormConverterSpeed->setWindowTitle(QCoreApplication::translate("FormConverterSpeed", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormConverterSpeed: public Ui_FormConverterSpeed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCONVERTERSPEED_H
