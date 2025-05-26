#include "DeduccionPorcentual.h"

DeduccionPorcentual::DeduccionPorcentual(double)
{
}

double DeduccionPorcentual::calcular(double salarioBruto, double) const
{
	return salarioBruto * (porcentaje / 100);
}

string DeduccionPorcentual::obtenerNombre() const
{
	return string("Deduccion Porcentual");
}
