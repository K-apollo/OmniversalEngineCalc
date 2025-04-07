#ifndef FORMCALCULATORDATEANDTIME_H
#define FORMCALCULATORDATEANDTIME_H

#include <QWidget>

namespace Ui {
class FormCalculatorDateAndTime;
}

class FormCalculatorDateAndTime : public QWidget
{
    Q_OBJECT

public:
    explicit FormCalculatorDateAndTime(QWidget *parent = nullptr);
    ~FormCalculatorDateAndTime();

private:
    Ui::FormCalculatorDateAndTime *ui;
};

#endif // FORMCALCULATORDATEANDTIME_H
