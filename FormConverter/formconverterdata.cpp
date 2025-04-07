#include "formconverterdata.h"
#include "ui_formconverterdata.h"

FormConverterData::FormConverterData(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormConverterData)
{
    ui->setupUi(this);
}

FormConverterData::~FormConverterData()
{
    delete ui;
}
