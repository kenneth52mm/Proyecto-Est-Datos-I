#include "CargaInicial.h"
#include "stdafx.h"

/*

 _    _        _                     ______                                              _             
| |  | |      | |                    | ___ \                                            (_)            
| |  | | ___  | |     _____   _____  | |_/ / __ ___   __ _ _ __ __ _ _ __ ___  _ __ ___  _ _ __   __ _ 
| |/\| |/ _ \ | |    / _ \ \ / / _ \ |  __/ '__/ _ \ / _` | '__/ _` | '_ ` _ \| '_ ` _ \| | '_ \ / _` |
\  /\  /  __/ | |___| (_) \ V /  __/ | |  | | | (_) | (_| | | | (_| | | | | | | | | | | | | | | | (_| |
 \/  \/ \___| \_____/\___/ \_/ \___| \_|  |_|  \___/ \__, |_|  \__,_|_| |_| |_|_| |_| |_|_|_| |_|\__, |
                                                      __/ |                                       __/ |
                                                     |___/                                       |___/

"For the Lord your God is he who goes with you to fight for you against your enemies, to give you the victory." 
																								Deuteronomy 20:4
*/

int _tmain(int argc, _TCHAR* argv[])
{
	ListaGrupos * lista_grupos = new ListaGrupos(); 
	ListaEquipos * lista_equipos = new ListaEquipos();
	ListaJugadores * lista_jugadores = new ListaJugadores();
	ListaPartidos * lista_partidos = new ListaPartidos();

	ListaEquipoXGrupo * lista_equipos_grupos = new ListaEquipoXGrupo();
	ListaJugadorxEquipo * lista_jugadores_equipos = new ListaJugadorxEquipo();
	ListaPartidoXEquipo * lista_partidos_equipos = new ListaPartidoXEquipo();

	Equipo * equipo = new Equipo();

	CargaInicial * carga_inicial = new CargaInicial();

	carga_inicial->CargarEquiposXGrupos(lista_equipos_grupos, lista_equipos, lista_grupos);
	carga_inicial->CargarJugadoresXEquipos(lista_jugadores_equipos, lista_equipos, lista_jugadores);
	carga_inicial->CargarPartidosXEquipos(lista_partidos_equipos, lista_equipos, lista_partidos);	

	int opcion;
	int estado;

	// Atributos de Grupo
	string grupo;

	// Atributos de Equipo
	int id_equipo;
	string nombre_equipo;
	string abreviatura;
    string entrenador;

	// Atributos de Jugador
	int id_jugador;
	string posicion;
	string primer_partido;
	string nombre_jugador;
	int partidos_jugados;
	int cantidad_goles;
	int edad;
	int altura;
	string fecha_nac;
	string club;

	// Atributos de Partido
	int id_partido;
	string fecha; 
	string hora;
	string estadio;
	string ubicacion;
	string puntuacion;

	cout << 
		"-- Proyecto de Estructuras Discretas I --" << endl <<
		"Daniel Aguilar Guzman (2012013942)" << endl <<
		"Kenneth Hidalgo Solano (2013011079)" << endl <<
		"Mairon Corrales Carranza (2013030010)" << endl <<	
		endl << endl;

	do
	{
		system("pause");

		cout << 
			"-- Menu Principal --" << endl << endl <<

			"( 0 ) Salir" << endl << endl <<

			"( 1 ) Grupos" << endl << 
			"( 2 ) Equipos" << endl << 
			"( 3 ) Jugadores" << endl << 
			"( 4 ) Partidos" << endl << 
			"---" << endl <<
			"Opcion: ";

		cin >> opcion;
		cout << "---" << endl;

		switch (opcion)
		{
		case -1:
			break;
		case 0:
			break;
		case 1:
			do
			{
				system("pause");

				cout << 
					"-- Grupos --" << endl << endl <<

					"( 0 ) Atras" << endl << endl <<

					"( 1 ) Ver Grupos" << endl << 
					"( 2 ) Ver Grupo" << endl <<
					"( 3 ) Agregar Grupo" << endl << 
					"( 4 ) Eliminar Grupo" << endl << 
					"---" << endl <<
					"Opcion: ";

				cin >> opcion;
				cout << "---" << endl;

				switch (opcion)
				{
				case 0:
					break;
				case 1:
					cout << "-- Ver Grupos --"<<endl;
					lista_equipos_grupos->MostrarLista();
					break;
				case 2:
					cout << "Ver Grupo: ";
					cin >> grupo;
					cout << endl;
					cout << "-- Ver Grupo " << grupo << " --" << endl;
					lista_equipos_grupos->MostrarGrupo(grupo);
					break;
				case 3:
					cout << "Ingrese la letra del nuevo grupo: ";
					cin >> grupo;
					cout << endl;
					estado = lista_grupos->Agregar(grupo);
					switch (estado)
					{
						case 1:
							cout << "-- Grupo " << grupo << " insertado con exito --" << endl;
							break;
						case 2:
							cout << "-- Error: Grupo " << grupo << " repetido --" << endl;
							break;
					}
					break;
				case 4:
					cout << "Ingrese la letra del grupo a eliminar: ";
					cin >> grupo;
					cout << endl;
					estado = lista_grupos->Eliminar(grupo);
					switch (estado)
					{
						case 1:
							cout << "-- Grupo "<< grupo << " eliminado con exito --" << endl; 
							break;
						case 2:
							cout << "-- Error: " << grupo << " no encontrado --" << endl;
							break;
					}	
					break;
				default:
					cout << "-- Opcion no valida --" << endl;
					break;
				}
			}
			while (opcion != 0);
			opcion = -1;

			break;
		//case 2:
		//	do
		//	{
		//		system("pause");

		//		cout << 
		//			"-- Equipos --" << endl << endl <<

		//			"( 0 ) Atras" << endl << endl <<

		//			"( 1 ) Ver Equipos" << endl << 
		//			"( 2 ) Agregar Equipos" << endl << 
		//			"( 3 ) Eliminar Equipos" << endl << 
		//			"--" << endl <<
		//			"Opcion: ";

		//		cin >> opcion;
		//		cout << "---" << endl;

		//		switch (opcion)
		//		{
		//		case 0:
		//			break;
		//		case 1:
		//			cout<<"Lista de Todos los equipos"<<endl;
		//			lista_equipos->MostrarLista();
		//			break;
		//		case 2:
		//			cout<< "Digite el id del equipo que desea agregar: "<<endl;
		//			cin>> id;
		//			equipo->SetId(id);
		//			cout<< "Digite el nombre del entrenador del equipo: "<<endl;
		//			cin>> entrenador;
		//			equipo->SetEntrenador(entrenador);
		//			cout<<"Digite el nombre del pais del equipo:  "<<endl;
		//			cin>> nombre;
		//			equipo->SetNombre(nombre);
		//			cout<<"Digite la abreviatura del equipo: "<<endl;
		//			cin>> abreviatura;
		//			equipo->SetAbreviatura(abreviatura);
		//			lista_equipos->Agregar(equipo);
		//			cout<<"El equipo: "<< equipo->GetNombre()<< ", ha sido agregado con exito.";
		//			break;
		//		case 3:
		//			cout<<"Digite el id el equipo que desea eliminar: "<<endl;
		//			cin>> id;
		//			//respuesta = lista_equipos->Eliminar();
		//			switch(respuesta)
		//			{
		//			case 1:
		//				cout<<"El equipo: "<<id<<" ,ha sido eliminado con esxito."<<endl;
		//				break;
		//			case 2:
		//				cout<<"NO se ha podido eliminar el equipo con id: "<<endl;
		//				break;
		//			}

		//			break;
		//		}
		//	}
		//	while (opcion != 0);
		//	opcion = -1;
		//	break;

		//case 3:
		//	//do
		//	//{
		//	//	system("pause");

		//	//	cout << 
		//	//		"-- Jugadores --" << endl << endl <<

		//	//		"( 0 ) Atras" << endl << endl <<

		//	//		"( 1 ) Ver Judagores" << endl << 
		//	//		"( 2 ) Agregar Jugadores" << endl << 
		//	//		"( 3 ) Eliminar Jugadores" << endl << 
		//	//		"--" << endl <<
		//	//		"Opcion: ";

		//	//	cin >> opcion;
		//	//	cout << "---" << endl;

		//	//	switch (opcion)
		//	//	{
		//	//	case 0:
		//	//		break;
		//	//	case 1:
		//	//		//lista_jugadores->MostrarLista();
		//	//		break;
		//	//	case 2:
		//	//		cout<<"Numero de jugador"<<endl;
		//	//		cin>>id;
		//	//		cout<<"Posicion en la que juega"<<endl;
		//	//		cin>>posicion;
		//	//		cout<<"Primer partido jugado"<<endl;
		//	//		cin>>primer_partido;
		//	//		cout<<"Nombre"<<endl;
		//	//		cin>>nombre;
		//	//		cout<<"Cantidad de partidos jugados"<<endl;
		//	//		cin>>partidos_jugados;
		//	//		cout<<"Cantidad de goles anotados"<<endl;
		//	//		cin>>cantidad_goles;
		//	//		cout<<"Edad"<<endl;
		//	//		cin>>edad;
		//	//		cout<<"Altura"<<endl;
		//	//		cin>>altura;
		//	//		cout<<"Fecha nacimiento"<<endl;
		//	//		cin>>fecha_nac;
		//	//		cout<<"Equipo en el que juega"<<endl;
		//	//		cin>>club;
		//	//		Jugador *jugador=new Jugador(id,posicion,primer_partido,nombre,partidos_jugados,cantidad_goles,edad,altura,fecha_nac,club);
		//	//		//int respuesta=lista_jugadores->Agregar(jugador);
		//	//		int respuesta=0;
		//	//		switch (respuesta)
		//	//		{
		//	//		case 1:
		//	//			cout<<"Agregado correctamente"<<endl;
		//	//			break;
		//	//		case 2:
		//	//			cout<<"El jugador no fue agregado"<<endl;
		//	//			break;
		//	//		}
		//	//		break;
		//	//	case 3:
		//	//		int res;
		//	//		cout<<"Digite el numero de jugador que desea eliminar"<<endl;
		//	//		cin>>res;
		//	//		//int respuesta=lista_jugadores->Eliminar(res);
		//	//		respuesta=0;
		//	//		switch(respuesta){
		//	//		case 1:
		//	//			cout<<"El jugador fue eliminado correctamente"<<endl;
		//	//			break;
		//	//		case 2:
		//	//			cout<<"El jugador especificado no se pudo eliminar, ya que no existe"<<endl;
		//	//			break;
		//	//		}
		//	//		break;
		//	//	}
		//	//}
		//	//while (opcion != 0);
		//	//opcion = -1;

		//	//break;
		//case 4:
		//	do
		//	{
		//		system("pause");

		//		cout << 
		//			"-- Partidos --" << endl << endl <<

		//			"( 0 ) Atras" << endl << endl <<

		//			"( 1 ) Ver Equipos" << endl << 
		//			"( 2 ) Agregar Equipos" << endl << 
		//			"( 3 ) Eliminar Equipos" << endl << 
		//			"--" << endl <<
		//			"Opcion: ";

		//		cin >> opcion;
		//		cout << "---" << endl;

		//		switch (opcion)
		//		{
		//		case 0:
		//			break;
		//		case 1:
		//			//lista_jugadores->MostrarLista();
		//			break;
		//		}
		//	}
		//	while (opcion != 0);
		//	opcion = -1;

		//	break;
		//default:
		//	break;
		}
	}
	while (opcion != 0);

	system("pause");
	}