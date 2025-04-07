/********************************************************************************
** Form generated from reading UI file 'formcalculatorscientific.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCALCULATORSCIENTIFIC_H
#define UI_FORMCALCULATORSCIENTIFIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormCalculatorScientific
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *FormCalculatorScientific)
    {
        if (FormCalculatorScientific->objectName().isEmpty())
            FormCalculatorScientific->setObjectName(QString::fromUtf8("FormCalculatorScientific"));
        FormCalculatorScientific->resize(400, 300);
        gridLayout = new QGridLayout(FormCalculatorScientific);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(FormCalculatorScientific);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(FormCalculatorScientific);

        QMetaObject::connectSlotsByName(FormCalculatorScientific);
    } // setupUi

    void retranslateUi(QWidget *FormCalculatorScientific)
    {
        FormCalculatorScientific->setWindowTitle(QCoreApplication::translate("FormCalculatorScientific", "Form", nullptr));
        label->setText(QCoreApplication::translate("FormCalculatorScientific", "\352\263\265\355\225\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormCalculatorScientific: public Ui_FormCalculatorScientific {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCALCULATORSCIENTIFIC_H
