#include "ListaGrupos.h"
#include "stdafx.h"

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

NodoGrupos *ListaGrupos::DirNodo(int _id)
{
	if(GetCab()==NULL)
		return NULL;
	else{
		NodoGrupos *aux=GetCab();
		do{
			if(aux->GetId()==_id)
				return aux;
			aux=aux->GetSgte();
		}
		while(aux!=GetCab());
		return NULL;
	}
}

int ListaGrupos::Agregar(char *_grupo,ListaEquipos *_equipos)
{
	NodoGrupos* nuevo_nodo = new NodoGrupos(_grupo,_equipos); 

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
ListaGrupos *ListaGrupos::MostarLista()
{
	ListaGrupos *nueva=new ListaGrupos();
	NodoGrupos *aux=GetCab();
	do{
		nueva->Agregar(aux->GetGrupo()),aux->GetEquipos());
	}while(aux!=GetCab());
	return nueva
}
ListaEquipos *ListaGrupos::MostrarGrupo(int _id)
{
	ListaEquipos *nueva=new ListaEquipos();
	NodoGrupos *aux=DirNodo(_id);
	if(aux!=NULL)
		return aux->GetEquipos();
	else
		return NULL;

}