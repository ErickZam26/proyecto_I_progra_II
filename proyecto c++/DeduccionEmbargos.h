#pragma once
#include "Deduccion.h"
class DeduccionEmbargos :
    public Deduccion
{
private:

public:
    DeduccionEmbargos(Colaborador* c);
    virtual double calcular() const override;
    virtual string obtenerNombre() const override;
};

