#include "ListaEquipoXGrupo.h"


ListaEquipoXGrupo::~ListaEquipoXGrupo(void)
{
	this->SetCabeza(NULL);
	this->SetTamano(0);
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

NodoEquipoXGrupo *ListaEquipoXGrupo::DirNodo(int id_equipo, string grupo)
{
	if (this->GetCabeza() != NULL)
	{
		NodoEquipoXGrupo * recorrido = this->GetCabeza();
		do
			if (recorrido->GetEquipo()->GetEquipo()->GetId() == id_equipo && recorrido->GetGrupo()->GetGrupo().compare(grupo) == 0)
				return recorrido;
			else
				recorrido = recorrido->GetSiguiente();
		while (recorrido != this->GetCabeza());

		return NULL;
	}
	else
		return NULL;
}

int ListaEquipoXGrupo::Agregar(int id_equipo, string grupo, ListaEquipos * lista_equipos, ListaGrupos * lista_grupos)
{
	/*
	1: Insertado
	2: Repetido
	3: Nodo no encontrado
	*/

	NodoEquipo * nodo_equipo = lista_equipos->DirNodo(id_equipo);
	NodoGrupos * nodo_grupo = lista_grupos->DirNodo(grupo);

	bool repetido = false;

	if (nodo_equipo != NULL && nodo_grupo != NULL)
	{
		if (this->DirNodo(nodo_equipo->GetEquipo()->GetId(), nodo_grupo->GetGrupo()) == NULL)
		{
			NodoEquipoXGrupo * nuevo_nodo = new NodoEquipoXGrupo(nodo_equipo, nodo_grupo);

			if (this->GetCabeza() == NULL)
			{
				this->SetCabeza(nuevo_nodo);

				nuevo_nodo->SetSiguiente(nuevo_nodo);
				nuevo_nodo->SetAnterior(nuevo_nodo);
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
	else
		return 3;
}
int ListaEquipoXGrupo::Eliminar(string grupo)
{
	if (this->GetCabeza() != NULL)
	{
		NodoEquipoXGrupo * recorrido = this->GetCabeza();
		NodoEquipoXGrupo * eliminar;

		do
		{
			if (recorrido->GetSiguiente()->GetGrupo()->GetGrupo() == grupo)
			{
				eliminar = recorrido->GetSiguiente();

				eliminar->GetAnterior()->SetSiguiente(eliminar->GetSiguiente());
				eliminar->GetSiguiente()->SetAnterior(eliminar->GetAnterior());

				if (this->GetCabeza() == eliminar)
				{
					if (this->GetCabeza()->GetSiguiente() == eliminar)
						this->SetCabeza(NULL);
					else
						this->SetCabeza(eliminar->GetSiguiente());
				}

				delete eliminar;
				this->SetTamano(this->GetTamano() - 1);
			}
			else
				recorrido = recorrido->GetSiguiente();

			return 1;
		}
		while (recorrido != this->GetCabeza());
	}
	else
		return 2;
}
int ListaEquipoXGrupo::Eliminar(int equipo)
{
	if (this->GetCabeza() != NULL)
	{
		NodoEquipoXGrupo * recorrido = this->GetCabeza();
		NodoEquipoXGrupo * eliminar;

		do
		{
			if (recorrido->GetSiguiente()->GetEquipo()->GetEquipo()->GetId() == equipo)
			{
				eliminar = recorrido->GetSiguiente();

				eliminar->GetAnterior()->SetSiguiente(eliminar->GetSiguiente());
				eliminar->GetSiguiente()->SetAnterior(eliminar->GetAnterior());

				if (this->GetCabeza() == eliminar)
				{
					if (this->GetCabeza()->GetSiguiente() == eliminar)
						this->SetCabeza(NULL);
					else
						this->SetCabeza(eliminar->GetSiguiente());
				}

				delete eliminar;
				this->SetTamano(this->GetTamano() - 1);
			}
			else
				recorrido = recorrido->GetSiguiente();

			return 1;
		}
		while (recorrido != this->GetCabeza());
	}
	else
		return 2;
}
void ListaEquipoXGrupo::MostrarLista()
{
	if (this->GetCabeza() == NULL)
		cout << "-- Lista vacia --" << endl;
	else
	{
		NodoEquipoXGrupo * recorrido = this->GetCabeza();

		cout<<"-- I --"<<endl;

		do
		{
			cout << "Grupo: "<<recorrido->GetGrupo()->GetGrupo() << endl
				<< "ID: " << recorrido->GetEquipo()->GetEquipo()->GetId() << endl
				<<"Nombre: " << recorrido->GetEquipo()->GetEquipo()->GetNombre() << endl
				<<"Abreviatura: " << recorrido->GetEquipo()->GetEquipo()->GetAbreviatura() << endl
				<<"Entrenador: " << recorrido->GetEquipo()->GetEquipo()->GetEntrenador() << endl;
			recorrido= recorrido->GetSiguiente();	
		}
		while (recorrido != this->GetCabeza());
		cout << "-- F --"<<endl;
	}
}
void ListaEquipoXGrupo::MostrarGrupo(string grupo)
{
	if (this->GetCabeza() != NULL)
	{
		bool vacio = true;
		NodoEquipoXGrupo * recorrido = this->GetCabeza();

		do
		{
			if (recorrido->GetGrupo()->GetGrupo() == grupo)
			{
				vacio = false;
				cout << "---" << endl <<
					"Grupo: " << recorrido->GetGrupo()->GetGrupo() << endl <<
					"ID: " << recorrido->GetEquipo()->GetEquipo()->GetId() << endl <<
					"Nombre: " << recorrido->GetEquipo()->GetEquipo()->GetNombre() << endl <<
					"Abreviatura: " << recorrido->GetEquipo()->GetEquipo()->GetAbreviatura() << endl <<
					"Entrenador: " << recorrido->GetEquipo()->GetEquipo()->GetEntrenador() << endl;
			}

			recorrido = recorrido->GetSiguiente();
		}
		while (recorrido != this->GetCabeza());

		if (vacio)
			cout << "-- Grupo no encontrado --" << endl;
	}
	else
		cout << "-- Lista Vacia --" << endl;
}