#pragma once
#include "NodoEquipo.h"
class ListaEquipos
{
private:
	NodoEquipo *cab;
	int tamano;
public:
	ListaEquipos(void);
	~ListaEquipos(void);

	NodoEquipo *GetCab();
	void SetCab(NodoEquipo *);

	int GetTama();

	int Agregar(Equipo *);
	int Eliminar(int);
	ListaEquipos *MostarLista();
	Equipo *MostrarEquipo(int);
};

