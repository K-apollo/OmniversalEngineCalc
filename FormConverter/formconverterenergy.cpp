#include "formconverterenergy.h"
#include "ui_formconverterenergy.h"

FormConverterEnergy::FormConverterEnergy(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormConverterEnergy)
{
    ui->setupUi(this);
}

FormConverterEnergy::~FormConverterEnergy()
{
    delete ui;
}
