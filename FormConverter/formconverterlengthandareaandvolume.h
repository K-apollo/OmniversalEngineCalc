#ifndef FORMCONVERTERLENGTHANDAREAANDVOLUME_H
#define FORMCONVERTERLENGTHANDAREAANDVOLUME_H

#include <QWidget>

namespace Ui {
class FormConverterLengthAndAreaAndVolume;
}

class FormConverterLengthAndAreaAndVolume : public QWidget
{
    Q_OBJECT

public:
    explicit FormConverterLengthAndAreaAndVolume(QWidget *parent = nullptr);
    ~FormConverterLengthAndAreaAndVolume();

private:
    Ui::FormConverterLengthAndAreaAndVolume *ui;
};

#endif // FORMCONVERTERLENGTHANDAREAANDVOLUME_H
