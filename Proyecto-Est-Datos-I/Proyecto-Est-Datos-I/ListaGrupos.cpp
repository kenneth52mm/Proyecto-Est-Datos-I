#include "ListaGrupos.h"


ListaGrupos::ListaGrupos(void)
{
}


ListaGrupos::~ListaGrupos(void)
{
}
NodoGrupos *ListaGrupos::GetCab()
{
return this->cab;
}
	void ListaGrupos::SetCab(NodoGrupos *_cab)
	{
	this->cab=_cab;
	}

	int ListaGrupos::GetTama()
	{
	return this->tamano;
	}

	int ListaGrupos::Agregar(char *,ListaEquipos*)
	{
	
	}
	int ListaGrupos::Eliminar(int)
	{
	
	}
	ListaGrupos *ListaGrupos::MostarLista()
	{
	
	}
	ListaEquipos *ListaGrupos::MostrarGrupo()
	{
	
	}