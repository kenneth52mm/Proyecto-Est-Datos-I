#pragma once
class Pais
{

private:
	int id;
	char *nombre;
public:
	Pais(void);
	~Pais(void);

	Pais(int,char*);

	int GetId();
	void SetId(int);

	char *GetNombre();
	void SetNombre(char *);
};

