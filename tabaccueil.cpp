#include "tabaccueil.h"
#include "ui_tabaccueil.h"

TabAccueil::TabAccueil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TabAccueil)
{
    ui->setupUi(this);
}

TabAccueil::~TabAccueil()
{
    delete ui;
}
