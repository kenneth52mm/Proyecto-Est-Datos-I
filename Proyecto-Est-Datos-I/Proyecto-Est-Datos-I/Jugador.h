#pragma once
#include "stdafx.h"

class Jugador
{
private:
	int id;
	char * posicion;
	char * primer_partido;
	char * nombre;
	int partidos_jugados;
	int cantidad_goles;
	int edad;
	int altura;
	char * fecha_nac;
	char * club;
public:
	Jugador(void);
	~Jugador(void);

	int GetId();
	void SetId(int);

	char * GetPosicion();
	void SetPosicion(char *);

	char * GetPrimerPartido();
	void SetPrimerPartido(char *);

	char * GetNombre();
	void SetNombre(char *);

	int GetPartidosJugados();
	void SetPartidosJugados(int);

	int GetCantidadGoles();
	void SetCantidadGoles(int);

	int GetEdad();
	void SetEdad(int);

	int GetAltura();
	void SetAltura(int);

	char * GetFechaNac();
	void SetFechaNac(char *);

	char * GetClub();
	void SetClub(char *);
};

