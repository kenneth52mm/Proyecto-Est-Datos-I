#include "Partido.h"


Partido::Partido(void)
{
}
Partido::~Partido(void)
{
}

int Partido::GetId()
{
	return this->id;
}
void Partido::SetId(int id)
{
	this->id = id;
}

char * Partido::GetFecha()
{
	return this->fecha;
}
void Partido::SetFecha(char * fecha)
{
	this->fecha = fecha;
}

char * Partido::GetHora()
{
	return this->hora;
}
void Partido::SetHora(char * hora)
{
	this->hora = hora;
}

char * Partido::GetEstadio()
{
	return this->estadio;
}
void Partido::SetEstadio(char * estadio)
{
	this->estadio = estadio;
}

char * Partido::GetUbicacion()
{
	return this->ubicacion;
}
void Partido::SetUbicacion(char * ubicacion)
{
	this->ubicacion = ubicacion;
}

char * Partido::GetPuntuacion()
{
	return this->puntuacion;
}
void Partido::SetPuntuacion(char * puntuacion)
{
	this->puntuacion = puntuacion;
}
