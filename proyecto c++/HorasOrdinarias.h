#pragma once
#include "Ingresos.h"
class HorasOrdinarias :
    public Ingresos
{
private:
    int horario;
public:
    HorasOrdinarias(int h, Colaborador* c);
    virtual float calcularSalario() const override;
    
};

