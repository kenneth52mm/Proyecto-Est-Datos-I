#include "Equipo.h"


Equipo::Equipo(void)
{
}
Equipo::~Equipo(void)
{
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