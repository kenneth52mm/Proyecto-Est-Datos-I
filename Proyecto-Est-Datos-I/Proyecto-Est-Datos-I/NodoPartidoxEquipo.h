#pragma once
#include "stdafx.h"
#include "NodoEquipo.h"
#include "NodoPartido.h"
class NodoPartidoxEquipo

{
private:
	NodoEquipo* equipo1;
	NodoEquipo* equipo2;
	NodoPartido* partido;
	NodoPartidoxEquipo* siguiente;
	NodoPartidoxEquipo* anterior;

public:
	NodoPartidoxEquipo(void);
	~NodoPartidoxEquipo(void);

	NodoPartidoxEquipo(NodoEquipo*, NodoPartido*);

	NodoEquipo* getEquipo1();
	void setEquipo1(Equipo*);

	NodoEquipo* getEquipo2();
	void setEquipo2(Equipo*);

	NodoPartido*getPartido();
	void setPartido(Partido*);

	NodoPartidoxEquipo*getSguiente();
	void setSiguiente(NodoPartidoxEquipo*);

	NodoPartidoxEquipo*getAnterior();
	void setAnterior(NodoPartidoxEquipo*);
};

