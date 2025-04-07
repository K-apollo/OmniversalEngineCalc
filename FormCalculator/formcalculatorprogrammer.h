#ifndef FORMCALCULATORPROGRAMMER_H
#define FORMCALCULATORPROGRAMMER_H

#include <QWidget>

namespace Ui {
class FormCalculatorProgrammer;
}

class FormCalculatorProgrammer : public QWidget
{
    Q_OBJECT

public:
    explicit FormCalculatorProgrammer(QWidget *parent = nullptr);
    ~FormCalculatorProgrammer();

private:
    Ui::FormCalculatorProgrammer *ui;
};

#endif // FORMCALCULATORPROGRAMMER_H
