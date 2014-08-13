#include "ListaEquipos.h"
#include "stdafx.h"

ListaEquipos::ListaEquipos(void)
{
}
ListaEquipos::~ListaEquipos(void)
{
}

NodoEquipo * ListaEquipos::DirNodo(int _id)
{
	if(GetCab()==NULL)
		return NULL;
	else{
		NodoEquipo *aux=GetCab();
		do{
			if(aux->GetEquipo()->GetId()==_id)
				return aux;
			aux=aux->GetSgte();
		}
		while(aux!=GetCab());
		return NULL;
	}
}

NodoEquipo * ListaEquipos::GetCab()
{
	return this->cab;
}
void ListaEquipos::SetCab(NodoEquipo *_cab)
{
	this->cab=_cab;
}

int ListaEquipos::GetTama()
{
	return this->tamano;
}

int ListaEquipos::Agregar(Equipo *_equipo)
{
	NodoEquipo* nuevo_nodo = new NodoEquipo(_equipo); 

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
		if(GetCab()->GetEquipo()->GetId()==_equipo->GetId())
			return 2;
		else
		{
			nuevo_nodo->SetAnte(this->GetCab()->GetAnte());
			nuevo_nodo->SetSgte(this->GetCab());

			this->GetCab()->GetAnte()->SetSgte(nuevo_nodo);
			this->GetCab()->SetAnte(nuevo_nodo);

			if(GetCab()->GetEquipo()->GetId()>_equipo->GetId())
				this->SetCab(GetCab()->GetAnte());

			tamano++;
			return 1;
		}
	}
}
int ListaEquipos::Eliminar(int _id)
{
	if(GetCab()==NULL)
		return false;
	else{
		NodoEquipo *aux=DirNodo(_id);
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

ListaEquipos * ListaEquipos::MostarLista()
{
	ListaEquipos *nueva=new ListaEquipos();
	NodoEquipo *aux=GetCab();
	do{
		nueva->Agregar(aux->GetEquipo());
	}while(aux!=GetCab());
	return nueva;
}

Equipo * ListaEquipos::MostrarEquipo(int _id)
{
	NodoEquipo *aux=DirNodo(_id);
	if(aux!=NULL)
		return aux->GetEquipo();
	else
		return NULL;
}