#pragma once
#include "Deduccion.h"
class DeduccionRenta :
    public Deduccion
{
public:
    DeduccionRenta();
    virtual double calcular() const override;
    virtual string obtenerNombre() const override;
};

