#pragma once
#include "NodoJugador.h"

class ListaJugadores
{
private:
	NodoJugador * cabeza;
	int tamano;

	

public:
	ListaJugadores(void);
	~ListaJugadores(void);
<<<<<<< HEAD:Proyecto-Est-Datos-I/Proyecto-Est-Datos-I/ListaJugadores.h

	NodoJugador * DirNodo(int);

=======
	NodoJugador * DirNodo(int);
>>>>>>> 9fef43883da650fe3ed83bac021c45eb2ed5c4d2:Proyecto-Est-DatosI/ListaJugadores.h
	NodoJugador * GetCabeza();
	void SetCabeza(NodoJugador *);

	int GetTamano();
	void SetTamano(int);

	int Agregar(Jugador * jugador);
	int Eliminar(int);
	void MostrarLista();
	void MostrarJugador(int);
};

