#include "ListaEquipos.h"


ListaEquipos::ListaEquipos(void)
{
	this->SetCabeza(NULL);
}
ListaEquipos::~ListaEquipos(void)
{
}

NodoEquipo * ListaEquipos::GetCabeza()
{
	return this->cabeza;
}
void ListaEquipos::SetCabeza(NodoEquipo * cabeza)
{
	this->cabeza = cabeza;
}

int ListaEquipos::GetTamano()
{
	return this->tamano;
}
void ListaEquipos::SetTamano(int tamano)
{
	this->tamano = tamano;
}

NodoEquipo * ListaEquipos::DirNodo(int id)
{
	if (this->GetCabeza() == NULL)
		return NULL;
	else
	{
		NodoEquipo * nodo = GetCabeza();
		do
		{
			if (nodo->GetEquipo()->GetId() == id)
				return nodo;
			else
				nodo = nodo->GetSiguiente();
		}
		while(nodo != GetCabeza());
		return NULL;
	}
}

int ListaEquipos::Agregar(Equipo *)
{
	/*
	1: Insertado
	2: Repetido
	*/
	if (this->GetCabeza() == NULL)
	{
		NodoEquipo * nuevo_nodo = new NodoEquipo();
		this->SetCabeza(nuevo_nodo);

		nuevo_nodo->SetAnterior(nuevo_nodo);
		nuevo_nodo->SetSiguiente(nuevo_nodo);

		return 1;
	}
	else
	{
		NodoEquipo * nuevo_nodo = new NodoEquipo();

		nuevo_nodo->SetSiguiente(this->GetCabeza());
		nuevo_nodo->SetAnterior(this->GetCabeza()->GetAnterior());

		this->GetCabeza()->GetAnterior()->SetSiguiente(nuevo_nodo);
		this->GetCabeza()->SetAnterior(nuevo_nodo);

		return 1;
	}
}