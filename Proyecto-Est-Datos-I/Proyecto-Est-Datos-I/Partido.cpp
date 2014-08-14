#include "Partido.h"


Partido::Partido(void)
{
}
Partido::~Partido(void)
{
}

Partido::Partido(int id, string fecha, string hora, string estadio, string ubicacion, string puntuacion)
{
	this->id = id;
	this->fecha = fecha;
	this->hora = hora;
	this->estadio = estadio;
	this->ubicacion = ubicacion;
	this->puntuacion = puntuacion;
}

int Partido::GetId()
{
	return this->id;
}
void Partido::SetId(int id)
{
	this->id = id;
}

string Partido::GetFecha()
{
	return this->fecha;
}
void Partido::SetFecha(string fecha)
{
	this->fecha = fecha;
}

string Partido::GetHora()
{
	return this->hora;
}
void Partido::SetHora(string hora)
{
	this->hora = hora;
}

string Partido::GetEstadio()
{
	return this->estadio;
}
void Partido::SetEstadio(string estadio)
{
	this->estadio = estadio;
}

string Partido::GetUbicacion()
{
	return this->ubicacion;
}
void Partido::SetUbicacion(string ubicacion)
{
	this->ubicacion = ubicacion;
}

string Partido::GetPuntuacion()
{
	return this->puntuacion;
}
void Partido::SetPuntuacion(string puntuacion)
{
	this->puntuacion = puntuacion;
}
