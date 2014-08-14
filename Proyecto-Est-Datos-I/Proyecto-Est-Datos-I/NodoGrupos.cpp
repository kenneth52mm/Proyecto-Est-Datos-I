#include "NodoGrupos.h"


NodoGrupos::NodoGrupos(void)
{
}
NodoGrupos::~NodoGrupos(void)
{
}

string NodoGrupos::GetGrupo()
{
	return this->grupo;
}
void NodoGrupos::SetGrupo(string _grupo)
{
	this->grupo=_grupo;
}

ListaEquipoXGrupo * NodoGrupos::GetEquipos()
{
	return this->equipos;
}
void NodoGrupos::SetEquipos(ListaEquipoXGrupo * equipos)
{
	this->equipos = equipos;
}

NodoGrupos *NodoGrupos::GetSiguiente()
{
	return this->siguiente;
}
void NodoGrupos::SetSiguiente(NodoGrupos * siguiente)
{
	this->siguiente = siguiente;
}

NodoGrupos *NodoGrupos::GetAnterior()
{
	return this->anterior;
}
void NodoGrupos::SetAnterior(NodoGrupos * anterior)
{
	this->anterior = anterior;
}
