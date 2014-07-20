#pragma once
#include "stdafx.h"
#include "NodoEquipo.h"
#include "NodoPartido.h"
#include "ListaPartidos.h"
#include "ListaEquipos.h"

class NodoPartidoxEquipo

{
private:
	NodoEquipo* equipo1;
	NodoEquipo* equipo2;
	NodoPartido* partido;
	NodoPartidoxEquipo* siguiente;
	NodoPartidoxEquipo* anterior;
	NodoPartido* enlacePartido;
	NodoEquipo* enlaceEquipo;

public:
	NodoPartidoxEquipo(void);
	~NodoPartidoxEquipo(void);

	NodoPartidoxEquipo(NodoEquipo*, NodoEquipo*, NodoPartido*);

	NodoEquipo* getEquipo1();
	void setEquipo1(NodoEquipo*);

	NodoEquipo* getEquipo2();
	void setEquipo2(NodoEquipo*);

	NodoPartido*getPartido();
	void setPartido(NodoPartido*);

	NodoPartidoxEquipo*getSguiente();
	void setSiguiente(NodoPartidoxEquipo*);

	NodoPartidoxEquipo*getAnterior();
	void setAnterior(NodoPartidoxEquipo*);

	NodoPartido*getEnlacePartido();
	void setEnlacePartido(NodoPartido*);

	NodoEquipo* getEnlaceEquipo();
	void setenlaceEquipo(NodoEquipo*);
};

