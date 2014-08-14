#pragma once
#include "NodoGrupos.h"

class ListaGrupos
{
private:
    NodoGrupos * cabeza;
	int tamano;
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
	void MostarLista();
	void MostrarGrupo(string);
};

