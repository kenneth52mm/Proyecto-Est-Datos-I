#pragma once
#include "stdafx.h"


class Equipo
{
private :
	int id;
	string nombre;
	string abreviatura;
    string entrenador;
public:
	Equipo(void);
	~Equipo(void);

	int GetId();
	void SetId(int);

	string GetNombre();
	void SetNombre(string);

	string GetAbreviatura();
	void SetAbreviatura(string);

    string GetEntrenador();
    void SetEntrenador(string);
};

