#include "twstandardhiddenpanel.h"
#include "ui_twstandardhiddenpanel.h"

twStandardHiddenPanel::twStandardHiddenPanel(QWidget *parent):
    QTabWidget(parent),
    ui(new Ui::twStandardHiddenPanel)
{
    ui->setupUi(this);

    connect(this, &QTabWidget::currentChanged, this, &twStandardHiddenPanel::tabChanged);
}

twStandardHiddenPanel::~twStandardHiddenPanel()
{
    delete ui;
}
