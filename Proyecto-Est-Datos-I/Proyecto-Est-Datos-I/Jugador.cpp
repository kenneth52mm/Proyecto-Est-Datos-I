#include "Jugador.h"


Jugador::Jugador(void)
{
}
Jugador::~Jugador(void)
{
}

int Jugador::GetId()
{
	return this->id;
}
void Jugador::SetId(int id)
{
	this->id = id;
}

char * Jugador::GetPosicion()
{
	return this->posicion;
}
void Jugador::SetPosicion(char * posicion)
{
	this->posicion = posicion;
}

char * Jugador::GetPrimerPartido()
{
	return this->primer_partido;
}
void Jugador::SetPrimerPartido(char * primer_partido)
{
	this->primer_partido = primer_partido;
}

char * Jugador::GetNombre()
{
	return this->nombre;
}
void Jugador::SetNombre(char * nombre)
{
	this->nombre = nombre;
}

int Jugador::GetPartidosJugados()
{
	return this->partidos_jugados;
}
void Jugador::SetPartidosJugados(int partidos_jugados)
{
	this->partidos_jugados = partidos_jugados;
}

int Jugador::GetCantidadGoles()
{
	return this->cantidad_goles;
}
void Jugador::SetCantidadGoles(int cantidad_goles)
{
	this->cantidad_goles = cantidad_goles;
}

int Jugador::GetEdad()
{
	return this->edad;
}
void Jugador::SetEdad(int edad)
{
	this->edad = edad;
}

int Jugador::GetAltura()
{
	return this->altura;
}
void Jugador::SetAltura(int altura)
{
	this->altura = altura;
}

char * Jugador::GetFechaNac()
{
	return this->fecha_nac;
}
void Jugador::SetFechaNac(char * fecha_nac)
{
	this->fecha_nac = fecha_nac;
}

char * Jugador::GetClub()
{
	return this->club;
}
void Jugador::SetClub(char * club)
{
	this->club = club;
}
