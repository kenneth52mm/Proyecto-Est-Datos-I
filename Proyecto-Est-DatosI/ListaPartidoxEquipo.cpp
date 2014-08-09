#include "ListaPartidoxEquipo.h"


ListaPartidoxEquipo::ListaPartidoxEquipo(void)
{
	this->setCabeza(NULL);
    this->setTamano(0);
}


ListaPartidoxEquipo::~ListaPartidoxEquipo(void)
{
}

NodoPartidoxEquipo*ListaPartidoxEquipo::getCabeza()
{
	return this->cabeza;
}
void ListaPartidoxEquipo::setCabeza(NodoPartidoxEquipo*_cabeza)
{
	this->cabeza= _cabeza;
}

int ListaPartidoxEquipo::getTamano()
{
    return this->tamano;
}
void ListaPartidoxEquipo::setTamano(int _tamano)
{
    this->tamano = _tamano;
}


int ListaPartidoxEquipo:: agregar(int _idEquipo1, int _idEquipo2, int _idPartido, ListaEquipos*_equipo1, ListaEquipos*_equipo2, ListaPartidos* _partido)
{
	// 1 si agrega correctamente
	// 2 si no agrega
	NodoEquipo* equipo1= _equipo1->DirNodo(_idEquipo1);
	NodoEquipo* equipo2= _equipo2->DirNodo(_idEquipo2);
	NodoPartido* partido = _partido->DirNodo(_idPartido);
	if(equipo1 == NULL && equipo2== NULL && partido == NULL)
		return 2;
	else{
		NodoPartidoxEquipo* nodo_Nuevo = new NodoPartidoxEquipo(equipo1,equipo2,partido);
        NodoPartidoxEquipo* aux = this->getCabeza();
        do
        {
            if(nodo_Nuevo->getPartido()->GetPartido()->GetId() != aux->getPartido()->GetPartido()->GetId())
            {
                nodo_Nuevo->setAnterior(aux->getAnterior());
                aux->getAnterior()->setSiguiente(nodo_Nuevo);
                aux->setAnterior(nodo_Nuevo);
                nodo_Nuevo->setSiguiente(aux);
            }else
                aux= aux->getSguiente();
        } while (aux != this->getCabeza());

		return 1;
	}
}
int ListaPartidoxEquipo::eliminar(int _idPartido, int _idEquipo1, int _idEquipo2)
{
	// 1 si elimina correctamente
	// 2 si no elimina
	if(this->getCabeza()== NULL)
		return 2;
	else
	{
		NodoPartidoxEquipo* recorrido = this->getCabeza();
		do
		{
			if(recorrido->getEquipo1()->GetEquipo()->GetId() == _idEquipo1 && recorrido->getEquipo2()->GetEquipo()->GetId()== _idEquipo2
				&& recorrido->getPartido()->GetPartido()->GetId() == _idPartido)
			{
				recorrido->getAnterior()->setSiguiente(recorrido->getSguiente());
				recorrido->getSguiente()->setAnterior(recorrido->getAnterior());
				delete recorrido;
				return 1;
			}else
				recorrido = recorrido->getSguiente();
		} while (recorrido!= this->getCabeza());
	}
    return 2;
}
void ListaPartidoxEquipo::mostrarLista()
{
	if (this->getCabeza()== NULL)
		cout<< "No hay elementos en la lista"<<endl;
	else{
		NodoPartidoxEquipo* aux = this->getCabeza();
		do
		{
			cout<< aux->getEquipo1()->GetEquipo()->GetId()<<", " << aux->getEquipo1()->GetEquipo()->GetEntrenador()<<endl;
			cout<< aux->getEquipo2()->GetEquipo()->GetId()<<", " << aux->getEquipo2()->GetEquipo()->GetEntrenador()<<endl;
			cout<< aux->getEnlacePartido()->GetPartido()->GetEstadio()<< endl<<aux->getEnlacePartido()->GetPartido()->GetId()<<endl<<
				aux->getEnlacePartido()->GetPartido()->GetFecha()<< endl<< aux->getEnlacePartido()->GetPartido()->GetHora()<<endl<<
				aux->getEnlacePartido()->GetPartido()->GetUbicacion()<< endl <<aux->getEnlacePartido()->GetPartido()->GetPuntuacion()<<endl;
			aux= aux->getSguiente();
		} while (aux!= this->getCabeza());
	}
}
void ListaPartidoxEquipo::mostrarEnlace(int _idPartido, int _idEquipo1, int _idEquipo2)
{
	if (this->getCabeza()== NULL)
		cout<< "No hay elementos en la lista"<<endl;
	else{
		NodoPartidoxEquipo* aux =this->getCabeza();
		do
		{
			if(aux->getEquipo1()->GetEquipo()->GetId() == _idEquipo1 && aux->getEquipo2()->GetEquipo()->GetId()== _idEquipo2
				&& aux->getPartido()->GetPartido()->GetId() == _idPartido)
			{
				cout<< aux->getEquipo1()->GetEquipo()->GetId()<<", " << aux->getEquipo1()->GetEquipo()->GetEntrenador()<<endl;
				cout<< aux->getEquipo2()->GetEquipo()->GetId()<<", " << aux->getEquipo2()->GetEquipo()->GetEntrenador()<<endl;
				cout<< aux->getEnlacePartido()->GetPartido()->GetEstadio()<< endl<<aux->getEnlacePartido()->GetPartido()->GetId()<<endl<<
					aux->getEnlacePartido()->GetPartido()->GetFecha()<< endl<< aux->getEnlacePartido()->GetPartido()->GetHora()<<endl<<
					aux->getEnlacePartido()->GetPartido()->GetUbicacion()<< endl <<aux->getEnlacePartido()->GetPartido()->GetPuntuacion()<<endl;
			}else
				aux= aux->getSguiente();
		} while (aux!= this->getCabeza());
	}
}
