#pragma once
#include "Equipo.h"
#include "ListaEquipos.h"


class NodoGrupos
{
private :
	int id;
    string grupo;
	ListaEquipos * equipos;
	NodoGrupos * sgte;
	NodoGrupos * ante;
public:
	NodoGrupos(void);
	~NodoGrupos(void);

	NodoGrupos(string, ListaEquipos *);

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

