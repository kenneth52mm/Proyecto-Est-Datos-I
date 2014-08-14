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

int ListaEquipoXGrupo::Agregar(int id_equipo, string grupo, ListaEquipos * lista_equipos, ListaGrupos * lista_grupos)
{
	/*
	1: Insertado
	2: Repetido
	*/

	NodoEquipo * nodo_equipo = lista_equipos->DirNodo(id_equipo);
	NodoGrupos * nodo_grupo = lista_grupos->DirNodo(grupo);

	if (nodo_equipo != NULL && nodo_grupo != NULL)
	{
		NodoEquipoXGrupo * nuevo_nodo = new NodoEquipoXGrupo(nodo_equipo, nodo_grupo);

		if (this->GetCabeza() != NULL)
		{
			this->SetCabeza(nuevo_nodo);

			nuevo_nodo->SetSiguiente(nuevo_nodo);
			nuevo_nodo->SetAnterior(nuevo_nodo);

			return 1;
		}
		else
		{
			nuevo_nodo->SetSiguiente(this->GetCabeza());
			nuevo_nodo->SetAnterior(this->GetCabeza()->GetAnterior());

			this->GetCabeza()->GetAnterior()->SetSiguiente(nuevo_nodo);
			this->GetCabeza()->SetAnterior(nuevo_nodo);

			return 2;
		}
	}
	else
		cout << "-- Error: Enlace Equipo + Grupo --" << endl;
}