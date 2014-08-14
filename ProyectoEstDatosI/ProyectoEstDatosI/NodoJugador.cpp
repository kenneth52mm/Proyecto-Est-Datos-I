#include "NodoJugador.h"


NodoJugador::NodoJugador(void)
{
}
NodoJugador::~NodoJugador(void)
{
}

NodoJugador::NodoJugador(Jugador * jugador)
{
	this->SetJugador(jugador);
}

NodoJugador * NodoJugador::GetAnterior()
{
	return this->anterior;
}
void NodoJugador::SetAnterior(NodoJugador * anterior)
{
	this->anterior = anterior;
}

NodoJugador * NodoJugador::GetSiguiente()
{
	return this->siguiente;
}
void NodoJugador::SetSiguiente(NodoJugador * siguiente)
{
	this->siguiente = siguiente;
}

Jugador * NodoJugador::GetJugador()
{
	return this->jugador;
}
void NodoJugador::SetJugador(Jugador * jugador)
{
	this->jugador = jugador;
}