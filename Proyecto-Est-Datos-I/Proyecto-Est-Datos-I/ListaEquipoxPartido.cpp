#include "ListaEquipoxPartido.h"


ListaEquipoxPartido::ListaEquipoxPartido(void)
{
}


ListaEquipoxPartido::~ListaEquipoxPartido(void)
{
}

NodoEquipoxPartido* ListaEquipoxPartido::getCabeza(){}
void ListaEquipoxPartido::setCabeza(NodoEquipoxPartido* _cabeza){}

int ListaEquipoxPartido::getTama�o(){}
void ListaEquipoxPartido::setTama�o(int _tama�o){}

int ListaEquipoxPartido::agregar(NodoEquipo*_equipo, NodoPais* _pais){}
int ListaEquipoxPartido::eliminar(int _idEquipo, int _idPais){}
void ListaEquipoxPartido::mostrarLista(){}
void ListaEquipoxPartido::mostrarEquipo(int _id){}
void ListaEquipoxPartido::mostrarPais(int _id){}
