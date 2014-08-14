#pragma once
#include "NodoEquipo.h"
#include "NodoJugador.h"


class NodoJugadorxEquipo
{
private:
	NodoJugadorxEquipo* anterior;
	NodoJugadorxEquipo * siguiente;
	NodoEquipo * equipo;
	NodoJugador * jugador;
public:
	NodoJugadorxEquipo(void);
	~NodoJugadorxEquipo(void);

	NodoJugadorxEquipo * GetAnterior();
	NodoJugadorxEquipo * SetAnterior(NodoJugadorxEquipo *);

	NodoJugadorxEquipo * GetSiguiente();
	void SetSiguiente(NodoJugadorxEquipo *);

	NodoEquipo * GetEquipo();
	void SetEquipo(NodoEquipo *);

	NodoJugador* GetJugador();
	void SetJugador(NodoJugador *);
};