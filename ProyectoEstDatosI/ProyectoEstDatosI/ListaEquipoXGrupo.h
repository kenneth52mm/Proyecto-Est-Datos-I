#pragma once
#include "NodoEquipoXGrupo.h"

class ListaEquipoXGrupo
{
private:
    NodoEquipoXGrupo * cabeza;
    int tamano;
	NodoEquipoXGrupo *DirNodo(int, string);
public:
	ListaEquipoXGrupo(void);
	~ListaEquipoXGrupo(void);

    NodoEquipoXGrupo * GetCabeza();
    void SetCabeza(NodoEquipoXGrupo *);

    int GetTamano();
    void SetTamano(int);

    int Agregar(int, string, ListaEquipos *, ListaGrupos *);
    int Eliminar(string);
	int Eliminar(int);
    void MostrarLista();
    void MostrarGrupo(string);
};

