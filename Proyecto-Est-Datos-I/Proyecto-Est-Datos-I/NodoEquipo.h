#pragma once
#include "Equipo.h"
class NodoEquipo
{
private:
	Equipo *equipo;
	NodoEquipo *sgte;
	NodoEquipo *ante;
public:
	NodoEquipo(void);
	~NodoEquipo(void);

	Equipo *GetEquipo();
	void SetEquipo(Equipo *);

	NodoEquipo *GetSgte();
	void SetSgte(NodoEquipo *);

	NodoEquipo *GetAnte();
	void SetAnte(NodoEquipo *);

};

