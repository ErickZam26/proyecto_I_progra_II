#pragma once
#include "Deduccion.h"
class DeduccionMaternidad :
    public Deduccion
{
private:
    double porcentaje;
public:
    DeduccionMaternidad(double _porcentaje);
    virtual double calcular()  const override;
    virtual string obtenerNombre() const override;
};

