#include "pantallaprincipal.h"
#include "ui_pantallaprincipal.h"
#include "ListaEquipos.h"
#include "QMessageBox"
#include "grupos.h"
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
