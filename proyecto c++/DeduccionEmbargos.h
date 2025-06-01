#pragma once
#include "Deduccion.h"
class DeduccionEmbargos :
    public Deduccion
{
private:
    double monto;
public:
    DeduccionEmbargos(double);
    virtual double calcular(double salarioBase) const override;
    virtual string obtenerNombre() const override;
};


