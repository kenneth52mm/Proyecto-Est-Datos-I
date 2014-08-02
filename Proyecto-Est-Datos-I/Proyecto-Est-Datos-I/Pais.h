#pragma once
#include "stdafx.h"

class Pais
{

private:
	int id;
	string nombre;
	string abreviatura;
public:
	Pais(void);
	~Pais(void);

	Pais(int, string, string);

	int GetId();
	void SetId(int);

	string GetNombre();
	void SetNombre(string);

	string GetAbreviatura();
	void SetAbreviatura(string);
};

