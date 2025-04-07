#ifndef FORMCALCULATORSCIENTIFIC_H
#define FORMCALCULATORSCIENTIFIC_H

#include <QWidget>

namespace Ui {
class FormCalculatorScientific;
}

class FormCalculatorScientific : public QWidget
{
    Q_OBJECT

public:
    explicit FormCalculatorScientific(QWidget *parent = nullptr);
    ~FormCalculatorScientific();

private:
    Ui::FormCalculatorScientific *ui;
};

#endif // FORMCALCULATORSCIENTIFIC_H
