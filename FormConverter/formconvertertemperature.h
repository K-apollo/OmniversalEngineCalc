#ifndef FORMCONVERTERTEMPERATURE_H
#define FORMCONVERTERTEMPERATURE_H

#include <QWidget>

namespace Ui {
class FormConverterTemperature;
}

class FormConverterTemperature : public QWidget
{
    Q_OBJECT

public:
    explicit FormConverterTemperature(QWidget *parent = nullptr);
    ~FormConverterTemperature();

private:
    Ui::FormConverterTemperature *ui;
};

#endif // FORMCONVERTERTEMPERATURE_H
