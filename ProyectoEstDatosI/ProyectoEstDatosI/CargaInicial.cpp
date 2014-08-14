#include "CargaInicial.h"

CargaInicial::CargaInicial(void)
{
}
CargaInicial::~CargaInicial(void)
{
}

void CargaInicial::CargarEquiposXGrupos(ListaEquipoXGrupo * lista_equipos_grupos, ListaEquipos * lista_equipos, ListaGrupos * lista_grupos)
{
	ifstream archivo_equipos("C:\\Users\\Daniel\\Downloads\\CargaEquipos.txt");

	// Variables de lectura de archivos
	vector<std::string> split;
	string linea;

	if (archivo_equipos.is_open())
	{
		// Atributos de equipo
		int id;
		string nombre;
		string abreviatura;
		string entrenador;

		// Enlace a grupos
		string grupo;

		lista_grupos->Agregar("A");
		lista_grupos->Agregar("B");

		// Saltarse la primera linea (Contiene una descripción)
		getline(archivo_equipos, linea);

		while (getline(archivo_equipos, linea))
		{	
			boost::split(split, linea, boost::is_any_of("|"));

			id = stoi(split[0]);
			nombre = split[1];
			abreviatura = split[2];
			entrenador = split[3];

			grupo = split[4];

			Equipo * equipo = new Equipo(id, nombre, abreviatura, entrenador);
			lista_equipos->Agregar(equipo);

			lista_equipos_grupos->Agregar(id, grupo, lista_equipos, lista_grupos);
		}
		archivo_equipos.close();

		cout << "-- Carga Inicial Equipos + Grupos --" << endl;
	}
	else
		cout << "Error: No se pudo cargar el archivo: CargaEquipos.txt" << endl;
}
void CargarJugadoresXEquipos(ListaJugadorxEquipo * lista_jugadores_equipos, ListaEquipos * lista_equipos, ListaJugadores * lista_jugadores)
{
	ifstream archivo_jugadores("C:\\Users\\Daniel\\Downloads\\CargaJugadores.txt");

	// Variables de lectura de archivos
	vector<std::string> split;
	string linea;

	if (archivo_jugadores.is_open())
	{
		// Atributos de jugador
		int id_jugador;
		string posicion;
		string primer_partido;
		string nombre;
		int partidos_jugados;
		int cantidad_goles;
		int edad;
		int altura;
		string fecha_nac;
		string club;

		// Enlace a grupos
		int id_equipo;

		// Saltarse la primera linea (Contiene una descripción)
		getline(archivo_jugadores, linea);

		while (getline(archivo_jugadores, linea))
		{	
			boost::split(split, linea, boost::is_any_of("|"));

			id_jugador = stoi(split[0]);
			posicion = split[1];
			primer_partido = split[2];
			nombre = split[3];
			partidos_jugados = stoi(split[4]);
			cantidad_goles = stoi(split[5]);
			edad = stoi(split[6]);
			altura = stoi(split[7]);
			fecha_nac = split[8];
			club = split[9];

			id_equipo = stoi(split[10]);

			Jugador * jugador = new Jugador(id_jugador, posicion, primer_partido, nombre, partidos_jugados, cantidad_goles, edad, altura, fecha_nac, club);
			
			lista_jugadores->Agregar(jugador);

			lista_jugadores_equipos->Agregar(id_jugador, id_equipo, lista_jugadores, lista_equipos);;
		}
		archivo_jugadores.close();

		cout << "-- Carga Inicial Jugadores + Equipos --" << endl;
	}
	else
		cout << "Error: No se pudo cargar el archivo: CargaJugadores.txt" << endl;
}
void CargarPartidosXEquipos(ListaPartidoXEquipo *, ListaEquipos *, ListaPartidos *)
{
}