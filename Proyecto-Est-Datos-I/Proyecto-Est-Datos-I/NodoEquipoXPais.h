#pragma once
#include "NodoEquipo.h"
#include "NodoPais.h"

class NodoEquipoXPais
{
private:
	NodoEquipoXPais * anterior;
	NodoEquipoXPais * siguiente;

	NodoEquipo * equipo;
	NodoPais * pais;

public:
	NodoEquipoXPais(void);
	~NodoEquipoXPais(void);

	NodoEquipoXPais(NodoEquipo *, NodoPais *);

	NodoEquipoXPais * GetAnterior();
	void SetAnterior(NodoEquipoXPais *);

	NodoEquipoXPais * GetSiguiente();
	void SetSiguiente(NodoEquipoXPais *);

	NodoEquipo * GetEnlaceEquipo();
	void SetEnlaceEquipo(NodoEquipo *);

	NodoPais * GetEnlacePais();
	void SetEnlacePais(NodoPais *);
};

