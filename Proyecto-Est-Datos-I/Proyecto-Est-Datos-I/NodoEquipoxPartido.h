#pragma once
#include "NodoEquipo.h"
#include "NodoPais.h"
#include "NodoPartido.h"


class NodoEquipoxPartido
{
private:
	NodoEquipo* equipo;
	NodoPais* pais;
	NodoEquipoxPartido* anterior;
	NodoEquipoxPartido* siguiente;

public:
	NodoEquipoxPartido(void);
	~NodoEquipoxPartido(void);

	NodoEquipoxPartido(NodoEquipo*, NodoPartido*);

	NodoEquipo* getEquipo();
	void setEquipo(NodoEquipo*);

	NodoPais* getPais();
	void setPais(NodoPais*);

	NodoEquipoxPartido* getAnterior();
	void setAnterior(NodoEquipoxPartido*);

	NodoEquipoxPartido* getSiguiente();
	void setSiguiente(NodoEquipoxPartido*);

};

