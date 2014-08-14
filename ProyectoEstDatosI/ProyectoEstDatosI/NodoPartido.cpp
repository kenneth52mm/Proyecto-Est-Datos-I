#include "NodoPartido.h"


NodoPartido::NodoPartido(void)
{
}
NodoPartido::~NodoPartido(void)
{
}

NodoPartido::NodoPartido(Partido * partido)
{
	this->partido = partido;
}

Partido * NodoPartido::GetPartido()
{
	return this->partido;
}
void NodoPartido::SetPartido(Partido * partido)
{
	this->partido = partido;
}

NodoPartido * NodoPartido::GetSiguiente()
{
	return this->siguiente;
}
void NodoPartido::SetSiguiente(NodoPartido * siguiente)
{
	this->siguiente = siguiente;
}

NodoPartido * NodoPartido::GetAnterior()
{
	return this->anterior;
}
void NodoPartido::SetAnterior(NodoPartido * anterior)
{
	this->anterior = anterior;
}
