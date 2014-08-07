#pragma once
#include "NodoEquipoxPais.h"
#include "stdafx.h"
#include "ListaEquipos.h"
#include "ListaPais.h"

class ListaEquipoxPais
{
private:
	NodoEquipoxPais* cabeza;
    int tamano;
public:
	ListaEquipoxPais(void);
	~ListaEquipoxPais(void);

	NodoEquipoxPais* getCabeza();
	void setCabeza(NodoEquipoxPais*);

    int getTamano();
    void setTamano(int);



	int agregar(int, int, ListaEquipos*, ListaPais*);
	int eliminar(int, int);
	void mostrarLista();
	void mostrarEquipo(int);
	void mostrarPais(int);
};
