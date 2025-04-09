#ifndef FORMCALCULATORSTANDARD_H
#define FORMCALCULATORSTANDARD_H

#include <QWidget>
#include <QComboBox>
#include <QDialog>
#include "twstandardhiddenpanel.h"

namespace Ui {
class FormCalculatorStandard;
}

class FormCalculatorStandard : public QWidget
{
    Q_OBJECT

public:
    explicit FormCalculatorStandard(QWidget *parent = nullptr);
    ~FormCalculatorStandard();

private slots:
    void handleComboBoxChange(const QString &text);  // 콤보박스 선택 변경 시 실행되는 함수

private:
    Ui::FormCalculatorStandard *ui;
    QDialog *panelDialog;  // 별도의 창을 생성하는 변수
    twStandardHiddenPanel *panel;  // TabWidget을 창으로 실행하도록 설정
};

#endif // FORMCALCULATORSTANDARD_H
