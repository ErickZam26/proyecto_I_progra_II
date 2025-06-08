#pragma once
#include "Ingresos.h"
class HorasOrdinarias :
    public Ingresos
{
private:
    int horario;
public:
    HorasOrdinarias(int h, Colaborador* c);
    virtual double calcularSalario() const override;
    virtual string obtenerNombre() const override;
};

