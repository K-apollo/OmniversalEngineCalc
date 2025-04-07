#include "formconverterweightandmass.h"
#include "ui_formconverterweightandmass.h"

FormConverterWeightAndMass::FormConverterWeightAndMass(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormConverterWeightAndMass)
{
    ui->setupUi(this);
}

FormConverterWeightAndMass::~FormConverterWeightAndMass()
{
    delete ui;
}
