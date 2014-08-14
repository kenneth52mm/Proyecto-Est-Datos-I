#include "NodoGrupos.h"


NodoGrupos::NodoGrupos(void)
{
}
NodoGrupos::~NodoGrupos(void)
{
}

NodoGrupos::NodoGrupos(string grupo)
{
	this->SetGrupo(grupo);
}

NodoGrupos *NodoGrupos::GetAnterior()
{
	return this->anterior;
}
void NodoGrupos::SetAnterior(NodoGrupos * anterior)
{
	this->anterior = anterior;
}

NodoGrupos *NodoGrupos::GetSiguiente()
{
	return this->siguiente;
}
void NodoGrupos::SetSiguiente(NodoGrupos * siguiente)
{
	this->siguiente = siguiente;
}

string NodoGrupos::GetGrupo()
{
	return this->grupo;
}
void NodoGrupos::SetGrupo(string _grupo)
{
	this->grupo=_grupo;
}
