#include "grupos.h"
#include "ui_grupos.h"
#include "NodoEquipo.h"
Grupos::Grupos(ListaGrupos *grupos,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Grupos)
{
    ui->setupUi(this);

    ListaGrupos * listaGrupos = grupos;
    NodoGrupos * nodoGrupos = listaGrupos->GetCab();
    ListaEquipos * listaEquipos = nodoGrupos->GetEquipos();
    NodoEquipo * nodoEquipos = listaEquipos->GetCab();
    QString dato;
    QTableWidgetItem * item;
    int fila = 0;

    do
    {
    //QString  dato = QString::toStdString(nodoEquipos->GetEquipo()->GetEntrenador());
      nodoEquipos = nodoEquipos->GetSgte();
      item = new QTableWidgetItem("sirve");
      ui->tbGrupoA->setItem(fila,1,item);
      fila++;
    }
    while (nodoEquipos != listaEquipos->GetCab());

    fila = 0;
    nodoGrupos = nodoGrupos->GetSgte();
    listaEquipos = nodoGrupos->GetEquipos();
    nodoEquipos = listaEquipos->GetCab();

    do
    {
    // QString dato = QString::toStdString(nodoEquipos->GetEquipo()->GetEntrenador());
      nodoEquipos = nodoEquipos->GetSgte();
      item = new QTableWidgetItem("sirve");
      ui->tbGrupoB->setItem(fila,1,item);
      fila++;
    }
    while (nodoEquipos != listaEquipos->GetCab());
}

Grupos::~Grupos()
{
    delete ui;
}

void Grupos::on_btnVerGrupoA_clicked()
{

}
