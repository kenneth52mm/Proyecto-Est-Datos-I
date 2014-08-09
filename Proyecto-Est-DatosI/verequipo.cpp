#include "verequipo.h"
#include "ui_verequipo.h"
#include "ListaEquipos.h"

ListaEquipos *equiposAux=new ListaEquipos();
VerEquipo::VerEquipo(ListaEquipos *equipos,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VerEquipo)

{
    ui->setupUi(this);
    equiposAux=equipos;
    for(int i=0;i<equiposAux->GetTama();i++)
    {

        QTableWidgetItem *id=new QTableWidgetItem(equiposAux->MostrarEquipo(i)->GetId());
        QString dato=QString::fromStdString(equiposAux->MostrarEquipo(i)->GetEntrenador());
        QTableWidgetItem *nombre=new QTableWidgetItem(dato);
        ui->tbEquipos->setItem(i,0,id);
        ui->tbEquipos->setItem(i,1,nombre);
    }
}
VerEquipo::~VerEquipo()
{
    delete ui;
}
