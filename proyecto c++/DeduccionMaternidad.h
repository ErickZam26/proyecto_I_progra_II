#pragma once
#include "Deduccion.h"
class DeduccionMaternidad :
    public Deduccion
{
private:

public:
    DeduccionMaternidad(Colaborador* c);
    virtual double calcular()  const override;
    virtual string obtenerNombre() const override;

};

