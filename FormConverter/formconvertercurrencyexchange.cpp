#include "formconvertercurrencyexchange.h"
#include "ui_formconvertercurrencyexchange.h"

FormConverterCurrencyExchange::FormConverterCurrencyExchange(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormConverterCurrencyExchange)
{
    ui->setupUi(this);
}

FormConverterCurrencyExchange::~FormConverterCurrencyExchange()
{
    delete ui;
}
