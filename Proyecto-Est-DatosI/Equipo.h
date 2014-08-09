#pragma once
class Equipo
{
private :
	int id;
    string entrenador;
public:
	Equipo(void);
	~Equipo(void);

    Equipo(int,string);

	int GetId();
	void SetId(int);

    string GetEntrenador();
    void SetEntrenador(string);

};

