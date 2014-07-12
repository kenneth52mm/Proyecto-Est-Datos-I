#pragma once
#include "NodoGrupos.h"
class ListaGrupos
{
private:
	NodoGrupos *cab;
	int tamano;
public:
	ListaGrupos(void);
	~ListaGrupos(void);

	NodoGrupos *GetCab();
	void SetCab(NodoGrupos *);

	int GetTama();

	int Agregar(char *,ListaEquipos*);
	int Eliminar(int);
	ListaGrupos *MostarLista();
	ListaEquipos *MostrarGrupo();
};

