#pragma once
#include "Pais.h"
class NodoPais
{
private:
	Pais *pais;
	NodoPais *sgte;
	NodoPais *ante;
public:
	NodoPais(void);
	~NodoPais(void);

	Pais *GetPais();
	void SetPais(Pais *);

	NodoPais *GetSgte();
	void SetSgte(NodoPais *);
	
	NodoPais *GetAnte();
	void SetAnte(NodoPais *);
};

