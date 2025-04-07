#ifndef FORMCONVERTERENERGY_H
#define FORMCONVERTERENERGY_H

#include <QWidget>

namespace Ui {
class FormConverterEnergy;
}

class FormConverterEnergy : public QWidget
{
    Q_OBJECT

public:
    explicit FormConverterEnergy(QWidget *parent = nullptr);
    ~FormConverterEnergy();

private:
    Ui::FormConverterEnergy *ui;
};

#endif // FORMCONVERTERENERGY_H
