#pragma once
#include "Deduccion.h"
class DeduccionPorcentual :
    public Deduccion
{
private:
    double porcentaje;
public:
    DeduccionPorcentual(double);
    virtual double calcular(double salarioBase) const override;
    virtual string obtenerNombre() const override;
};

