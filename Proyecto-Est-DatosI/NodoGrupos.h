#pragma once
#include "Equipo.h"
#include "ListaEquipos.h"
#include "stdafx.h"


class NodoGrupos
{
private :
	int id;
    string grupo;
	ListaEquipos *equipos;
	NodoGrupos *sgte;
	NodoGrupos *ante;
public:
    NodoGrupos(string, ListaEquipos *);
	NodoGrupos(void);
	~NodoGrupos(void);

	int GetId();
	void SetId(int);

    string GetGrupo();
    void SetGrupo(string);

	ListaEquipos *GetEquipos();
	void SetEquipos(ListaEquipos *);

	NodoGrupos *GetSgte();
	void SetSgte(NodoGrupos*);

	NodoGrupos *GetAnte();
	void SetAnte(NodoGrupos*);
};

