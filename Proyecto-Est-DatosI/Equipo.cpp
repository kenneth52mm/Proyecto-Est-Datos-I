#include "Equipo.h"


Equipo::Equipo(void)
{
	SetId(0);
	SetEntrenador("");
}


Equipo::~Equipo(void)
{
}

Equipo::Equipo(int _id, string _entrenador)
{
	SetId(_id);
	SetEntrenador(_entrenador);
}

int Equipo::GetId()
{
	return this->id;
}
void Equipo::SetId(int _id)
{
	this->id=_id;
}

string Equipo::GetEntrenador()
{
	return this->entrenador;
}
void Equipo::SetEntrenador(string _entrenador)
{
	this->entrenador=_entrenador;
}