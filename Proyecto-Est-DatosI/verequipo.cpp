#include "verequipo.h"
#include "ui_verequipo.h"

VerEquipo::VerEquipo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VerEquipo)
{
    ui->setupUi(this);
}

VerEquipo::~VerEquipo()
{
    delete ui;
}
