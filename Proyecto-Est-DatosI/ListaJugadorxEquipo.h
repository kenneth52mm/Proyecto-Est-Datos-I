#pragma once
#include "NodoJugadorxEquipo.h"
#include "ListaEquipos.h"
#include "ListaJugadores.h"
#include "stdafx.h"

class ListaJugadorxEquipo
{
private:
    int tamano;
	NodoJugadorxEquipo* cabeza;
public:
	ListaJugadorxEquipo(void);
	~ListaJugadorxEquipo(void);

	NodoJugadorxEquipo* getCabeza();
	void setCabeza(NodoJugadorxEquipo*);

    int getTamano();
    void setTamano(int);

	int agregar(int, int, ListaJugadores*, ListaEquipos* );
	int eliminar(int , int);
	void mostrarLista();
	void mostrarEnlace(int, int);
};
