#pragma once
#include "stdafx.h"
#include "NodoEquipo.h"
#include "NodoPais.h"


class NodoEquipoxPais
{
private:
	NodoEquipo* equipo;
	NodoPais* pais;
	NodoEquipoxPais* anterior;
	NodoEquipoxPais* siguiente;
	NodoEquipo* enlaceEquipo;
	NodoPais* enlacePais;
	

public:
	NodoEquipoxPais(void);
	~NodoEquipoxPais(void);

	NodoEquipoxPais(NodoEquipo*, NodoPais*);

	NodoEquipo* getEquipo();
	void setEquipo(NodoEquipo*);


	NodoPais* getPais();
	void setPais(NodoPais*);

	NodoEquipoxPais* getAnterior();
	void setAnterior(NodoEquipoxPais*);

	NodoEquipoxPais* getSiguiente();
	void setSiguiente(NodoEquipoxPais*);

	NodoEquipo* getEnlaceEquipo();
	void setEnlaceEquipo(NodoEquipo*);

	NodoPais* getEnlacePais();
	void setEnlacepais(NodoPais*);

};