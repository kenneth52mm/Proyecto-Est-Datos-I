#include "ListaGrupos.h"

ListaGrupos::ListaGrupos(void)
{
	SetCab(NULL);
}
ListaGrupos::~ListaGrupos(void)
{
}

NodoGrupos *ListaGrupos::GetCab()
{
	return this->cab;
}
void ListaGrupos::SetCab(NodoGrupos *_cab)
{
	this->cab=_cab;
}

int ListaGrupos::GetTama()
{
	return this->tamano;
}

NodoGrupos * ListaGrupos::DirNodo(string letra)
{
	if (GetCab() == NULL)
		return NULL;
	else 
	{
		NodoGrupos * aux=GetCab();
		do
		{
			if (aux->GetGrupo().compare(letra) == 0)
				return aux;
			else
				aux = aux->GetSgte();
		}
		while(aux != GetCab());
		return NULL;
	}
}

int ListaGrupos::Agregar(string _grupo, ListaEquipoXGrupo * _equipos)
{
	NodoGrupos* nuevo_nodo = new NodoGrupos(_grupo, _equipos); 

	if (this->GetCab() == NULL)
	{
		this->SetCab(nuevo_nodo);
		nuevo_nodo->SetSgte(nuevo_nodo);
		nuevo_nodo->SetAnte(nuevo_nodo);
		tamano++;
		return 1;
	}
	else
	{
		if(GetCab()->GetId()==nuevo_nodo->GetId())
			return 2;
		else
		{
			nuevo_nodo->SetAnte(this->GetCab()->GetAnte());
			nuevo_nodo->SetSgte(this->GetCab());
			this->GetCab()->GetAnte()->SetSgte(nuevo_nodo);
			this->GetCab()->SetAnte(nuevo_nodo);
			if(GetCab()->GetId()>nuevo_nodo->GetId())
				this->SetCab(GetCab()->GetAnte());
			tamano++;
			return 1;
		}
	}
}
int ListaGrupos::Eliminar(int _id)
{
	if(GetCab()==NULL)
		return false;
	else{
		NodoGrupos *aux=DirNodo(_id);
		if(aux->GetSgte()==aux){
			SetCab(NULL);
			delete aux;
		}
		else{
			if(aux==GetCab()){
				SetCab(aux->GetSgte());
				aux->GetAnte()->SetSgte(GetCab());
				GetCab()->SetAnte(aux->GetAnte());
				delete aux;
			}
			else{
				aux->GetAnte()->SetSgte(aux->GetSgte());
				aux->GetSgte()->SetAnte(aux->GetAnte());
				delete aux;
			}
		}
		tamano--;
		return true;
	}
}
void ListaGrupos::MostarLista()
{
	NodoGrupos * recorrido = GetCab();
	NodoEquipoXGrupo * recorrido2 = recorrido->GetEquipos()->getCabeza();
	do
	{
		do
		{
			cout << "-- Grupo: " << recorrido->GetGrupo() << " --" << endl
		<< "-- Equipos --" << endl
		<< "ID Equipo: " << recorrido2->GetEnlaceEquipo()->GetEnlaceEquipo()->GetEquipo()->GetId()
		<< "Equipo: " << recorrido2->GetEnlaceEquipo()->GetEnlacePais()->GetPais()->GetNombre()
		<< "Abreviatura" << recorrido2->GetEnlaceEquipo()->GetEnlacePais()->GetPais()->GetAbreviatura()
		<< "Entrenador: " << recorrido2->GetEnlaceEquipo()->GetEnlaceEquipo()->GetEquipo()->GetEntrenador() << endl;

			recorrido2 = recorrido2->GetSiguiente();
		}
		while (recorrido2 != recorrido->GetEquipos()->getCabeza());

		recorrido = recorrido->GetSgte();
	}
	while (recorrido != this->GetCab());
}
void ListaGrupos::MostrarGrupo(string letra)
{
	NodoGrupos * recorrido = DirNodo(letra);
	NodoEquipoXGrupo * recorrido2 = recorrido->GetEquipos()->getCabeza();

	if (recorrido != NULL)

		do
		{
			cout << "-- Grupo: " << recorrido->GetGrupo() << " --" << endl
		<< "-- Equipos --" << endl
		<< "ID Equipo: " << recorrido2->GetEnlaceEquipo()->GetEnlaceEquipo()->GetEquipo()->GetId()
		<< "Equipo: " << recorrido2->GetEnlaceEquipo()->GetEnlacePais()->GetPais()->GetNombre()
		<< "Abreviatura" << recorrido2->GetEnlaceEquipo()->GetEnlacePais()->GetPais()->GetAbreviatura()
		<< "Entrenador: " << recorrido2->GetEnlaceEquipo()->GetEnlaceEquipo()->GetEquipo()->GetEntrenador() << endl;

			recorrido2 = recorrido2->GetSiguiente();
		}
		while (recorrido2 != recorrido->GetEquipos()->getCabeza());
}
