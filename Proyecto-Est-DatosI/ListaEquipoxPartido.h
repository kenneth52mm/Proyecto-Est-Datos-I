#pragma once
#include "NodoPartidoxEquipo.h"
class ListaEquipoxPartido
{
private:
	NodoEquipoxPartido* cabeza;
    int tamano;
public:
	ListaEquipoxPartido(void);
	~ListaEquipoxPartido(void);

	NodoEquipoxPartido* getCabeza();
	void setCabeza(NodoEquipoxPartido*);

    int getTamano();
    void setTamano(int);

	int agregar(NodoEquipo*, NodoPais*);
	int eliminar(int, int);
	void mostrarLista();
	void mostrarEquipo(int);
	void mostrarPais(int);
};

