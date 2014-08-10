#include "CargaInicial.h"


CargaInicial::CargaInicial(void)
{
}
CargaInicial::~CargaInicial(void)
{
}

void CargaInicial::CargarPaisesXEquiposGrupos(ListaGrupos * lista_grupos, ListaEquipoxPais * lista_equipos_pais, ListaPais * lista_pais, ListaEquipos * lista_equipos)
{
	Pais * pais;
	Equipo * equipo;

    // Atributos de pais
    int id_pais;
    string nombre;
    string abreviatura;

    // Atributos de equipo
    int id_equipo;
    string entrenador;
    string letra_grupo;

    id_pais = 1;
    nombre = "Pais";
    abreviatura = "PAIS";

    id_equipo = 1;
    entrenador = "Entrenador";
    letra_grupo = "A";

    pais = new Pais(id_pais, nombre, abreviatura); // Se crean los objetos a partir del contenido de los archivos.
    equipo = new Equipo(id_equipo, entrenador);

    lista_pais->Agregar(pais);
    lista_equipos->Agregar(equipo);

    // Se agregan los objetos a la lista de enlaces (Paises + Equipos).
    lista_equipos_pais->agregar(id_pais, id_equipo, lista_equipos, lista_pais);

    // Se agregan los equipos a los grupos.
    lista_grupos->Agregar(letra_grupo, lista_equipos);
}
void CargaInicial::CargarJugadoresXEquipos(ListaJugadorxEquipo * lista_jugadores_equipos, ListaEquipos * lista_equipos, ListaJugadores * lista_jugadores)
{
	Jugador * jugador;

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

    id_jugador = 1;
    posicion = "Posicion";
    primer_partido = "PrimerPartido";
    nombre = "Jugador";
    partidos_jugados = 10;
    cantidad_goles = 20;
    edad = 15;
    altura = 150;
    fecha_nac = "X-X-XXXX";
    club = "Club";

    id_equipo = 1;

    jugador = new Jugador(id_jugador, posicion, primer_partido, nombre, partidos_jugados,
        cantidad_goles, edad, altura, fecha_nac, club);

    lista_jugadores->Agregar(jugador);

    // Se agregan los objetos a la lista de enlaces.
    lista_jugadores_equipos->agregar(id_jugador, id_equipo, lista_jugadores, lista_equipos);
}
