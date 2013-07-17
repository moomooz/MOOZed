#include "mooz.h"
#include "ui_mooz.h"

MOOZ::MOOZ(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MOOZ)
{
    ui->setupUi(this);
}

MOOZ::~MOOZ()
{
    delete ui;
}
