#pragma once
#include "Colaborador.h"
class Ingresos
{
protected: 
    Colaborador* colab;
public:
    Ingresos(Colaborador* c);
    virtual ~Ingresos() {}
    virtual float calcularSalario() const = 0;
};

