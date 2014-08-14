#include "ListaPartidoXEquipo.h"


ListaPartidoXEquipo::ListaPartidoXEquipo(void)
{
	this->SetCabeza(NULL);
}
ListaPartidoXEquipo::~ListaPartidoXEquipo(void)
{
}

NodoPartidoxEquipo * ListaPartidoXEquipo::GetCabeza()
{
	return this->cabeza;
}
void ListaPartidoXEquipo::SetCabeza(NodoPartidoxEquipo * cabeza)
{
	this->cabeza = cabeza;
}

int ListaPartidoXEquipo::GetTamano()
{
	return this->tamano;
}
void ListaPartidoXEquipo::SetTamano(int tamano)
{
	this->tamano = tamano;
}

//int ListaPartidoXEquipo::agregar(int id_partido, int id_equipo1, int id_equipo2, ListaEquipos *, ListaPartidos *)
//{
//	return 0;
//}
//int ListaPartidoXEquipo::eliminar(int, int)
//{
//	return 0;
//}
//void ListaPartidoXEquipo::mostrarLista()
//{}
//void ListaPartidoXEquipo::mostrarEquipo(int)
//{}
//void ListaPartidoXEquipo::mostrarPais(int)
//{}