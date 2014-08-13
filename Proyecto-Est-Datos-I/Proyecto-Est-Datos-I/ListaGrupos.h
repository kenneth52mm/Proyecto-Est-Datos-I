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
	NodoGrupos * DirNodo(int);

	int GetTama();

    int Agregar(string, ListaEquipos *);
	int Eliminar(int);
	void MostarLista();
	void MostrarGrupo(int);
};

