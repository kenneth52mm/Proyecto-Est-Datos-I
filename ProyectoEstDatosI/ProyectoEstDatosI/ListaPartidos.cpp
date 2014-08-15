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

void ListaPartidos::MostrarLista()
{
	if(this->GetCabeza() == NULL)
		cout<<"No hay elemntos en la lista"<<endl;
	else
	{
		NodoPartido* partido =this->GetCabeza();
		cout<<"Inicio de la lista"<< endl;
		do
		{
			cout<<"Id: "<<partido->GetPartido()->GetId()<<endl
				<<"Estadio: "<<partido->GetPartido()->GetEstadio()<<endl
				<<"Feha: "<<partido->GetPartido()->GetFecha()<<endl
				<<"Hora: "<<partido->GetPartido()->GetHora()<<endl
				<<"Ubicacion:"<<partido->GetPartido()->GetUbicacion()<<endl
				<<"Punticion: "<<partido->GetPartido()->GetPuntuacion()<<endl;
			partido = partido->GetSiguiente();
		}while(partido != this->GetCabeza());
		cout<<"Fin de la lista"<< endl;
	}
}
int ListaPartidos::Eliminar(int id)
{
	if (this->DirNodo(id) == NULL)
		return 2;
	else
	{
		NodoPartido * eliminar = this->DirNodo(id);

		eliminar->GetAnterior()->SetSiguiente(eliminar->GetSiguiente());
		eliminar->GetSiguiente()->SetAnterior(eliminar->GetAnterior());

		if (this->GetCabeza() == eliminar)
			this->SetCabeza(eliminar->GetSiguiente());

		delete eliminar;

		this->SetTamano(this->GetTamano() - 1);

		return 1;
	}

}