#pragma once
#include "stdafx.h"

class Jugador
{
private:
	int id;
    string posicion;
    string primer_partido;
    string nombre;
	int partidos_jugados;
	int cantidad_goles;
	int edad;
	int altura;
    string fecha_nac;
    string club;
public:
	Jugador(void);
	~Jugador(void);

    Jugador(int id, string posicion, string primer_partido, string nombre,
            int partidos_jugados, int cantidad_goles, int edad, int altura,
            string fecha_nac,string club)
    {
        this->id = id;
        this->posicion = posicion;
        this->primer_partido = primer_partido;
        this->nombre = nombre;
        this->partidos_jugados = partidos_jugados;
        this->cantidad_goles = cantidad_goles;
        this->edad = edad;
        this->altura = altura;
        this->fecha_nac = fecha_nac;
        this->club = club;
    }

	int GetId();
	void SetId(int);

    string GetPosicion();
    void SetPosicion(string);

    string GetPrimerPartido();
    void SetPrimerPartido(string);

    string GetNombre();
    void SetNombre(string);

	int GetPartidosJugados();
	void SetPartidosJugados(int);

	int GetCantidadGoles();
	void SetCantidadGoles(int);

	int GetEdad();
	void SetEdad(int);

	int GetAltura();
	void SetAltura(int);

    string GetFechaNac();
    void SetFechaNac(string);

    string GetClub();
    void SetClub(string);
};

