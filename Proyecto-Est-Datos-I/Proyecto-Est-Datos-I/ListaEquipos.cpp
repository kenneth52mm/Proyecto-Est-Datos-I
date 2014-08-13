#include "ListaEquipos.h"


ListaEquipos::ListaEquipos(void)
{
}
ListaEquipos::~ListaEquipos(void)
{
}

NodoEquipoXPais * ListaEquipos::DirNodo(int _id)
{
	if(GetCab() == NULL)
		return NULL;
	else
	{
		NodoEquipoXPais * aux = GetCab();
		do
		{
			if (aux->GetEnlaceEquipo()->GetEquipo()->GetId())
				return aux;
			else
				aux = aux->GetSiguiente();
		}
		while(aux != GetCab());
		return NULL;
	}
}

NodoEquipoXPais * ListaEquipos::GetCab()
{
	return this->cab;
}
void ListaEquipos::SetCab(NodoEquipoXPais * _cab)
{
	this->cab=_cab;
}

int ListaEquipos::GetTama()
{
	return this->tamano;
}

int ListaEquipos::Agregar(Equipo *_equipo)
{
	NodoEquipo* nuevo_nodo = new NodoEquipo(_equipo); 

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
		if(GetCab()->GetEquipo()->GetId()==_equipo->GetId())
			return 2;
		else
		{
			nuevo_nodo->SetAnte(this->GetCab()->GetAnte());
			nuevo_nodo->SetSgte(this->GetCab());

			this->GetCab()->GetAnte()->SetSgte(nuevo_nodo);
			this->GetCab()->SetAnte(nuevo_nodo);

			if(GetCab()->GetEquipo()->GetId()>_equipo->GetId())
				this->SetCab(GetCab()->GetAnte());

			tamano++;
			return 1;
		}
	}
}
int ListaEquipos::Eliminar(int _id)
{
	if(GetCab()==NULL)
		return false;
	else{
		NodoEquipo *aux=DirNodo(_id);
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

void ListaEquipos::MostarLista()
{
	NodoEquipoXPais * recorrido = GetCab();
	NodoJugadorxEquipo * recorrido2 = recorrido->GetEnlaceEquipo()->GetJugadores()->getCabeza();

	cout << "-- Equipos --" << endl;

	do
	{
		cout << "ID Equipo: " << recorrido->GetEnlaceEquipo()->GetEquipo()->GetId()
			 << "Equipo: " << recorrido->GetEnlacePais()->GetPais()->GetNombre()
			 << "Abreviatura" << recorrido->GetEnlacePais()->GetPais()->GetAbreviatura()
			 << "Entrenador: " << recorrido->GetEnlaceEquipo()->GetEquipo()->GetEntrenador() << endl 
			 << "-- Jugadores --" << endl;

		do
		{
			cout << "Nombre: " << recorrido2->getEnlaceJugador()->GetJugador()->GetNombre() << endl
				<< "Edad: " << recorrido2->getEnlaceJugador()->GetJugador()->GetEdad() << endl
				<< "Fecha de Nacimiento: " << recorrido2->getEnlaceJugador()->GetJugador()->GetFechaNac() << endl
				<< "Altura: " << recorrido2->getEnlaceJugador()->GetJugador()->GetAltura() << endl
				<< "Camiseta: " << recorrido2->getEnlaceJugador()->GetJugador()->GetId() << endl
				<< "Posicion: " << recorrido2->getEnlaceJugador()->GetJugador()->GetPosicion() << endl
				<< "Primer Partido: " << recorrido2->getEnlaceJugador()->GetJugador()->GetPrimerPartido() << endl
				<< "Partidos Jugados: " << recorrido2->getEnlaceJugador()->GetJugador()->GetPartidosJugados() << endl
				<< "Goles marcados: " << recorrido2->getEnlaceJugador()->GetJugador()->GetCantidadGoles() << endl
				<< "Club actual: " << recorrido2->getEnlaceJugador()->GetJugador()->GetClub() << endl;

			recorrido2 = recorrido2->getSiguiente();
		}
		while (recorrido2 != recorrido->GetEnlaceEquipo()->GetJugadores()->getCabeza());

			recorrido = recorrido->GetSiguiente();
	}
	while (recorrido != this->GetCab());
}
void ListaEquipos::MostrarEquipo(int _id)
{
	NodoEquipoXPais * recorrido = this->DirNodo(_id);
	NodoJugadorxEquipo * recorrido2 = recorrido->GetEnlaceEquipo()->GetJugadores()->getCabeza();

	if (recorrido != NULL)
	{
		cout << "ID Equipo: " << recorrido->GetEnlaceEquipo()->GetEquipo()->GetId()
			 << "Equipo: " << recorrido->GetEnlacePais()->GetPais()->GetNombre()
			 << "Abreviatura" << recorrido->GetEnlacePais()->GetPais()->GetAbreviatura() << endl;

		do
		{
			cout << "Nombre: " << recorrido2->getEnlaceJugador()->GetJugador()->GetNombre() << endl
				<< "Edad: " << recorrido2->getEnlaceJugador()->GetJugador()->GetEdad() << endl
				<< "Fecha de Nacimiento: " << recorrido2->getEnlaceJugador()->GetJugador()->GetFechaNac() << endl
				<< "Altura: " << recorrido2->getEnlaceJugador()->GetJugador()->GetAltura() << endl
				<< "Camiseta: " << recorrido2->getEnlaceJugador()->GetJugador()->GetId() << endl
				<< "Posicion: " << recorrido2->getEnlaceJugador()->GetJugador()->GetPosicion() << endl
				<< "Primer Partido: " << recorrido2->getEnlaceJugador()->GetJugador()->GetPrimerPartido() << endl
				<< "Partidos Jugados: " << recorrido2->getEnlaceJugador()->GetJugador()->GetPartidosJugados() << endl
				<< "Goles marcados: " << recorrido2->getEnlaceJugador()->GetJugador()->GetCantidadGoles() << endl
				<< "Club actual: " << recorrido2->getEnlaceJugador()->GetJugador()->GetClub() << endl;

			recorrido2 = recorrido2->getSiguiente();
		}
		while (recorrido2 != recorrido->GetEnlaceEquipo()->GetJugadores()->getCabeza());
	}
	else
		cout<< "No hay Equipos en la lista"<<endl;
}