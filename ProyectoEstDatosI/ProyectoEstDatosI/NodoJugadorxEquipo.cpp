#include "NodoJugadorxEquipo.h"


NodoJugadorxEquipo::NodoJugadorxEquipo(void)
{
	this->SetAnterior(NULL);
	this->SetSiguiente(NULL);
	this->SetEquipo(NULL);
	this->SetJugador(NULL);
}
NodoJugadorxEquipo::~NodoJugadorxEquipo(void)
{
}

NodoJugadorxEquipo* NodoJugadorxEquipo::GetAnterior()
{
	return this->anterior;
}
NodoJugadorxEquipo* NodoJugadorxEquipo::SetAnterior(NodoJugadorxEquipo * anterior)
{
	return	this->anterior= anterior;
}

NodoJugadorxEquipo* NodoJugadorxEquipo::GetSiguiente()
{
	return this->siguiente;
}
void NodoJugadorxEquipo::SetSiguiente(NodoJugadorxEquipo * siguiente)
{
	this->siguiente = siguiente;
}

NodoEquipo*NodoJugadorxEquipo::GetEquipo()
{
	return this->equipo;
}
void NodoJugadorxEquipo::SetEquipo(NodoEquipo * equipo)
{
	this->equipo = equipo;
}

NodoJugador* NodoJugadorxEquipo::GetJugador()
{
	return this->jugador;
}
void NodoJugadorxEquipo::SetJugador(NodoJugador * jugador)
{
	this->jugador = jugador;
}