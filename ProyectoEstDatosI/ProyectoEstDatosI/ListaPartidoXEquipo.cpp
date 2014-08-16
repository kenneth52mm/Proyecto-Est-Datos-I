#include "ListaPartidoXEquipo.h"


ListaPartidoXEquipo::ListaPartidoXEquipo(void)
{
	this->SetCabeza(NULL);
	this->SetTamano(0);
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

NodoPartidoxEquipo * ListaPartidoXEquipo::DirNodo(int id_partido, int id_equipo1, int id_equipo2)
{
	if (this->GetCabeza() != NULL)
	{
		NodoPartidoxEquipo * nodo = this->GetCabeza();

		do
		if(nodo->GetPartido()->GetPartido()->GetId() == id_partido &&
			nodo->GetEquipo1()->GetEquipo()->GetId() == id_equipo1 &&
			nodo->GetEquipo2()->GetEquipo()->GetId() == id_equipo2)
				return nodo;
			else
				nodo=nodo->GetSiguiente();

		while(nodo!=GetCabeza());
		return NULL;
	}
	else
		return NULL;
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
			nuevo_nodo->GetEquipo2()->GetEquipo()->GetId()) == NULL)
		{
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
	return 3;
}
int ListaPartidoXEquipo::Eliminar(int id)
{
	if (this->GetCabeza() != NULL)
	{
		NodoPartidoxEquipo * eliminar  = this->GetCabeza();

		do
		{
			if (eliminar->GetPartido()->GetPartido()->GetId() == id)
			{
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

			eliminar = eliminar->GetSiguiente();
		}
		while (eliminar != this->GetCabeza());
		return 2;
	}
	else
		return 2;
}
void ListaPartidoXEquipo::MostrarLista()
{
	if (this->GetCabeza() == NULL)
		cout<<"-- Lista Vacia --"<<endl;
	else
	{
		NodoPartidoxEquipo * recorrido = this->GetCabeza();
		cout <<"-- I --" << endl;
		do
		{
			cout << "---" <<
					"Id: " << recorrido->GetPartido()->GetPartido()->GetId() << endl <<
					"Equipo 1: " << recorrido->GetEquipo1()->GetEquipo()->GetNombre() << endl <<
					"Equipo 2: " << recorrido->GetEquipo2()->GetEquipo()->GetNombre() << endl <<
					"Estadio: " << recorrido->GetPartido()->GetPartido()->GetEstadio() << endl <<
					"Feha: " << recorrido->GetPartido()->GetPartido()->GetFecha() << endl <<
					"Hora: " << recorrido->GetPartido()->GetPartido()->GetHora() << endl <<
					"Ubicacion: " << recorrido->GetPartido()->GetPartido()->GetUbicacion() << endl <<
					"Puntuacion: " << recorrido->GetPartido()->GetPartido()->GetPuntuacion() << endl;

			recorrido = recorrido->GetSiguiente();
		}
		while (recorrido != this->GetCabeza());
		cout << "-- F --" << endl;
	}
}
void ListaPartidoXEquipo::MostrarPartido(int id)
{
	NodoPartidoxEquipo * recorrido = this->GetCabeza();
	bool vacio = true;

	if (recorrido != NULL)
	{
		do
		{
			if (recorrido->GetPartido()->GetPartido()->GetId() == id)
			{
				vacio = false;

				cout << "---" << endl <<
					"Id: " << recorrido->GetPartido()->GetPartido()->GetId() << endl <<
					"Equipo 1: " << recorrido->GetEquipo1()->GetEquipo()->GetNombre() << endl <<
					"Equipo 2: " << recorrido->GetEquipo2()->GetEquipo()->GetNombre() << endl <<
					"Estadio: " << recorrido->GetPartido()->GetPartido()->GetEstadio() << endl <<
					"Feha: " << recorrido->GetPartido()->GetPartido()->GetFecha() << endl <<
					"Hora: " << recorrido->GetPartido()->GetPartido()->GetHora() << endl <<
					"Ubicacion: " << recorrido->GetPartido()->GetPartido()->GetUbicacion() << endl <<
					"Puntuacion: " << recorrido->GetPartido()->GetPartido()->GetPuntuacion() << endl;
			}
		}
		while (recorrido != this->GetCabeza());

		if (vacio)
			cout << "-- Partido no encontrado --" << endl;
	}
	else
		cout << "-- Lista vacia --" << endl;
}