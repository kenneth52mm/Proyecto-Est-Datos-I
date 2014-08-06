#include "ListaEquipoxPais.h"


ListaEquipoxPais::ListaEquipoxPais(void)
{
	this->setTamaño(0);
	this->setCabeza(NULL);
}


ListaEquipoxPais::~ListaEquipoxPais(void)
{
}

NodoEquipoxPais* ListaEquipoxPais::getCabeza()
{
	return this->cabeza;
}
void ListaEquipoxPais::setCabeza(NodoEquipoxPais* _cabeza)
{
	this->cabeza = _cabeza;
}

int ListaEquipoxPais::getTamaño()
{
	return this->tamaño;
}
void ListaEquipoxPais::setTamaño(int _tamaño)
{
	this->tamaño= _tamaño;
}

int ListaEquipoxPais::agregar(int _idEquipo, int _idPais, ListaEquipos*_equipo, ListaPais* _pais)
{
	// 1 agrega correctamente
	// 2 no agrega
	NodoEquipo* equipo = _equipo->DirNodo(_idEquipo);
	NodoPais* pais = _pais->DirNodo(_idPais);
	if (equipo == NULL || pais == NULL)
		return 2;
	else
	{
		NodoEquipoxPais* nodo_Nuevo = new NodoEquipoxPais(equipo, pais);
		return 1;
	}
}
int ListaEquipoxPais::eliminar(int _idEquipo, int _idPais)
{
	// 1 elimina correctamente
	// 2 si no elimina porque no se encuentra alguno de los dos nodos
	// 3 no existe alguno de los dos nodos
	if (this->getCabeza() == NULL)
		return 3;
	else
	{
		NodoEquipoxPais* recorrido = this->getCabeza();
		do
		{
			if(recorrido->getEnlaceEquipo()->GetEquipo()->GetId() == _idEquipo && 
				recorrido->getEnlacePais()->GetPais()->GetId() == _idPais){ // si se cumplenlas dos condiciones
				recorrido->getAnterior()->setSiguiente(recorrido->getSiguiente());
				recorrido->getSiguiente()->setAnterior(recorrido->getAnterior());
				delete recorrido;
				return 1;
			}else
				recorrido= recorrido->getSiguiente();
		}while(recorrido!= this->getCabeza());
	}
	return 2;
}
void ListaEquipoxPais::mostrarLista()
{
	if(this->getCabeza()== NULL)
		cout<< "No hay elementos en la lista"<<endl;
	else
	{
		NodoEquipoxPais* aux = this->getCabeza();
		do
		{
			cout<< "Equipo: "<< aux->getEnlaceEquipo()->GetEquipo()<<", Pais: " << aux->getEnlacePais()->GetPais()<<endl;
			aux= aux->getSiguiente();
		} while (aux!= getCabeza());
	}
}
void ListaEquipoxPais::mostrarEquipo(int _id)
{
	if (this->getCabeza()== NULL)
		cout<< "No hay elementos en la lista"<<endl;
	else{
		NodoEquipoxPais* aux = this->getCabeza();
		do
		{
			if(aux->getEnlaceEquipo()->GetEquipo()->GetId() == _id)
				cout<< aux->getEnlaceEquipo()->GetEquipo()->GetId()<< ", "<<aux->getEnlaceEquipo()->GetEquipo()->GetEntrenador()<< endl;
			else
				aux= aux->getSiguiente();
		} while (aux!= this->getCabeza());
	}
}
void ListaEquipoxPais::mostrarPais(int _id)
{
	if (this->getCabeza()== NULL)
		cout<< "No hay elementos en la lista"<<endl;
	else{
		NodoEquipoxPais* aux = this->getCabeza();
		do
		{
			if(aux->getEnlacePais()->GetPais()->GetId() == _id)
				cout<< aux->getEnlacePais()->GetPais()->GetId() << ", " << aux->getEnlacePais()->GetPais()->GetNombre()<< endl;
			else
				aux= aux->getSiguiente();
		} while (aux!= this->getCabeza());
	}
}