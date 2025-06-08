#include "ListaOpciones.h"


ListaOpciones::ListaOpciones() {
    inicio = nullptr;
    cantidad = 0;
}

ListaOpciones::~ListaOpciones() {
    limpiar();
}

void ListaOpciones::agregarFinal(OpcionMenu* opcion) {
    NodoOpcion* nuevo = new NodoOpcion(opcion);
    if (inicio == nullptr) {
        inicio = nuevo;
    }
    else {
        NodoOpcion* aux = inicio;
        while (aux->getSiguiente() != nullptr) {
            aux = aux->getSiguiente();
        }
        aux->setSiguiente(nuevo);
    }
    cantidad++;
}

OpcionMenu* ListaOpciones::get(int indice) {
    if (indice < 0 || indice >= cantidad) {
        throw exception("Índice fuera de rango");
    }

    NodoOpcion* aux = inicio;
    for (int i = 0; i < indice; ++i) {
        aux = aux->getSiguiente();
    }
    return aux->getOpcion();
}

int ListaOpciones::size() const {
    return cantidad;
}

bool ListaOpciones::estaVacia() const {
    return inicio == nullptr;
}

void ListaOpciones::limpiar() {
    while (inicio != nullptr) {
        NodoOpcion* temp = inicio;
        inicio = inicio->getSiguiente();
        delete temp;
    }
    cantidad = 0;
}
