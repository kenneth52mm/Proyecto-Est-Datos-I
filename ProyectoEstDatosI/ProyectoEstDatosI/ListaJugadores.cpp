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

NodoJugador * ListaJugadores::DirNodo(int id)
{
	if (this->GetCabeza() == NULL)
		return NULL;
	else
	{
		NodoJugador * recorrido = this->GetCabeza();

		do
		{
			if (recorrido->GetJugador()->GetId() == id)
				return recorrido;

			recorrido = recorrido->GetSiguiente();
		}
		while (recorrido != this->GetCabeza());
		return NULL;
	}
}
int ListaJugadores::Agregar(Jugador * jugador)
{
	/*
	1: Insertado
	2: Repetido
	*/

	if (this->GetCabeza() == NULL)
	{
		NodoJugador * nuevo_nodo = new NodoJugador(jugador);

		this->SetCabeza(nuevo_nodo);

		nuevo_nodo->SetAnterior(nuevo_nodo);
		nuevo_nodo->SetSiguiente(nuevo_nodo);

		return 1;
	}
	else
	{
		NodoJugador * nuevo_nodo = new NodoJugador(jugador);

		nuevo_nodo->SetAnterior(this->GetCabeza()->GetAnterior());
		nuevo_nodo->SetSiguiente(this->GetCabeza());

		this->GetCabeza()->GetAnterior()->SetSiguiente(nuevo_nodo);
		this->GetCabeza()->SetAnterior(nuevo_nodo);
	}
}