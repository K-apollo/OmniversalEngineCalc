#ifndef FORMCONVERTERDATA_H
#define FORMCONVERTERDATA_H

#include <QWidget>

namespace Ui {
class FormConverterData;
}

class FormConverterData : public QWidget
{
    Q_OBJECT

public:
    explicit FormConverterData(QWidget *parent = nullptr);
    ~FormConverterData();

private:
    Ui::FormConverterData *ui;
};

#endif // FORMCONVERTERDATA_H
