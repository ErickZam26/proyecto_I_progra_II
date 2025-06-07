#pragma once
#include "Colaborador.h"
class Ingresos
{
protected:
    Colaborador* colab;
public:
    Ingresos(Colaborador* c);
    virtual ~Ingresos() {}
    virtual double calcularSalario() const = 0;
};