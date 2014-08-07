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
	NodoPartido * DirNodo(int);
	NodoPartido * GetCabeza();
	void SetCabeza(NodoPartido *);

	int GetTamano();
	void SetTamano(int);

	int Agregar(Partido *);
	int Eliminar(int);
	void MostrarLista();
	void MostrarPartido(int);
};

