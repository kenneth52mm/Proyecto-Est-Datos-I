#pragma once
#include "NodoPartido.h"


class ListaPartidos
{
private:
	NodoPartido * cabeza;
	int tamano;
public:
	ListaPartidos(void);
	~ListaPartidos(void);

	NodoPartido * GetCabeza();
	void SetCabeza(NodoPartido *);

	int GetTamano();
	void SetTamano(int);

	NodoPartido * DirNodo(int);

	int Agregar(Partido *);
	int Eliminar(int);
	void MostrarLista();
	void MostrarPartido(int);
};

