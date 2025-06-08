#include "DeduccionRenta.h"
#include "Colaborador.h"
DeduccionRenta::DeduccionRenta(Colaborador* c) : Deduccion(c)
{
}
double DeduccionRenta::calcular() const
{
    double impuesto = 0;

    if (colab->getSalarioBase() > 4745000) {
        impuesto += (colab->getSalarioBase() - 4745000) * 0.25;

    }

    if (colab->getSalarioBase() > 2373000 && colab->getSalarioBase() <= 4745000) {
        impuesto += (colab->getSalarioBase() - 2373000) * 0.20;

    }
    if (colab->getSalarioBase() > 1352000 && colab->getSalarioBase() <= 2373000) {
        impuesto += (colab->getSalarioBase() - 1352000) * 0.15;

    }
    if (colab->getSalarioBase() > 922000 && colab->getSalarioBase() <= 1352000) {
        impuesto += (colab->getSalarioBase() - 922000) * 0.10;

    }
    return impuesto;

}

string DeduccionRenta::obtenerNombre() const
{
    return string("Deduccion sobre la Renta");
}