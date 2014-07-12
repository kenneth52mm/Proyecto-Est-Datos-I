#include "ListaJugadores.h"


ListaJugadores::ListaJugadores(void)
{
}
ListaJugadores::~ListaJugadores(void)
{
}

NodoJugador * ListaJugadores::GetCabeza()
{
	return this->cabeza;
}
void ListaJugadores::SetCabeza(NodoJugador * cabeza)
{
	this->cabeza = cabeza;
}

int ListaJugadores::GetTamano()
{
	return this->tamano;
}
void ListaJugadores::SetTamano(int tamano)
{
	this->tamano = tamano;
}

int ListaJugadores::Agregar(Jugador * jugador)
{}
int ListaJugadores::Eliminar(int)
{}
void ListaJugadores::MostrarLista()
{}
void ListaJugadores::MostrarJugador(int)
{}
