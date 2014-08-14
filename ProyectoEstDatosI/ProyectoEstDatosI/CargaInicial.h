#pragma once
#include "stdafx.h"

#include <fstream> // Para poder abrir archivos y leerlos
#include <vector> // Para poder usar vectores.
#include <boost/algorithm/string.hpp>

#include "ListaGrupos.h"
#include "ListaEquipoXGrupo.h"
#include "ListaJugadorxEquipo.h"
#include "ListaPartidoXEquipo.h"

class CargaInicial
{
public:
	CargaInicial(void);
	~CargaInicial(void);

	void CargarEquiposXGrupos(ListaEquipoXGrupo *, ListaEquipos *, ListaGrupos *);
	void CargarJugadoresXEquipos(ListaJugadorxEquipo *, ListaEquipos *, ListaJugadores *);
	void CargarPartidosXEquipos(ListaPartidoXEquipo *, ListaEquipos *, ListaPartidos *);
};

