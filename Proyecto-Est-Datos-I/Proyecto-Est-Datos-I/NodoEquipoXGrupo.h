#pragma once
#include"NodoEquipoXPais.h"
#include"NodoEquipoXGrupo.h"


class NodoEquipoXGrupo
{
private:
    NodoEquipoXGrupo * anterior;
    NodoEquipoXGrupo * siguiente;
	NodoEquipoXPais * enlace_equipo;

public:
	NodoEquipoXGrupo(void);
	~NodoEquipoXGrupo(void);

    NodoEquipoXGrupo * GetAnterior();
    void SetAnterior(NodoEquipoXGrupo *);

    NodoEquipoXGrupo * GetSiguiente();
    void SetSiguiente(NodoEquipoXGrupo *);

    NodoEquipoXPais * GetEnlaceEquipo();
    void SetEquipo(NodoEquipo *);

    NodoEquipoXPais * GetEnlaceEquipo();
    void SetEnlaceEquipo(NodoEquipoXPais *);
};

