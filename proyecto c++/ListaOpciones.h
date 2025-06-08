#pragma once
#include "NodoOpcion.h"
#include <string>

class ListaOpciones {
private:
    NodoOpcion* inicio;
    int cantidad;

public:
    ListaOpciones();
    ~ListaOpciones();

    void agregarFinal(OpcionMenu* opcion);
    OpcionMenu* get(int indice);
    int size() const;
    bool estaVacia() const;
    void limpiar();
};
