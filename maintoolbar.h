#ifndef MAINTOOLBAR_H
#define MAINTOOLBAR_H

#include <QWidget>
#include <QToolBar>

namespace Ui {
class MainToolBar;
}

class MainToolBar : public QToolBar
{
    Q_OBJECT

public:
    explicit MainToolBar(QWidget *parent = 0);
    ~MainToolBar();

private:
    Ui::MainToolBar *ui;
};

#endif // MAINTOOLBAR_H
