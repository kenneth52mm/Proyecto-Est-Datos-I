#include "ListaPartidoxEquipo.h"


ListaPartidoxEquipo::ListaPartidoxEquipo(void)
{
}


ListaPartidoxEquipo::~ListaPartidoxEquipo(void)
{
}

NodoPartidoxEquipo*ListaPartidoxEquipo::getCabeza(){}
void ListaPartidoxEquipo::setCabeza(NodoPartidoxEquipo*_cabeza){}

int ListaPartidoxEquipo::getTamaño(){}
void ListaPartidoxEquipo::setTamaño(int _tamaño){}


int ListaPartidoxEquipo:: agregar(NodoEquipo*_equipo1, NodoEquipo*_equipo2, NodoPartido* _partido){}
int ListaPartidoxEquipo::eliminar(int _id){}
void ListaPartidoxEquipo::mostrarLista(){}
void ListaPartidoxEquipo::mostrarEnlace(int _id){}
