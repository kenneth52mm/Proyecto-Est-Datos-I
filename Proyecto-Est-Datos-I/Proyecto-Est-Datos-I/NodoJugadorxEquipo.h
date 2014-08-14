#pragma once
#include "NodoEquipo.h"
#include "NodoJugador.h"

class NodoJugadorxEquipo
{
private:
	NodoEquipo *equipo;
	NodoJugador * jugador;
	NodoJugadorxEquipo * siguiente;
	NodoJugadorxEquipo * anterior;
	NodoEquipo * enlaceEquipo;
	NodoJugador * enlaceJugador;
	

public:
	NodoJugadorxEquipo(void);
	~NodoJugadorxEquipo(void);

	NodoJugadorxEquipo(NodoEquipo*, NodoJugador*);

	NodoEquipo*getEquipo();
	void setEquipo(NodoEquipo*);

	NodoJugador* getJugador();
	void setJugador(NodoJugador*);

	NodoJugadorxEquipo* getSiguiente();
	void setSiguiente(NodoJugadorxEquipo*);

	NodoJugadorxEquipo* getAnterior();
	NodoJugadorxEquipo* setAnterior(NodoJugadorxEquipo*);

	NodoEquipo* getEnlaceEquipo();
	void setEnlaceEquipo(NodoEquipo*);

	NodoJugador* getEnlaceJugador();
	void setEnlaceJugador(NodoJugador*);

};