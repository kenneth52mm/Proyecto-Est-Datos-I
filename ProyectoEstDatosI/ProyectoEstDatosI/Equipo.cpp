#include "Equipo.h"


Equipo::Equipo(void)
{
}
Equipo::~Equipo(void)
{
}

Equipo::Equipo(int id, string nombre, string abreviatura, string entrenador, int partidos_jugados, int goles_marcados, int disparos_a_puerta, int distancia_recorrida)
{
	this->id = id;
	this->nombre = nombre;
	this->abreviatura = abreviatura;
	this->entrenador = entrenador;
	this->partidos_jugados = partidos_jugados;
	this->goles_marcados = goles_marcados;
	this->disparos_a_puerta = disparos_a_puerta;
	this->distancia_recorrida = distancia_recorrida;
}

int Equipo::GetId()
{
	return this->id;
}
void Equipo::SetId(int _id)
{
	this->id=_id;
}

string Equipo::GetNombre()
{
	return this->nombre;
}
void Equipo::SetNombre(string nombre)
{
	this->nombre = nombre;
}

string Equipo::GetAbreviatura()
{
	return this->abreviatura;
}
void Equipo::SetAbreviatura(string abreviatura)
{
	this->abreviatura = abreviatura;
}

string Equipo::GetEntrenador()
{
	return this->entrenador;
}
void Equipo::SetEntrenador(string entrenador)
{
	this->entrenador = entrenador;
}

int Equipo::GetPartidosJugados()
{
	return this->partidos_jugados;
}
void Equipo::SetPartidosJugados(int partidos_jugados)
{
	this->partidos_jugados = partidos_jugados;
}

int Equipo::GetGolesMarcados()
{
	return this->goles_marcados;
}
void Equipo::SetGolesMarcados(int goles_marcados)
{
	this->goles_marcados = goles_marcados;
}

int Equipo::GetDisparosAPuerta()
{
	return this->disparos_a_puerta;
}
void Equipo::SetDisparosAPuerta(int disparos_a_puerta)
{
	this->disparos_a_puerta = disparos_a_puerta;
}

int Equipo::GetDistanciaRecorrida()
{
	return this->distancia_recorrida;
}
void Equipo::SetDistanciaRecorrida(int distancia_recorrida)
{
	this->distancia_recorrida = distancia_recorrida;
}

void Equipo::Mostrar()
{
	cout << "-- Equipo --" << endl <<
		"ID: " << this->GetId() << endl <<
		"Nombre: " << this->GetNombre() << endl <<
		"Abreviatura: " << this->GetAbreviatura() << endl <<
		"Entrenador: " << this->GetEntrenador() << endl <<
		"- Estadisticas -" << endl <<
		"Partidos Jugados: " << this->GetPartidosJugados() << endl <<
		"Goles Marcados: " << this->GetGolesMarcados() << endl <<
		"Disparos a Puerta: " << this->GetDisparosAPuerta() << endl <<
		"Distancia Recorrida: " << this->GetDistanciaRecorrida() << endl;
}