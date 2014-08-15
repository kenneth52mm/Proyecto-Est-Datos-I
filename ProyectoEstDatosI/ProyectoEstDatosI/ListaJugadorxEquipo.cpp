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
void ListaJugadorxEquipo::SetCabeza(NodoJugadorxEquipo * cabeza)
{
	this->cabeza = cabeza;
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
	if (this->GetCabeza() != NULL)
	{
		NodoJugadorxEquipo * nodo = this->GetCabeza();

		do
			if(nodo->GetJugador()->GetJugador()->GetId() == id_jugador && nodo->GetEquipo()->GetEquipo()->GetId() == id_equipo)
				return nodo;
			else
				nodo = nodo->GetSiguiente();

		while (nodo != this->GetCabeza());
		return NULL;
	}
	else
		return NULL;
}

int ListaJugadorxEquipo::Agregar(int id_jugador, int id_equipo, ListaJugadores * lista_jugadores, ListaEquipos * lista_equipos)
{
	/*
	1: Insertado
	2: Repetido
	3: Nodo no encontrado
	*/

	NodoJugador * nodo_jugador = lista_jugadores->DirNodo(id_jugador);
	NodoEquipo * nodo_equipo = lista_equipos->DirNodo(id_equipo);

	if (nodo_jugador != NULL && nodo_equipo != NULL)
	{
		NodoJugadorxEquipo * nuevo_nodo = new NodoJugadorxEquipo(nodo_jugador, nodo_equipo);

		if (this->DirNodo(nodo_jugador->GetJugador()->GetId(), nodo_equipo->GetEquipo()->GetId()) == NULL)
		{
			if (this->GetCabeza() == NULL)
			{
				this->SetCabeza(nuevo_nodo);

				nuevo_nodo->SetAnterior(nuevo_nodo);
				nuevo_nodo->SetSiguiente(nuevo_nodo);
			}
			else
			{
				nuevo_nodo->SetAnterior(this->GetCabeza()->GetAnterior());
				nuevo_nodo->SetSiguiente(this->GetCabeza());

				this->GetCabeza()->GetAnterior()->SetSiguiente(nuevo_nodo);
				this->GetCabeza()->SetSiguiente(nuevo_nodo);
			}

			this->SetTamano(this->GetTamano() + 1);
			return 1;
		}
		else
			return 2;
	}
	else
		return 3;
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
void ListaJugadorxEquipo::MostrarLista()
{
	if (this->GetCabeza()== NULL)
		cout<< "-- Lista vacia --"<<endl;
	else
	{
		NodoJugadorxEquipo * recorrido = this->GetCabeza();

		cout << "-- I --" << endl;
		do
		{
			cout << "Nombre del equipo: " << recorrido->GetEquipo()->GetEquipo()->GetNombre() << endl 
				<< "Jugador: " << recorrido->GetJugador()->GetJugador()->GetNombre() << endl
				<< "Feha de Nacimiento: " << recorrido->GetJugador()->GetJugador()->GetFechaNac() << endl
				<< "Edad: " << recorrido->GetJugador()->GetJugador()->GetEdad() << endl
				<< "Altura: " << recorrido->GetJugador()->GetJugador()->GetAltura() << endl
				<< "Numero de Camiseta: " << recorrido->GetJugador()->GetJugador()->GetId() << endl
				<< "Primer partido: " << recorrido->GetJugador()->GetJugador()->GetPrimerPartido() << endl
				<< "Cantidad de Goles: " << recorrido->GetJugador()->GetJugador()->GetCantidadGoles() << endl
				<< "Posicion: " << recorrido->GetJugador()->GetJugador()->GetPosicion() << endl
				<< "Cantidad de Partidos: " << recorrido->GetJugador()->GetJugador()->GetPartidosJugados() << endl
				<< "Club Actual: " << recorrido->GetJugador()->GetJugador()->GetClub() << endl;

			recorrido= recorrido->GetSiguiente();
		}
		while (recorrido != this->GetCabeza());
		cout<<"-- F --"<<endl;
	}
}
void ListaJugadorxEquipo::MostrarEquipo(int id)
{
	NodoJugadorxEquipo * recorrido = this->GetCabeza();
	bool vacio = true;

	do
	{
		cout << "-- I --" << endl;

		if (recorrido->GetEquipo()->GetEquipo()->GetId() == id)
		{
			vacio = false;

			cout << "---" << endl
				<< "Nombre: " << recorrido->GetJugador()->GetJugador()->GetNombre() << endl
				<< "Feha de Nacimiento: " << recorrido->GetJugador()->GetJugador()->GetFechaNac() << endl
				<<"Edad: " << recorrido->GetJugador()->GetJugador()->GetEdad() << endl
				<<"Altura: " << recorrido->GetJugador()->GetJugador()->GetAltura() << endl
				<<"Numero de Camiseta: " << recorrido->GetJugador()->GetJugador()->GetId() << endl
				<<"Primer partido: " << recorrido->GetJugador()->GetJugador()->GetPrimerPartido() << endl
				<<"Cantidad de Goles: " << recorrido->GetJugador()->GetJugador()->GetCantidadGoles() << endl
				<<"Posicion: " << recorrido->GetJugador()->GetJugador()->GetPosicion() << endl
				<<"Cantidad de Partidos: " << recorrido->GetJugador()->GetJugador()->GetPartidosJugados() << endl
				<<"Club Actual: " << recorrido->GetJugador()->GetJugador()->GetClub() << endl;
		}

		recorrido = recorrido->GetSiguiente();
	}
	while (recorrido != this->GetCabeza());

	if (vacio)
		cout << "-- Lista vacia --" << endl;

	cout << "-- F --" << endl;
}