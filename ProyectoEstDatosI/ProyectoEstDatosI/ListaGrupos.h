#pragma once
#include "NodoGrupos.h"

class ListaGrupos
{
private:
    NodoGrupos * cabeza;
	int tamano;
	NodoGrupos *DirNodo(int);
public:
	ListaGrupos(void);
	~ListaGrupos(void);

    NodoGrupos * GetCabeza();
	void SetCabeza(NodoGrupos *);

	int GetTamano();
	void SetTamano(int);

	NodoGrupos * DirNodo(string);

    int Agregar(string);
	int Eliminar(string);
	void MostrarLista();
	void MostrarGrupo(string);
};

