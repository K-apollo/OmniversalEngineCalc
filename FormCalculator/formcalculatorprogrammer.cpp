#include "formcalculatorprogrammer.h"
#include "ui_formcalculatorprogrammer.h"

FormCalculatorProgrammer::FormCalculatorProgrammer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormCalculatorProgrammer)
{
    ui->setupUi(this);
}

FormCalculatorProgrammer::~FormCalculatorProgrammer()
{
    delete ui;
}
