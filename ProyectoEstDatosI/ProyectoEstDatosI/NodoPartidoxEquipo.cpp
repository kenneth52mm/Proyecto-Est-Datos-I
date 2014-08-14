#include "NodoPartidoxEquipo.h"


NodoPartidoxEquipo::NodoPartidoxEquipo(void)
{
	this->SetAnterior(NULL);
	this->SetSiguiente(NULL);
	this->SetEquipo1(NULL);
	this->SetEquipo2(NULL);
	this->SetPartido(NULL);
}
NodoPartidoxEquipo::~NodoPartidoxEquipo(void)
{
}

NodoPartidoxEquipo::NodoPartidoxEquipo(NodoEquipo * equipo1, NodoEquipo * equipo2, NodoPartido * partido)
{
	this->SetEquipo1(equipo1);
	this->SetEquipo2(equipo2);
	this->SetPartido(partido);
}

NodoPartidoxEquipo * NodoPartidoxEquipo::GetAnterior()
{
	return this->anterior;
}
void NodoPartidoxEquipo::SetAnterior(NodoPartidoxEquipo * anterior)
{
	this->anterior= anterior;
}

NodoPartidoxEquipo * NodoPartidoxEquipo::GetSguiente()
{
	return this->siguiente;
}
void NodoPartidoxEquipo::SetSiguiente(NodoPartidoxEquipo * siguiente)
{
	this->siguiente= siguiente;
}

NodoEquipo * NodoPartidoxEquipo::GetEquipo1()
{
	return this->equipo1;
}
void NodoPartidoxEquipo::SetEquipo1(NodoEquipo * equipo1)
{
	this->equipo1 = equipo1;
}

NodoEquipo * NodoPartidoxEquipo::GetEquipo2()
{
	return this->equipo2;
}
void NodoPartidoxEquipo::SetEquipo2(NodoEquipo * equipo2)
{
	this->equipo2 = equipo2;
}

NodoPartido *NodoPartidoxEquipo::GetPartido()
{
	return this->partido;
}
void NodoPartidoxEquipo::SetPartido(NodoPartido * partido)
{
	this->partido= partido;
}