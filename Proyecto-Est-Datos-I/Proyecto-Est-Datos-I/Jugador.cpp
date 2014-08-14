#include "Jugador.h"


Jugador::Jugador(void)
{
}
Jugador::~Jugador(void)
{
}
Jugador::Jugador(int id, string posicion, string primer_partido, string nombre,
            int partidos_jugados, int cantidad_goles, int edad, int altura,
            string fecha_nac, string club)
{
	SetId(id);
	SetPosicion(posicion);
	SetPrimerPartido(primer_partido);
	SetNombre(nombre);
	SetPartidosJugados(partidos_jugados);
	SetCantidadGoles(cantidad_goles);
	SetEdad(edad);
	SetAltura(altura);
	SetFechaNac(fecha_nac);
	SetClub(club);
}

Jugador::Jugador(int id, string posicion, string primer_partido, string nombre,
            int partidos_jugados, int cantidad_goles, int edad, int altura,
            string fecha_nac, string club)
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

string Jugador::GetPosicion()
{
	return this->posicion;
}
void Jugador::SetPosicion(string posicion)
{
	this->posicion = posicion;
}

string Jugador::GetPrimerPartido()
{
	return this->primer_partido;
}
void Jugador::SetPrimerPartido(string primer_partido)
{
	this->primer_partido = primer_partido;
}

string Jugador::GetNombre()
{
	return this->nombre;
}
void Jugador::SetNombre(string nombre)
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

string Jugador::GetFechaNac()
{
	return this->fecha_nac;
}
void Jugador::SetFechaNac(string fecha_nac)
{
	this->fecha_nac = fecha_nac;
}

string Jugador::GetClub()
{
	return this->club;
}
void Jugador::SetClub(string club)
{
	this->club = club;
}
