#pragma once
#include "NodoJugadorxEquipo.h"
#include "ListaEquipos.h"
#include "ListaJugadores.h"


class ListaJugadorxEquipo
{
private:
	NodoJugadorxEquipo * cabeza;
	int tamano;
	NodoJugadorxEquipo *DirNodo(int,int);
public:
	ListaJugadorxEquipo(void);
	~ListaJugadorxEquipo(void);

	NodoJugadorxEquipo * GetCabeza();
	void SetCabeza(NodoJugadorxEquipo *);

    int GetTamano();
    void SetTamano(int);

	int Agregar(int, int, ListaJugadores *, ListaEquipos *);
	int Eliminar(int , int);
	void mostrarLista();
	void mostrarEnlace(int, int);
};
