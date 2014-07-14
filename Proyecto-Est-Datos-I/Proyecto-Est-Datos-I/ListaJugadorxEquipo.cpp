#include "ListaJugadorxEquipo.h"


ListaJugadorxEquipo::ListaJugadorxEquipo(void)
{
}


ListaJugadorxEquipo::~ListaJugadorxEquipo(void)
{
}

NodoJugadorxEquipo*ListaJugadorxEquipo::getCabeza(){}
void ListaJugadorxEquipo::setCabeza(NodoJugadorxEquipo* _cabeza){}

int ListaJugadorxEquipo::getTamaño(){}
void ListaJugadorxEquipo::setTamaño(int _tamano){}

int ListaJugadorxEquipo::agregar(NodoJugador* _jugador, NodoEquipo* _equipo){}
int ListaJugadorxEquipo::eliminar(int _idJugador, int _idEquipo){}
void ListaJugadorxEquipo::mostrarLista(){}
void ListaJugadorxEquipo::mostrarEnlace(int _id){}
