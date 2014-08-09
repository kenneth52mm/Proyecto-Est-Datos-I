#include "pantallaprincipal.h"
#include "ui_pantallaprincipal.h"
#include "ListaEquipos.h"
#include "QMessageBox"
#include "grupos.h"
#include "verequipo.h"
#include "verjudagor.h"
#include "verpartidos.h"
#include "CargaInicial.h"
#include "ListaEquipos.h"
#include "ListaEquipoXGrupo.h"
#include "ListaEquipoxPais.h"
#include "ListaEquipoxPartido.h"
#include "ListaGrupos.h"
#include "ListaJugadores.h"
#include "ListaJugadorxEquipo.h"\
#include "ListaPais.h"
#include "ListaPartidos.h"
#include "ListaPartidoxEquipo.h"

CargaInicial *datos=new CargaInicial();
ListaEquipos *equipos=new ListaEquipos();
ListaJugadores *jugadores=new ListaJugadores();
ListaJugadorxEquipo *jugador_equipo=new ListaJugadorxEquipo();
ListaEquipoXGrupo *equipo_grupo=new ListaEquipoXGrupo();
ListaGrupos *grupos=new ListaGrupos();
ListaPais *paises=new ListaPais();
ListaPartidos *partidos=new ListaPartidos();
ListaEquipoxPais *equipo_pais=new ListaEquipoxPais();

PantallaPrincipal::PantallaPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PantallaPrincipal)
{
    ui->setupUi(this);
    datos->CargarJugadoresXEquipos(jugador_equipo,equipos,jugadores);
    datos->CargarPaisesXEquiposGrupos(grupos,equipo_pais,paises,equipos);

}

PantallaPrincipal::~PantallaPrincipal()
{
    delete ui;
}

void PantallaPrincipal::on_actionGrupo_A_hovered()
{
    QMessageBox* mensaje=new QMessageBox();
    mensaje->setText("sirve");
}

void PantallaPrincipal::on_btnGrupos_clicked()
{
    Grupos*grupos=new Grupos();
    grupos->show();
}

void PantallaPrincipal::on_btnEquipos_clicked()
{
    VerEquipo *equipo=new VerEquipo(equipos);
    equipo->show();
}

void PantallaPrincipal::on_btnJugadores_clicked()
{
    VerJudagor *jugador=new VerJudagor();
}
