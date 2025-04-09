#include "formcalculatorstandard.h"
#include "ui_formcalculatorstandard.h"
#include "twstandardhiddenpanel.h"
#include <QVBoxLayout>

FormCalculatorStandard::FormCalculatorStandard(QWidget *parent):
    QWidget(parent),
    ui(new Ui::FormCalculatorStandard),
    panel(new twStandardHiddenPanel()),  // panel을 먼저 초기화
    dockWidget(new QDockWidget("Memory & History", parent)) // dockWidget을 나중에 초기화
{
    ui->setupUi(this);

    // 콤보박스 선택 변경 시 실행
    connect(ui->comboMemoryAndHistory, &QComboBox::currentTextChanged, this, &FormCalculatorStandard::handleComboBoxChange);

    // 탭 변경 시 콤보박스 값 자동 업데이트
    connect(panel, &twStandardHiddenPanel::tabChanged, this, &FormCalculatorStandard::handleTabChange);

    // QDockWidget 설정
    dockWidget->setWidget(panel);
    dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    dockWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    // QMainWindow에 도킹
    QMainWindow *mainWin = qobject_cast<QMainWindow*>(parent);
    if (mainWin)
    {
        mainWin->addDockWidget(Qt::RightDockWidgetArea, dockWidget);
        dockWidget->hide(); // 기본적으로 숨김 (콤보박스에서 선택할 때 표시)
    }

    // QDockWidget이 닫힐 때 Default 값 설정
    connect(dockWidget, &QDockWidget::visibilityChanged, this, &FormCalculatorStandard::handleDockWidgetClose);
}

FormCalculatorStandard::~FormCalculatorStandard()
{
    delete ui;
    delete dockWidget;
}

void FormCalculatorStandard::handleComboBoxChange(const QString &text)
{
    if (text == "Default")
    {
        dockWidget->hide(); // Default 선택 시 숨김
    }
    else if (text == "Memory")
    {
        panel->setCurrentIndex(1);  // Memory 탭 선택
        dockWidget->show();
    }
    else if (text == "History")
    {
        panel->setCurrentIndex(0);  // History 탭 선택
        dockWidget->show();
    }
}

void FormCalculatorStandard::handleTabChange(int index)
{
    if (index == 0) {
        ui->comboMemoryAndHistory->setCurrentText("History");
    } else if (index == 1) {
        ui->comboMemoryAndHistory->setCurrentText("Memory");
    }
}

void FormCalculatorStandard::handleDockWidgetClose()
{
    if (!dockWidget->isVisible()) {
        ui->comboMemoryAndHistory->setCurrentText("Default");  // 창 닫으면 Default 값으로 변경
    }
}
