#include "NodoJugadorxEquipo.h"


NodoJugadorxEquipo::NodoJugadorxEquipo(void)
{
}


NodoJugadorxEquipo::~NodoJugadorxEquipo(void)
{
}

NodoJugadorxEquipo::NodoJugadorxEquipo(NodoEquipo*, NodoJugador*){}

NodoEquipo*NodoJugadorxEquipo::getEquipo(){}
void NodoJugadorxEquipo::setEquipo(NodoEquipo* _equipo){}

NodoJugador* NodoJugadorxEquipo::getJugador(){}
void NodoJugadorxEquipo::setJugador(NodoJugador* _jugador){}

NodoJugadorxEquipo* NodoJugadorxEquipo::getSiguiente(){}
void NodoJugadorxEquipo::setSiguiente(NodoJugadorxEquipo* _id){}

NodoJugadorxEquipo* NodoJugadorxEquipo::getAnterior(){}
NodoJugadorxEquipo* NodoJugadorxEquipo::seAnterior(NodoJugadorxEquipo* _id){}
