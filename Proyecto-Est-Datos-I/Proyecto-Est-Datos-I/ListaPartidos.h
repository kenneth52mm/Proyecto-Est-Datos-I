#pragma once
#include "NodoPartido.h"

class ListaPartidos
{
private:
	NodoPartido * partido;
	int tamano;
public:
	ListaPartidos(void);
	~ListaPartidos(void);

	NodoPartido * GetPartido();
	void SetPartido(NodoPartido *);

	int GetTamano();
	void SetTamano(int);

	int Agregar(Partido *);
	int Eliminar(int);
	void MostrarLista();
	void MostrarPartido(int);
};

