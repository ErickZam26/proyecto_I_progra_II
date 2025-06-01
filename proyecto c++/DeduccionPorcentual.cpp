#include "DeduccionPorcentual.h"

DeduccionPorcentual::DeduccionPorcentual(double _porcentaje): porcentaje(_porcentaje)
{
}

double DeduccionPorcentual::calcular() const
{
	return colab->getSalarioBase() * (porcentaje / 100);
}

string DeduccionPorcentual::obtenerNombre() const
{
	return string("Deduccion Porcentual");
}
