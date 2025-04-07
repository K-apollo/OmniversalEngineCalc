#ifndef FORMCONVERTERWEIGHTANDMASS_H
#define FORMCONVERTERWEIGHTANDMASS_H

#include <QWidget>

namespace Ui {
class FormConverterWeightAndMass;
}

class FormConverterWeightAndMass : public QWidget
{
    Q_OBJECT

public:
    explicit FormConverterWeightAndMass(QWidget *parent = nullptr);
    ~FormConverterWeightAndMass();

private:
    Ui::FormConverterWeightAndMass *ui;
};

#endif // FORMCONVERTERWEIGHTANDMASS_H
