#pragma once
#include "Colaborador.h"
#include "FactoryIngresos.h"
#include "FactoryDeduccion.h"

class DeduccionDirector
{
private:
    Colaborador* colaborador;
    FactoryDeduccion* deduccion;
    FactoryIngresos* ingresos;


public:
    DeduccionDirector(Colaborador* colab);
    DeduccionDirector& agregarIngreso(int opcion, int tipo, int valor);

    DeduccionDirector& agregarDeduccion(int opcion, int tipo, int valor);

    void construir();
};

