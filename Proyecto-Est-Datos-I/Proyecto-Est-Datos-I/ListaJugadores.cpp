#include "ListaJugadores.h"


ListaJugadores::ListaJugadores(void)
{
}
ListaJugadores::~ListaJugadores(void)
{
}

NodoJugador * ListaJugadores::GetCabeza()
{
	return this->cabeza;
}
void ListaJugadores::SetCabeza(NodoJugador * cabeza)
{
	this->cabeza = cabeza;
}

int ListaJugadores::GetTamano()
{
	return this->tamano;
}
void ListaJugadores::SetTamano(int tamano)
{
	this->tamano = tamano;
}

NodoJugador * ListaJugadores::DirNodo(int id)
{
	if (this->GetCabeza() == NULL)
		return NULL;
	else
	{
		NodoJugador * recorrido = this->GetCabeza();

		do
		{
			if (recorrido->GetJugador()->GetId() == id)
				return recorrido;

			recorrido = recorrido->GetSiguiente();
		}
		while (recorrido != this->GetCabeza());
		return NULL;
	}
}

//int ListaJugadores::Agregar(Jugador * jugador)
//{
//	/*
//	Agrega un Jugador a la lista de Jugadores (Ascendentemente de acuerdo a su id).
//	Devuelve:
//	1: Se agregó correctamente.
//	2: Error: id repetido (No se agrega).
//	*/
//
//	if (this->GetCabeza() == NULL) // Se inserta al inicio, siendo el unico en la lista.
//	{
//		NodoJugador * nuevo_nodo = new NodoJugador(jugador);
//		nuevo_nodo->SetAnterior(nuevo_nodo);
//		nuevo_nodo->SetSiguiente(nuevo_nodo);
//		this->SetCabeza(nuevo_nodo);
//	}
//	else
//	{
//		NodoJugador * recorrido = this->GetCabeza();
//		NodoJugador * nuevo_nodo = new NodoJugador(jugador);
//
//		if (nuevo_nodo->GetJugador()->GetId() < this->GetCabeza()->GetJugador()->GetId()) // Se inserta al inicio.
//		{
//			nuevo_nodo->SetAnterior(recorrido->GetAnterior());
//			nuevo_nodo->SetSiguiente(recorrido);
//
//			recorrido->SetAnterior(nuevo_nodo);
//			recorrido->GetAnterior()->SetSiguiente(nuevo_nodo);
//
//			this->SetCabeza(nuevo_nodo);
//
//			this->SetTamano(this->GetTamano() + 1);
//
//			return 1;
//		}
//		else
//		{
//			do 
//			{
//				if (recorrido->GetJugador()->GetId() < nuevo_nodo->GetJugador()->GetId()) // Se inserta en el "medio".
//					if (recorrido->GetSiguiente()->GetJugador()->GetId() > nuevo_nodo->GetJugador()->GetId())
//					{
//						nuevo_nodo->SetAnterior(recorrido);
//						nuevo_nodo->SetSiguiente(recorrido->GetSiguiente());
//
//						recorrido->GetSiguiente()->SetAnterior(nuevo_nodo);
//						recorrido->SetSiguiente(nuevo_nodo);
//
//						this->SetTamano(this->GetTamano() + 1);
//
//						return 1;
//					}
//
//				recorrido = recorrido->GetSiguiente();
//			}
//			while (recorrido != this->GetCabeza());
//
//			nuevo_nodo->SetSiguiente(recorrido); // Se inserta al final.
//			nuevo_nodo->SetAnterior(recorrido->GetAnterior());
//
//			recorrido->GetAnterior()->SetSiguiente(nuevo_nodo);
//			recorrido->SetAnterior(nuevo_nodo);
//
//			this->SetTamano(this->GetTamano() + 1);
//
//			return 1;
//		}
//		return 2;
//	}
//    return NULL;
//}
//int ListaJugadores::Eliminar(int id)
//{
//	/*
//	Elimina un jugador de la lista.
//	Devuelve:
//    1: Se elimino correctamente.
//	2: Error: Jugador no encontrado (No se elimina).
//	*/
//
//	if (this->DirNodo(id) == NULL)
//		return 2;
//	else
//	{
//		NodoJugador * eliminar = this->DirNodo(id);
//
//		eliminar->GetAnterior()->SetSiguiente(eliminar->GetSiguiente());
//		eliminar->GetSiguiente()->SetAnterior(eliminar->GetAnterior());
//
//		if (this->GetCabeza() == eliminar)
//			this->SetCabeza(eliminar->GetSiguiente());
//
//		delete eliminar;
//
//		this->SetTamano(this->GetTamano() - 1);
//
//		return 1;
//	}
//}
//void ListaJugadores::MostrarLista()
//{
//	if (this->GetCabeza() == NULL)
//		cout << "-- La lista esta vacia --" << endl;
//	else
//	{
//		NodoJugador * recorrido = this->GetCabeza();
//		cout << "-- Inicio de Lista --" << endl;
//		do
//		{
//			cout << "- Jugador -" << endl <<
//				"Camiseta: " << recorrido->GetJugador()->GetId() << endl <<
//				"Nombre: " << recorrido->GetJugador()->GetNombre() << endl <<
//				"Fecha de Nacimiento: " << recorrido->GetJugador()->GetFechaNac() << endl <<
//				"Edad: " << recorrido->GetJugador()->GetEdad() << endl <<
//				"Altura: " << recorrido->GetJugador()->GetAltura() << endl <<
//				"Club: " << recorrido->GetJugador()->GetClub() << endl <<
//				"Posicion: " << recorrido->GetJugador()->GetPosicion() << endl <<
//				"Primer Partido: " << recorrido->GetJugador()->GetPrimerPartido() << endl <<
//				"Partidos Jugados: " << recorrido->GetJugador()->GetPartidosJugados() << endl <<
//				"Cantidad de Goles: " << recorrido->GetJugador()->GetCantidadGoles() << endl <<
//				"- - -" << endl;
//
//			recorrido = recorrido->GetSiguiente();
//		}
//		while (recorrido != this->GetCabeza());
//		cout << "-- Fin de Lista --" << endl;
//	}
//}
//void ListaJugadores::MostrarJugador(int id)
//{
//	if (this->DirNodo(id) == NULL)
//		cout << "-- Jugador no encontrado --" << endl;
//	else
//	{
//		NodoJugador * jugador = this->DirNodo(id);
//		cout << "- Jugador -" << endl <<
//			"ID: " << jugador->GetJugador()->GetId() << endl <<
//			"Nombre: " << jugador->GetJugador()->GetNombre() << endl <<
//			"Fecha de Nacimiento: " << jugador->GetJugador()->GetFechaNac() << endl <<
//			"Edad: " << jugador->GetJugador()->GetEdad() << endl <<
//			"Altura: " << jugador->GetJugador()->GetAltura() << endl <<
//			"Club: " << jugador->GetJugador()->GetClub() << endl <<
//			"Posicion: " << jugador->GetJugador()->GetPosicion() << endl <<
//			"Primer Partido: " << jugador->GetJugador()->GetPrimerPartido() << endl <<
//			"Partidos Jugados: " << jugador->GetJugador()->GetPartidosJugados() << endl <<
//			"Cantidad de Goles: " << jugador->GetJugador()->GetCantidadGoles() << endl <<
//			"- - -" << endl;
//	}
//}
