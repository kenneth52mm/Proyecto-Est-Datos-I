#pragma once
#include "NodoPartidoxEquipo.h"
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


	int agregar(NodoEquipo*, NodoEquipo*, NodoPartido*);
	int eliminar(int);
	void mostrarLista();
	void mostrarEnlace(int);
};

