#pragma once
#include "NodoEquipoxPartido.h"
class ListaEquipoxPartido
{
private:
	NodoEquipoxPartido* cabeza;
	int tama�o;
public:
	ListaEquipoxPartido(void);
	~ListaEquipoxPartido(void);

	NodoEquipoxPartido* getCabeza();
	void setCabeza(NodoEquipoxPartido*);

	int getTama�o();
	void setTama�o(int);

	int agregar(NodoEquipo*, NodoPais*);
	int eliminar(int, int);
	void mostrarLista();
	void mostrarEquipo(int);
	void mostrarPais(int);
};

