/********************************************************************************
** Form generated from reading UI file 'formcalculatordateandtime.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCALCULATORDATEANDTIME_H
#define UI_FORMCALCULATORDATEANDTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormCalculatorDateAndTime
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *FormCalculatorDateAndTime)
    {
        if (FormCalculatorDateAndTime->objectName().isEmpty())
            FormCalculatorDateAndTime->setObjectName(QString::fromUtf8("FormCalculatorDateAndTime"));
        FormCalculatorDateAndTime->resize(400, 300);
        gridLayout = new QGridLayout(FormCalculatorDateAndTime);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(FormCalculatorDateAndTime);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(FormCalculatorDateAndTime);

        QMetaObject::connectSlotsByName(FormCalculatorDateAndTime);
    } // setupUi

    void retranslateUi(QWidget *FormCalculatorDateAndTime)
    {
        FormCalculatorDateAndTime->setWindowTitle(QCoreApplication::translate("FormCalculatorDateAndTime", "Form", nullptr));
        label->setText(QCoreApplication::translate("FormCalculatorDateAndTime", "\353\202\240\354\247\234 & \354\213\234\352\260\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormCalculatorDateAndTime: public Ui_FormCalculatorDateAndTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCALCULATORDATEANDTIME_H
