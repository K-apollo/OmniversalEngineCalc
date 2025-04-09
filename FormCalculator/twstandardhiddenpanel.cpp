#include "twstandardhiddenpanel.h"
#include "ui_twstandardhiddenpanel.h"

twStandardHiddenPanel::twStandardHiddenPanel(QWidget *parent):
    QTabWidget(parent),
    ui(new Ui::twStandardHiddenPanel)
{
    ui->setupUi(this);
    // Memory, History 탭 추가
    this->addTab(new QWidget(), "Memory");
    this->addTab(new QWidget(), "History");
}

twStandardHiddenPanel::~twStandardHiddenPanel()
{
    delete ui;
}
