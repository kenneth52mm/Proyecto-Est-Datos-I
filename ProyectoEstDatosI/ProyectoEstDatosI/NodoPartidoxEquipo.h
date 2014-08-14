#pragma once
#include "ListaPartidos.h"
#include "ListaEquipos.h"


class NodoPartidoxEquipo

{
private:
	NodoPartidoxEquipo * anterior;
	NodoPartidoxEquipo * siguiente;
	NodoEquipo * equipo1;
	NodoEquipo * equipo2;
	NodoPartido* partido;

public:
	NodoPartidoxEquipo(void);
	~NodoPartidoxEquipo(void);

	NodoPartidoxEquipo(NodoEquipo *, NodoEquipo *, NodoPartido *);

	NodoPartidoxEquipo * GetAnterior();
	void SetAnterior(NodoPartidoxEquipo *);

	NodoPartidoxEquipo * GetSguiente();
	void SetSiguiente(NodoPartidoxEquipo *);

	NodoEquipo * GetEquipo1();
	void SetEquipo1(NodoEquipo *);

	NodoEquipo * GetEquipo2();
	void SetEquipo2(NodoEquipo *);

	NodoPartido * GetPartido();
	void SetPartido(NodoPartido *);
};

