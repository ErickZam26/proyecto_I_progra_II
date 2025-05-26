#pragma once
#include "Deduccion.h"
class DeduccionMaternidad :
    public Deduccion
{
private:
    double porcentaje;
public:
    DeduccionMaternidad(double);
    virtual double calcular(double salarioBruto, double) const override;
    virtual string obtenerNombre() const override;
};

