#include "ListaJugadorxEquipo.h"


ListaJugadorxEquipo::ListaJugadorxEquipo(void)
{
	this->SetCabeza(NULL);
    this->SetTamano(0);
}
ListaJugadorxEquipo::~ListaJugadorxEquipo(void)
{
}

NodoJugadorxEquipo*ListaJugadorxEquipo::GetCabeza()
{
	return this->cabeza;
}
void ListaJugadorxEquipo::SetCabeza(NodoJugadorxEquipo* _cabeza)
{
	this->cabeza= _cabeza;
}

int ListaJugadorxEquipo::GetTamano()
{
    return this->tamano;
}
void ListaJugadorxEquipo::SetTamano(int tamano)
{
    this->tamano= tamano;
}
NodoJugadorxEquipo * ListaJugadorxEquipo::DirNodo(int id_jugador,int id_equipo)
{
	NodoJugadorxEquipo * nodo = this->GetCabeza();

	do
	{
		if(nodo->GetJugador()->GetJugador()->GetId() == id_jugador && nodo->GetEquipo()->GetEquipo()->GetId() == id_equipo)
			return nodo;

		nodo = nodo->GetSiguiente();
	}
	while (nodo != this->GetCabeza());
	return NULL;
}
int ListaJugadorxEquipo::Agregar(int id_jugador, int id_equipo, ListaJugadores * lista_jugadores, ListaEquipos * lista_equipos)
{
	/*
	1: Insertado
	2: Repetido
	*/

	NodoJugador * nodo_jugador = lista_jugadores->DirNodo(id_jugador);
	NodoEquipo * nodo_equipo = lista_equipos->DirNodo(id_equipo);

	if (nodo_jugador != NULL && nodo_equipo != NULL)
	{
		NodoJugadorxEquipo * nuevo_nodo = new NodoJugadorxEquipo(nodo_jugador, nodo_equipo);

		if (this->GetCabeza() == NULL)
		{
			this->SetCabeza(nuevo_nodo);

			nuevo_nodo->SetAnterior(nuevo_nodo);
			nuevo_nodo->SetSiguiente(nuevo_nodo);

			return 1;
		}
		else
		{
			nuevo_nodo->SetAnterior(this->GetCabeza()->GetAnterior());
			nuevo_nodo->SetSiguiente(this->GetCabeza());

			this->GetCabeza()->GetAnterior()->SetSiguiente(nuevo_nodo);
			this->GetCabeza()->SetSiguiente(nuevo_nodo);

			return 1;
		}
	}
	else
		cout << "Error: Jugadores + Equipos" << endl;
}
void ListaJugadorxEquipo::mostrarLista()
{
	if (this->GetCabeza== NULL)
		cout<< "No hay elementos en la lista"<<endl;
	else
	{
		NodoJugadorxEquipo* nodo = this->GetCabeza();
		cout<<"Inicio de la lista"<<endl;
		do
		{
			cout<<"Nombre del equipo: "<<nodo->GetEquipo()->GetEquipo()->GetNombre()<<endl
				<<"Jugador: "<<nodo->GetJugador()->GetJugador()->GetNombre()<<endl
				<<"Feha de Nacimiento: "<<nodo->GetJugador()->GetJugador()->GetFechaNac()<<endl
				<<"Edad: "<<nodo->GetJugador()->GetJugador()->GetEdad()<<endl
				<<"Altura: "<<nodo->GetJugador()->GetJugador()->GetAltura<<endl
				<<"Numero de Camiseta: "<<nodo->GetJugador()->GetJugador()->GetId<<endl
				<<"Primer partido: "<<nodo->GetJugador()->GetJugador()->GetPrimerPartido()<<endl
				<<"Cantidad de Goles: "<<nodo->GetJugador()->GetJugador()->GetCantidadGoles()<<endl
				<<"Posicion: "<<nodo->GetJugador()->GetJugador()->GetPosicion()<<endl
				<<"Cantidad de Partidos: "<<nodo->GetJugador()->GetJugador()->GetPartidosJugados()<<endl
				<<"Club Actual: "<<nodo->GetJugador()->GetJugador()->GetClub()<<endl;
			nodo= nodo->GetSiguiente();
		}while(nodo != this->GetCabeza());
		cout<<"Fin de la lista"<<endl;
}
int ListaJugadorxEquipo::Eliminar(int idJugador,int idEquipo)
{
	if (this->DirNodo(idJugador,idEquipo) == NULL)
		return 2;
	else
	{
		NodoJugadorxEquipo* eliminar = this->DirNodo(idJugador,idEquipo);

		eliminar->GetAnterior()->SetSiguiente(eliminar->GetSiguiente());
		eliminar->GetSiguiente()->SetAnterior(eliminar->GetAnterior());

		if (this->GetCabeza() == eliminar)
			this->SetCabeza(eliminar->GetSiguiente());

		delete eliminar;

		this->SetTamano(this->GetTamano() - 1);

		return 1;

	}
}