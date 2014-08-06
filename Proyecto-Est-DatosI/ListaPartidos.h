#pragma once
#include "NodoPartido.h"

class ListaPartidos
{
private:
	NodoPartido * cabeza;
	int tamano;

	NodoPartido * DirNodo(int);

public:
	ListaPartidos(void);
	~ListaPartidos(void);

	NodoPartido * GetCabeza();
	void SetCabeza(NodoPartido *);

	int GetTamano();
	void SetTamano(int);

	int Agregar(Partido *);
	int Eliminar(int);
	void MostrarLista();
	void MostrarPartido(int);
};

