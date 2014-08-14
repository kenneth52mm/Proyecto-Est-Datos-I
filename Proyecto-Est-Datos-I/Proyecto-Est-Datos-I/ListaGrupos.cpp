#include "ListaGrupos.h"


ListaGrupos::ListaGrupos(void)
{
	this->SetCabeza(NULL);
}
ListaGrupos::~ListaGrupos(void)
{
}

NodoGrupos *ListaGrupos::GetCabeza()
{
	return this->cabeza;
}
void ListaGrupos::SetCabeza(NodoGrupos * cabeza)
{
	this->cabeza = cabeza;
}

int ListaGrupos::GetTamano()
{
	return this->tamano;
}

NodoGrupos * ListaGrupos::DirNodo(string grupo)
{
	if (this->GetCabeza() == NULL)
		return NULL;
	else 
	{
		NodoGrupos * nodo = this->GetCabeza();

		do
		{
			if (nodo->GetGrupo().compare(grupo) == 0)
				return nodo;
			else
				nodo = nodo->GetSgte();
		}
		while(nodo != this->GetCabeza());
		return NULL;
	}
}

//int ListaGrupos::Agregar(string grupo, ListaEquipoXGrupo * equipos)
//{
//	NodoGrupos* nuevo_nodo = new NodoGrupos(_grupo, _equipos); 
//
//	if (this->GetCab() == NULL)
//	{
//		this->SetCab(nuevo_nodo);
//		nuevo_nodo->SetSgte(nuevo_nodo);
//		nuevo_nodo->SetAnte(nuevo_nodo);
//		tamano++;
//		return 1;
//	}
//	else
//	{
//		// Pendiente no permitir letras repetidas
//		nuevo_nodo->SetAnte(this->GetCab()->GetAnte());
//		nuevo_nodo->SetSgte(this->GetCab());
//		this->GetCab()->GetAnte()->SetSgte(nuevo_nodo);
//		this->GetCab()->SetAnte(nuevo_nodo);
//		this->SetCab(GetCab()->GetAnte());
//		tamano++;
//		return 1;
//	}
//}
//int ListaGrupos::Eliminar(string grupo)
//{
//	if (GetCab() == NULL)
//		return false;
//	else
//	{
//		NodoGrupos * aux = DirNodo(grupo);
//
//		if (aux->GetSgte() == aux)
//		{
//			SetCab(NULL);
//			delete aux;
//		}
//		else
//		{
//			if (aux == GetCab())
//			{
//				SetCab(aux->GetSgte());
//				aux->GetAnte()->SetSgte(GetCab());
//				GetCab()->SetAnte(aux->GetAnte());
//				delete aux;
//			}
//			else
//			{
//				aux->GetAnte()->SetSgte(aux->GetSgte());
//				aux->GetSgte()->SetAnte(aux->GetAnte());
//				delete aux;
//			}
//		}
//		tamano--;
//		return true;
//	}
//}
//void ListaGrupos::MostarLista()
//{
//	NodoGrupos * recorrido = GetCab();
//	NodoEquipoXGrupo * recorrido2 = recorrido->GetEquipos()->getCabeza();
//	do
//	{
//		do
//		{
//			cout << "-- Grupo: " << recorrido->GetGrupo() << " --" << endl
//		<< "-- Equipos --" << endl
//		<< "ID Equipo: " << recorrido2->GetEnlaceEquipo()->GetEnlaceEquipo()->GetEquipo()->GetId()
//		<< "Equipo: " << recorrido2->GetEnlaceEquipo()->GetEnlacePais()->GetPais()->GetNombre()
//		<< "Abreviatura" << recorrido2->GetEnlaceEquipo()->GetEnlacePais()->GetPais()->GetAbreviatura()
//		<< "Entrenador: " << recorrido2->GetEnlaceEquipo()->GetEnlaceEquipo()->GetEquipo()->GetEntrenador() << endl;
//
//			recorrido2 = recorrido2->GetSiguiente();
//		}
//		while (recorrido2 != recorrido->GetEquipos()->getCabeza());
//
//		recorrido = recorrido->GetSgte();
//	}
//	while (recorrido != this->GetCab());
//}
//void ListaGrupos::MostrarGrupo(string letra)
//{
//	NodoGrupos * recorrido = DirNodo(letra);
//	NodoEquipoXGrupo * recorrido2 = recorrido->GetEquipos()->getCabeza();
//
//	if (recorrido != NULL)
//
//		do
//		{
//			cout << "-- Grupo: " << recorrido->GetGrupo() << " --" << endl
//		<< "-- Equipos --" << endl
//		<< "ID Equipo: " << recorrido2->GetEnlaceEquipo()->GetEnlaceEquipo()->GetEquipo()->GetId()
//		<< "Equipo: " << recorrido2->GetEnlaceEquipo()->GetEnlacePais()->GetPais()->GetNombre()
//		<< "Abreviatura" << recorrido2->GetEnlaceEquipo()->GetEnlacePais()->GetPais()->GetAbreviatura()
//		<< "Entrenador: " << recorrido2->GetEnlaceEquipo()->GetEnlaceEquipo()->GetEquipo()->GetEntrenador() << endl;
//
//			recorrido2 = recorrido2->GetSiguiente();
//		}
//		while (recorrido2 != recorrido->GetEquipos()->getCabeza());
//}
