#include "Pais.h"


Pais::Pais(void)
{
}
Pais::~Pais(void)
{
}

Pais::Pais(int _id, string _nombre, string abreviatura)
{
	SetId(_id);
	SetNombre(_nombre);
    SetAbreviatura(abreviatura);
}

int Pais::GetId()
{
	return this->id;
}
void Pais::SetId(int _id)
{
    this->id = _id;
}

string Pais::GetNombre()
{
	return this->nombre;
}
void Pais::SetNombre(string _nombre)
{
    this->nombre = _nombre;
}

string Pais::GetAbreviatura()
{
    return this->abreviatura;
}
void Pais::SetAbreviatura(string abreviatura)
{
    this->abreviatura = abreviatura;
}
