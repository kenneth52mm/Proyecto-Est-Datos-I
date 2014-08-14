#include "NodoEquipoXGrupo.h"


NodoEquipoXGrupo::NodoEquipoXGrupo(void)
{
    this->SetAnterior(NULL);
    this->SetSiguiente(NULL);
    this->SetEnlaceEquipo(NULL);
}
NodoEquipoXGrupo::~NodoEquipoXGrupo(void)
{
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

NodoEquipo * NodoEquipoXGrupo::GetEnlaceEquipo()
{
    return this->enlace_equipo;
}
void NodoEquipoXGrupo::SetEnlaceEquipo(NodoEquipo * _enlaceEquipo)
{
    this->enlace_equipo = _enlaceEquipo;
}
