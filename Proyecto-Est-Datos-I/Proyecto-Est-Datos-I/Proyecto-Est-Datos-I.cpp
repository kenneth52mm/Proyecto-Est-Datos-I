#include "CargaInicial.h"

/*

 __          __    _                  _____                                               _             
 \ \        / /   | |                |  __ \                                             (_)            
  \ \  /\  / /__  | | _____   _____  | |__) | __ ___   __ _ _ __ __ _ _ __ ___  _ __ ___  _ _ __   __ _ 
   \ \/  \/ / _ \ | |/ _ \ \ / / _ \ |  ___/ '__/ _ \ / _` | '__/ _` | '_ ` _ \| '_ ` _ \| | '_ \ / _` |
    \  /\  /  __/ | | (_) \ V /  __/ | |   | | | (_) | (_| | | | (_| | | | | | | | | | | | | | | | (_| |
     \/  \/ \___| |_|\___/ \_/ \___| |_|   |_|  \___/ \__, |_|  \__,_|_| |_| |_|_| |_| |_|_|_| |_|\__, |
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

						"( 1 ) Ver Grupos" << endl <<
						"( 2 ) Agregar Grupo" << endl <<
						"( 3 ) Editar Grupo" << endl <<
						"( 4 ) Eliminar Grupo (Los equipos siguien existiendo)" << endl << 
						"--" << endl <<
						"Opcion: ";

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
						"( 3 ) Editar Equipos" << endl << 
						"( 4 ) Eliminar Equipos" << endl << 
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

						"( 1 ) Ver Equipos" << endl << 
						"( 2 ) Agregar Equipos" << endl << 
						"( 3 ) Editar Equipos" << endl << 
						"( 4 ) Eliminar Equipos" << endl << 
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
			case 4:
				do
				{
					system("pause");

					cout << 
						"-- Partidos --" << endl << endl <<

						"( 0 ) Atras" << endl << endl <<

						"( 1 ) Ver Equipos" << endl << 
						"( 2 ) Agregar Equipos" << endl << 
						"( 3 ) Editar Equipos" << endl << 
						"( 4 ) Eliminar Equipos" << endl << 
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
	

