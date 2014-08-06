#pragma once
#include "NodoPais.h"
class ListaPais
{
private :
	NodoPais *cab;
	int tamano;
public:
	ListaPais(void);
	~ListaPais(void);

	NodoPais *DirNodo(int);

	NodoPais *GetCab();
	void SetCab(NodoPais *);

	int GetTama();

	int Agregar(Pais *pais);
	int Eliminar(int);
	ListaPais * MostarLista();
	Pais * MostarPais(int);
};

