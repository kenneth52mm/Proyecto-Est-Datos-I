#include "verjudagor.h"
#include "ui_verjudagor.h"
#include "ListaJugadores.h"
#include "NodoJugador.h"

VerJudagor::VerJudagor(ListaJugadores* jug ,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VerJudagor)
{
    ui->setupUi(this);
    ListaJugadores* jugadores = lista;
    NodoJugador* jugador = lista->GetCabeza();


    // valores con los q se va a llenar la tabla

    QString dato = QString ::fromStdString(jugador->GetJugador()->GetNombre());
    QTableWidgetItem* nombre= new QTableWidgetItem(dato);
    QTableWidgetItem* edad = new QTableWidgetItem(jugador->GetJugador()->GetEdad());
    QString dato2 = QString ::fromStdString(jugador->GetJugador()->GetFechaNac());
    QTableWidgetItem* fechaNac= new QTableWidgetItem(dato2);
    QTableWidgetItem* altura = new QTableWidgetItem(jugador->GetJugador()->GetAltura());
    QTableWidgetItem* id = new QTableWidgetItem(jugador->GetJugador()->GetId());
    QString dato3 = QString::fromStdString(jugador->GetJugador()->GetPosicion());
    QTableWidgetItem* posicion = new QTableWidgetItem(dato3);
    QString dato4= QString:: fromStdString(jugador->GetJugador()->GetPrimerPartido());
    QTableWidgetItem* primerPartido= new QTableWidgetItem(dato4);
    QTableWidgetItem* partidosJugados = new QTableWidgetItem(jugador->GetJugador()->GetPartidosJugados());
    QTableWidgetItem* cantidadGoles = new QTableWidgetItem(jugador->GetJugador()->GetCantidadGoles());
    QString dato5= QString:: fromStdString(jugador->GetJugador()->GetClub());
    QTableWidgetItem* club = new QTableWidgetItem(dato5);


    for(int i = 0; i < 80; i++)
    {
        ui->tableWidget_2->setItem(i, 0, nombre);
        ui->tableWidget_2->setItem(i, 1, edad);
        ui->tableWidget_2->setItem(i, 2, fechaNac);
        ui->tableWidget_2->setItem(i, 3, altura);
        ui->tableWidget_2->setItem(i, 4, id);
        ui->tableWidget_2->setItem(i, 5, posicion);
        ui->tableWidget_2->setItem(i, 6, primerPartido);
        ui->tableWidget_2->setItem(i, 7, partidosJugados);
        ui->tableWidget_2->setItem(i, 8, cantidadGoles);
        ui->tableWidget_2->setItem(i, 9, club);
        jugador = jugador->GetSiguiente();
    }
}

VerJudagor::~VerJudagor()
{
    delete ui;
}
