#pragma once
#include "NodoEquipo.h"

class NodoEquipoXGrupo
{
private:
    NodoEquipoXGrupo * anterior;
    NodoEquipoXGrupo * siguiente;
	NodoEquipo * enlace_equipo;

public:
	NodoEquipoXGrupo(void);
	~NodoEquipoXGrupo(void);

    NodoEquipoXGrupo * GetAnterior();
    void SetAnterior(NodoEquipoXGrupo *);

    NodoEquipoXGrupo * GetSiguiente();
    void SetSiguiente(NodoEquipoXGrupo *);

    NodoEquipo * GetEnlaceEquipo();
    void SetEquipo(NodoEquipo *);

    NodoEquipo * GetEnlaceEquipo();
    void SetEnlaceEquipo(NodoEquipo *);
};

