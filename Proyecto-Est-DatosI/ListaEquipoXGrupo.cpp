#include "ListaEquipoXGrupo.h"


ListaEquipoXGrupo::ListaEquipoXGrupo(void)
{
    this->setCabeza(NULL);
    this->setTamano(0);
}


ListaEquipoXGrupo::~ListaEquipoXGrupo(void)
{
}

NodoEquipoXGrupo* ListaEquipoXGrupo::getCabeza()
{
    return this->cabeza;

}
void ListaEquipoXGrupo::setCabeza(NodoEquipoXGrupo*_cabeza)
{
    this->cabeza= _cabeza;
}

int ListaEquipoXGrupo::getTamano()
{
    return this->tamano;
}
void ListaEquipoXGrupo::setTamano(int tam)
{
    this->tamano = tam;
}

int ListaEquipoXGrupo::agregar(int _idGrupo, int _idEquipo, ListaEquipos* _equipo, ListaGrupos* _grupo)
{
    // 1 agrega correctamente
    // 2 no agrega
    NodoEquipo* equipo = _equipo->DirNodo(_idEquipo);
    NodoGrupos* grupo = _grupo->DirNodo(_idGrupo);
    if(equipo == NULL && grupo == NULL)
        return 2;
    else
    {

        NodoEquipoXGrupo* nuevo_Nodo = new NodoEquipoXGrupo(grupo, equipo);
        return 1;
    }
}
int ListaEquipoXGrupo::elmininar(int idEquipo, int idGrupo)
{
    // 1 elimina correctamente
    // 2 si no elimina porque no se encuentra alguno de los dos nodos


    if(this->getCabeza()== NULL)
        return 2;
    else
    {
        NodoEquipoXGrupo* recorrido = this->getCabeza();
        do
        {
            if(recorrido->getEnlaceEquipo()->GetEquipo()->GetId()== idEquipo &&
                    recorrido->getEnlaceGrupo()->GetGrupo()->GetId()== idGrupo)
            {
                recorrido->getAnterior()->setSiguiente(recorrido->getSiguiente());
                recorrido->getSiguiente()->setAnterior(recorrido->getAnterior());
                delete recorrido;
                return 1;
            }else
                recorrido = recorrido->getSiguiente();
        } while (recorrido != this->getCabeza());
    }
}
void ListaEquipoXGrupo::mostrarLista()
{
    if (this->getCabeza()== NULL)
        cout<< "No hay elementos en la lista"<<endl;
    else
    {
        NodoEquipoXGrupo* recorrido = this->getCabeza();
        do
        {
            cout<< "Grupo: "<<recorrido->getEnlaceGrupo()->GetId()<<endl<<
                   "Equipo: "<< recorrido->getEnlaceEquipo()->GetEquipo()->GetId()<<", "<<
                   recorrido->getEnlaceEquipo()->GetEquipo()->GetEntrenador()<<endl;
            recorrido= recorrido->getSiguiente();
        } while (recorrido != this->getCabeza());
    }
}
void ListaEquipoXGrupo::mostrarEquipo(int idEquipo)
{
    if (this->getCabeza()== NULL)
        cout<< "No hay elementos en la lista"<<endl;
    else
    {
        NodoEquipoXGrupo* aux = this->getCabeza();
        do
        {
            if(aux->getEnlaceEquipo()->GetEquipo()->GetId() == idEquipo)
                cout<< aux->getEnlaceEquipo()->GetEquipo()->GetId()<< ", "<<aux->getEnlaceEquipo()->GetEquipo()->GetEntrenador()<< endl;
            else
                aux= aux->getSiguiente();
        }while(aux != this->getCabeza());
    }
}
void ListaEquipoXGrupo::mostrarGrupo(int idGrupo)
{
    if (this->getCabeza()== NULL)
        cout<< "No hay elementos en la lista"<<endl;
    else
    {
        NodoEquipoXGrupo* aux = this->getCabeza();
        do
        {
            if(aux->getEnlaceGrupo()->GetId()== idGrupo)
                cout<< "Grupo: "<< aux->getEnlaceGrupo()->GetId();
            else
                aux= aux->getSiguiente();
        }while (aux!= this->getCabeza());

    }
}
