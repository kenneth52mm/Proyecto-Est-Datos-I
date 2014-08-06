#pragma once
#include "Jugador.h"

class NodoJugador
{
private:
	Jugador * jugador;
	NodoJugador * siguiente;
	NodoJugador * anterior;
public:
	NodoJugador(void);
	~NodoJugador(void);

	NodoJugador(Jugador *);

	Jugador * GetJugador();
	void SetJugador(Jugador *);

	NodoJugador * GetSiguiente();
	void SetSiguiente(NodoJugador *);

	NodoJugador * GetAnterior();
	void SetAnterior(NodoJugador *);
};

