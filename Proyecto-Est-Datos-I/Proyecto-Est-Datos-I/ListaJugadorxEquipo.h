#pragma once
#include "NodoJugadorxEquipo.h"
#include "ListaEquipos.h"
#include "ListaJugadores.h"
#include "stdafx.h"

class ListaJugadorxEquipo
{
private:
	int tama�o;
	NodoJugadorxEquipo* cabeza;
public:
	ListaJugadorxEquipo(void);
	~ListaJugadorxEquipo(void);

	NodoJugadorxEquipo* getCabeza();
	void setCabeza(NodoJugadorxEquipo*);

	int getTama�o();
	void setTama�o(int);

	int agregar(int, int, ListaJugadores*, ListaEquipos* );
	int eliminar(int , int);
	void mostrarLista();
	void mostrarEnlace(int, int);
};