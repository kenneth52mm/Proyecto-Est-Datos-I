#include "ListaEquipos.h"


ListaEquipos::ListaEquipos(void)
{
	this->SetCabeza(NULL);
	this->SetTamano(0);
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
			if (nodo->GetEquipo()->GetId() == id)
				return nodo;
			else
				nodo = nodo->GetSiguiente();
		while(nodo != GetCabeza());
		return NULL;
	}
}

int ListaEquipos::Agregar(Equipo * equipo)
{
	/*
	1: Insertado
	2: Repetido
	*/

	if (this->DirNodo(equipo->GetId()) == NULL)
	{
		NodoEquipo * nuevo_nodo = new NodoEquipo(equipo);

		if (this->GetCabeza() == NULL)
		{
			
			this->SetCabeza(nuevo_nodo);

			nuevo_nodo->SetAnterior(nuevo_nodo);
			nuevo_nodo->SetSiguiente(nuevo_nodo);
		}
		else
		{
			nuevo_nodo->SetSiguiente(this->GetCabeza());
			nuevo_nodo->SetAnterior(this->GetCabeza()->GetAnterior());

			this->GetCabeza()->GetAnterior()->SetSiguiente(nuevo_nodo);
			this->GetCabeza()->SetAnterior(nuevo_nodo);
		}

		this->SetTamano(this->GetTamano() + 1);

		return 1;
	}
	else 
		return 2;
}
int ListaEquipos::Eliminar(int id)
{
	if (this->DirNodo(id) == NULL)
		return 2;
	else
	{
		NodoEquipo * eliminar = this->DirNodo(id);

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
void ListaEquipos::MostrarLista()
{
	if (this->GetCabeza() == NULL)
		cout<<"-- Lista vacia --"<<endl;
	else
	{
		NodoEquipo * recorrido = this->GetCabeza();

		cout << "-- I --" << endl;

		do
		{
			cout << "---" << endl
				<< "ID: " << recorrido->GetEquipo()->GetId() << endl
				<< "Nombre: " << recorrido->GetEquipo()->GetNombre() << endl
				<< "Abreviatura: " << recorrido->GetEquipo()->GetAbreviatura() << endl
				<< "Entrenador: " << recorrido->GetEquipo()->GetEntrenador() << endl
				<< "---" << endl;

			recorrido= recorrido->GetSiguiente();
		}
		while (recorrido != this->GetCabeza());

		cout<<"-- F --"<< endl;
	}
}
void ListaEquipos::MostrarEquipo(int id)
{
	if (this->GetCabeza() != NULL)
	{
		NodoEquipo * equipo = this->DirNodo(id);

		cout << "-- Equipo --" << endl <<
			"ID: " << equipo->GetEquipo()->GetId() << endl <<
			"Nombre: " << equipo->GetEquipo()->GetNombre() << endl <<
			"Abreviatura: " << equipo->GetEquipo()->GetAbreviatura() << endl <<
			"Entrenador: " << equipo->GetEquipo()->GetEntrenador() << endl;
	}
	else
		cout << "-- Lista vacia --" << endl;
}
