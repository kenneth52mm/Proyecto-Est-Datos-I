#include "NodoPartidoxEquipo.h"


NodoEquipoxPartido::NodoEquipoxPartido(void)
{
}


NodoEquipoxPartido::~NodoEquipoxPartido(void)
{
}

NodoEquipoxPartido::NodoEquipoxPartido(NodoEquipo* _equipo, NodoPartido* _partido){}

NodoEquipo* NodoEquipoxPartido::getEquipo(){}
void NodoEquipoxPartido::setEquipo(NodoEquipo* _equipo){}

NodoPais* NodoEquipoxPartido::getPais(){}
void NodoEquipoxPartido::setPais(NodoPais* _pais){}

NodoEquipoxPartido* NodoEquipoxPartido::getAnterior(){}
void NodoEquipoxPartido::setAnterior(NodoEquipoxPartido* _id){}

NodoEquipoxPartido* NodoEquipoxPartido::getSiguiente(){}
void NodoEquipoxPartido::setSiguiente(NodoEquipoxPartido* _id){}
