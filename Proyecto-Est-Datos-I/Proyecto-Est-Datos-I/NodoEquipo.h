#pragma once
#include "Equipo.h"
#include "ListaJugadorxEquipo.h"

class NodoEquipo
{
private:
	Equipo * equipo;
	ListaJugadorxEquipo * jugadores;
	NodoEquipo * sgte;
	NodoEquipo * ante;
public:
	NodoEquipo(void);
	~NodoEquipo(void);

	Equipo * GetEquipo();
	void SetEquipo(Equipo *);

	ListaJugadorxEquipo * GetJugadores();
	void SetJugadores(ListaJugadorxEquipo *);

	NodoEquipo * GetSgte();
	void SetSgte(NodoEquipo *);

	NodoEquipo * GetAnte();
	void SetAnte(NodoEquipo *);

};

