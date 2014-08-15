#pragma once
#include "ListaEquipos.h"
#include "ListaGrupos.h"

class NodoEquipoXGrupo
{
private:
    NodoEquipoXGrupo * anterior;
    NodoEquipoXGrupo * siguiente;
	NodoEquipo * equipo;
	NodoGrupos * grupo;

public:
	NodoEquipoXGrupo(void);
	~NodoEquipoXGrupo(void);

	NodoEquipoXGrupo(NodoEquipo *, NodoGrupos *);

    NodoEquipoXGrupo * GetAnterior();
    void SetAnterior(NodoEquipoXGrupo *);

    NodoEquipoXGrupo * GetSiguiente();
    void SetSiguiente(NodoEquipoXGrupo *);

    NodoEquipo * GetEquipo();
    void SetEquipo(NodoEquipo *);

	NodoGrupos * GetGrupo();
	void SetGrupo(NodoGrupos *);
};

