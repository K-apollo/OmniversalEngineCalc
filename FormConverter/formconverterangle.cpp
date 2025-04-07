#include "formconverterangle.h"
#include "ui_formconverterangle.h"

FormConverterAngle::FormConverterAngle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormConverterAngle)
{
    ui->setupUi(this);
}

FormConverterAngle::~FormConverterAngle()
{
    delete ui;
}
