#include "verpartidos.h"
#include "ui_verpartidos.h"

VerPartidos::VerPartidos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VerPartidos)
{
    ui->setupUi(this);
}

VerPartidos::~VerPartidos()
{
    delete ui;
}
