#pragma once
#include "Deduccion.h"
class DeduccionPorcentual :
    public Deduccion
{
private:
    double porcentaje;
public:
    DeduccionPorcentual(double _porcentaje, Colaborador* c);
    virtual double calcular() const override;
    virtual string obtenerNombre() const override;
};

