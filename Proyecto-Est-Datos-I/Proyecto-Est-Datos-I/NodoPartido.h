#pragma once
#include "Partido.h"


class NodoPartido
{
private:
	NodoPartido * anterior;
	NodoPartido * siguiente;
	Partido * partido;
public:
	NodoPartido(void);
	~NodoPartido(void);

	Partido * GetPartido();
	void SetPartido(Partido *);

	NodoPartido * GetSiguiente();
	void SetSiguiente(NodoPartido *);

	NodoPartido * GetAnterior();
	void SetAnterior(NodoPartido *);
};

