#pragma once
#include "stdafx.h"

class Partido
{
private:
	int id;
	char * fecha; 
	char * hora;
	char * estadio;
	char * ubicacion;
	char * puntuacion;
public:
	Partido(void);
	~Partido(void);

	int GetId();
	void SetId(int);

	char * GetFecha();
	void SetFecha(char *);

	char * GetHora();
	void SetHora(char *);

	char * GetEstadio();
	void SetEstadio(char *);

	char * GetUbicacion();
	void SetUbicacion(char *);

	char * GetPuntuacion();
	void SetPuntuacion(char *);
};

