#pragma once
#include "Equipo.h"


class NodoGrupos
{
private :
	NodoGrupos * anterior;
	NodoGrupos * siguiente;
    string grupo;
public:
	NodoGrupos(void);
	~NodoGrupos(void);

	NodoGrupos::NodoGrupos(string);

	NodoGrupos * GetAnterior();
	void SetAnterior(NodoGrupos *);

	NodoGrupos * GetSiguiente();
	void SetSiguiente(NodoGrupos *);

	string GetGrupo();
    void SetGrupo(string);
};

