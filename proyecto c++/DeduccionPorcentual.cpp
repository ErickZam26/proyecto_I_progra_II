#include "DeduccionPorcentual.h"

DeduccionPorcentual::DeduccionPorcentual(double)
{
}

double DeduccionPorcentual::calcular(double salarioBase) const
{
	return salarioBase * (porcentaje / 100);
}

string DeduccionPorcentual::obtenerNombre() const
{
	return string("Deduccion Porcentual");
}
