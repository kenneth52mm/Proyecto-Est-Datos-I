#include "CargaInicial.h"


CargaInicial::CargaInicial(void)
{
}
CargaInicial::~CargaInicial(void)
{
}

void CargaInicial::CargarPaisesXEquiposGrupos(ListaGrupos * lista_grupos, ListaEquipoxPais * lista_equipos_pais, ListaPais * lista_pais, ListaEquipos * lista_equipos)
{
	// Asumiendo que todos los datos son válidos.

	string linea1; // Linea que lee el archivo de paises.
	string linea2; // Linea que lee el archivo de equipos.
	vector<string> paises;
	vector<string> equipos;

	ifstream archivoPaises ("C:\\Users\\Daniel Aguilar\\Downloads\\CargaInicialPaises.txt");
	ifstream archivoEquipos ("C:\\Users\\Daniel Aguilar\\Downloads\\CargaInicialEquipos.txt");

	Pais * pais;
	Equipo * equipo;

	if (archivoPaises.is_open() && archivoEquipos.is_open())
	{
		getline(archivoPaises, linea1); // Saltarse la primera linea (Contiene una descripción).
		getline(archivoEquipos, linea2);

		while (getline(archivoPaises, linea1) && getline(archivoEquipos, linea2)) // Recorrido de lineas del archivo.
		{
			boost::split(paises, linea1, boost::is_any_of("|")); // Split.
			boost::split(equipos, linea2, boost::is_any_of("|"));

			pais = new Pais(stoi(paises[0]), paises[1], paises[2]); // Se crean los objetos a partir del contenido de los archivos.
			equipo = new Equipo(stoi(equipos[0]), equipos[1]);

			lista_pais->Agregar(pais);
			lista_equipos->Agregar(equipo);

			// Se agregan los objetos a la lista de enlaces (Paises + Equipos).
			lista_equipos_pais->agregar(stoi(paises[0]), stoi(equipos[0]), lista_equipos, lista_pais); 

			// Se agregan los equipos a los grupos.
			lista_grupos->Agregar(equipos[2], stoi(equipos[0]), lista_equipos);
		}

		archivoPaises.close();
		archivoEquipos.close();
	}
	else
		cout << "Error: No se ha podido cargar los datos (Paises y Equipos)." << endl;
}
void CargaInicial::CargarJugadoresXEquipos(ListaJugadorxEquipo * lista_jugadores_equipos, ListaEquipos * lista_equipos, ListaJugadores * lista_jugadores)
{
	// Asumiendo que todos los datos son válidos, y la lista de equipos está poblada.

	string linea; // Linea que lee el archivo de jugadores.
	vector<string> jugadores;

	ifstream archivoJugadores ("C:\\Users\\Daniel Aguilar\\Downloads\\CargaInicialJugadores.txt");

	Jugador * jugador;

	if (archivoJugadores.is_open())
	{
		getline(archivoJugadores, linea); // Saltarse la primera linea (Contiene una descripción).

		while (getline(archivoJugadores, linea)) // Recorrido de lineas del archivo.
		{
			boost::split(jugadores, linea, boost::is_any_of("|"));

			jugador = new Jugador(stoi(jugadores[0]), jugadores[1], jugadores[2], jugadores[3], stoi(jugadores[4]),
				stoi(jugadores[5]), stoi(jugadores[6]), stoi(jugadores[7]), jugadores[8], jugadores[9]);

			lista_jugadores->Agregar(jugador);

			// Se agregan los objetos a la lista de enlaces.
			lista_jugadores_equipos->agregar(stoi(jugadores[0]), stoi(jugadores[10]), lista_jugadores, lista_equipos);	
		}
	}
	else
		cout << "Error: No se ha podido cargar los datos (Equipos y Jugadores)." << endl;
}