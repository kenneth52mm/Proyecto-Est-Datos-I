#pragma once
#include "Equipo.h"
#include "ListaEquipoXGrupo.h"


class NodoGrupos
{
private :
    string grupo;
	ListaEquipoXGrupo * equipos;
	NodoGrupos * sgte;
	NodoGrupos * ante;

public:
	NodoGrupos(void);
	~NodoGrupos(void);

    string GetGrupo();
    void SetGrupo(string);

	ListaEquipoXGrupo * GetEquipos();
	void SetEquipos(ListaEquipoXGrupo *);

	NodoGrupos *GetSgte();
	void SetSgte(NodoGrupos*);

	NodoGrupos *GetAnte();
	void SetAnte(NodoGrupos*);
};

