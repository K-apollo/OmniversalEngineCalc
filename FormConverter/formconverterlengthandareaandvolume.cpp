#include "formconverterlengthandareaandvolume.h"
#include "ui_formconverterlengthandareaandvolume.h"

FormConverterLengthAndAreaAndVolume::FormConverterLengthAndAreaAndVolume(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormConverterLengthAndAreaAndVolume)
{
    ui->setupUi(this);
}

FormConverterLengthAndAreaAndVolume::~FormConverterLengthAndAreaAndVolume()
{
    delete ui;
}
