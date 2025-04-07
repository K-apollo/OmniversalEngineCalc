#ifndef FORMCONVERTERANGLE_H
#define FORMCONVERTERANGLE_H

#include <QWidget>

namespace Ui {
class FormConverterAngle;
}

class FormConverterAngle : public QWidget
{
    Q_OBJECT

public:
    explicit FormConverterAngle(QWidget *parent = nullptr);
    ~FormConverterAngle();

private:
    Ui::FormConverterAngle *ui;
};

#endif // FORMCONVERTERANGLE_H
