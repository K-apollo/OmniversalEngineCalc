#include "formconverterpressure.h"
#include "ui_formconverterpressure.h"

FormConverterPressure::FormConverterPressure(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormConverterPressure)
{
    ui->setupUi(this);
}

FormConverterPressure::~FormConverterPressure()
{
    delete ui;
}
