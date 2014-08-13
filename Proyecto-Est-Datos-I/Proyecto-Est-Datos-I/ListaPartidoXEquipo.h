#pragma once
#include "NodoPartidoxEquipo.h"
#include "ListaPais.h"

class ListaPartidoXEquipo
{
private:
    NodoPartidoxEquipo * cabeza;
    int tamano;
public:
	ListaPartidoXEquipo(void);
	~ListaPartidoXEquipo(void);

    NodoPartidoxEquipo * getCabeza();
    void setCabeza(NodoPartidoxEquipo *);

    int getTamano();
    void setTamano(int);

	int agregar(int, int, int, ListaEquipos *, ListaPartidos *);
	int eliminar(int, int);
	void mostrarLista();
	void mostrarEquipo(int);
	void mostrarPais(int);
};
