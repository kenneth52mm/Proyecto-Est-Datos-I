#pragma once
#include "NodoPartidoxEquipo.h"


class ListaPartidoXEquipo
{
private:
    NodoPartidoxEquipo * cabeza;
    int tamano;

public:
	ListaPartidoXEquipo(void);
	~ListaPartidoXEquipo(void);

    NodoPartidoxEquipo * GetCabeza();
    void SetCabeza(NodoPartidoxEquipo *);
	NodoPartidoxEquipo *DirNodo(int,int,int);
    int GetTamano();
    void SetTamano(int);

	int Agregar(int, int, int, ListaEquipos *, ListaPartidos *);
	int Eliminar(int,int,int);
	void mostrarLista();
	void mostrarEquipo(int);
	void mostrarPais(int);
};
