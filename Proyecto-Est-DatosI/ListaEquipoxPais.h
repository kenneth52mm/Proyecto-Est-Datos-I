#pragma once
#include "NodoEquipoxPais.h"
#include "stdafx.h"
#include "ListaEquipos.h"
#include "ListaPais.h"

class ListaEquipoxPais
{
private:
	NodoEquipoxPais* cabeza;
	int tama�o;
public:
	ListaEquipoxPais(void);
	~ListaEquipoxPais(void);

	NodoEquipoxPais* getCabeza();
	void setCabeza(NodoEquipoxPais*);

	int getTama�o();
	void setTama�o(int);



	int agregar(int, int, ListaEquipos*, ListaPais*);
	int eliminar(int, int);
	void mostrarLista();
	void mostrarEquipo(int);
	void mostrarPais(int);
};