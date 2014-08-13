#include "ListaEquipoxPais.h"


ListaEquipoxPais::ListaEquipoxPais(void)
{
    this->setTamano(0);
	this->setCabeza(NULL);
}

ListaEquipoxPais::~ListaEquipoxPais(void)
{
}

NodoEquipoXPais * ListaEquipoxPais::getCabeza()
{
	return this->cabeza;
}
void ListaEquipoxPais::setCabeza(NodoEquipoXPais * _cabeza) 
{
	this->cabeza = _cabeza;
}

int ListaEquipoxPais::getTamano()
{
    return this->tamano;
}
void ListaEquipoxPais::setTamano(int _tamano)
{
    this->tamano= _tamano;
}

int ListaEquipoxPais::agregar(int _idEquipo, int _idPais, ListaEquipos * _equipo, ListaPais * _pais)
{
	// 1 agrega correctamente
	// 2 no agrega
    NodoEquipo * equipo = _equipo->DirNodo(_idEquipo);
	NodoPais * pais = _pais->DirNodo(_idPais);

	if (equipo == NULL || pais == NULL)
		return 2;
	else
	{
        if (this->getCabeza()== NULL)
            return 2;
        else
        {
            NodoEquipoXPais * aux = this->getCabeza();
            NodoEquipoXPais * nodo_Nuevo = new NodoEquipoXPais(equipo, pais);
            if(nodo_Nuevo->GetEnlaceEquipo()->GetEquipo()->GetId() != aux->GetEnlaceEquipo()->GetEquipo()->GetId())
            {
                nodo_Nuevo->SetAnterior(aux->GetSiguiente());
                nodo_Nuevo->SetSiguiente(aux);
                aux->GetAnterior()->SetSiguiente(nodo_Nuevo);
                aux->SetAnterior(nodo_Nuevo);
                this->setTamano(this->getTamano() + 1);

            }
			else
                aux= aux->GetSiguiente();
            return 1;
        }
	}
    return 2;
}
int ListaEquipoxPais::eliminar(int _idEquipo, int _idPais)
{
	// 1 elimina correctamente
	// 2 si no elimina porque no se encuentra alguno de los dos nodos

	if (this->getCabeza() == NULL)
        return 2;
	else
	{
		NodoEquipoXPais * recorrido = this->getCabeza();

		do
		{
			if (recorrido->GetEnlaceEquipo()->GetEquipo()->GetId() == _idEquipo && 
				recorrido->GetEnlacePais()->GetPais()->GetId() == _idPais) 

			{ 
				recorrido->GetAnterior()->SetSiguiente(recorrido->GetSiguiente());
				recorrido->GetSiguiente()->SetAnterior(recorrido->GetAnterior());

				delete recorrido;

                this->setTamano(this->getTamano()-1);
				return 1;

			}
			else
				recorrido= recorrido->GetSiguiente();
		}
		while (recorrido!= this->getCabeza());
	}
    return 2;
}
void ListaEquipoxPais::mostrarLista()
{
	if(this->getCabeza()== NULL)
		cout<< "No hay elementos en la lista"<<endl;
	else
	{
		NodoEquipoXPais * aux = this->getCabeza();
		do
		{
			cout<< "Equipo: "<< aux->GetEnlaceEquipo()->GetEquipo()<<", Pais: " << aux->GetEnlacePais()->GetPais()<<endl;
			aux= aux->GetSiguiente();
		} while (aux != getCabeza());
	}
}
void ListaEquipoxPais::mostrarEquipo(int _id)
{/*
	if (this->getCabeza()== NULL)
		cout<< "No hay elementos en la lista"<<endl;
	else
	{
		NodoEquipoXPais * aux = this->getCabeza();
		string to_string;
		do
		{
			if(aux->GetEnlaceEquipo()->GetEquipo()->GetId() == _id)
				cout<< aux->GetEnlaceEquipo()->GetEquipo()->GetId() << ", " << aux->GetEnlaceEquipo()->GetEquipo()->GetEntrenador()<< endl;
			else
				aux= aux->GetSiguiente();
		} 
		while (aux!= this->getCabeza());
	}
	*/
}
void ListaEquipoxPais::mostrarPais(int _id)
{/*
	if (this->getCabeza()== NULL)
		cout<< "No hay elementos en la lista"<<endl;
	else{
		NodoEquipoXPais * aux = this->getCabeza();
		do
		{
			if(aux->GetEnlacePais()->GetPais()->GetId() == _id)
				cout<< aux->GetEnlacePais()->GetPais()->GetId() << ", " << aux->GetEnlacePais()->GetPais()->GetNombre()<< endl;
			else
				aux= aux->GetSiguiente();
		} while (aux!= this->getCabeza());
	}
	*/
}
