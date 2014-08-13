#include "ListaPais.h"


ListaPais::ListaPais(void)
{
	SetCab(NULL);
}


ListaPais::~ListaPais(void)
{
}
NodoPais *ListaPais::GetCab()
{
	return this->cab;
}
void ListaPais::SetCab(NodoPais *_cab)
{
	this->cab=_cab;
}

int ListaPais::GetTama()
{
	return this->tamano;
}

NodoPais *ListaPais::DirNodo(int _id)
{
	if(GetCab()==NULL)
		return NULL;
	else{
		NodoPais *aux=GetCab();
		do{
			if(aux->GetPais()->GetId()==_id)
				return aux;
			aux=aux->GetSgte();
		}
		while(aux!=GetCab());
		return NULL;
	}
}

int ListaPais::Agregar(Pais *_pais)
{
	NodoPais * nuevo_nodo = new NodoPais(_pais); 

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
		if(GetCab()->GetPais()->GetId() == _pais->GetId())
			return 2;
		else
		{
			nuevo_nodo->SetAnte(this->GetCab()->GetAnte());
			nuevo_nodo->SetSgte(this->GetCab());

			this->GetCab()->GetAnte()->SetSgte(nuevo_nodo);
			this->GetCab()->SetAnte(nuevo_nodo);

			if(GetCab()->GetPais()->GetId() > _pais->GetId())
				this->SetCab(GetCab()->GetAnte());

			tamano++;
			return 1;
		}
	}
}
int ListaPais::Eliminar(int _id)
{
	if(GetCab()==NULL)
		return false;
	else{
		NodoPais *aux=DirNodo(_id);
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
ListaPais *ListaPais::MostarLista()
{
	ListaPais *nueva=new ListaPais();
	NodoPais *aux=GetCab();
	do{
		nueva->Agregar(aux->GetPais());
	}while(aux!=GetCab());
	return nueva;
}
Pais *ListaPais::MostarPais(int _id)
{
	NodoPais *aux=DirNodo(_id);
	if(aux!=NULL)
		return aux->GetPais();
	else
		return NULL;
}