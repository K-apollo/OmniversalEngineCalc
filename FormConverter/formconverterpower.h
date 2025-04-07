#ifndef FORMCONVERTERPOWER_H
#define FORMCONVERTERPOWER_H

#include <QWidget>

namespace Ui {
class FormConverterPower;
}

class FormConverterPower : public QWidget
{
    Q_OBJECT

public:
    explicit FormConverterPower(QWidget *parent = nullptr);
    ~FormConverterPower();

private:
    Ui::FormConverterPower *ui;
};

#endif // FORMCONVERTERPOWER_H
