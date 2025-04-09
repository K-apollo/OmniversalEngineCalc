#ifndef TWSTANDARDHIDDENPANEL_H
#define TWSTANDARDHIDDENPANEL_H

#include <QTabWidget>

namespace Ui {
class twStandardHiddenPanel;
}

class twStandardHiddenPanel : public QTabWidget
{
    Q_OBJECT

public:
    explicit twStandardHiddenPanel(QWidget *parent = nullptr);
    ~twStandardHiddenPanel();

signals:
    void tabChanged(int index);  // 탭 변경 시 신호 발생

private:
    Ui::twStandardHiddenPanel *ui;
};

#endif // TWSTANDARDHIDDENPANEL_H
