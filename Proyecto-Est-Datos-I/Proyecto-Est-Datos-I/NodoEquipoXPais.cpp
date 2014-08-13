#include "NodoEquipoXPais.h"


NodoEquipoXPais::NodoEquipoXPais(void)
{
}

NodoEquipoXPais::~NodoEquipoXPais(void)
{
}

NodoEquipoXPais::NodoEquipoXPais(NodoEquipo * nodo_equipo, NodoPais * nodo_pais)
{
	this->SetEnlaceEquipo(nodo_equipo);
	this->SetEnlacePais(nodo_pais);
}

NodoEquipoXPais * NodoEquipoXPais::GetAnterior()
{
	return this->anterior;
}
void NodoEquipoXPais::SetAnterior(NodoEquipoXPais * anterior)
{
	this->anterior = anterior;
}

NodoEquipoXPais * NodoEquipoXPais::GetSiguiente()
{
	return this->siguiente;
}
void NodoEquipoXPais::SetSiguiente(NodoEquipoXPais * siguiente)
{
	this->siguiente = siguiente;
}

NodoEquipo * NodoEquipoXPais::GetEnlaceEquipo()
{
	return this->equipo;
}
void NodoEquipoXPais::SetEnlaceEquipo(NodoEquipo * equipo)
{
	this->equipo = equipo;
}

NodoPais * NodoEquipoXPais::GetEnlacePais()
{
	return this->pais;
}
void NodoEquipoXPais::SetEnlacePais(NodoPais * pais)
{
	this->pais = pais;
}