#pragma once
#include "NodoEquipo.h"


class ListaEquipos
{
private:
	NodoEquipo * cabeza;
	int tamano;
	
public:
	ListaEquipos(void);
	~ListaEquipos(void);
	NodoEquipo *DirNodo(int);
	NodoEquipo * GetCabeza();
	void SetCabeza(NodoEquipo *);

	int GetTamano();
	void SetTamano(int);

	NodoEquipo * DirNodo(int);

	int Agregar(Equipo *);
	void MostrarLista();
	int Eliminar(int);
};

