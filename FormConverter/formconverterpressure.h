#ifndef FORMCONVERTERPRESSURE_H
#define FORMCONVERTERPRESSURE_H

#include <QWidget>

namespace Ui {
class FormConverterPressure;
}

class FormConverterPressure : public QWidget
{
    Q_OBJECT

public:
    explicit FormConverterPressure(QWidget *parent = nullptr);
    ~FormConverterPressure();

private:
    Ui::FormConverterPressure *ui;
};

#endif // FORMCONVERTERPRESSURE_H
