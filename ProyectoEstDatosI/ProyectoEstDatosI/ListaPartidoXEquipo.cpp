#include "ListaPartidoXEquipo.h"


ListaPartidoXEquipo::ListaPartidoXEquipo(void)
{
	this->SetCabeza(NULL);
}
ListaPartidoXEquipo::~ListaPartidoXEquipo(void)
{
}

NodoPartidoxEquipo * ListaPartidoXEquipo::GetCabeza()
{
	return this->cabeza;
}
void ListaPartidoXEquipo::SetCabeza(NodoPartidoxEquipo * cabeza)
{
	this->cabeza = cabeza;
}

int ListaPartidoXEquipo::GetTamano()
{
	return this->tamano;
}
void ListaPartidoXEquipo::SetTamano(int tamano)
{
	this->tamano = tamano;
}

int ListaPartidoXEquipo::Agregar(int id_equipo1, int id_equipo2, int id_partido, ListaEquipos * lista_equipos, ListaPartidos * lista_partidos)
{
	NodoEquipo * equipo1 = lista_equipos->DirNodo(id_equipo1);
	NodoEquipo * equipo2 = lista_equipos->DirNodo(id_equipo2);
	NodoPartido * partido = lista_partidos->DirNodo(id_partido);

	if (equipo1 != NULL && equipo2 != NULL && partido != NULL)
	{
		NodoPartidoxEquipo * nuevo_nodo = new NodoPartidoxEquipo(equipo1, equipo2, partido);

		if (this->DirNodo(nuevo_nodo->GetPartido()->GetPartido()->GetId(),
			nuevo_nodo->GetEquipo1()->GetEquipo()->GetId(),
			nuevo_nodo->GetEquipo2()->GetEquipo()->GetId()) != NULL)
		{
			if (this->GetCabeza() == NULL)
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
}

int ListaPartidoXEquipo::eliminar(int, int)
{
	return 0;
}
void ListaPartidoXEquipo::mostrarLista()
{
	if(this->GetCabeza() == NULL)
		cout<<"No hay elemntos en la lista"<<endl;
	else
	{
		NodoPartidoxEquipo* nodo =this->GetCabeza();
		cout<<"Inicio de la lista"<< endl;
		do
		{
			cout<<"Partido: "<<nodo->GetPartido()->GetPartido()->GetId()<<endl
				<<"Puntuacion: "<<nodo->GetPartido()->GetPartido()->GetPuntuacion()<<endl
				<<"Equipo 1: "<<nodo->GetEquipo1()->GetEquipo()->GetNombre()<<endl
				<<"Abreviatura: "<<nodo->GetEquipo1()->GetEquipo()->GetAbreviatura()<<endl
				<<"Id: "<<nodo->GetEquipo1()->GetEquipo()->GetId()<<endl
				<<"Entrenador: "<<nodo->GetEquipo1()->GetEquipo()->GetEntrenador()<<endl
				<<"Equipo 2: "<<nodo->GetEquipo2()->GetEquipo()->GetNombre()<<endl
				<<"Abreviatura: "<<nodo->GetEquipo2()->GetEquipo()->GetAbreviatura()<<endl
				<<"Id: "<<nodo->GetEquipo2()->GetEquipo()->GetId()<<endl
				<<"Entrenador: "<<nodo->GetEquipo2()->GetEquipo()->GetEntrenador()<<endl;
			nodo = nodo->GetSguiente();
		}while(nodo!= this->GetCabeza());
		cout<<"Fin de la lista"<<endl;
	}
}
void ListaPartidoXEquipo::mostrarEquipo(int)
{}
void ListaPartidoXEquipo::mostrarPais(int)
{}