#include "ListaPartidos.h"


ListaPartidos::ListaPartidos(void)
{
}
ListaPartidos::~ListaPartidos(void)
{
}

NodoPartido * ListaPartidos::GetPartido()
{
	return this->partido;
}
void ListaPartidos::SetPartido(NodoPartido * partido)
{
	this->partido = partido;
}

int ListaPartidos::GetTamano()
{
	return this->tamano;
}
void ListaPartidos::SetTamano(int tamano)
{
	this->tamano = tamano;
}

int ListaPartidos::Agregar(Partido *)
{}
int ListaPartidos::Eliminar(int)
{}
void ListaPartidos::MostrarLista()
{}
void ListaPartidos::MostrarPartido(int)
{}
