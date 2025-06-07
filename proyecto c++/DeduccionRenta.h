#pragma once
#include "Deduccion.h"
class DeduccionRenta :
    public Deduccion
{
public:
    DeduccionRenta(Colaborador* c);
    virtual double calcular() const override;
    virtual string obtenerNombre() const override;
};

