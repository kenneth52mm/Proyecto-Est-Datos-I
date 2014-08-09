#include "CargaInicial.h"


CargaInicial::CargaInicial(void)
{
}
CargaInicial::~CargaInicial(void)
{
}

void CargaInicial::CargarPaisesXEquiposGrupos(ListaGrupos * lista_grupos, ListaEquipoxPais * lista_equipos_pais, ListaPais * lista_pais, ListaEquipos * lista_equipos)
{
    // Asumiendo que todos los datos son validos.

	string linea1; // Linea que lee el archivo de paises.
	string linea2; // Linea que lee el archivo de equipos.
    ifstream archivoPaises("C:\Users\Kenneth\Desktop\CargaInicialPaises.txt");
    ifstream archivoEquipos("C:\Users\Kenneth\Desktop\CargaInicialEquipos.txt");

	Pais * pais;
	Equipo * equipo;

    // Atributos de pais
    int id_pais;
    string nombre;
    string abreviatura;

    // Atributos de equipo
    int id_equipo;
    string entrenador;
    string letra_equipo;

    if (archivoPaises!=NULL && archivoEquipos!=NULL)
    {
        getline(archivoPaises, linea1); // Saltarse la primera linea (Contiene una descripcion).
		getline(archivoEquipos, linea2);

		while (getline(archivoPaises, linea1) && getline(archivoEquipos, linea2)) // Recorrido de lineas del archivo.
		{
            getline(archivoPaises, linea1);
            id_pais = stoi(linea1);
            getline(archivoPaises, linea1);
            nombre = linea1;
            getline(archivoPaises, linea1);
            abreviatura = linea1;

            getline(archivoEquipos, linea2);
            id_equipo = stoi(linea2);
            getline(archivoEquipos, linea2);
            entrenador = linea2;
            getline(archivoEquipos, linea2);
            letra_equipo = linea2;

            pais = new Pais(id_pais, nombre, abreviatura); // Se crean los objetos a partir del contenido de los archivos.
            equipo = new Equipo(id_equipo, entrenador);

			lista_pais->Agregar(pais);
			lista_equipos->Agregar(equipo);

			// Se agregan los objetos a la lista de enlaces (Paises + Equipos).
            lista_equipos_pais->agregar(id_pais, id_equipo, lista_equipos, lista_pais);

			// Se agregan los equipos a los grupos.
            lista_grupos->Agregar(letra_equipo, lista_equipos);
		}

		archivoPaises.close();
		archivoEquipos.close();
    }
    else
        cout << "Error: No se ha podido cargar los datos (Paises y Equipos)." << endl;
}
void CargaInicial::CargarJugadoresXEquipos(ListaJugadorxEquipo * lista_jugadores_equipos, ListaEquipos * lista_equipos, ListaJugadores * lista_jugadores)
{
	// Asumiendo que todos los datos son v�lidos, y la lista de equipos est� poblada.

	string linea; // Linea que lee el archivo de jugadores.

    ifstream archivoJugadores ("C:\Users\Kenneth\Desktop\CargaInicialJugadores.txt");

	Jugador * jugador;

	if (archivoJugadores.is_open())
	{
		getline(archivoJugadores, linea); // Saltarse la primera linea (Contiene una descripci�n).

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

		while (getline(archivoJugadores, linea)) // Recorrido de lineas del archivo.
		{
            getline(archivoJugadores, linea);
            id_jugador = stoi(linea);
            getline(archivoJugadores, linea);
            posicion = linea;
            getline(archivoJugadores, linea);
            primer_partido = linea;
            getline(archivoJugadores, linea);
            nombre = linea;
            getline(archivoJugadores, linea);
            partidos_jugados = stoi(linea);
            getline(archivoJugadores, linea);
            cantidad_goles = stoi(linea);
            getline(archivoJugadores, linea);
            edad = stoi(linea);
            getline(archivoJugadores, linea);
            altura = stoi(linea);
            getline(archivoJugadores, linea);
            fecha_nac = linea;
            getline(archivoJugadores, linea);
            club = linea;

            getline(archivoJugadores, linea);
            id_equipo = stoi(linea);

            jugador = new Jugador(id_jugador, posicion, primer_partido, nombre, partidos_jugados,
                cantidad_goles, edad, altura, fecha_nac, club);

			lista_jugadores->Agregar(jugador);

			// Se agregan los objetos a la lista de enlaces.
            lista_jugadores_equipos->agregar(id_jugador, id_equipo, lista_jugadores, lista_equipos);
		}
	}
	else
		cout << "Error: No se ha podido cargar los datos (Equipos y Jugadores)." << endl;
}
