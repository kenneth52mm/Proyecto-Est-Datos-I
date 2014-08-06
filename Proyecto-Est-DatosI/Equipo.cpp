#include "Equipo.h"


Equipo::Equipo(void)
{
	SetId(0);
	SetEntrenador("");
}


Equipo::~Equipo(void)
{
}

Equipo::Equipo(int _id,char *_entrenador)
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

char *Equipo::GetEntrenador()
{
	return this->entrenador;
}
void Equipo::SetEntrenador(char *_entrenador)
{
	this->entrenador=_entrenador;
}