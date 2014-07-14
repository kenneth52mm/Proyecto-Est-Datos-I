#pragma once
#include "NodoJugadorxEquipo.h"
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

	int agregar(NodoJugador*, NodoEquipo* );
	int eliminar(int , int);
	void mostrarLista();
	void mostrarEnlace(int);
};

