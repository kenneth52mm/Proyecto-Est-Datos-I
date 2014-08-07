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
	Agrega un partido a la lista de partidoes (Ascendentemente de acuerdo a su id).
	Devuelve:
	1: Se agregó correctamente.
	2: Error: id repetido (No se agrega).
	*/

	if (this->GetCabeza() == NULL) // Se inserta al inicio, siendo el unico en la lista.
	{
		NodoPartido * nuevo_nodo = new NodoPartido(partido);
		nuevo_nodo->SetAnterior(nuevo_nodo);
		nuevo_nodo->SetSiguiente(nuevo_nodo);
		this->SetCabeza(nuevo_nodo);
	}
	else
	{
		NodoPartido * recorrido = this->GetCabeza();
		NodoPartido * nuevo_nodo = new NodoPartido(partido);

		if (nuevo_nodo->GetPartido()->GetId() < this->GetCabeza()->GetPartido()->GetId()) // Se inserta al inicio.
		{
			nuevo_nodo->SetAnterior(recorrido->GetAnterior());
			nuevo_nodo->SetSiguiente(recorrido);

			recorrido->SetAnterior(nuevo_nodo);
			recorrido->GetAnterior()->SetSiguiente(nuevo_nodo);

			this->SetCabeza(nuevo_nodo);

			this->SetTamano(this->GetTamano() + 1);

			return 1;
		}
		else
		{
			do 
			{
				if (recorrido->GetPartido()->GetId() < nuevo_nodo->GetPartido()->GetId()) // Se inserta en el "medio".
					if (recorrido->GetSiguiente()->GetPartido()->GetId() > nuevo_nodo->GetPartido()->GetId())
					{
						nuevo_nodo->SetAnterior(recorrido);
						nuevo_nodo->SetSiguiente(recorrido->GetSiguiente());

						recorrido->GetSiguiente()->SetAnterior(nuevo_nodo);
						recorrido->SetSiguiente(nuevo_nodo);

						this->SetTamano(this->GetTamano() + 1);

						return 1;
					}

				recorrido = recorrido->GetSiguiente();
			}
			while (recorrido != this->GetCabeza());

			nuevo_nodo->SetSiguiente(recorrido); // Se inserta al final.
			nuevo_nodo->SetAnterior(recorrido->GetAnterior());

			recorrido->GetAnterior()->SetSiguiente(nuevo_nodo);
			recorrido->SetAnterior(nuevo_nodo);

			this->SetTamano(this->GetTamano() + 1);

			return 1;
		}
		return 2;
	}
}
int ListaPartidos::Eliminar(int id)
{
	/*
	Elimina un Partido de la lista.
	Devuelve:
	1: Se eliminó correctamente.
	2: Error: Partido no encontrado (No se elimina).
	*/

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
void ListaPartidos::MostrarLista()
{
	if (this->GetCabeza() == NULL)
		cout << "-- La lista esta vacia --" << endl;
	else
	{
		NodoPartido * recorrido = this->GetCabeza();
		cout << "-- Inicio de Lista --" << endl;
		do
		{
			cout << "- Partido -" << endl <<
				"ID: " << recorrido->GetPartido()->GetId() << endl <<
				"Fecha: " << recorrido->GetPartido()->GetFecha() << endl <<
				"Hora: " << recorrido->GetPartido()->GetHora() << endl <<
				"Estadio: " << recorrido->GetPartido()->GetEstadio() << endl <<
				"Ubicación: " << recorrido->GetPartido()->GetUbicacion() << endl <<
				"Puntuación: " << recorrido->GetPartido()->GetPuntuacion() << endl <<
				"- - -" << endl;

			recorrido = recorrido->GetSiguiente();
		}
		while (recorrido != this->GetCabeza());
		cout << "-- Fin de Lista --" << endl;
	}
}
void ListaPartidos::MostrarPartido(int id)
{
	if (this->DirNodo(id) == NULL)
		cout << "-- Partido no encontrado --" << endl;
	else
	{
		NodoPartido * partido = this->DirNodo(id);
		cout << "- Partido -" << endl <<
				"ID: " << partido->GetPartido()->GetId() << endl <<
				"Fecha: " << partido->GetPartido()->GetFecha() << endl <<
				"Hora: " << partido->GetPartido()->GetHora() << endl <<
				"Estadio: " << partido->GetPartido()->GetEstadio() << endl <<
				"Ubicación: " << partido->GetPartido()->GetUbicacion() << endl <<
				"Puntuación: " << partido->GetPartido()->GetPuntuacion() << endl <<
				"- - -" << endl;
	}
}
