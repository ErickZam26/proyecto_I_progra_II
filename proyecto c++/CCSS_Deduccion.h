#pragma once
#include "Deduccion.h"
class CCSS_Deduccion :
    public Deduccion
{
private:
    
public:
    CCSS_Deduccion();
    virtual double calcular(double salarioBase) const override;
    virtual string obtenerNombre() const override;
};

