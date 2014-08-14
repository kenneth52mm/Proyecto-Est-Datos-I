#include "CargaInicial.h"

CargaInicial::CargaInicial(void)
{
}
CargaInicial::~CargaInicial(void)
{
}

void CargaInicial::CargarPaisesXEquiposGrupos(ListaGrupos * lista_grupos, ListaEquipoxPais * lista_equipos_pais, ListaPais * lista_pais, ListaEquipos * lista_equipos)
{
	ifstream archivo_paises("C:\\Users\\Daniel\\Downloads\\CargaPaises.txt");
	ifstream archivo_equipos("C:\\Users\\Daniel\\Downloads\\CargaEquipos.txt");

	// Variables de lectura de archivos
	vector<std::string> split;
	string linea1, linea2;

	if (archivo_paises.is_open() && archivo_equipos.is_open())
	{
		// Atributos de pais
		int id_pais;
		string nombre;
		string abreviatura;

		// Atributos de equipo
		int id_equipo;
		string entrenador;
		string letra_grupo;

		// Saltarse la primera linea
		getline(archivo_paises, linea1);
		getline(archivo_equipos, linea2);

		while (getline(archivo_paises, linea1) && getline(archivo_equipos, linea2))
		{	
			boost::split(split, linea1, boost::is_any_of("|"));
	
			id_pais = stoi(split[0]);
			
			nombre = split[1].c_str();

			abreviatura = split[2];

			boost::split(split, linea2, boost::is_any_of("|"));

			id_equipo = stoi(split[0]);

			entrenador = split[1];

			letra_grupo = split[2];

			Pais * pais = new Pais(id_pais, nombre, abreviatura);	
			lista_pais->Agregar(pais);

			Equipo * equipo = new Equipo(id_equipo, entrenador);
			lista_equipos->Agregar(equipo);

			 // Se agregan los objetos a la lista de enlaces (Paises + Equipos).
			lista_equipos_pais->agregar(id_pais, id_equipo, lista_equipos, lista_pais);

			// Se agregan los equipos a los grupos.
			lista_grupos->Agregar(letra_grupo, lista_equipos);
		}

		archivo_paises.close();
		archivo_equipos.close();

		cout << "-- Carga Inicial Paises + Equipos + Grupos Exitosa --" << endl;
	}
	else
		cout << "Error: No se pudieron cargar los archivos: CargaPaises.txt, CargaEquipos.txt" << endl;
}
void CargaInicial::CargarJugadoresXEquipos(ListaJugadorxEquipo * lista_jugadores_equipos, ListaEquipos * lista_equipos, ListaJugadores * lista_jugadores)
{
	ifstream archivo_jugadores("C:\\Users\\Daniel\\Downloads\\CargaJugadores.txt");

	// Variables de lectura de archivos
	vector<std::string> split;
	string linea;

    // Atributos de Jugador
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

    // Enlace
    int id_equipo;

	if (archivo_jugadores.is_open())
	{
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

			// Enlace
			id_equipo = stoi(split[10]);

			Jugador * jugador = new Jugador(id_jugador, posicion, primer_partido, nombre, partidos_jugados,
			cantidad_goles, edad, altura, fecha_nac, club);

			lista_jugadores->Agregar(jugador);

			// Se agregan los objetos a la lista de enlaces.
			lista_jugadores_equipos->agregar(id_jugador, id_equipo, lista_jugadores, lista_equipos);
		}
		archivo_jugadores.close();

		cout << "-- Carga Inicial Jugadores Exitosa --" << endl;
	}
	else
		cout << "Error: No se pudieron cargar los archivos: CargaPaises.txt, CargaJugadores.txt" << endl;
}
void CargaInicial::CargarPartidosXEquipos(ListaPartidoXEquipo * lista_partidos_equipos, ListaEquipos * lista_equipos, ListaPartidos * lista_partidos)
{
	ifstream archivo_partidos("C:\\Users\\Daniel\\Downloads\\CargaPartidos.txt");

	// Variables de lectura de archivos
	vector<std::string> split;
	string linea;

	// Atributos de Partido
	int id;
	string fecha; 
	string hora;
	string estadio;
	string ubicacion;
	string puntuacion;

	// Enlaces
	int id_equipo1, id_equipo2;

	if (archivo_partidos.is_open())
	{
		getline(archivo_partidos, linea);

		while (getline(archivo_partidos, linea))
		{
			boost::split(split, linea, boost::is_any_of("|"));

			id = stoi(split[0]);
			fecha = split[1];
			hora = split[2];
			estadio = split[3];
			ubicacion = split[4];
			puntuacion = split[5];

			id_equipo1 = stoi(split[6]);
			id_equipo2 = stoi(split[7]);

			Partido * partido = new Partido(id, fecha, hora, estadio, ubicacion, puntuacion);

			lista_partidos_equipos->agregar(id, id_equipo1, id_equipo2, lista_equipos, lista_partidos);
		}

		archivo_partidos.close();

		cout << "-- Carga Inicial Partidos Exitosa --" << endl;
	}
	else
		cout << "Error: No se pudieron cargar los archivos: CargaPaises.txt, CargaPartidos.txt" << endl;
}