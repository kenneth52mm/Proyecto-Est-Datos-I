#include "NodoEquipoxPais.h"


NodoEquipoxPais::NodoEquipoxPais(void)
{
	this->setAnterior(NULL);
	this->setSiguiente(NULL);
	this->setEquipo(NULL);
	this->setPais(NULL);
}


NodoEquipoxPais::~NodoEquipoxPais(void)
{
}

NodoEquipoxPais::NodoEquipoxPais(NodoEquipo* _equipo, NodoPais* _pais)
{
	this->setPais(_pais);
	this->setEquipo(_equipo);
}

NodoEquipo* NodoEquipoxPais::getEquipo()
{
	return this->equipo;	
}
void NodoEquipoxPais::setEquipo(NodoEquipo* _equipo)
{
	this->equipo= _equipo;
}

NodoPais* NodoEquipoxPais::getPais()
{
	return this->pais;
}
void NodoEquipoxPais::setPais(NodoPais* _pais)
{
	this->pais= _pais;
}

NodoEquipoxPais* NodoEquipoxPais::getAnterior()
{
	return this->anterior;
}
void NodoEquipoxPais::setAnterior(NodoEquipoxPais* _anterior)
{
	this->anterior= _anterior;
}

NodoEquipoxPais* NodoEquipoxPais::getSiguiente()
{
	return this->siguiente;
}
void NodoEquipoxPais::setSiguiente(NodoEquipoxPais* _siguiente)
{
	this->siguiente= _siguiente;
}

NodoEquipo* NodoEquipoxPais::getEnlaceEquipo()
{
	return this->enlaceEquipo;
}
void NodoEquipoxPais::setEnlaceEquipo(NodoEquipo* _enlaceEquipo)
{
	this->enlaceEquipo = _enlaceEquipo;
}
NodoPais* NodoEquipoxPais::getEnlacePais()
{
	return this->enlacePais;
}
void NodoEquipoxPais::setEnlacepais(NodoPais* _enlacePais)
{
	this->enlacePais = _enlacePais;
}