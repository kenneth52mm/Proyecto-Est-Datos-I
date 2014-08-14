#pragma once
#include "NodoEquipo.h"
#include "NodoJugador.h"


class NodoJugadorxEquipo
{
private:
<<<<<<< HEAD
	NodoJugadorxEquipo* anterior;
	NodoJugadorxEquipo * siguiente;
	NodoEquipo * equipo;
	NodoJugador * jugador;
=======
	NodoEquipo *equipo;
	NodoJugador * jugador;
	NodoJugadorxEquipo * siguiente;
	NodoJugadorxEquipo * anterior;
	NodoEquipo * enlaceEquipo;
	NodoJugador * enlaceJugador;
	

>>>>>>> origin/master
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