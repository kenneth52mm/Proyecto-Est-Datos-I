#pragma once
#include "NodoJugador.h"

class ListaJugadores
{
private:
	NodoJugador * cabeza;
	int tamano;

	NodoJugador * DirNodo(int);

public:
	ListaJugadores(void);
	~ListaJugadores(void);

	NodoJugador * GetCabeza();
	void SetCabeza(NodoJugador *);

	int GetTamano();
	void SetTamano(int);

	int Agregar(Jugador * jugador);
	int Eliminar(int);
	void MostrarLista();
	void MostrarJugador(int);
};

