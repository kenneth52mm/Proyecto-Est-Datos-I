#pragma once
#include "stdafx.h"
#include "NodoPartidoxEquipo.h"

class ListaEquipoxPartido
{
private:
    NodoPartidoxEquipo* cabeza;
    int tamano;
public:
	ListaEquipoxPartido(void);
	~ListaEquipoxPartido(void);

    NodoPartidoxEquipo *getCabeza();
    void setCabeza(NodoPartidoxEquipo*);

    int getTamano();
    void setTamano(int);

	int agregar(NodoEquipo*, NodoPais*);
	int eliminar(int, int);
	void mostrarLista();
	void mostrarEquipo(int);
	void mostrarPais(int);
};

