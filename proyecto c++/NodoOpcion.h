#pragma once
#include "OpcionMenu.h"

class NodoOpcion {
private:
    OpcionMenu* opcion;
    NodoOpcion* siguiente;

public:
    NodoOpcion(OpcionMenu* opcion);
    ~NodoOpcion();

    void setOpcion(OpcionMenu* opcion);
    OpcionMenu* getOpcion() const;

    void setSiguiente(NodoOpcion* siguiente);
    NodoOpcion* getSiguiente() const;
};

