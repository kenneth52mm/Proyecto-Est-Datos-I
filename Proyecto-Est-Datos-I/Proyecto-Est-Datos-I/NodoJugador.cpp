#include "NodoJugador.h"


NodoJugador::NodoJugador(void)
{
}
NodoJugador::~NodoJugador(void)
{
}

Jugador * NodoJugador::GetJugador()
{
	return this->jugador;
}
void NodoJugador::SetJugador(Jugador * jugador)
{
	this->jugador = jugador;
}

NodoJugador * NodoJugador::GetSiguiente()
{
	return this->siguiente;
}
void NodoJugador::SetSiguiente(NodoJugador * siguiente)
{
	this->siguiente = siguiente;
}

NodoJugador * NodoJugador::GetAnterior()
{
	return this->anterior;
}
void NodoJugador::SetAnterior(NodoJugador * anterior)
{
	this->anterior = anterior;
}