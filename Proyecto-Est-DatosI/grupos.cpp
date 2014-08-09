#include "grupos.h"
#include "ui_grupos.h"

Grupos::Grupos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Grupos)
{
    ui->setupUi(this);
}

Grupos::~Grupos()
{
    delete ui;
}

void Grupos::on_btnVerGrupoA_clicked()
{

}
