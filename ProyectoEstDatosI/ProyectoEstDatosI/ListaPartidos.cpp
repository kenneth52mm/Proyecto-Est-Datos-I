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