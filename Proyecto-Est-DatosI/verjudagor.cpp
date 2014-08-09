#include "verjudagor.h"
#include "ui_verjudagor.h"
#include "ListaJugadores.h"
#include "NodoJugador.h"

VerJudagor::VerJudagor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VerJudagor)
{
    ui->setupUi(this);
    ListaJugadores* jugadores = lista;
    NodoJugador* jugador = lista->GetCabeza();
    QTableWidgetItem* id = new QTableWidgetItem(jugador->GetJugador()->GetId());
    QString dato = QString ::fromStdString(jugador->GetJugador()->GetNombre());
    QTableWidgetItem* nombre= new QTableWidgetItem(dato);
    for(int i = 0; i < 80; i++)
    {
        ui->tableWidget_2->setItem(i, 0, nombre);
        jugador = jugador->GetSiguiente();
    }
}

VerJudagor::~VerJudagor()
{
    delete ui;
}
