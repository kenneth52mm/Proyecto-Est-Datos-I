#include "NodoEquipo.h"


NodoEquipo::NodoEquipo(void)
{
}
NodoEquipo::~NodoEquipo(void)
{
}

Equipo * NodoEquipo::GetEquipo()
{
	return this->equipo;
}	
void NodoEquipo::SetEquipo(Equipo *_equipo)
{
	this->equipo=_equipo;
}

ListaJugadorxEquipo * NodoEquipo::GetJugadores()
{
	return this->jugadores;
}
void NodoEquipo::SetJugadores(ListaJugadorxEquipo * jugadores)
{
	this->jugadores = jugadores;
}

NodoEquipo * NodoEquipo::GetSgte()
{
	return this->sgte;
}
void NodoEquipo::SetSgte(NodoEquipo * _sgte)
{
	this->sgte=_sgte;
}

NodoEquipo *NodoEquipo::GetAnte()
{
	return this->ante;
}
void NodoEquipo::SetAnte(NodoEquipo *_ante)
{
	this->ante=_ante;
}