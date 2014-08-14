#include "NodoEquipo.h"


NodoEquipo::NodoEquipo(void)
{
}
NodoEquipo::~NodoEquipo(void)
{
}

NodoEquipo * NodoEquipo::GetAnterior()
{
	return this->anterior;
}
void NodoEquipo::SetAnterior(NodoEquipo * anterior)
{
	this->anterior = anterior;
}

NodoEquipo * NodoEquipo::GetSiguiente()
{
	return this->siguiente;
}
void NodoEquipo::SetSiguiente(NodoEquipo * siguiente)
{
	this->siguiente = siguiente;
}

Equipo * NodoEquipo::GetEquipo()
{
	return this->equipo;
}	
void NodoEquipo::SetEquipo(Equipo * equipo)
{
	this->equipo = equipo;
}