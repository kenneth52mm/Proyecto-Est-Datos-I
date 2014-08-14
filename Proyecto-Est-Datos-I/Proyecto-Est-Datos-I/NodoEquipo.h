#pragma once
#include "Equipo.h"
#include "ListaJugadorxEquipo.h"

class NodoEquipo
{
private:
	NodoEquipo * siguiente;
	NodoEquipo * anterior;
	Equipo * equipo;
public:
	NodoEquipo(void);
	~NodoEquipo(void);

	NodoEquipo * GetSiguiente();
	void SetSiguiente(NodoEquipo *);

	NodoEquipo * GetAnterior();
	void SetAnterior(NodoEquipo *);

	Equipo * GetEquipo();
	void SetEquipo(Equipo *);
};

