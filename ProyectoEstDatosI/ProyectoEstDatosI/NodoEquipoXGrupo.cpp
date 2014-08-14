#include "NodoEquipoXGrupo.h"


NodoEquipoXGrupo::NodoEquipoXGrupo(void)
{
    this->SetAnterior(NULL);
    this->SetSiguiente(NULL);
    this->SetEquipo(NULL);
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
void NodoEquipoXGrupo::SetAnterior(NodoEquipoXGrupo* _anterior)
{
    this->anterior= _anterior;

}

NodoEquipoXGrupo * NodoEquipoXGrupo::GetSiguiente()
{
    return this->siguiente;
}
void NodoEquipoXGrupo::SetSiguiente(NodoEquipoXGrupo* _siguiente)
{
    this->siguiente= _siguiente;
}

NodoEquipo * NodoEquipoXGrupo::GetEquipo()
{
    return this->equipo;
}
void NodoEquipoXGrupo::SetEquipo(NodoEquipo * equipo)
{
    this->equipo = equipo;
}
