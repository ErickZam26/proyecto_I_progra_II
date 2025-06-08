#include "NodoOpcion.h"

NodoOpcion::NodoOpcion(OpcionMenu* opcion) {
    this->opcion = opcion;
    this->siguiente = nullptr;
}

NodoOpcion::~NodoOpcion() {
    delete opcion;
}

void NodoOpcion::setOpcion(OpcionMenu* opcion) {
    this->opcion = opcion;
}

OpcionMenu* NodoOpcion::getOpcion() const {
    return opcion;
}

void NodoOpcion::setSiguiente(NodoOpcion* siguiente) {
    this->siguiente = siguiente;
}

NodoOpcion* NodoOpcion::getSiguiente() const {
    return siguiente;
}
