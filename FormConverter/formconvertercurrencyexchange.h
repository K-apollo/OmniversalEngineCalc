#ifndef FORMCONVERTERCURRENCYEXCHANGE_H
#define FORMCONVERTERCURRENCYEXCHANGE_H

#include <QWidget>

namespace Ui {
class FormConverterCurrencyExchange;
}

class FormConverterCurrencyExchange : public QWidget
{
    Q_OBJECT

public:
    explicit FormConverterCurrencyExchange(QWidget *parent = nullptr);
    ~FormConverterCurrencyExchange();

private:
    Ui::FormConverterCurrencyExchange *ui;
};

#endif // FORMCONVERTERCURRENCYEXCHANGE_H
