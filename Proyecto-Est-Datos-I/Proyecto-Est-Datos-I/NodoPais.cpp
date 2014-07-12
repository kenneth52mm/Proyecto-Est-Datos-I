#include "NodoPais.h"


NodoPais::NodoPais(void)
{
}


NodoPais::~NodoPais(void)
{
}

Pais *NodoPais::GetPais()
{
	return this->pais;
}
void NodoPais::SetPais(Pais *_pais)
{
	this->pais=_pais;
}

NodoPais *NodoPais::GetSgte()
{
	return this->sgte;
}
void NodoPais::SetSgte(NodoPais *_sgte)
{
	this->sgte=_sgte;
}

NodoPais *NodoPais::GetAnte()
{
	return this->ante;
}
void NodoPais::SetAnte(NodoPais *_ante)
{
	this->ante=_ante;
}
