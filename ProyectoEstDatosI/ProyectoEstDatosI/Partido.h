#pragma once
#include "stdafx.h"

class Partido
{
private:
	int id;
	string fecha; 
	string hora;
	string estadio;
	string ubicacion;
	string puntuacion;
public:
	Partido(void);
	~Partido(void);

	Partido(int, string, string, string, string, string);

	int GetId();
	void SetId(int);

	string GetFecha();
	void SetFecha(string);

	string GetHora();
	void SetHora(string);

	string GetEstadio();
	void SetEstadio(string);

	string GetUbicacion();
	void SetUbicacion(string);

	string GetPuntuacion();
	void SetPuntuacion(string);

	void Mostrar();
};

