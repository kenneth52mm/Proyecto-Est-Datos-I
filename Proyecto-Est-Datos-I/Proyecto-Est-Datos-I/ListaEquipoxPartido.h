#pragma once
#include "NodoEquipoxPartido.h"
class ListaEquipoxPartido
{
private:
	NodoEquipoxPartido* cabeza;
	int tamaño;
public:
	ListaEquipoxPartido(void);
	~ListaEquipoxPartido(void);

	NodoEquipoxPartido* getCabeza();
	void setCabeza(NodoEquipoxPartido*);

	int getTamaño();
	void setTamaño(int);

	int agregar(NodoEquipo*, NodoPais*);
	int eliminar(int, int);
	void mostrarLista();
	void mostrarEquipo(int);
	void mostrarPais(int);
};

