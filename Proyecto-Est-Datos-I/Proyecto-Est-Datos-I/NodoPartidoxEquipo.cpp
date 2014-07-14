#include "NodoPartidoxEquipo.h"


NodoPartidoxEquipo::NodoPartidoxEquipo(void)
{
	

}


NodoPartidoxEquipo::~NodoPartidoxEquipo(void)
{
}

NodoPartidoxEquipo::NodoPartidoxEquipo(NodoEquipo*, NodoPartido*){}

NodoEquipo* NodoPartidoxEquipo::getEquipo1(){}
void NodoPartidoxEquipo::setEquipo1(Equipo* _equipo1){}

NodoEquipo* NodoPartidoxEquipo::getEquipo2(){}
void NodoPartidoxEquipo::setEquipo2(Equipo* _equipo2){}

NodoPartido*NodoPartidoxEquipo::getPartido(){}
void NodoPartidoxEquipo::setPartido(Partido* _partido){}

NodoPartidoxEquipo*NodoPartidoxEquipo::getSguiente(){}
void NodoPartidoxEquipo::setSiguiente(NodoPartidoxEquipo*_id){}

NodoPartidoxEquipo*NodoPartidoxEquipo::getAnterior(){}
void NodoPartidoxEquipo::setAnterior(NodoPartidoxEquipo*_id){}
