#pragma once
#include "Deduccion.h"

class FactoryDeduccion
{

public:
    static Deduccion* crearDeduccion(int tipo, Colaborador* c, int valor1, int valor2);
    /* static Deduccion* crearDeduccion1(TipoDeducciones& tipo);*/
};

