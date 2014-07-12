#include "ListaEquipos.h"


ListaEquipos::ListaEquipos(void)
{
}


ListaEquipos::~ListaEquipos(void)
{
}

NodoEquipo *ListaEquipos::GetCab()
{
	return this->cab;
}
void ListaEquipos::SetCab(NodoEquipo *_cab)
{
	this->cab=_cab;
}

int ListaEquipos::GetTama()
{
	return this->tamano;
}

int ListaEquipos::Agregar(Equipo *){}
int ListaEquipos::Eliminar(int){}
ListaEquipos *ListaEquipos::MostarLista(){}
Equipo *ListaEquipos::MostrarEquipo(int){}