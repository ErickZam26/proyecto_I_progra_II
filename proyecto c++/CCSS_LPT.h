#pragma once
#include "Deduccion.h"
class CCSS_LPT :
    public Deduccion
{public:
    virtual double calcular(double salarioBruto, double) const override;
    virtual string obtenerNombre() const override;
};

