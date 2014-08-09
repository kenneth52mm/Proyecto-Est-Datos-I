#include "verjugador.h"
#include "ui_verjugador.h"

VerJugador::VerJugador(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VerJugador)
{
    ui->setupUi(this);
}

VerJugador::~VerJugador()
{
    delete ui;
}
