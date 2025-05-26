#pragma once
#include "Deduccion.h"
class CCSS_IVM :
    public Deduccion
{
public:
    virtual double calcular(double salarioBruto, double) const override;
    virtual string obtenerNombre() const override;
};

