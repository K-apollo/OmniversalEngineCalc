#include "formcalculatorstandard.h"
#include "ui_formcalculatorstandard.h"
#include "twstandardhiddenpanel.h"
#include <QVBoxLayout>

FormCalculatorStandard::FormCalculatorStandard(QWidget *parent):
    QWidget(parent),
    ui(new Ui::FormCalculatorStandard),
    panelDialog(new QDialog(this)), // 별도의 창을 생성
    panel(new twStandardHiddenPanel(panelDialog)) // QDialog에 추가
{
    ui->setupUi(this);

    // formcalculatorstandard.ui에 정의된 콤보박스를 가져옴
    connect(ui->comboMemoryAndHistory, &QComboBox::currentTextChanged, this, &FormCalculatorStandard::handleComboBoxChange);

    // QDialog 창 설정
    panelDialog->setWindowTitle("Memory & History");
    panelDialog->setFixedSize(400, 300);

    // 레이아웃 추가하여 패널을 창 안에 배치
    QVBoxLayout *layout = new QVBoxLayout(panelDialog);
    layout->addWidget(panel);
    panelDialog->setLayout(layout);
}

FormCalculatorStandard::~FormCalculatorStandard()
{
    delete ui;
    delete panelDialog;
}

void FormCalculatorStandard::handleComboBoxChange(const QString &text)
{
    if (text == "Memory")
    {
        panel->setCurrentIndex(1);  // Memory 탭으로 이동
        panelDialog->show();  // 창으로 표시
    }
    else if (text == "History")
    {
        panel->setCurrentIndex(0);  // History 탭으로 이동
        panelDialog->show();  // 창으로 표시
    }
}
