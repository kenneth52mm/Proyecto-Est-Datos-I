#pragma once
#include "stdafx.h"
#include"NodoEquipo.h"
#include "NodoGrupos.h"
class NodoEquipoXGrupo
{
private:
    NodoEquipoXGrupo* anterior;
    NodoEquipoXGrupo* siguiente;
    NodoEquipo* equipo;
    NodoGrupos* grupo;
    NodoEquipo* EnlaceEquipo;
    NodoGrupos* enlaceGrupo;


public:
	NodoEquipoXGrupo(void);
	~NodoEquipoXGrupo(void);

    NodoEquipoXGrupo(NodoGrupos*, NodoEquipo*);

    NodoEquipoXGrupo* getAnterior();
    void serAnterior(NodoEquipoXGrupo*);

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

