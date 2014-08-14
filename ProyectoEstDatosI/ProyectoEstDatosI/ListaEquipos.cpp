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

int ListaEquipos::Agregar(Equipo * equipo)
{
	/*
	1: Insertado
	2: Repetido
	*/
	bool repetido = false;

	if (this->GetCabeza() == NULL)
	{
		NodoEquipo * nuevo_nodo = new NodoEquipo(equipo);
		this->SetCabeza(nuevo_nodo);

		nuevo_nodo->SetAnterior(nuevo_nodo);
		nuevo_nodo->SetSiguiente(nuevo_nodo);

		return 1;
	}
	else
	{
		NodoEquipo * recorrido = this->GetCabeza();

		do
		{
			if (this->DirNodo(equipo->GetId()) != NULL)
				repetido = true;

			recorrido = recorrido->GetSiguiente();
		}
		while (recorrido != this->GetCabeza());

		if (!repetido)
		{
			NodoEquipo * nuevo_nodo = new NodoEquipo(equipo);

			nuevo_nodo->SetSiguiente(this->GetCabeza());
			nuevo_nodo->SetAnterior(this->GetCabeza()->GetAnterior());

			this->GetCabeza()->GetAnterior()->SetSiguiente(nuevo_nodo);
			this->GetCabeza()->SetAnterior(nuevo_nodo);

			return 1;
		}
		else
			return 2;
	}
}
void ListaEquipos::MostrarLista()
{
	if(this->GetCabeza() == NULL)
		cout<<"No hay elemntos en la lista"<<endl;
	else
	{
		NodoEquipo* equipo =this->GetCabeza();
		cout<<"Inicio de la lista"<< endl;
		do
		{
			cout<<"Id: "<<equipo->GetEquipo()->GetId()<<endl
				<<"Nombre: "<<equipo->GetEquipo()->GetNombre()<<endl
				<<"Abreviatura: "<<equipo->GetEquipo()->GetAbreviatura()<<endl
				<<"Entrenador: "<<equipo->GetEquipo()->GetEntrenador()<<endl;
			equipo= equipo->GetSiguiente();
		}while(equipo!= this->GetCabeza());
		cout<<"Fin de la lista"<< endl;
	}
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
			this->SetCabeza(eliminar->GetSiguiente());

		delete eliminar;

		this->SetTamano(this->GetTamano() - 1);

		return 1;
	}

}
