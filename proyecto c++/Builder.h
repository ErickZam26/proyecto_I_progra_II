#pragma once
#include "Colaborador.h"
#include "FactoryIngresos.h"
#include "FactoryDeduccion.h"

class Builder
{
private:
    Colaborador* colaborador;
    FactoryDeduccion* deduccion;
    FactoryIngresos* ingresos;


public:
    Builder(Colaborador* colab);
    Builder& agregarIngreso(int opcion, int tipo, int valor);

    Builder& agregarDeduccion(int opcion, int tipo, int valor);

    void construir();
};
