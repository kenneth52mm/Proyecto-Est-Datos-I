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

	Equipo * equipo;
	Jugador * jugador;

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
						cout << "-- Ver Grupos --" << endl;
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
						estado = lista_equipos_grupos->Eliminar(grupo);
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
			case 2:
				do
				{
					system("pause");

					cout << 
						"-- Equipos --" << endl << endl <<

						"( 0 ) Atras" << endl << endl <<

						"( 1 ) Ver Equipos" << endl << 
						"( 2 ) Ver Equipo" << endl <<
						"( 3 ) Agregar Equipo" << endl << 
						"( 4 ) Asignar Grupo a Equipo" << endl <<
						"( 5 ) Eliminar Equipo" << endl << 
						"--" << endl <<
						"Opcion: ";

					cin >> opcion;
					cout << "---" << endl;

					switch (opcion)
					{
						case 0:
							break;
						case 1:
							cout << "-- Ver Equipos --" << endl;
							lista_equipos->MostrarLista();
							break;
						case 2:
							cout << "Ver Equipo: ";
							cin >> id_equipo;
							cout << endl;
							cout << "-- Ver Equipo " << id_equipo << " --" << endl;
							lista_equipos->MostrarEquipo(id_equipo);
							lista_jugadores_equipos->MostrarEquipo(id_equipo);
							break;						
						case 3:
							cout << "Ingrese el ID del nuevo equipo: ";
							cin>> id_equipo;
							cout << endl;
							cout<< "Ingrese el nombre del entrenador del nuevo equipo: ";
							cin>> entrenador;
							cout << endl;
							cout << "Ingrese el nombre del nuevo equipo: ";
							cin>> nombre_equipo;
							cout << endl;
							cout<<"Ingrese la abreviatura del nuevo equipo: ";
							cin>> abreviatura;
							cout << endl;

							equipo = new Equipo(id_equipo, nombre_equipo, abreviatura, entrenador);

							estado = lista_equipos->Agregar(equipo);

							switch (estado)
							{
								case 1:
									cout << "-- Equipo " << equipo->GetNombre() << " insertado con exito --" << endl;
									break;
								case 2:
									cout << "-- Error: Equipo " << equipo->GetNombre() << " repetido --" << endl;
									break;
							}
							break;
						case 4:
							cout<<"Ingrese el id del equipo: ";
							cin>> id_equipo;
							cout << endl;
							cout<<"Ingrese el grupo del equipo: ";
							cin>> grupo;
							cout << endl;
							estado = lista_equipos_grupos->Agregar(id_equipo, grupo, lista_equipos, lista_grupos);

							switch (estado)
							{
								case 1:
									cout << "-- Equipo " << id_equipo << " asignado al grupo " << grupo << " con exito --" << endl;
									break;
								case 2:
									cout << "-- Error: Equipo ya tiene grupo asignado --" << endl;
									break;
								case 3:
									cout << "-- Error: Grupo o Equipo no encontrado --" << endl;
									break;
							}
							break;
					case 5:
						cout << "Ingrese el id el equipo a eliminar: ";
						cin >> id_equipo;
						estado = lista_equipos_grupos->Eliminar(id_equipo);
						estado = lista_equipos->Eliminar(id_equipo);
						switch (estado)
						{
							case 1:
								cout << "-- Equipo: " << id_equipo << " eliminado con exito --."<<endl;
								break;
							case 2:
								cout << "-- Error: " << id_equipo << " equipo no encontrado --" << endl;
								break;
						}
						break;
					}
				}
				while (opcion != 0);
				opcion = -1;
				break;
			case 3:
				do
				{
					system("pause");

					cout << 
						"-- Jugadores --" << endl << endl <<

						"( 0 ) Atras" << endl << endl <<

						"( 1 ) Ver Judagores" << endl << 
						"( 2 ) Ver Jugador" << endl <<
						"( 3 ) Agregar Jugador" << endl << 
						"( 4 ) Eliminar Jugador" << endl << 
						"--" << endl <<
						"Opcion: ";

					cin >> opcion;
					cout << "---" << endl;

					switch (opcion)
					{
						case 0:
							break;
						case 1:
							cout << "-- Ver Jugadores --" << endl;
							lista_jugadores->MostrarLista();
							break;
						case 2:
							cout << "Ver Jugador: ";
							cin >> id_jugador;
							cout << endl;
							cout << "-- Ver Jugador " << id_jugador << " --" << endl;
							lista_jugadores->MostrarJugador(id_jugador);
							break;
						case 3:
							cout << "Ingrese el ID del nuevo jugador: ";
							cin>> id_jugador;
							cout << endl;
							cout<< "Ingrese la posicion del nuevo jugador: ";
							cin>> posicion;
							cout << endl;
							cout << "Ingrese la fecha del primer partido del nuevo jugador: ";
							cin>> primer_partido;
							cout << endl;
							cout<<"Ingresee el nombre nuevo jugador: ";
							cin>> nombre_jugador;
							cout << endl;
							cout<<"Ingresee la cantidad de partidos jugados por el nuevo jugador: ";
							cin>> partidos_jugados;
							cout << endl;
							cout<<"Ingresee la cantidad de goles marcados por el nuevo jugador: ";
							cin>> cantidad_goles;
							cout << endl;
							cout<<"Ingresee la edad del nuevo jugador: ";
							cin>> edad;
							cout << endl;
							cout<<"Ingresee la altura del nuevo jugador: ";
							cin>> altura;
							cout << endl;
							cout<<"Ingresee la fecha de nacimiento del nuevo jugador: ";
							cin>> fecha_nac;
							cout << endl;
							cout<<"Ingresee el club al que pertenece el nuevo jugador: ";
							cin>> nombre_jugador;
							cout << endl;

							jugador = new Jugador (id_jugador, posicion, primer_partido, nombre_jugador, partidos_jugados, cantidad_goles, edad, altura, fecha_nac, club);

							estado = lista_jugadores->Agregar(jugador);

							switch (estado)
							{
								case 1:
									cout <<"-- Jugador " << nombre_jugador << " insertado con exito --" << endl;
									break;
								case 2:
									cout <<"-- Error: Jugador " << nombre_jugador << " repetido --" << endl;
									break;
							}
							break;
						case 4:
							cout << "Ingrese el id del jugador a eliminar: ";
							cin >> id_jugador;
							cout << endl;
							opcion = lista_jugadores->Eliminar(id_jugador);

							switch (opcion)
							{
								case 1:
									cout << "-- Jugador " << id_jugador << " eliminado con exito --" << endl;
									break;
								case 2:
									cout << "-- Error: Jugador " << id_jugador << " no encontrado --" << endl;
									break;
							}
							break;
					}
				}
				while (opcion != 0);
				opcion = -1;
				break;
			case 4:
				do
				{
					system("pause");

					cout << 
						"-- Partidos --" << endl << endl <<

						"( 0 ) Atras" << endl << endl <<

						"( 1 ) Ver Partidos" << endl << 
						"( 2 ) Ver Partido" << endl <<
						"( 3 ) Agregar Partido" << endl << 
						"( 4 ) Eliminar Partido" << endl << 
						"--" << endl <<
						"Opcion: ";

					cin >> opcion;
					cout << "---" << endl;

					switch (opcion)
					{
						case 0:
							break;
						case 1:
							cout << "-- Ver Partidos --" << endl;
							lista_partidos->MostrarLista();
							break;
						case 2:
							cout << "Ver Partido: ";
							cin >> id_partido;
							cout << endl;
							cout << "-- Ver Partido " << id_partido << " --" << endl;
							lista_partidos_equipos->MostrarPartido(id_partido);
							break;
						case 3:
							break;
						case 4:
							break;
					}
				}
				while (opcion != 0);
				opcion = -1;
				break;
			default:
				cout << "-- Opcion no valida --" << endl;
				break;
		}
	}
	while (opcion != 0);
	system("pause");
	}