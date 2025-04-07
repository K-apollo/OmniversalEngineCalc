#include "formcalculatorstandard.h"
#include "ui_formcalculatorstandard.h"

FormCalculatorStandard::FormCalculatorStandard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormCalculatorStandard)
{
    ui->setupUi(this);
}

FormCalculatorStandard::~FormCalculatorStandard()
{
    delete ui;
}
