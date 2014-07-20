#pragma once
#include "NodoPartidoxEquipo.h"
#include "stdafx.h"

class ListaPartidoxEquipo
{
private:
	NodoPartidoxEquipo* cabeza;
	int tama�o;
public:
	ListaPartidoxEquipo(void);
	~ListaPartidoxEquipo(void);

	NodoPartidoxEquipo*getCabeza();
	void setCabeza(NodoPartidoxEquipo*);

	int getTama�o();
	void setTama�o(int);


	int agregar(int, int, int, ListaEquipos*, ListaEquipos*, ListaPartidos*);
	int eliminar(int, int,int);
	void mostrarLista();
	void mostrarEnlace(int, int, int);
};