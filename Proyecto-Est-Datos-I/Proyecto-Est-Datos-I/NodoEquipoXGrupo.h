#pragma once
#include "stdafx.h"
#include"NodoEquipoXPais.h"
#include "NodoGrupos.h"
class NodoEquipoXGrupo
{
private:
    NodoEquipoXGrupo * anterior;
    NodoEquipoXGrupo * siguiente;
	NodoEquipoXPais * enlace_equipo;
public:
	NodoEquipoXGrupo(void);
	~NodoEquipoXGrupo(void);

    NodoEquipoXGrupo(NodoGrupos*, NodoEquipo*);

    NodoEquipoXGrupo* getAnterior();
    void setAnterior(NodoEquipoXGrupo*);

    NodoEquipoXGrupo* getSiguiente();
    void setSiguiente(NodoEquipoXGrupo*);

    NodoEquipo* getEquipo();
    void setEquipo(NodoEquipo*);

    NodoEquipo* getEnlaceEquipo();
    void setEnlaceEquipo(NodoEquipo*);

    NodoGrupos* getGrupo();
    void setGrupo(NodoGrupos*);

    NodoGrupos* getEnlaceGrupo();
    void setEnlaceGrupo(NodoGrupos*);
};

