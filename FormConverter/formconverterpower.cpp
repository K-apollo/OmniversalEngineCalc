#include "formconverterpower.h"
#include "ui_formconverterpower.h"

FormConverterPower::FormConverterPower(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormConverterPower)
{
    ui->setupUi(this);
}

FormConverterPower::~FormConverterPower()
{
    delete ui;
}
