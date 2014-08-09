#include "ListaJugadorxEquipo.h"


ListaJugadorxEquipo::ListaJugadorxEquipo(void)
{
	this->setCabeza(NULL);
    this->setTamano(0);
}


ListaJugadorxEquipo::~ListaJugadorxEquipo(void)
{
}

NodoJugadorxEquipo*ListaJugadorxEquipo::getCabeza()
{
	return this->cabeza;
}
void ListaJugadorxEquipo::setCabeza(NodoJugadorxEquipo* _cabeza)
{
	this->cabeza= _cabeza;
}

int ListaJugadorxEquipo::getTamano()
{
    return this->tamano;
}
void ListaJugadorxEquipo::setTamano(int _tamano)
{
    this->tamano= _tamano;
}

int ListaJugadorxEquipo::agregar(int _idJugador, int _idEquipo, ListaJugadores* _jugador, ListaEquipos* _equipo)
{
	// 1 si agrega correctamente
	// 2 si no agrega
	NodoEquipo* equipo= _equipo->DirNodo(_idEquipo);
	NodoJugador* jugador = _jugador->DirNodo(_idJugador);
	if(equipo == NULL && jugador == NULL)
		return 2;
    else
    {
        if(this->getCabeza()== NULL)
            return 2;
        else
        {
            NodoJugadorxEquipo* aux = this->getCabeza();
            NodoJugadorxEquipo* nodo_Nuevo = new NodoJugadorxEquipo(equipo, jugador);
            if(nodo_Nuevo->getEnlaceJugador()->GetJugador()->GetId()!= aux->getEnlaceJugador()->GetJugador()->GetId())
            {
                nodo_Nuevo->setSiguiente(aux);
                nodo_Nuevo->setAnterior(aux->getSiguiente());
                aux->getAnterior()->setSiguiente(nodo_Nuevo);
                aux->setAnterior(nodo_Nuevo);
                this->setTamano(this->getTamano()+1);
                return 1;
            }else
                aux= aux->getSiguiente();
        }
    }
    return 2;
}

int ListaJugadorxEquipo::eliminar(int _idJugador, int _idEquipo)
{
	// 1 si elimina correctamente
	// 2 si no elimina
	if(this->getCabeza()== NULL)
		return 2;
	else
	{
		NodoJugadorxEquipo* recorrido = this->getCabeza();
		do
		{
			if(recorrido->getEnlaceEquipo()->GetEquipo()->GetId() == _idEquipo &&
				recorrido->getEnlaceJugador()->GetJugador()->GetId() == _idJugador)
			{
				recorrido->getAnterior()->setSiguiente(recorrido->getSiguiente());
				recorrido->getSiguiente()->setAnterior(recorrido->getAnterior());
				delete recorrido;
				return 1;
			}else
				recorrido = recorrido->getSiguiente();
		} while (recorrido != this->getCabeza());
	}
	return 2;

}
void ListaJugadorxEquipo::mostrarLista()
{
	if (this->getCabeza()== NULL)
		cout<< "No hay elementos en la lista"<<endl;
	else{
		NodoJugadorxEquipo* aux = this->getCabeza();
		do
		{
			cout<< aux->getEnlaceEquipo()->GetEquipo()->GetId()<< ", "<<aux->getEnlaceEquipo()->GetEquipo()->GetEntrenador()<<endl;
			cout<< aux->getEnlaceJugador()->GetJugador()->GetId()<<endl<< aux->getEnlaceJugador()->GetJugador()->GetNombre()<<endl<<
				aux->getEnlaceJugador()->GetJugador()->GetAltura()<<endl << aux->getEnlaceJugador()->GetJugador()->GetEdad()<<endl <<
				aux->getEnlaceJugador()->GetJugador()->GetFechaNac() <<endl << aux->getEnlaceJugador()->GetJugador()->GetCantidadGoles()<<endl<< 
				aux->getEnlaceJugador()->GetJugador()->GetPartidosJugados()<<endl<< aux->getEnlaceJugador()->GetJugador()->GetPosicion()<<endl << 
				aux->getEnlaceJugador()->GetJugador()->GetClub();
			aux = aux->getSiguiente();
		} while (aux!=this->getCabeza());
	}
}
void ListaJugadorxEquipo::mostrarEnlace(int _idEquipo, int _idJugador)
{
	if (this->getCabeza()== NULL)
		cout<< "No hay elementos en la lista"<<endl;
	else{
		NodoJugadorxEquipo* aux =this->getCabeza();
		do
		{
			if(aux->getEquipo()->GetEquipo()->GetId() == _idEquipo && aux->getEnlaceJugador()->GetJugador()->GetId() == _idJugador)
			{
				cout<< aux->getEnlaceEquipo()->GetEquipo()->GetId()<< ", "<<aux->getEnlaceEquipo()->GetEquipo()->GetEntrenador()<<endl;
				cout<< aux->getEnlaceJugador()->GetJugador()->GetId()<<endl<< aux->getEnlaceJugador()->GetJugador()->GetNombre()<<endl<<
					aux->getEnlaceJugador()->GetJugador()->GetAltura()<<endl << aux->getEnlaceJugador()->GetJugador()->GetEdad()<<endl <<
					aux->getEnlaceJugador()->GetJugador()->GetFechaNac() <<endl << aux->getEnlaceJugador()->GetJugador()->GetCantidadGoles()<<endl<< 
					aux->getEnlaceJugador()->GetJugador()->GetPartidosJugados()<<endl<< aux->getEnlaceJugador()->GetJugador()->GetPosicion()<<endl << 
					aux->getEnlaceJugador()->GetJugador()->GetClub();
			}else 
				aux= aux->getSiguiente();
		} while (aux!= this->getCabeza());
}
}
