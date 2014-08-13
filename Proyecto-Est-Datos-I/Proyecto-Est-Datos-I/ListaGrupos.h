#pragma once
#include "NodoGrupos.h"

class ListaGrupos
{
private:
    NodoGrupos * cab;
	int tamano;
public:
	ListaGrupos(void);
	~ListaGrupos(void);

    NodoGrupos * GetCab();
	void SetCab(NodoGrupos *);
	NodoGrupos * DirNodo(string);

	int GetTama();

    int Agregar(string, ListaEquipoXGrupo *);
	int Eliminar(int);
	void MostarLista();
	void MostrarGrupo(string);
};

