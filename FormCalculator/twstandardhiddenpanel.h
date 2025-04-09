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

private:
    Ui::twStandardHiddenPanel *ui;
};

#endif // TWSTANDARDHIDDENPANEL_H
