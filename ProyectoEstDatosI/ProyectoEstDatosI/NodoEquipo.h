#pragma once
#include "Equipo.h"


class NodoEquipo
{
private:
	NodoEquipo * siguiente;
	NodoEquipo * anterior;
	Equipo * equipo;
public:
	NodoEquipo(void);
	~NodoEquipo(void);

	NodoEquipo(Equipo *);

	NodoEquipo * GetSiguiente();
	void SetSiguiente(NodoEquipo *);

	NodoEquipo * GetAnterior();
	void SetAnterior(NodoEquipo *);

	Equipo * GetEquipo();
	void SetEquipo(Equipo *);
};

