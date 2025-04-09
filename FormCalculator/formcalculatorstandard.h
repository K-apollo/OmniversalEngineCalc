#ifndef FORMCALCULATORSTANDARD_H
#define FORMCALCULATORSTANDARD_H

#include <QWidget>
#include <QComboBox>
#include <QDockWidget>
#include <QMainWindow>
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
    void handleComboBoxChange(const QString &text);  // QComboBox 선택 시 실행
    void handleTabChange(int index);  // QTabWidget 선택 시 실행
    void handleDockWidgetClose();  // QDockWidget 닫을 때 Default 값 설정

private:
    Ui::FormCalculatorStandard *ui;
    twStandardHiddenPanel *panel;  // 탭 패널을 먼저 선언
    QDockWidget *dockWidget;  // QMainWindow에 부착되는 도킹 위젯
};

#endif // FORMCALCULATORSTANDARD_H
