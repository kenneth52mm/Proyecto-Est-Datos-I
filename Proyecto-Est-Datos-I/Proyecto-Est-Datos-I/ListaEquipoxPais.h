#pragma once
#include "NodoEquipoxPais.h"
#include "ListaEquipos.h"
#include "ListaPais.h"


class ListaEquipoxPais
{
private:
	NodoEquipoXPais * cabeza;
    int tamano;
public:
	ListaEquipoxPais(void);
	~ListaEquipoxPais(void);

	NodoEquipoXPais * getCabeza();
	void setCabeza(NodoEquipoXPais *);

    int getTamano();
    void setTamano(int);

	int agregar(int, int, ListaEquipos *, ListaPais *);
	int eliminar(int, int);
	void mostrarLista();
	void mostrarEquipo(int);
	void mostrarPais(int);
};
