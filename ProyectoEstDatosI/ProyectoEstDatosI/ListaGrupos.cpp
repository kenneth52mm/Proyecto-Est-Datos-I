#include "ListaGrupos.h"


ListaGrupos::ListaGrupos(void)
{
	this->SetCabeza(NULL);
}
ListaGrupos::~ListaGrupos(void)
{
}

NodoGrupos *ListaGrupos::GetCabeza()
{
	return this->cabeza;
}
void ListaGrupos::SetCabeza(NodoGrupos * cabeza)
{
	this->cabeza = cabeza;
}

int ListaGrupos::GetTamano()
{
	return this->tamano;
}
void ListaGrupos::SetTamano(int tamano)
{
	this->tamano = tamano;
}

NodoGrupos * ListaGrupos::DirNodo(string grupo)
{
	if (this->GetCabeza() == NULL)
		return NULL;
	else 
	{
		NodoGrupos * nodo = this->GetCabeza();

		do
		{
			if (nodo->GetGrupo().compare(grupo) == 0)
				return nodo;
			else
				nodo = nodo->GetSiguiente();
		}
		while(nodo != this->GetCabeza());
		return NULL;
	}
}

int ListaGrupos::Agregar(string grupo)
{
	/*
	1: Insertado
	2: Repetido
	*/

	if (this->DirNodo(grupo) == NULL)
	{
		NodoGrupos * nuevo_nodo = new NodoGrupos(grupo);

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
int ListaGrupos::Eliminar(string id)
{
	if (this->DirNodo(id) == NULL)
		return 2;
	else
	{
		NodoGrupos * eliminar = this->DirNodo(id);

		eliminar->GetAnterior()->SetSiguiente(eliminar->GetSiguiente());
		eliminar->GetSiguiente()->SetAnterior(eliminar->GetAnterior());

		if (this->GetCabeza() == eliminar)
			this->SetCabeza(eliminar->GetSiguiente());

		delete eliminar;

		this->SetTamano(this->GetTamano() - 1);

		return 1;
	}
}
void ListaGrupos::MostrarLista()
{
	if (this->GetCabeza() == NULL)
		cout<<"-- Lista vacia --"<<endl;
	else
	{
		NodoGrupos * grupo = this->GetCabeza();
		cout << "-- I --" << endl;

		do
		{
			cout << "Nombre: " << grupo->GetGrupo();
			grupo = grupo->GetSiguiente();
		}
		while (grupo != this->GetCabeza());
		cout<<"Fin de la lista"<< endl;
	}
}