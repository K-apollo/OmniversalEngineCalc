#ifndef FORMCALCULATORSTANDARD_H
#define FORMCALCULATORSTANDARD_H

#include <QWidget>

namespace Ui {
class FormCalculatorStandard;
}

class FormCalculatorStandard : public QWidget
{
    Q_OBJECT

public:
    explicit FormCalculatorStandard(QWidget *parent = nullptr);
    ~FormCalculatorStandard();

private:
    Ui::FormCalculatorStandard *ui;
};

#endif // FORMCALCULATORSTANDARD_H
