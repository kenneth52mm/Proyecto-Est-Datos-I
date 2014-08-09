#include "pantallaprincipal.h"
#include "ui_pantallaprincipal.h"
#include "ListaEquipos.h"
ListaEquipos *equipos=new ListaEquipos();
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
