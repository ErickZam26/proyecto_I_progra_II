#pragma once
#include "Ingresos.h"


class HorasFeriado : public Ingresos {
private:
    int tipo;
public:
    HorasFeriado(int t, Colaborador* c);
    virtual double calcularSalario() const override;
};
 