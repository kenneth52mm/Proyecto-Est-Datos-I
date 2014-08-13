#pragma once
#include "NodoEquipoXPais.h"


class ListaEquipos
{
private:
	NodoEquipoXPais * cab;
	int tamano;
public:
	ListaEquipos(void);
	~ListaEquipos(void);

	NodoEquipoXPais * DirNodo(int);

	NodoEquipoXPais * GetCab();
	void SetCab(NodoEquipoXPais *);

	int GetTama();

	int Agregar(Equipo *);
	int Eliminar(int);
	void MostarLista();
	void MostrarEquipo(int);
};

