#ifndef FORMCONVERTERSPEED_H
#define FORMCONVERTERSPEED_H

#include <QWidget>

namespace Ui {
class FormConverterSpeed;
}

class FormConverterSpeed : public QWidget
{
    Q_OBJECT

public:
    explicit FormConverterSpeed(QWidget *parent = nullptr);
    ~FormConverterSpeed();

private:
    Ui::FormConverterSpeed *ui;
};

#endif // FORMCONVERTERSPEED_H
