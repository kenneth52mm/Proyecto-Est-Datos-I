#pragma once
#include "Equipo.h"
#include "ListaEquipoXGrupo.h"


class NodoGrupos
{
private :
	NodoGrupos * anterior;
	NodoGrupos * siguiente;
    string grupo;
	ListaEquipoXGrupo * equipos;
public:
	NodoGrupos(void);
	~NodoGrupos(void);

    string GetGrupo();
    void SetGrupo(string);

	ListaEquipoXGrupo * GetEquipos();
	void SetEquipos(ListaEquipoXGrupo *);

	NodoGrupos * GetSiguiente();
	void SetSiguiente(NodoGrupos *);

	NodoGrupos * GetAnterior();
	void SetAnterior(NodoGrupos *);
};

