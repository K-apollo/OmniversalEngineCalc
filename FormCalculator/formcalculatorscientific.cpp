#include "formcalculatorscientific.h"
#include "ui_formcalculatorscientific.h"

FormCalculatorScientific::FormCalculatorScientific(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormCalculatorScientific)
{
    ui->setupUi(this);
}

FormCalculatorScientific::~FormCalculatorScientific()
{
    delete ui;
}
