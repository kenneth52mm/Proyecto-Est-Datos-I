#pragma once
#include "stdafx.h"


class Equipo
{
private :
	int id;
	string nombre;
	string abreviatura;
    string entrenador;
	int partidos_jugados;
	int goles_marcados;
	int disparos_a_puerta;
	int distancia_recorrida;
public:
	Equipo(void);
	~Equipo(void);

	Equipo(int, string, string, string, int, int, int, int);

	int GetId();
	void SetId(int);

	string GetNombre();
	void SetNombre(string);

	string GetAbreviatura();
	void SetAbreviatura(string);

    string GetEntrenador();
    void SetEntrenador(string);

	int GetPartidosJugados();
	void SetPartidosJugados(int);

	int GetGolesMarcados();
	void SetGolesMarcados(int);

	int GetDisparosAPuerta();
	void SetDisparosAPuerta(int);

	int GetDistanciaRecorrida();
	void SetDistanciaRecorrida(int);

	void Mostrar();
};

