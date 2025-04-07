#include "formconvertertemperature.h"
#include "ui_formconvertertemperature.h"

FormConverterTemperature::FormConverterTemperature(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormConverterTemperature)
{
    ui->setupUi(this);
}

FormConverterTemperature::~FormConverterTemperature()
{
    delete ui;
}
