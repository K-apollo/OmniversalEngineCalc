#include "formconverterspeed.h"
#include "ui_formconverterspeed.h"

FormConverterSpeed::FormConverterSpeed(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormConverterSpeed)
{
    ui->setupUi(this);
}

FormConverterSpeed::~FormConverterSpeed()
{
    delete ui;
}
