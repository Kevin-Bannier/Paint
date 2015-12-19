#ifndef TABACCUEIL_H
#define TABACCUEIL_H

#include <QWidget>

namespace Ui {
class TabAccueil;
}

class TabAccueil : public QWidget
{
    Q_OBJECT

public:
    explicit TabAccueil(QWidget *parent = 0);
    ~TabAccueil();

private:
    Ui::TabAccueil *ui;
};

#endif // TABACCUEIL_H
