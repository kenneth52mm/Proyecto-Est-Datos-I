#include "ListaEquipos.h"


ListaEquipos::ListaEquipos(void)
{
	this->SetCabeza(NULL);
}
ListaEquipos::~ListaEquipos(void)
{
}

NodoEquipo * ListaEquipos::GetCabeza()
{
	return this->cabeza;
}
void ListaEquipos::SetCabeza(NodoEquipo * cabeza)
{
	this->cabeza = cabeza;
}

int ListaEquipos::GetTamano()
{
	return this->tamano;
}
void ListaEquipos::SetTamano(int tamano)
{
	this->tamano = tamano;
}

NodoEquipo * ListaEquipos::DirNodo(int id)
{
	if (this->GetCabeza() == NULL)
		return NULL;
	else
	{
		NodoEquipo * nodo = GetCabeza();
		do
		{
			if (nodo->GetEquipo()->GetId())
				return nodo;
			else
				nodo = nodo->GetSiguiente();
		}
		while(nodo != GetCabeza());
		return NULL;
	}
}

//int ListaEquipos::Agregar(Equipo * equipo, Pais * pais)
//{
//	NodoEquipo * nodo_equipo = new NodoEquipo(equipo);
//	NodoPais * nodo_pais = new NodoPais();
//
//	NodoEquipoXPais * nuevo_nodo = new NodoEquipoXPais(nodo_equipo, nodo_pais);
//
//	if (this->GetCab() == NULL)
//	{
//		this->SetCab(nuevo_nodo);
//
//		nuevo_nodo->SetSiguiente(nuevo_nodo);
//		nuevo_nodo->SetAnterior(nuevo_nodo);
//
//		tamano++;
//
//		return 1;
//	}
//}
//int ListaEquipos::Eliminar(int _id)
//{
//	if(GetCab()==NULL)
//		return false;
//	else
//	{
//		NodoEquipoXPais * aux = DirNodo(_id);
//
//		if(aux->GetSiguiente() == aux)
//		{
//			SetCab(NULL);
//			delete aux;
//		}
//		else
//		{
//			if(aux==GetCab()){
//				SetCab(aux->GetSiguiente());
//				aux->GetAnterior()->SetSiguiente(GetCab());
//				GetCab()->SetAnterior(aux->GetAnterior());
//				delete aux;
//			}
//			else{
//				aux->GetAnterior()->SetSiguiente(aux->GetSiguiente());
//				aux->GetSiguiente()->SetAnterior(aux->GetAnterior());
//				delete aux;
//			}
//		}
//		tamano--;
//		return true;
//	}
//}
//void ListaEquipos::MostarLista()
//{
//	NodoEquipoXPais * recorrido = GetCab();
//	NodoJugadorxEquipo * recorrido2 = recorrido->GetEnlaceEquipo()->GetJugadores()->getCabeza();
//
//	cout << "-- Equipos --" << endl;
//
//	do
//	{
//		cout << "ID Equipo: " << recorrido->GetEnlaceEquipo()->GetEquipo()->GetId()
//			 << "Equipo: " << recorrido->GetEnlacePais()->GetPais()->GetNombre()
//			 << "Abreviatura" << recorrido->GetEnlacePais()->GetPais()->GetAbreviatura()
//			 << "Entrenador: " << recorrido->GetEnlaceEquipo()->GetEquipo()->GetEntrenador() << endl 
//			 << "-- Jugadores --" << endl;
//
//		do
//		{
//			cout << "Nombre: " << recorrido2->getEnlaceJugador()->GetJugador()->GetNombre() << endl
//				<< "Edad: " << recorrido2->getEnlaceJugador()->GetJugador()->GetEdad() << endl
//				<< "Fecha de Nacimiento: " << recorrido2->getEnlaceJugador()->GetJugador()->GetFechaNac() << endl
//				<< "Altura: " << recorrido2->getEnlaceJugador()->GetJugador()->GetAltura() << endl
//				<< "Camiseta: " << recorrido2->getEnlaceJugador()->GetJugador()->GetId() << endl
//				<< "Posicion: " << recorrido2->getEnlaceJugador()->GetJugador()->GetPosicion() << endl
//				<< "Primer Partido: " << recorrido2->getEnlaceJugador()->GetJugador()->GetPrimerPartido() << endl
//				<< "Partidos Jugados: " << recorrido2->getEnlaceJugador()->GetJugador()->GetPartidosJugados() << endl
//				<< "Goles marcados: " << recorrido2->getEnlaceJugador()->GetJugador()->GetCantidadGoles() << endl
//				<< "Club actual: " << recorrido2->getEnlaceJugador()->GetJugador()->GetClub() << endl;
//
//			recorrido2 = recorrido2->getSiguiente();
//		}
//		while (recorrido2 != recorrido->GetEnlaceEquipo()->GetJugadores()->getCabeza());
//
//			recorrido = recorrido->GetSiguiente();
//	}
//	while (recorrido != this->GetCab());
//}
//void ListaEquipos::MostrarEquipo(int _id)
//{
//	NodoEquipoXPais * recorrido = this->DirNodo(_id);
//	NodoJugadorxEquipo * recorrido2 = recorrido->GetEnlaceEquipo()->GetJugadores()->getCabeza();
//
//	if (recorrido != NULL)
//	{
//		cout << "ID Equipo: " << recorrido->GetEnlaceEquipo()->GetEquipo()->GetId()
//			 << "Equipo: " << recorrido->GetEnlacePais()->GetPais()->GetNombre()
//			 << "Abreviatura" << recorrido->GetEnlacePais()->GetPais()->GetAbreviatura() << endl;
//
//		do
//		{
//			cout << "Nombre: " << recorrido2->getEnlaceJugador()->GetJugador()->GetNombre() << endl
//				<< "Edad: " << recorrido2->getEnlaceJugador()->GetJugador()->GetEdad() << endl
//				<< "Fecha de Nacimiento: " << recorrido2->getEnlaceJugador()->GetJugador()->GetFechaNac() << endl
//				<< "Altura: " << recorrido2->getEnlaceJugador()->GetJugador()->GetAltura() << endl
//				<< "Camiseta: " << recorrido2->getEnlaceJugador()->GetJugador()->GetId() << endl
//				<< "Posicion: " << recorrido2->getEnlaceJugador()->GetJugador()->GetPosicion() << endl
//				<< "Primer Partido: " << recorrido2->getEnlaceJugador()->GetJugador()->GetPrimerPartido() << endl
//				<< "Partidos Jugados: " << recorrido2->getEnlaceJugador()->GetJugador()->GetPartidosJugados() << endl
//				<< "Goles marcados: " << recorrido2->getEnlaceJugador()->GetJugador()->GetCantidadGoles() << endl
//				<< "Club actual: " << recorrido2->getEnlaceJugador()->GetJugador()->GetClub() << endl;
//
//			recorrido2 = recorrido2->getSiguiente();
//		}
//		while (recorrido2 != recorrido->GetEnlaceEquipo()->GetJugadores()->getCabeza());
//	}
//	else
//		cout<< "No hay Equipos en la lista"<<endl;
//}