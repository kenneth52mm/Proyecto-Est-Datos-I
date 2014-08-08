#pragma once
#include "ListaGrupos.h"
#include "NodoEquipoXGrupo.h"
class ListaEquipoXGrupo
{
private:
    NodoEquipoXGrupo* cabeza;
    int tamano;
public:
	ListaEquipoXGrupo(void);
	~ListaEquipoXGrupo(void);

    NodoEquipoXGrupo* getCabeza();
    void setCabeza(NodoEquipoXGrupo*);

    int getTamano();
    void setTamano(int);

    int agregar(int, int, ListaEquipos*, ListaGrupos*);
    int elmininar(int, int);
    void mostrarLista();
    void mostrarEquipo(int);
    void mostrarGrupo(int);

};

