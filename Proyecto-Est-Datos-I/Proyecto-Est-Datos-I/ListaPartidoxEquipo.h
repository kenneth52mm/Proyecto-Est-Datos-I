#pragma once
#include "NodoPartidoxEquipo.h"
class ListaPartidoxEquipo
{
private:
	NodoPartidoxEquipo* cabeza;
	int tamaño;
public:
	ListaPartidoxEquipo(void);
	~ListaPartidoxEquipo(void);

	NodoPartidoxEquipo*getCabeza();
	void setCabeza(NodoPartidoxEquipo*);

	int getTamaño();
	void setTamaño(int);


	int agregar(NodoEquipo*, NodoEquipo*, NodoPartido*);
	int eliminar(int);
	void mostrarLista();
	void mostrarEnlace(int);
};

