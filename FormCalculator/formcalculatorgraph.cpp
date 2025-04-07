#include "formcalculatorgraph.h"
#include "ui_formcalculatorgraph.h"

FormCalculatorGraph::FormCalculatorGraph(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormCalculatorGraph)
{
    ui->setupUi(this);
}

FormCalculatorGraph::~FormCalculatorGraph()
{
    delete ui;
}
