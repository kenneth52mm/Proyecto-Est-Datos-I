#pragma once
#include "Jugador.h"

class NodoJugador
{
private:
	NodoJugador * anterior;
	NodoJugador * siguiente;
	Jugador * jugador;
public:
	NodoJugador(void);
	~NodoJugador(void);

	NodoJugador(Jugador *);

	NodoJugador * GetAnterior();
	void SetAnterior(NodoJugador *);

	NodoJugador * GetSiguiente();
	void SetSiguiente(NodoJugador *);

	Jugador * GetJugador();
	void SetJugador(Jugador *);
};

