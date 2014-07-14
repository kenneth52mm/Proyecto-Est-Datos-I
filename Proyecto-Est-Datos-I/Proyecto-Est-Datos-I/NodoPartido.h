#pragma once
#include "Partido.h"

class NodoPartido
{
private:
	Partido * partido;
	NodoPartido * siguiente;
	NodoPartido * anterior;
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

