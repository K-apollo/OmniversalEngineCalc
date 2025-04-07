#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "FormCalculator/formcalculatorstandard.h"      // 표준           // 윈도우 11에서 계산기와 유사한 프로그램들로 제작
#include "FormCalculator/formcalculatorscientific.h"    // 공학
#include "FormCalculator/formcalculatorprogrammer.h"    // 프로그래머
#include "FormCalculator/formcalculatorgraph.h"         // 그래프
#include "FormCalculator/formcalculatordateandtime.h"   // 날짜 & 시간

#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 각 계산기 화면 생성 및 매핑
    calculatorMap[ui->actionStandard] = new FormCalculatorStandard(this);
    calculatorMap[ui->actionScientific] = new FormCalculatorScientific(this);
    calculatorMap[ui->actionProgrammer] = new FormCalculatorProgrammer(this);
    calculatorMap[ui->actionGraph] = new FormCalculatorGraph(this);
    calculatorMap[ui->actionDateAndTime] = new FormCalculatorDateAndTime(this);

    // 모든 계산기 화면을 `stackedWidget`에 추가 (불필요한 복사 방지)
    const auto& widgets = calculatorMap.values();
    for (auto* widget : widgets)
        ui->stackedWidget->addWidget(widget);

    // 메뉴 선택 시 `showCalculator()` 실행 (불필요한 복사 방지)
    const auto& actions = calculatorMap.keys();
    for (auto* action : actions)
        connect(action, &QAction::triggered, this, &MainWindow::showCalculator);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    int currentIndex = ui->stackedWidget->currentIndex();
    int totalPages = ui->stackedWidget->count();

    if (event->key() == Qt::Key_Left || event->key() == Qt::Key_4)  // 화살표 왼쪽 또는 넘버키 4
    {
        if (currentIndex > 0)
            ui->stackedWidget->setCurrentIndex(currentIndex - 1);
    }
    else if (event->key() == Qt::Key_Right || event->key() == Qt::Key_6)  // 화살표 오른쪽 또는 넘버키 6
    {
        if (currentIndex < totalPages - 1)
            ui->stackedWidget->setCurrentIndex(currentIndex + 1);
    }
}

void MainWindow::showCalculator()
{
    QAction *selectedAction = qobject_cast<QAction*>(sender()); // 실행한 QAction 확인
    if (selectedAction && calculatorMap.contains(selectedAction))
    {
        ui->stackedWidget->setCurrentWidget(calculatorMap[selectedAction]);
    }
    else
    {
        QWidget *currentWidget = ui->stackedWidget->currentWidget();    // 만약 해당 액션에 대한 페이지가 존재하지 않으면 삭제
        if (currentWidget)
        {
            ui->stackedWidget->removeWidget(currentWidget);
            currentWidget->deleteLater();
        }
    }
}

