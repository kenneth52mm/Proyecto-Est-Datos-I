#include "ListaJugadorxEquipo.h"


ListaJugadorxEquipo::ListaJugadorxEquipo(void)
{
	this->SetCabeza(NULL);
    this->SetTamano(0);
}
ListaJugadorxEquipo::~ListaJugadorxEquipo(void)
{
}

NodoJugadorxEquipo*ListaJugadorxEquipo::GetCabeza()
{
	return this->cabeza;
}
void ListaJugadorxEquipo::SetCabeza(NodoJugadorxEquipo* _cabeza)
{
	this->cabeza= _cabeza;
}

int ListaJugadorxEquipo::GetTamano()
{
    return this->tamano;
}
void ListaJugadorxEquipo::SetTamano(int tamano)
{
    this->tamano= tamano;
}

int ListaJugadorxEquipo::Agregar(int id_jugador, int id_equipo, ListaJugadores * lista_jugadores, ListaEquipos * lista_equipos)
{
	/*
	1: Insertado
	2: Repetido
	*/

	NodoJugador * nodo_jugador = lista_jugadores->DirNodo(id_jugador);
	NodoEquipo * nodo_equipo = lista_equipos->DirNodo(id_equipo);

	if (nodo_jugador != NULL && nodo_equipo != NULL)
	{
		NodoJugadorxEquipo * nuevo_nodo = new NodoJugadorxEquipo(nodo_jugador, nodo_equipo);

		if (this->GetCabeza() == NULL)
		{
			this->SetCabeza(nuevo_nodo);

			nuevo_nodo->SetAnterior(nuevo_nodo);
			nuevo_nodo->SetSiguiente(nuevo_nodo);

			return 1;
		}
		else
		{
			nuevo_nodo->SetAnterior(this->GetCabeza()->GetAnterior());
			nuevo_nodo->SetSiguiente(this->GetCabeza());

			this->GetCabeza()->GetAnterior()->SetSiguiente(nuevo_nodo);
			this->GetCabeza()->SetSiguiente(nuevo_nodo);

			return 1;
		}
	}
	else
		cout << "Error: Jugadores + Equipos" << endl;
}