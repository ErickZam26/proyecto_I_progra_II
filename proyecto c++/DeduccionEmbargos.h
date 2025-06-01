#pragma once
#include "Deduccion.h"
class DeduccionEmbargos :
    public Deduccion
{
private:
    double monto;
public:
    DeduccionEmbargos(double _monto);
    virtual double calcular() const override;
    virtual string obtenerNombre() const override;
};


