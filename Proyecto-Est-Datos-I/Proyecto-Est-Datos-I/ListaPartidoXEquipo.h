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

    int GetTamano();
    void SetTamano(int);

	/*int agregar(int, int, int, ListaEquipos *, ListaPartidos *);
	int eliminar(int, int);
	void mostrarLista();
	void mostrarEquipo(int);
	void mostrarPais(int);*/
};
