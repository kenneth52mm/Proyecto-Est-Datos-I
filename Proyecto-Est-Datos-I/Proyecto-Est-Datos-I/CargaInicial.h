#pragma once
#include "stdafx.h"

#include <fstream> // Para poder abrir archivos y leerlos
#include <vector> // Para poder usar vectores.
#include <string>
#include <boost/algorithm/string.hpp>

#include "ListaGrupos.h"
#include "ListaEquipoxPais.h"
#include "ListaJugadorxEquipo.h"
#include "ListaPartidoXEquipo.h"

class CargaInicial
{
public:
	CargaInicial(void);
	~CargaInicial(void);

	void CargarPaisesXEquiposGrupos(ListaGrupos *, ListaEquipoxPais *, ListaPais *, ListaEquipos *);
	void CargarJugadoresXEquipos(ListaJugadorxEquipo *, ListaEquipos *, ListaJugadores *);
	void CargarPartidosXEquipos(ListaPartidoXEquipo *, ListaEquipos *, ListaPartidos *);
};

