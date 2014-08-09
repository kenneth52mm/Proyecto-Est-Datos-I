#include "grupos.h"
#include "ui_grupos.h"

Grupos::Grupos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Grupos)
{
    ui->setupUi(this);

    ListaGrupos * listaGrupos = Lista;
    NodoGrupos * nodoGrupos = listaGrupos->GetCabeza();
    ListaEquipos * listaEquipos = nodoGrupos->GetListaEquipos();
    NodoEquipos * nodoEquipos = listaEquipos->GetCabeza();
    QString dato;
    QTableWidgetItem * item;
    int fila = 0;

    do
    {
      dato = nodoEquipos->getInfo()->GetNombre();
      nodoEquipos = nodoEquipos()->GetSiguiente();
      item = new QTableWidgetItem(dato);
      ui->tbGrupoA->setItem(fila,1,item);
      fila++;
    }
    while (nodoEquipos != listaEquipos->GetCabeza());

    fila = 0;
    nodoGrupos = nodoGrupos->GetSiguiente();
    ListaEquipos * listaEquipos = nodoGrupos->GetListaEquipos();
    NodoEquipos * nodoEquipos = listaEquipos->GetCabeza();

    do
    {
      dato = nodoEquipos->getInfo()->GetNombre();
      nodoEquipos = nodoEquipos()->GetSiguiente();
      item = new QTableWidgetItem(dato);
      ui->tbGrupoB->setItem(fila,1,item);
      fila++;
    }
    while (nodoEquipos != listaEquipos->GetCabeza());
}

Grupos::~Grupos()
{
    delete ui;
}

void Grupos::on_btnVerGrupoA_clicked()
{

}
