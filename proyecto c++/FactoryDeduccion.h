#pragma once
#include "Deduccion.h"
#include "TipoDeducciones.h"
class FactoryDeduccion 
{

public:
    static Deduccion* crearDeduccion(string& tipo);
   /* static Deduccion* crearDeduccion1(TipoDeducciones& tipo);*/
};

