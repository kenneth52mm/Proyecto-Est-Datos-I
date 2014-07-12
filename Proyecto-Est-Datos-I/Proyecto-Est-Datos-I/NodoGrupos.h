#pragma once
#include "Equipo.h"
#include "ListaEquipos.h"
class NodoGrupos
{
private :
	int id;
	char *grupo;
	ListaEquipos *equipos;
	NodoGrupos *sgte;
	NodoGrupos *ante;
public:

	NodoGrupos(void);
	~NodoGrupos(void);

	int GetId();
	void SetId(int);

	char *GetGrupo();
	void SetGrupo(char *);

	ListaEquipos *GetEquipos();
	void SetEquipos(ListaEquipos *);

	NodoGrupos *GetSgte();
	void SetSgte(NodoGrupos*);

	NodoGrupos *GetAnte();
	void SetAnte(NodoGrupos*);
};

