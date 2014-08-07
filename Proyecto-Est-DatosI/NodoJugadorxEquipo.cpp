#include "NodoJugadorxEquipo.h"


NodoJugadorxEquipo::NodoJugadorxEquipo(void)
{
	this->setAnterior(NULL);
	this->setSiguiente(NULL);
	this->setJugador(NULL);
	this->setEquipo(NULL);
}


NodoJugadorxEquipo::~NodoJugadorxEquipo(void)
{
}

NodoJugadorxEquipo::NodoJugadorxEquipo(NodoEquipo*_equipo, NodoJugador*_jugador)
{
	this->setEquipo(_equipo);
	this->setJugador(_jugador);
}

NodoEquipo*NodoJugadorxEquipo::getEquipo()
{
	return this->equipo;
}
void NodoJugadorxEquipo::setEquipo(NodoEquipo* _equipo)
{
	this->equipo= _equipo;
}

NodoJugador* NodoJugadorxEquipo::getJugador()
{
	return this->jugador;
}
void NodoJugadorxEquipo::setJugador(NodoJugador* _jugador)
{
	this->jugador= _jugador;
}

NodoJugadorxEquipo* NodoJugadorxEquipo::getSiguiente()
{
	return this->siguiente;
}
void NodoJugadorxEquipo::setSiguiente(NodoJugadorxEquipo* _siguiente)
{
	this->siguiente= _siguiente;
}

NodoJugadorxEquipo* NodoJugadorxEquipo::getAnterior()
{
	return this->anterior;
}
NodoJugadorxEquipo* NodoJugadorxEquipo::setAnterior(NodoJugadorxEquipo* _anterior)
{
	return	this->anterior= _anterior;
}

NodoEquipo* NodoJugadorxEquipo::getEnlaceEquipo()
{
	return this->enlaceEquipo;
}
void NodoJugadorxEquipo::setEnlaceEquipo(NodoEquipo* _enlaceEquipo)
{
	this->enlaceEquipo = _enlaceEquipo;
}

NodoJugador* NodoJugadorxEquipo::getEnlaceJugador()
{
	return this->enlaceJugador;
}
void NodoJugadorxEquipo::setEnlaceJugador(NodoJugador* _enlaceJugador)
{
	this->enlaceJugador= _enlaceJugador;
}