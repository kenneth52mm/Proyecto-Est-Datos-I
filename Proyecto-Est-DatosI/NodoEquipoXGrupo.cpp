#include "NodoEquipoXGrupo.h"


NodoEquipoXGrupo::NodoEquipoXGrupo(void)
{
    this->getAnterior(NULL);
    this->getSiguiente(NULL);
    this->setEnlaceEquipo(NULL);
    this->setEnlaceGrupo(NULL);
    this->setEquipo(NULL);
    this->setGrupo(NULL);
}


NodoEquipoXGrupo::~NodoEquipoXGrupo(void)
{
}

NodoEquipoXGrupo::NodoEquipoXGrupo(NodoGrupos* _grupo, NodoEquipo* _equipo)
{
    this->setGrupo(_grupo);
    this->setEquipo(_equipo);
}

NodoEquipoXGrupo* NodoEquipoXGrupo::getAnterior()
{
    return this->anterior;
}
void NodoEquipoXGrupo::serAnterior(NodoEquipoXGrupo* _anterior)
{
    this->anterior= _anterior;

}

NodoEquipoXGrupo*NodoEquipoXGrupo:: getSiguiente()
{
    return this->siguiente;
}
void NodoEquipoXGrupo::setSiguiente(NodoEquipoXGrupo* _siguiente)
{
    this->siguiente= _siguiente;

}

NodoEquipo* NodoEquipoXGrupo::getEquipo()
{
    return this->equipo;
}
void NodoEquipoXGrupo::setEquipo(NodoEquipo*_equipo)
{
    this->equipo= _equipo;
}

NodoEquipo* NodoEquipoXGrupo::getEnlaceEquipo()
{
    return this->EnlaceEquipo;
}
void NodoEquipoXGrupo::setEnlaceEquipo(NodoEquipo* _enlaceEquipo)
{
    this->EnlaceEquipo= _enlaceEquipo;
}

NodoGrupos* NodoEquipoXGrupo::getGrupo()
{
    return this->grupo;
}
void NodoEquipoXGrupo::setGrupo(NodoGrupos* _grupo)
{
    this->grupo = _grupo;
}

NodoGrupos* NodoEquipoXGrupo::getEnlaceGrupo()
{
    return this->enlaceGrupo;
}
void NodoEquipoXGrupo::setEnlaceGrupo(NodoGrupos* _enlaceGrupo)
{
    this->enlaceGrupo= _enlaceGrupo;
}
