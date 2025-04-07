#ifndef FORMCALCULATORGRAPH_H
#define FORMCALCULATORGRAPH_H

#include <QWidget>

namespace Ui {
class FormCalculatorGraph;
}

class FormCalculatorGraph : public QWidget
{
    Q_OBJECT

public:
    explicit FormCalculatorGraph(QWidget *parent = nullptr);
    ~FormCalculatorGraph();

private:
    Ui::FormCalculatorGraph *ui;
};

#endif // FORMCALCULATORGRAPH_H
