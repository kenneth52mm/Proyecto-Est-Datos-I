#pragma once
class Equipo
{
private :
	int id;
	char *entrenador;
public:
	Equipo(void);
	~Equipo(void);

	Equipo(int,char*);

	int GetId();
	void SetId(int);

	char *GetEntrenador();
	void SetEntrenador(char *);

};

