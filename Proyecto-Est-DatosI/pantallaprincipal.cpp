#include "pantallaprincipal.h"
#include "ui_pantallaprincipal.h"

PantallaPrincipal::PantallaPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PantallaPrincipal)
{
    ui->setupUi(this);
}

PantallaPrincipal::~PantallaPrincipal()
{
    delete ui;
}
