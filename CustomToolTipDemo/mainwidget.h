#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>

class CToolTip;

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

private:
    Ui::MainWidget *ui;
    CToolTip *ctoolTip;
};

#endif // MAINWIDGET_H
