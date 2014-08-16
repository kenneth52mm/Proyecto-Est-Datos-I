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
	if (this->GetCabeza() != NULL)
		{
			NodoJugador * nodo = this->GetCabeza();

			do
				if (nodo->GetJugador()->GetId() == id)
					return nodo;
				else
					nodo = nodo->GetSiguiente();

			while (nodo != this->GetCabeza());
			return NULL;
		}
	else
		return NULL;
}

int ListaJugadores::Agregar(Jugador * jugador)
{
	/*
	1: Insertado
	2: Repetido
	*/

	if (this->DirNodo(jugador->GetId()) == NULL)
	{
		NodoJugador * nuevo_nodo = new NodoJugador(jugador);

		if (this->GetCabeza() == NULL)
		{
			this->SetCabeza(nuevo_nodo);

			nuevo_nodo->SetAnterior(nuevo_nodo);
			nuevo_nodo->SetSiguiente(nuevo_nodo);
		}
		else
		{
			nuevo_nodo->SetAnterior(this->GetCabeza()->GetAnterior());
			nuevo_nodo->SetSiguiente(this->GetCabeza());

			this->GetCabeza()->GetAnterior()->SetSiguiente(nuevo_nodo);
			this->GetCabeza()->SetAnterior(nuevo_nodo);
		}

		this->SetTamano(this->GetTamano() + 1);
		return 1;
	}
	else
		return 2;
}
int ListaJugadores::Eliminar(int id)
{
	if (this->DirNodo(id) == NULL)
		return 2;
	else
	{
		NodoJugador * eliminar = this->DirNodo(id);

		eliminar->GetAnterior()->SetSiguiente(eliminar->GetSiguiente());
		eliminar->GetSiguiente()->SetAnterior(eliminar->GetAnterior());

		if (this->GetCabeza() == eliminar)
			if (this->GetCabeza()->GetSiguiente() == eliminar)
				this->SetCabeza(NULL);
			else
				this->SetCabeza(eliminar->GetSiguiente());

		delete eliminar;

		this->SetTamano(this->GetTamano() - 1);

		return 1;
	}
}
void ListaJugadores::MostrarLista()
{
	if(this->GetCabeza() == NULL)
		cout << "-- Lista vacia --" << endl;
	else
	{
		NodoJugador * recorrido = this->GetCabeza();
		cout <<"-- I --" << endl;
		do
		{
			recorrido->GetJugador()->Mostrar();

			recorrido = recorrido->GetSiguiente();
		}
		while(recorrido != this->GetCabeza());
		cout<<"-- F --"<< endl;
	}
}
void ListaJugadores::MostrarJugador(int id)
{
	if (this->DirNodo(id))
	{
		NodoJugador * jugador = this->DirNodo(id);

		jugador->GetJugador()->Mostrar();
	}
	else
		cout << "-- Jugador no encontrado --" << endl;
}