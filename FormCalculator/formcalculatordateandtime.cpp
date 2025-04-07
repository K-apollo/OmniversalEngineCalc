#include "formcalculatordateandtime.h"
#include "ui_formcalculatordateandtime.h"

FormCalculatorDateAndTime::FormCalculatorDateAndTime(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormCalculatorDateAndTime)
{
    ui->setupUi(this);
}

FormCalculatorDateAndTime::~FormCalculatorDateAndTime()
{
    delete ui;
}
