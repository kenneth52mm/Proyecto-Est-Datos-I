#include "NodoPartidoxEquipo.h"


NodoPartidoxEquipo::NodoPartidoxEquipo(void)
{
	this->setAnterior(NULL);
	this->setEquipo1(NULL);
	this->setEquipo2(NULL);
	this->setPartido(NULL);
	this->setSiguiente(NULL);
}
NodoPartidoxEquipo::~NodoPartidoxEquipo(void)
{
}

NodoPartidoxEquipo::NodoPartidoxEquipo(NodoEquipo*_equipo1, NodoEquipo* _equipo2, NodoPartido*_partido)
{
	this->setEquipo1(_equipo1);
	this->setEquipo2(_equipo2);
	this->setPartido(_partido);

}

NodoEquipo* NodoPartidoxEquipo::getEquipo1()
{
	return this->equipo1;
}
void NodoPartidoxEquipo::setEquipo1(NodoEquipo* _equipo1)
{
	this->equipo1= _equipo1;
}

NodoEquipo* NodoPartidoxEquipo::getEquipo2()
{
	return this->equipo2;
}
void NodoPartidoxEquipo::setEquipo2(NodoEquipo* _equipo2)
{
	this->equipo2= _equipo2;
}

NodoPartido*NodoPartidoxEquipo::getPartido()
{
	return this->partido;
}
void NodoPartidoxEquipo::setPartido(NodoPartido* _partido)
{
	this->partido= _partido;
}

NodoPartidoxEquipo*NodoPartidoxEquipo::getSguiente()
{
	return this->siguiente;
}
void NodoPartidoxEquipo::setSiguiente(NodoPartidoxEquipo*_siguiente)
{
	this->siguiente= _siguiente;
}

NodoPartidoxEquipo*NodoPartidoxEquipo::getAnterior()
{
	return this->anterior;
}
void NodoPartidoxEquipo::setAnterior(NodoPartidoxEquipo*_anterior)
{
	this->anterior= _anterior;
}

NodoPartido*NodoPartidoxEquipo::getEnlacePartido()
{
	return this->enlacePartido;
}
void NodoPartidoxEquipo::setEnlacePartido(NodoPartido* _enlacePartido)
{
	this->enlacePartido= _enlacePartido;
}
NodoEquipo* NodoPartidoxEquipo::getEnlaceEquipo()
{
	return this->enlaceEquipo;
}
void NodoPartidoxEquipo::setenlaceEquipo(NodoEquipo* _enlaceEquipo)
{
	this->enlaceEquipo= _enlaceEquipo;
}