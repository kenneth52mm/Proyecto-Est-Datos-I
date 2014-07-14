#pragma once
#include "NodoJugadorxEquipo.h"
class ListaJugadorxEquipo
{
private:
	int tamaño;
	NodoJugadorxEquipo* cabeza;
public:
	ListaJugadorxEquipo(void);
	~ListaJugadorxEquipo(void);

	NodoJugadorxEquipo* getCabeza();
	void setCabeza(NodoJugadorxEquipo*);

	int getTamaño();
	void setTamaño(int);

	int agregar(NodoJugador*, NodoEquipo* );
	int eliminar(int , int);
	void mostrarLista();
	void mostrarEnlace(int);
};

