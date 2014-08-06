#include "NodoGrupos.h"


NodoGrupos::NodoGrupos(void)
{
	
}


NodoGrupos::~NodoGrupos(void)
{
}

NodoGrupos::NodoGrupos(char *_grupo,ListaEquipos *equipos)
{
	SetGrupo(_grupo);
	SetEquipos(	equipos);

}

int NodoGrupos::GetId()
{
	return this->id;
}

void NodoGrupos::SetId(int _id)
{
	this->id=_id;
}

char *NodoGrupos::GetGrupo()
{
	return this->grupo;
}
void NodoGrupos::SetGrupo(char *_grupo)
{
	this->grupo=_grupo;
}

ListaEquipos *NodoGrupos::GetEquipos()
{
	return this->equipos;
}
void NodoGrupos::SetEquipos(ListaEquipos *_equipos)
{
	this->equipos=_equipos;
}

NodoGrupos *NodoGrupos::GetSgte()
{
	return this->sgte;
}
void NodoGrupos::SetSgte(NodoGrupos *_sgte)
{
	this->sgte=_sgte;
}

NodoGrupos *NodoGrupos::GetAnte()
{
	return this->ante;
}
void NodoGrupos::SetAnte(NodoGrupos *_ante)
{
	this->ante=_ante;
}