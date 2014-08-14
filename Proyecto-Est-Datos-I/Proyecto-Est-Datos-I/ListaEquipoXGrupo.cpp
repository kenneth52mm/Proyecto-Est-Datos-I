#include "ListaEquipoXGrupo.h"


ListaEquipoXGrupo::~ListaEquipoXGrupo(void)
{
}
ListaEquipoXGrupo::ListaEquipoXGrupo(void)
{
    this->SetCabeza(NULL);
    this->SetTamano(0);
}

NodoEquipoXGrupo * ListaEquipoXGrupo::GetCabeza()
{
    return this->cabeza;
}
void ListaEquipoXGrupo::SetCabeza(NodoEquipoXGrupo * cabeza)
{
    this->cabeza = cabeza;
}

int ListaEquipoXGrupo::GetTamano()
{
    return this->tamano;
}
void ListaEquipoXGrupo::SetTamano(int tam)
{
    this->tamano = tam;
}

//int ListaEquipoXGrupo::agregar(int _idGrupo, int _idEquipo, ListaEquipos * _equipo, ListaGrupos * _grupo)
//{
//    // 1 agrega correctamente
//    // 2 no agrega
//    NodoEquipo* equipo = _equipo->DirNodo(_idEquipo);
//    NodoGrupos* grupo = _grupo->DirNodo(_idGrupo);
//    if(equipo == NULL && grupo == NULL)
//        return 2;
//    else
//    {
//        if(this->getCabeza()== NULL)
//            return 2;
//        else
//        {
//            NodoEquipoXGrupo* aux = this->getCabeza();
//            NodoEquipoXGrupo* nuevo_Nodo = new NodoEquipoXGrupo(grupo, equipo);
//            if(nuevo_Nodo->getEnlaceEquipo()->GetEquipo()->GetId() != aux->getEnlaceEquipo()->GetEquipo()->GetId())
//            {
//                nuevo_Nodo->setSiguiente(aux);
//                nuevo_Nodo->setAnterior(aux->getSiguiente());
//                aux->getAnterior()->setSiguiente(nuevo_Nodo);
//                aux->setAnterior(nuevo_Nodo);
//                this->setTamano(this->getTamano()+1);
//            }else
//                aux = aux->getSiguiente();
//            return 1;
//        }
//    }
//    return 2;
//}
//int ListaEquipoXGrupo::elmininar(int idEquipo, int idGrupo)
//{
//    // 1 elimina correctamente
//    // 2 si no elimina porque no se encuentra alguno de los dos nodos
//
//
//    if(this->getCabeza()== NULL)
//        return 2;
//    else
//    {
//        NodoEquipoXGrupo* recorrido = this->getCabeza();
//        do
//        {
//            if(recorrido->getEnlaceEquipo()->GetEquipo()->GetId()== idEquipo &&recorrido->getEnlaceGrupo()->GetId()== idGrupo)
//            {
//                recorrido->getAnterior()->setSiguiente(recorrido->getSiguiente());
//                recorrido->getSiguiente()->setAnterior(recorrido->getAnterior());
//                delete recorrido;
//                this->setTamano(this->getTamano()-1);
//                return 1;
//            }else
//                recorrido = recorrido->getSiguiente();
//        } while (recorrido != this->getCabeza());
//    }
//    return 2;
//}
//void ListaEquipoXGrupo::mostrarLista()
//{/*
//    if (this->getCabeza()== NULL)
//        cout<< "No hay elementos en la lista"<<endl;
//    else
//    {
//        NodoEquipoXGrupo* recorrido = this->getCabeza();
//        do
//        {
//            cout<< "Grupo: "<<recorrido->getEnlaceGrupo()->GetId()<<endl<<
//                   "Equipo: "<< recorrido->getEnlaceEquipo()->GetEquipo()->GetId()<<", "<<
//                   recorrido->getEnlaceEquipo()->GetEquipo()->GetEntrenador()<<endl;
//            recorrido= recorrido->getSiguiente();
//        } while (recorrido != this->getCabeza());
//    }
//	*/
//}
//void ListaEquipoXGrupo::mostrarEquipo(int idEquipo)
//{/*
//    if (this->getCabeza()== NULL)
//        cout<< "No hay elementos en la lista"<<endl;
//    else
//    {
//        NodoEquipoXGrupo* aux = this->getCabeza();
//        do
//        {
//            if(aux->getEnlaceEquipo()->GetEquipo()->GetId() == idEquipo)
//				cout << aux->getEnlaceEquipo()->GetEquipo()->GetId() << ", " << aux->getEnlaceEquipo()->GetEquipo()->GetEntrenador() << endl;
//            else
//                aux= aux->getSiguiente();
//        }
//		while(aux != this->getCabeza());
//    }
//	*/
//}
//void ListaEquipoXGrupo::mostrarGrupo(int idGrupo)
//{
//    if (this->getCabeza()== NULL)
//        cout << "No hay elementos en la lista"<<endl;
//    else
//    {
//        NodoEquipoXGrupo* aux = this->getCabeza();
//        do
//        {
//            if(aux->getEnlaceGrupo()->GetId()== idGrupo)
//                cout << "Grupo: " << aux->getEnlaceGrupo()->GetId();
//            else
//                aux= aux->getSiguiente();
//        }
//		while (aux!= this->getCabeza());
//
//    }
//}
