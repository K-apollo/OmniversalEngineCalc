/********************************************************************************
** Form generated from reading UI file 'formcalculatorgraph.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCALCULATORGRAPH_H
#define UI_FORMCALCULATORGRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormCalculatorGraph
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *FormCalculatorGraph)
    {
        if (FormCalculatorGraph->objectName().isEmpty())
            FormCalculatorGraph->setObjectName(QString::fromUtf8("FormCalculatorGraph"));
        FormCalculatorGraph->resize(400, 300);
        gridLayout = new QGridLayout(FormCalculatorGraph);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(FormCalculatorGraph);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(FormCalculatorGraph);

        QMetaObject::connectSlotsByName(FormCalculatorGraph);
    } // setupUi

    void retranslateUi(QWidget *FormCalculatorGraph)
    {
        FormCalculatorGraph->setWindowTitle(QCoreApplication::translate("FormCalculatorGraph", "Form", nullptr));
        label->setText(QCoreApplication::translate("FormCalculatorGraph", "\352\267\270\353\236\230\355\224\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormCalculatorGraph: public Ui_FormCalculatorGraph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCALCULATORGRAPH_H
