#pragma once
#include "NodoEquipoXGrupo.h"
#include "ListaEquipos.h"
#include "ListaGrupos.h"

class ListaEquipoXGrupo
{
private:
    NodoEquipoXGrupo * cabeza;
    int tamano;
	NodoEquipoXGrupo *DirNodo(int,string);
public:
	ListaEquipoXGrupo(void);
	~ListaEquipoXGrupo(void);

    NodoEquipoXGrupo * GetCabeza();
    void SetCabeza(NodoEquipoXGrupo *);

    int GetTamano();
    void SetTamano(int);

    int Agregar(int, string, ListaEquipos *, ListaGrupos *);
    int Eliminar(int, string);
    void MostrarLista();
    void MostrarEquipo(int);
    void MostrarGrupo(int);
};

