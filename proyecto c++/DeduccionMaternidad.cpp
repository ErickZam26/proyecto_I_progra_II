#include "DeduccionMaternidad.h"

DeduccionMaternidad::DeduccionMaternidad(Colaborador* c) : Deduccion(c)
{
}

double DeduccionMaternidad::calcular() const
{
    double salarioColaborador = (colab->getSalarioBase() * 4) * 0.5;

    return salarioColaborador;
}

string DeduccionMaternidad::obtenerNombre() const
{
    return string("Deduccion por Maternidad");
}