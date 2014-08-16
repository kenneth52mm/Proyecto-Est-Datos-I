#pragma once
#include "NodoJugadorxEquipo.h"
#include "ListaEquipos.h"
#include "ListaJugadores.h"


class ListaJugadorxEquipo
{
private:
	NodoJugadorxEquipo * cabeza;
	int tamano;
public:
	ListaJugadorxEquipo(void);
	~ListaJugadorxEquipo(void);

	NodoJugadorxEquipo * GetCabeza();
	void SetCabeza(NodoJugadorxEquipo *);

    int GetTamano();
    void SetTamano(int);

	NodoJugadorxEquipo * DirNodo(int, int);

	int Agregar(int, int, ListaJugadores *, ListaEquipos *);
	int Eliminar(int , int);
	void MostrarLista();
	void MostrarEquipo(int); // Muestra jugadores de un equipo
};
