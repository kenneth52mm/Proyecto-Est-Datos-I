#include "Pais.h"


Pais::Pais(void)
{
}


Pais::~Pais(void)
{
}

Pais::Pais(int _id,char *_nombre)
{
	SetId(_id);
	SetNombre(_nombre);
}

int Pais::GetId()
{
	return this->id;
}
void Pais::SetId(int _id)
{
	this->id=_id;
}

char *Pais::GetNombre()
{
	return this->nombre;
}
void Pais::SetNombre(char *_nombre)
{
	this->nombre=_nombre;
}