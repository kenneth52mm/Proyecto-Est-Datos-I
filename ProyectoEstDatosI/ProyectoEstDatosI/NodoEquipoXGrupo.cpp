#include "NodoEquipoXGrupo.h"


NodoEquipoXGrupo::NodoEquipoXGrupo(void)
{
    this->SetAnterior(NULL);
    this->SetSiguiente(NULL);
    this->SetEquipo(NULL);
	this->SetGrupo(NULL);
}
NodoEquipoXGrupo::~NodoEquipoXGrupo(void)
{
}

NodoEquipoXGrupo::NodoEquipoXGrupo(NodoEquipo * equipo, NodoGrupos * grupo)
{
	this->SetEquipo(equipo);
	this->SetGrupo(grupo);
}

NodoEquipoXGrupo * NodoEquipoXGrupo::GetAnterior()
{
    return this->anterior;
}
void NodoEquipoXGrupo::SetAnterior(NodoEquipoXGrupo * anterior)
{
    this-> anterior = anterior;
}

NodoEquipoXGrupo * NodoEquipoXGrupo::GetSiguiente()
{
    return this->siguiente;
}
void NodoEquipoXGrupo::SetSiguiente(NodoEquipoXGrupo * siguiente)
{
    this->siguiente = siguiente;
}

NodoEquipo * NodoEquipoXGrupo::GetEquipo()
{
    return this->equipo;
}
void NodoEquipoXGrupo::SetEquipo(NodoEquipo * equipo)
{
    this->equipo = equipo;
}

NodoGrupos * NodoEquipoXGrupo::GetGrupo()
{
	return this->grupo;
}
void NodoEquipoXGrupo::SetGrupo(NodoGrupos * grupo)
{
	this->grupo = grupo;
}
