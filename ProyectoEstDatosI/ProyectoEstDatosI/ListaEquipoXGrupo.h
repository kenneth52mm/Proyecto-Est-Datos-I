#pragma once
#include "NodoEquipoXGrupo.h"
#include "ListaEquipos.h"
#include "ListaGrupos.h"

class ListaEquipoXGrupo
{
private:
    NodoEquipoXGrupo * cabeza;
    int tamano;
public:
	ListaEquipoXGrupo(void);
	~ListaEquipoXGrupo(void);

    NodoEquipoXGrupo * GetCabeza();
    void SetCabeza(NodoEquipoXGrupo *);

    int GetTamano();
    void SetTamano(int);

    int Agregar(int, string, ListaEquipos *, ListaGrupos *);
    int Elmininar(int, int);
    void MostrarLista();
    void MostrarEquipo(int);
    void MostrarGrupo(int);
};

