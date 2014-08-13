#include "ListaPartidoXEquipo.h"

ListaPartidoXEquipo::ListaPartidoXEquipo(void)
{
}
ListaPartidoXEquipo::~ListaPartidoXEquipo(void)
{
}

NodoPartidoxEquipo * ListaPartidoXEquipo::getCabeza()
{
	return this->cabeza;
}
void ListaPartidoXEquipo::setCabeza(NodoPartidoxEquipo * cabeza)
{
	this->cabeza = cabeza;
}

int ListaPartidoXEquipo::getTamano()
{
	return this->tamano;
}
void ListaPartidoXEquipo::setTamano(int tamano)
{
	this->tamano = tamano;
}

int ListaPartidoXEquipo::agregar(int id_partido, int id_equipo1, int id_equipo2, ListaEquipos *, ListaPartidos *)
{
	return 0;
}
int ListaPartidoXEquipo::eliminar(int, int)
{
	return 0;
}
void ListaPartidoXEquipo::mostrarLista()
{}
void ListaPartidoXEquipo::mostrarEquipo(int)
{}
void ListaPartidoXEquipo::mostrarPais(int)
{}