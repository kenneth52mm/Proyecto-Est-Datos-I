#include "CargaInicial.h"

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
	/*ListaGrupos * lista_grupos = new ListaGrupos(); 
	ListaEquipoxPais * lista_equipo_pais = new ListaEquipoxPais();
	ListaPais * lista_pais = new ListaPais();
	ListaEquipos * lista_equipos = new ListaEquipos();

	ListaJugadorxEquipo * lista_jugadores_equipos = new ListaJugadorxEquipo();
	ListaJugadores * lista_jugadores = new ListaJugadores();

	ListaPartidoXEquipo * lista_partidos_equipos = new ListaPartidoXEquipo();
	ListaPartidos * lista_partidos = new ListaPartidos();


	CargaInicial * carga_inicial = new CargaInicial();
	carga_inicial->CargarPaisesXEquiposGrupos(lista_grupos, lista_equipo_pais, lista_pais, lista_equipos);
	carga_inicial->CargarJugadoresXEquipos(lista_jugadores_equipos, lista_equipos, lista_jugadores);
	carga_inicial->CargarPartidosXEquipos(lista_partidos_equipos, lista_equipos, lista_partidos);*/

	cout << 
		"++++ Proyecto de Estructuras Discretas I ++++" << endl <<
		"--- Daniel Aguilar Guzman (2012013942) ---" << endl <<
		"--  Kenneth Hidalgo Solano (2013011079) --" << endl <<
		"-   Mairon Corrales Carranza (2013030010) -" << endl <<	
		endl << endl;

	int opcion = -1;
	int id;
	string posicion;
	string primer_partido;
	string nombre;
	int partidos_jugados;;
	int cantidad_goles;
	int edad;
	int altura;
	string fecha_nac;
	string club;
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
			"--" << endl <<
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

<<<<<<< HEAD
						"( 1 ) Ver Grupos" << endl <<
						"( 2 ) Agregar Grupo" << endl <<
						"( 3 ) Editar Grupo" << endl <<
						"( 4 ) Eliminar Grupo (Los equipos siguien existiendo)" << endl << 
						"--" << endl <<
						"Opcion: ";
=======
					"( 1 ) Ver Grupos" << endl << 
					"( 2 ) Agregar Grupo" << endl << 
					"( 3 ) Eliminar Grupo (Los equipos siguien existiendo)" << endl << 
					"--" << endl <<
					"Opcion: ";
>>>>>>> origin/master

				cin >> opcion;
				cout << "---" << endl;

				switch (opcion)
				{
				case 0:
					break;
				case 1:
					lista_grupos->MostarLista();
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
					"( 2 ) Agregar Equipos" << endl << 
					"( 3 ) Eliminar Equipos" << endl << 
					"--" << endl <<
					"Opcion: ";

				cin >> opcion;
				cout << "---" << endl;

				switch (opcion)
				{
				case 0:
					break;
				case 1:
					lista_equipos->MostarLista();
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
					"( 2 ) Agregar Jugadores" << endl << 
					"( 3 ) Eliminar Jugadores" << endl << 
					"--" << endl <<
					"Opcion: ";

				cin >> opcion;
				cout << "---" << endl;

				switch (opcion)
				{
				case 0:
					break;
				case 1:
					lista_jugadores->MostrarLista();
					break;
				case 2:
					cout<<"Numero de jugador"<<endl;
					cin>>id;
					cout<<"Posicion en la que juega"<<endl;
					cin>>posicion;
					cout<<"Primer partido jugado"<<endl;
					cin>>primer_partido;
					cout<<"Nombre"<<endl;
					cin>>nombre;
					cout<<"Cantidad de partidos jugados"<<endl;
					cin>>partidos_jugados;
					cout<<"Cantidad de goles anotados"<<endl;
					cin>>cantidad_goles;
					cout<<"Edad"<<endl;
					cin>>edad;
					cout<<"Altura"<<endl;
					cin>>altura;
					cout<<"Fecha nacimiento"<<endl;
					cin>>fecha_nac;
					cout<<"Equipo en el que juega"<<endl;
					cin>>club;
					Jugador *jugador=new Jugador(id,posicion,primer_partido,nombre,partidos_jugados,cantidad_goles,edad,altura,fecha_nac,club);
					int respuesta=lista_jugadores->Agregar(jugador);
					switch (respuesta)
					{
					case 1:
						cout<<"Agregado correctamente"<<endl;
						break;
					case 2:
						cout<<"El jugador no fue agregado"<<endl;
						break;
					}
					break;
				case 3:
					int res;
					cout<<"Digite el numero de jugador que desea eliminar"<<endl;
					cin>>res;
					int respuesta=lista_jugadores->Eliminar(res);
					switch(respuesta){
					case 1:
						cout<<"El jugador fue eliminado correctamente"<<endl;
						break;
					case 2:
						cout<<"El jugador especificado no se pudo eliminar, ya que no existe"<<endl;
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

					"( 1 ) Ver Equipos" << endl << 
					"( 2 ) Agregar Equipos" << endl << 
					"( 3 ) Eliminar Equipos" << endl << 
					"--" << endl <<
					"Opcion: ";

				cin >> opcion;
				cout << "---" << endl;

				switch (opcion)
				{
				case 0:
					break;
				case 1:
					lista_jugadores->MostrarLista();
					break;
				}
			}
			while (opcion != 0);
			opcion = -1;

			break;
		default:
			break;
		}
	}
	while (opcion != 0);

	system("pause");
}


