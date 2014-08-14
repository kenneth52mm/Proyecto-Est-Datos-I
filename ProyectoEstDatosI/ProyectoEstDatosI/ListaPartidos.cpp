#include "ListaPartidos.h"

ListaPartidos::ListaPartidos(void)
{
}
ListaPartidos::~ListaPartidos(void)
{
}

NodoPartido * ListaPartidos::GetCabeza()
{
	return this->cabeza;
}
void ListaPartidos::SetCabeza(NodoPartido * cabeza)
{
	this->cabeza = cabeza;
}

int ListaPartidos::GetTamano()
{
	return this->tamano;
}
void ListaPartidos::SetTamano(int tamano)
{
	this->tamano = tamano;
}

NodoPartido * ListaPartidos::DirNodo(int id)
{
	if (this->GetCabeza() == NULL)
		return NULL;
	else
	{
		NodoPartido * recorrido = this->GetCabeza();

		do
		{
			if (recorrido->GetPartido()->GetId() == id)
				return recorrido;

			recorrido = recorrido->GetSiguiente();
		}
		while (recorrido != this->GetCabeza());
		return NULL;
	}
}

int ListaPartidos::Agregar(Partido * partido)
{
	/*
	1: Insertado
	2: Repetido
	*/

	if (this->DirNodo(partido->GetId()) != NULL)
	{
		NodoPartido * nuevo_nodo = new NodoPartido(partido);

		if (this->GetCabeza() != NULL)
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
			this->GetCabeza()->SetAnterior(nuevo_nodo);

			return 1;
		}
	}
	else
		return 2;
}