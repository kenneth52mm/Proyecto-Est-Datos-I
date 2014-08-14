#include "ListaEquipoXGrupo.h"


ListaEquipoXGrupo::~ListaEquipoXGrupo(void)
{
}
ListaEquipoXGrupo::ListaEquipoXGrupo(void)
{
    this->SetCabeza(NULL);
    this->SetTamano(0);
}

NodoEquipoXGrupo * ListaEquipoXGrupo::GetCabeza()
{
    return this->cabeza;
}
void ListaEquipoXGrupo::SetCabeza(NodoEquipoXGrupo * cabeza)
{
    this->cabeza = cabeza;
}

int ListaEquipoXGrupo::GetTamano()
{
    return this->tamano;
}
void ListaEquipoXGrupo::SetTamano(int tam)
{
    this->tamano = tam;
}
NodoEquipoXGrupo *ListaEquipoXGrupo::DirNodo(int idEquipo,string idGrupo)
{
	NodoEquipoXGrupo *aux=GetCabeza();
	do
	{
		if(aux->GetEquipo()->GetEquipo()->GetId()==idEquipo&& aux->GetGrupo()->GetGrupo()==idGrupo)
			return aux;
		aux=aux->GetSiguiente();
	}while(aux!=GetCabeza());
	return NULL;

}
int ListaEquipoXGrupo::Agregar(int id_equipo, string grupo, ListaEquipos * lista_equipos, ListaGrupos * lista_grupos)
{
	/*
	1: Insertado
	2: Repetido
	*/

	NodoEquipo * nodo_equipo = lista_equipos->DirNodo(id_equipo);
	NodoGrupos * nodo_grupo = lista_grupos->DirNodo(grupo);

	bool repetido = false;

	if (nodo_equipo != NULL && nodo_grupo != NULL)
	{
		if (this->GetCabeza() != NULL)
		{
			NodoEquipoXGrupo * nuevo_nodo = new NodoEquipoXGrupo(nodo_equipo, nodo_grupo);

			this->SetCabeza(nuevo_nodo);

			nuevo_nodo->SetSiguiente(nuevo_nodo);
			nuevo_nodo->SetAnterior(nuevo_nodo);

			return 1;
		}
		else
		{
			NodoEquipoXGrupo * recorrido = this->GetCabeza();

			do
			{
				if (true) // Dir nodo!
					repetido = true;

				recorrido = recorrido->GetSiguiente();
			}
			while (recorrido != this->GetCabeza());

			if (!repetido)
			{
				NodoEquipoXGrupo * nuevo_nodo = new NodoEquipoXGrupo(nodo_equipo, nodo_grupo);

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
	else
		cout << "-- Error: Enlace Equipo + Grupo --" << endl;
}
void ListaEquipoXGrupo::MostrarLista()
{
	if (this->GetCabeza== NULL)
		cout<< "No hay elementos en la lista"<<endl;
	else
	{
		NodoEquipoXGrupo* nodo = this->GetCabeza();
		do
		{
			
		}while(nodo != this->GetCabeza());
	}
}
int ListaEquipoXGrupo::Eliminar(int idEquipo,string idGrupo)
{
	if (this->DirNodo(idEquipo,idGrupo) == NULL)
		return 2;
	else
	{
		NodoEquipoXGrupo* eliminar = this->DirNodo(idEquipo,idGrupo);

		eliminar->GetAnterior()->SetSiguiente(eliminar->GetSiguiente());
		eliminar->GetSiguiente()->SetAnterior(eliminar->GetAnterior());

		if (this->GetCabeza() == eliminar)
			this->SetCabeza(eliminar->GetSiguiente());

		delete eliminar;

		this->SetTamano(this->GetTamano() - 1);

		return 1;

	}
}