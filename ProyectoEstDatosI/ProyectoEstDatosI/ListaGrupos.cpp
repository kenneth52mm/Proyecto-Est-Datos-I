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

	if (this->GetCabeza() == NULL)
	{
		NodoGrupos * nuevo_nodo = new NodoGrupos(grupo);

		this->SetCabeza(nuevo_nodo);

		nuevo_nodo->SetAnterior(nuevo_nodo);
		nuevo_nodo->SetSiguiente(nuevo_nodo);

		return 1;
	}
	else
	{
		NodoGrupos * nuevo_nodo = new NodoGrupos(grupo);

		nuevo_nodo->SetAnterior(this->GetCabeza()->GetAnterior());
		nuevo_nodo->SetSiguiente(this->GetCabeza());

		this->GetCabeza()->GetAnterior()->SetSiguiente(nuevo_nodo);
		this->GetCabeza()->SetAnterior(nuevo_nodo);

		return 1;
	}
}
void ListaGrupos::MostrarLista()
{
	if(this->GetCabeza() == NULL)
		cout<<"No hay elemntos en la lista"<<endl;
	else
	{
		NodoGrupos* grupo = this->GetCabeza();
		cout<<"Inicio de la lista"<< endl;
		do
		{
			cout<<"Nombre: "grupo->GetGrupo()->GetNombre;
			grupo= grupo->GetSiguiente();
		}while(grupo != this->GetCabeza());
	cout<<"Fin de la lista"<< endl;
}